// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__21(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__21\n"); );
    // Init
    CData/*1:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in;
    VlWide<3>/*95:0*/ __Vtemp_h0af60912__0;
    VlWide<3>/*95:0*/ __Vtemp_h5cc611d3__0;
    VlWide<3>/*95:0*/ __Vtemp_hc76bf4da__0;
    VlWide<3>/*95:0*/ __Vtemp_hc8d0413c__0;
    VlWide<3>/*95:0*/ __Vtemp_h5829e940__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xf8000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((0xbU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((0xbU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((0xbU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xf0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((0xcU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((0xcU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((0xcU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xe0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((0xdU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((0xdU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((0xdU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xc0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x19U) & ((0xeU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x19U) & ((0xeU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x19U) & ((0xeU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0x80000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1aU) & ((0xfU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1aU) & ((0xfU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1aU) & ((0xfU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                 >> 6U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                   >> 6U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                  >> 6U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x7fffffeU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               >> 5U) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                         << 1U)) | 
                             (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                               >> 5U) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                         << 1U))) | 
                            (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 5U) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                        << 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffffcU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               >> 4U) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                         << 2U)) | 
                             (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                               >> 4U) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                         << 2U))) | 
                            (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 4U) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                        << 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x1ffffff8U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 3U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 3U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 3U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 3U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 3U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x3ffffff0U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 2U) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 4U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 2U) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 4U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 2U) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x7fffffe0U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 1U) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 5U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 1U) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 5U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 1U) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffffc0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                  << 6U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & ((6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                                << 6U))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                   << 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffff80U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 1U) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 7U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 1U) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 7U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 1U) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffff00U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 2U) & ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 8U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 2U) & ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 8U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 2U) & ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffffe00U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 3U) & ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 9U)) | 
                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 3U) & ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 9U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 3U) & ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 9U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffffc00U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 4U) & ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xaU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 4U) & ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xaU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 4U) & ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffff800U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 5U) & ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xbU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 5U) & ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xbU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 5U) & ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xbU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffff000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 6U) & ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xcU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 6U) & ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xcU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 6U) & ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffe000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 7U) & ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xdU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 7U) & ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xdU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 7U) & ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xdU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffc000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 8U) & ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xeU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 8U) & ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xeU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 8U) & ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xeU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffff8000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xfU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xfU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xfU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffff0000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0x10U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0x10U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffe0000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xaU) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x11U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xaU) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x11U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xaU) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x11U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffc0000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xbU) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x12U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xbU) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x12U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xbU) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x12U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfff80000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xcU) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x13U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xcU) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x13U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xcU) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x13U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfff00000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xdU) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x14U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xdU) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x14U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xdU) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffe00000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xeU) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x15U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xeU) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x15U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xeU) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x15U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffc00000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xfU) & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x16U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xfU) & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x16U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xfU) & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x16U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xff800000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x10U) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x17U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x10U) & ((7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x17U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x10U) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x17U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xff000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x11U) & ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x18U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x11U) & ((8U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x18U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x11U) & ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfe000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x12U) & ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x19U)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x12U) & ((9U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x19U))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x12U) & ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x19U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfc000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x13U) & ((0xaU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x13U) & ((0xaU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1aU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x13U) & ((0xaU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1aU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xf8000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x14U) & ((0xbU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x14U) & ((0xbU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x14U) & ((0xbU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xf0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x15U) & ((0xcU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x15U) & ((0xcU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x15U) & ((0xcU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xe0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((0xdU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((0xdU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((0xdU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xc0000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((0xeU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((0xeU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((0xeU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x80000000U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((0xfU 
                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((0xfU 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((0xfU 
                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt 
        = ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpmc_b_ns)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb)) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
           & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4_ns 
        = (((((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                          & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                              >> 9U) | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & ((0x1eU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                           << 1U)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                            >> 8U)))) 
             | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                             & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                   >> 9U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
                & ((0x1cU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                             << 2U)) | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                               >> 7U)) 
                                        | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                 >> 8U)))))) 
            | ((- (IData)((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                            & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                  >> 0x12U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
               & ((0x1eU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                            << 1U)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                             >> 8U))))) 
           | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4e5_valid 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 5U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__bp_wb_ff__din 
        = ((0x30000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                        << 0xcU)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                      << 0xfU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4) 
                                                   << 0xeU) 
                                                  | ((0x3ffe000U 
                                                      & ((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                            >> 6U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                              << 0xdU)) 
                                                          & ((~ 
                                                              ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 2U)) 
                                                             << 0xdU)) 
                                                         & ((~ 
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                              >> 9U)) 
                                                            << 0xdU))) 
                                                     | ((0x1800U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            << 7U)) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4) 
                                                               << 9U) 
                                                              | ((0x1fff00U 
                                                                  & (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                         >> 0xbU) 
                                                                        & ((~ 
                                                                            ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                             >> 2U)) 
                                                                           << 8U)) 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                                                          << 8U)) 
                                                                      & ((~ 
                                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                         << 8U)) 
                                                                     & ((~ 
                                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                          >> 9U)) 
                                                                        << 8U))) 
                                                                 | ((0xc0U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                                        >> 0xeU)) 
                                                                    | ((0x30U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                           >> 0x10U)) 
                                                                       | ((8U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U] 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U] 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & (VL_REDXOR_8(
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U])) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & VL_REDXOR_8(
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                  >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                  >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                  >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                  >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                  >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                  >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (2U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 6U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 9U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xcU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xfU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x12U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1cU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 7U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    >> 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 8U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xbU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 1U))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xeU)) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xbU)) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 8U)) & 
                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 5U)) & 
                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          << 2U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 1U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 4U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 2U))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x1000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x15U)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x15U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x2000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x12U)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x4000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xfU)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x17U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x8000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xcU)) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 9U)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x19U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 6U)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x1aU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 3U)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x1bU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 3U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (2U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 6U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 9U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x10U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xcU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xfU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x40U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x12U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 4U))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 7U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    >> 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 8U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xbU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 5U))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xeU)) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xbU)) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 8U)) & 
                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 5U)) & 
                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          << 2U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 1U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 4U)) & 
                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 6U))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                   >> 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                              >> 7U)) << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 1U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 7U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                              >> 7U))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 2U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0xbU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                >> 7U))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 3U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0xfU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                >> 7U))) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 4U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x13U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 5U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x17U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 6U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1bU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4_trigger_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e3)
            ? ((0x100U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                          >> 0x14U)) | (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout 
                                                 >> 0xcU)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3));
    VL_EXTENDS_WQ(66,33, __Vtemp_h0af60912__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e2);
    __Vtemp_h5cc611d3__0[0U] = __Vtemp_h0af60912__0[0U];
    __Vtemp_h5cc611d3__0[1U] = __Vtemp_h0af60912__0[1U];
    __Vtemp_h5cc611d3__0[2U] = (3U & __Vtemp_h0af60912__0[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_hc76bf4da__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e2);
    __Vtemp_hc8d0413c__0[0U] = __Vtemp_hc76bf4da__0[0U];
    __Vtemp_hc8d0413c__0[1U] = __Vtemp_hc76bf4da__0[1U];
    __Vtemp_hc8d0413c__0[2U] = (3U & __Vtemp_hc76bf4da__0[2U]);
    VL_MULS_WWW(66, __Vtemp_h5829e940__0, __Vtemp_h5cc611d3__0, __Vtemp_hc8d0413c__0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken)
            ? (((QData)((IData)(__Vtemp_h5829e940__0[1U])) 
                << 0x20U) | (QData)((IData)(__Vtemp_h5829e940__0[0U])))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3);
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e2_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1) 
                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1) 
                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e2;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze1) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze2) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
        }
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_freeze;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_freeze;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc4_clken 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken_q)) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
                           >> 1U) : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clken_q)) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
                           >> 1U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_byten_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_byten_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clken_q)) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
              & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_ecc_error_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen = 0U;
    if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                      >> 0x13U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 1U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                      >> 0x1dU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 2U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 7U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 3U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 0x11U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 4U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 0x1bU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 5U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                      >> 5U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 6U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                      >> 0xfU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 7U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle1) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_freeze;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_freeze;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
    } else {
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle2) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb;
        }
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
    if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_rd_parity_final_err_ff) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_icache_sb_error_val_ff)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1 
        = ((((((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__cond_mispredict)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__target_mispredict)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_perr 
        = ((((((IData)((0x300000003ULL == (0x300000003ULL 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                               >> 2U)))) | (((3U == 
                                              (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (3U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                               >> 2U))) 
             | ((IData)(((0x30000ULL == (0x30000ULL 
                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                         & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                >> 1U))))) | (((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                                 >> 1U))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_sbecc 
        = ((((((IData)((0x300000003ULL == (0x300000003ULL 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                               >> 2U)))) | (((3U == 
                                              (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (3U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                               >> 2U))) 
             | ((IData)(((0x30000ULL == (0x30000ULL 
                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                         & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                >> 1U))))) | (((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                                 >> 1U))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_perr 
        = ((((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr)))) 
            | ((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_sbecc 
        = ((((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc)))) 
            | ((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1 
        = ((((((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__cond_mispredict)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__target_mispredict)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x200U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                          ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__cond_mispredict) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__target_mispredict)) 
                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                          : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 9U)) << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x2ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x100U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                          ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__actual_taken)
                          : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x3cfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x3f0U & ((0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                                    ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__newhist) 
                                       >> 1U) : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                                 >> 5U)) 
                                  << 5U)) | (0x10U 
                                             & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                                                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__newhist)
                                                  : 
                                                 (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                                  >> 4U)) 
                                                << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x200U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                          ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__cond_mispredict) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__target_mispredict)) 
                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                          : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 9U)) << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x2ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x100U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                          ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__actual_taken)
                          : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x3cfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x3f0U & ((0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                                    ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__newhist) 
                                       >> 1U) : (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                                 >> 5U)) 
                                  << 5U)) | (0x10U 
                                             & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                                                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__newhist)
                                                  : 
                                                 (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                                  >> 4U)) 
                                                << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
        = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
              & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2_raw) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid 
        = ((((((IData)((0x300000003ULL == (0x300000003ULL 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                  >> 3U)) | (((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                              & (3U != (3U & (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                      >> 0x20U))))) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                                >> 2U))) | ((IData)(
                                                    ((0x30000ULL 
                                                      == 
                                                      (0x30000ULL 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                     & (3U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                                               >> 2U))) 
            | (((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                & (3U != (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                        >> 0x10U))))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                  >> 1U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid 
        = ((((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                >> 1U)) | ((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                  == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                            >> 5U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                         >> 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x3ffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                              == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                        >> 0xfU)))) 
                          << 1U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x1cU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                            == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                      >> 0x19U)))) 
                        << 2U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                 == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           >> 3U)))) 
                             << 3U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x7fff0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                               == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         >> 0xdU)))) 
                           << 4U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x3e0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 0x17U)))) 
                         << 5U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffffffc0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                  == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            >> 1U)))) 
                              << 6U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffff80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          >> 0xbU)))) 
                            << 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                        ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff00U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                           ? ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                               ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                  >> 8U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                               ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                  >> 8U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                            >> 8U))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff0000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                             ? ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                 ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                    >> 0x10U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                                 ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                    >> 0x10U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                ? ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                       >> 0x18U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                    >> 0x18U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                                                   ? 
                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                                   >> 0x18U)
                                                   : 
                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                                   >> 0x18U))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                     ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                     : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 1U) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 2U) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 3U) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                        ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff00U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                           ? ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                               ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                  >> 8U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                              >> 8U)) << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff0000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                             ? ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                 ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                    >> 0x10U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                >> 0x10U)) << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                ? ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                       >> 0x18U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                    >> 0x18U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                  >> 0x18U)) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns 
        = (0x1fU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                      & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                          << 0x1fU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                       >> 1U))) | (
                                                   (- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout)))))) 
                                                   & ((((((- (IData)(
                                                                     (4U 
                                                                      <= (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x10U 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h))) 
                                                         | ((- (IData)(
                                                                       (3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                            & ((0x18U 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                        | ((- (IData)(
                                                                      (2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                           & ((0x1cU 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                  << 2U)) 
                                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x1eU 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                      | ((- (IData)(
                                                                    (0U 
                                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))) 
                    | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                         & (~ (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout))))))))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
        = (0xfffffffU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))) 
                          & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout) 
                         | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))))) 
                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                               >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2 
        = (7U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                     >> 3U)))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc_shift)) 
                  | ((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                          >> 3U))))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc))) 
                 | (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr 
        = (((((- (IData)((IData)((0x300000003ULL == 
                                  (0x300000003ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                         >> 0x20U))) | ((- (IData)(
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                    & (3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x20U))))))) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l3 
                                           & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__third_legal)))))) 
            | ((- (IData)((IData)(((0x30000ULL == (0x30000ULL 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                   & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))) 
               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                          >> 0x10U)))) | ((- (IData)(
                                                     ((3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                      & (3U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x10U))))))) 
                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l3 
                                             & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr 
        = (((- (IData)((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
           | ((- (IData)((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
                 & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | ((IData)((((QData)((IData)(((0xfffffffeU 
                                          & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                              << 0x11U) 
                                             | (0x1fffeU 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                   >> 0xfU)))) 
                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)))) 
                        << 2U) | (QData)((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja)))))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xfffe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (((IData)((((QData)((IData)(((0xfffffffeU 
                                           & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                               << 0x11U) 
                                              | (0x1fffeU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                    >> 0xfU)))) 
                                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)))) 
                         << 2U) | (QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja)))))) 
               >> 0x11U) | ((IData)(((((QData)((IData)(
                                                       ((0xfffffffeU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                             << 0x11U) 
                                                            | (0x1fffeU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                                  >> 0xfU)))) 
                                                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)))) 
                                       << 2U) | (QData)((IData)(
                                                                (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja))))) 
                                     >> 0x20U)) << 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br 
        = (1U & ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x1cU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                        & (0x400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xc00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x2000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x2400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x2800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x2c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x3000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x3400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x3800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x3c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x4000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x4400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x4800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x4c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x5000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x5400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x5800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x5c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x6000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x6400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x6800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x6c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x7000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x7400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x7800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x7c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                        & (0x20U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x40U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x60U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x80U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xa0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xc0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xe0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x100U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x120U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x140U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x160U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x180U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x200U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x220U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x240U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x260U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x280U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x2a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x2c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x2e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x300U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x320U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x340U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x360U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x380U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x3a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x3c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x3e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                           >> 0xaU))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                             >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0xaU)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0xaU)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0x14U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0x14U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 8U)) == 
                                (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 8U)) == 
                                (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 0x12U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 0x12U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw;
    if ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                    >> 0x13U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                  | (0ULL != (0x600000000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)))))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp = 0ULL;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x3800000000000ULL | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x800000000ULL | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (1ULL | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x2000ULL | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__load_stbuf_reqvld_dc3) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_ecc_error_dc3)
                  ? (7U > (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any))
                  : (8U > (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2);
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_hi_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)
                  : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                     >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1) 
           | (0xfffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))))) 
                                 & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U])
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1eU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                          >> 0x1eU))
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U])
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1eU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                          >> 0x1eU))
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U])
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1eU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                          >> 0x1eU))
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U])
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1eU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 4U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1aU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 6U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 8U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 0xaU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 0xcU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 0xeU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                   >> 0x10U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xeU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                  >> 0x12U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                  >> 0x14U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                  >> 0x16U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                >> 0x18U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                >> 0x1aU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                >> 0x1cU)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                                          >> 0x1eU))
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                         >> 0x38U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                         >> 0x38U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                         >> 0x38U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                         >> 0x38U)))) 
              << 0x18U));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nbff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                     >> 0xcU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                     >> 0xdU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__dffs__din 
            = ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                         >> 0x11U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5);
        if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5));
        } else if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5;
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5;
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5;
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((7U > (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nbff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                    | (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))) 
                   & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain)) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)) 
               | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write))) 
              | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc4_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken_q;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clken_q;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_rden_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_rden_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_rden_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clken_q;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | ((0xf0U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                          : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                             >> 4U)) << 4U)) | (0xfU 
                                                & ((1U 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                                    >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | ((0xf000U & (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                               >> 4U)) << 0xcU)) | 
              (0xf00U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                           : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                              >> 4U)) << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | ((0xf00000U & (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                              ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                 >> 4U)) << 0x14U)) 
              | (0xf0000U & (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                               : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                  >> 4U)) << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | ((((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                 ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                 : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                    >> 4U)) << 0x1cU) | (0xf000000U 
                                         & (((0x40U 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                              ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                                 >> 4U)) 
                                            << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
        = ((((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
              ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
            << 0x10U) | (0xffffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                     ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
              ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
            << 0x10U) | (0xffffU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                     ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
        = ((((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
              ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
            << 0x10U) | (0xffffU & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                     ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
        = ((((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
              ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
            << 0x10U) | (0xffffU & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                     ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc2_in 
        = (((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((0x400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                               ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
                               : ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                   : ((0x20U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                       : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc2 
        = (((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc2 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                               ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2
                               : ((0x100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
                                   : ((0x10U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                       : ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                           ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                           : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc2))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
        = (((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc3 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                               | (- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)))))) 
                              & ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)
                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                  : ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)
                                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                      : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc3)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status)
            ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ic_index_q__dout)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata 
        = (((QData)((IData)(((IData)(((0x300000003ULL 
                                       == (0x300000003ULL 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                      & (8U == (0xcU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff))))) 
                             | (IData)((((0x30000ULL 
                                          == (0x30000ULL 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                         & (4U == (6U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff)))) 
                                        & (3U != (3U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))))) 
            << 0x24U) | (((QData)((IData)(((((((IData)(
                                                       (0x300000003ULL 
                                                        == 
                                                        (0x300000003ULL 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                      >> 2U)))) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  & (3U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x20U))))) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        ((0x30000ULL 
                                                          == 
                                                          (0x30000ULL 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                         & (3U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                       >> 1U))))) 
                                            | (((3U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                & (3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x10U))))) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                  >> 1U))) 
                                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
                          << 0x23U) | (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_sbecc)) 
                                        << 0x22U) | 
                                       (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_perr)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            ((((((((IData)(
                                                                           (0x300000003ULL 
                                                                            == 
                                                                            (0x300000003ULL 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          >> 2U)))) 
                                                                  << 0x1fU) 
                                                                 | (0x80000000U 
                                                                    & ((((3U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                         & (3U 
                                                                            != 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U))))) 
                                                                        << 0x1fU) 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          << 0x1dU)))) 
                                                                | (((IData)(
                                                                            ((0x30000ULL 
                                                                              == 
                                                                              (0x30000ULL 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                                             & (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                           >> 1U)))) 
                                                                   << 0x1fU)) 
                                                               | (0x80000000U 
                                                                  & ((((3U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                       & (3U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x10U))))) 
                                                                      << 0x1fU) 
                                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                        << 0x1eU)))) 
                                                              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                                 << 0x1fU)) 
                                                             | ((3U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))
                                                                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc
                                                                 : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc)))) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             ((IData)(
                                                                      ((0x30000ULL 
                                                                        == 
                                                                        (0x30000ULL 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                                       & (3U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                                                              | (IData)(
                                                                        (0x300000003ULL 
                                                                         == 
                                                                         (0x300000003ULL 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
        = (((QData)((IData)(((3ULL == (3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                             & (2U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff)))))) 
            << 0x24U) | (((QData)((IData)(((((3U == 
                                              (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (0U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc)))) 
                                            | ((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc))) 
                                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
                          << 0x23U) | (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_sbecc)) 
                                        << 0x22U) | 
                                       (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_perr)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            ((((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf)))) 
                                                                | ((3U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                              << 0x1fU) 
                                                             | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x3bU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U] 
                >> 0x11U) & (0x80000U == (0xc0000U 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U]))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x3dU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U] 
                >> 0x10U) & (0x80000U == (0xc0000U 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U]))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x3eU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                    >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1 
        = (1U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                   >> 8U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout)) 
                 | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                     >> 5U) & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1 
        = (1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_flush_final_f))) 
                  & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U] 
                      >> 0x13U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                                   >> 9U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U] 
                >> 0x11U) & (0x80000U == (0xc0000U 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U]))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x2fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U] 
                >> 0x10U) & (0x80000U == (0xc0000U 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U]))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt 
        = ((0x37U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_rets_e1_pkt)) 
           | (8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                    >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1 
        = (1U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                   >> 8U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout) 
                             >> 1U)) | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                         >> 5U) & (~ 
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout) 
                                                    >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1 
        = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_flush_final_f))) 
                 & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
                     >> 0x13U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                  >> 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1 
        = (0x1ffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                      >> 0xeU) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                  >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                   >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                             >> 5U)) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                        >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
        = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))) 
            & ((0x7fffffe0U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout) 
               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff) 
                   << 2U) | (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout)))) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1 
        = (1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (0x1eU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                 >> 0x1aU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
           & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2 
        = (((((0x1ffffff8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                              >> 3U)) | (0xffffff8U 
                                         & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                            >> 4U))) 
             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                << 3U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                               >> 1U)) << 3U)) | ((
                                                   (((0x3ffffffcU 
                                                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                         >> 2U)) 
                                                     | (0x1ffffffcU 
                                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                           >> 3U))) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                        >> 1U)) 
                                                      << 2U)) 
                                                  | (((((0x7ffffffeU 
                                                         & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                            >> 1U)) 
                                                        | (0x3ffffffeU 
                                                           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                              >> 2U))) 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                           >> 1U)) 
                                                         << 1U)) 
                                                     | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                          | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                             >> 1U)) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
                                                        & (~ 
                                                           ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            >> 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2 
        = ((((0U != (((4U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                       ? ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                           ? ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 7U)) : (3U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                      >> 6U)))
                           : ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 5U)) : (0xfU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                      >> 4U))))
                       : ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                           ? ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                           >> 3U)) : 
                              (0x3fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 2U))) : 
                          ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                            ? (0x7fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 1U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)))) 
                     & ((4U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                         ? ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                             ? ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                          >> 7U)) : 
                                (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                       >> 6U))) : (
                                                   (1U 
                                                    & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                       >> 5U))
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                       >> 4U))))
                         : ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                             ? ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 3U))
                                 : (0x3fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 2U)))
                             : ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (0x7fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 1U))
                                 : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw)))))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                  >> 1U))) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                 >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken 
        = (IData)((((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                      >> 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
                    | (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f2))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                   & (- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_uncacheable_ff)) 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid) 
            & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  >> 2U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid) 
           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
            & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  >> 3U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__flush_final)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 3U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
            << 3U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
            << 3U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfffe3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal) 
               << 4U) | ((0x1ff8U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                       >> 0x13U) & 
                                      vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U]) 
                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br) 
                                        << 3U))) | 
                         (((~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                >> 0x16U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                             >> 3U))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br)) 
                          << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d 
        = (0xfU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1)
                     ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1)
                                          ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1)
                    ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1)
                                         ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d 
        = (0xfU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1)
                     ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1)
                                          ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1)
                    ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1)
                                         ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xffe7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x180U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x25U)) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0x81fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x78000U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                    >> 0x21U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1fU)) << 0xeU)) 
                 | (0x2000U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x20U)) 
                               << 0xdU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfff9fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x60U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x1dU)) << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfe1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x1800U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                   >> 0x1aU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x18U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x19U)) << 9U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x79fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0x4000U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x27U)))
                            ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x29U)) : (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 0x29U))) 
                          << 0xeU)) | (0x2000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 0x28U))) 
                                                  << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (((0x40000U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x27U)))
                              ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x16U))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x16U))) 
                            << 0x12U)) | (0x20000U 
                                          & (((1U & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x27U)))
                                               ? (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x15U))
                                               : (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x15U))) 
                                             << 0x11U))) 
              | (0x10000U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x27U)))
                               ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x14U))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                          >> 0x14U))) 
                             << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7efffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (0x1000U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x27U)))
                           ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1dU)) : (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x1dU))) 
                         << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal 
        = (1U & ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0x17U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d 
        = (1U & ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x31U)) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x29U))) 
                  | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                              >> 0x31U)) & (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                    >> 9U)))) 
                 & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                        >> 0x2dU))) & ((0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)) 
                                       == (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x2dU))) & ((0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U)) 
                                         == (0x1fU 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff 
        = (1U & ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0x31U))) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)) 
                                      == (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)) 
                                      == (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write 
        = (1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x10U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x30U)) & (0U != (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x2fU)) & (0U != (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 5U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)
                  ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3))
                      ? ((IData)(2U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))
                      : ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffeU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffeU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffcU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffcU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffff8U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffff8U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
              & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                 | ((0U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((1U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((2U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((3U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((4U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((5U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((6U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((7U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 7U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2);
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_lo_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)
                  : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                     >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                  >> (1U | (0x1eU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                     >> 0x1bU)))) & 
                 (~ ((0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                               >> 0x1cU)) | (0xfU == 
                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 0x1cU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned 
        = ((7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1 
        = ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                        >> 0x10U)) & (0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                  >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1 
        = ((0x1e018U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                         >> 0xfU)) & (0x1e018U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                   >> 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
               << 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
               << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                          & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                         << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
               << 5U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                          & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                         << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
               << 7U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                          & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                         << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                          | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual))) 
                         | (4U == ((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))
                                    ? (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                    : 0U)))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                         & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                            | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                  == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                          & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                = ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))))
                    ? ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                        ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                   >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | ((((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (1U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                   & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                     & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x20U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x10U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 1U) & (((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 1U)) << 1U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 3U)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 3U))))))
                                             : 0U)) 
                                    << 1U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x10U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 1U) & (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 1U) 
                                            | (0xfffffffeU 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 3U))) 
                                                     << 1U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xfffffffeU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 1U)) 
                                         << 1U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 1U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffeU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 1U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 1U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 1U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 1U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (2U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 1U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 2U) & (((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 2U)) << 2U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 6U)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 6U))))))
                                             : 0U)) 
                                    << 2U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 2U) & (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 2U) 
                                            | (0xfffffffcU 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 6U))) 
                                                     << 2U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xfffffffcU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 2U)) 
                                         << 2U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 2U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 2U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 2U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 2U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 2U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (4U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 2U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 3U) & (((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 3U)) << 3U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 9U)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 9U))))))
                                             : 0U)) 
                                    << 3U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 3U) & (((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 3U)) 
                                                       << 3U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 9U))) 
                                                     << 3U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xfffffff8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 3U)) 
                                         << 3U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 3U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffff8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 3U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 3U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 3U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 3U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (8U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 3U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x4000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x2000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 4U) & (((0xfffffff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 4U)) << 4U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 0xcU)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 0xcU))))))
                                             : 0U)) 
                                    << 4U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x2000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 4U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 4U) & (((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 4U) 
                                            | (0xfffffff0U 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 4U)) 
                                                       << 4U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0xcU))) 
                                                     << 4U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xfffffff0U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 4U)) 
                                         << 4U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 4U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffff0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 4U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 4U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 4U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 4U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (0x10U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 4U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x20000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x10000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 5U) & (((0xffffffe0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 5U)) << 5U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 0xfU)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 0xfU))))))
                                             : 0U)) 
                                    << 5U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x10000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 5U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 5U) & (((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 5U) 
                                            | (0xffffffe0U 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 5U)) 
                                                       << 5U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0xfU))) 
                                                     << 5U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xffffffe0U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 5U)) 
                                         << 5U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 5U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xffffffe0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 5U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 5U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 5U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 5U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (0x20U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 5U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x100000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x80000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x40000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 6U) & (((0xffffffc0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 6U)) << 6U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 0x12U)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 0x12U))))))
                                             : 0U)) 
                                    << 6U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x80000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x40000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 6U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 6U) & (((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 6U) 
                                            | (0xffffffc0U 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 6U)) 
                                                       << 6U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0x12U))) 
                                                     << 6U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xffffffc0U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 6U)) 
                                         << 6U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 6U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xffffffc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 6U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] 
                = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 6U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 6U)))) ? 
                   ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U])
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 6U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x40000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (0x40U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 6U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else if ((0x200000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                       << 7U) & (((0xffffff80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                  | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                         >> 7U)) << 7U)) 
                                 | ((4U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                        >> 0x15U)))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                           >> 0x15U))))))
                                             : 0U)) 
                                    << 7U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
        }
    } else if ((0x400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x200000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                        & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                       << 7U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                  << 7U) & (((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                             << 7U) 
                                            | (0xffffff80U 
                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 7U)) 
                                                       << 7U)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0x15U))) 
                                                     << 7U)))))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0xffffff80U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                             >> 7U)) 
                                         << 7U)) & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 7U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xffffff80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                          & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                        << 7U))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
                = ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             >> 7U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                          >> 7U))))
                    ? ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U])
                        ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                   >> 0x20U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 7U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
        }
    } else if ((0x200000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (0x80U | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                    & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                          & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 7U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken) 
                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                       >> 0xdU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                    >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc2_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken) 
                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xdU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                      >> 4U)))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc2
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc3);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
        = ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3)) 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                        << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
        = (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
                   << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
        = (IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
                    << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                 << 3U))) >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3 
        = ((((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                               >> 0x10U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
                                                       >> 0x10U))) 
            << 0x10U) | ((0xff00U & (((- (IData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3))))) 
                                      & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
                                                 >> 8U))) 
                                     << 8U)) | (0xffU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3))));
    if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable) 
         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable_ff))) {
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U];
        } else if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U];
        } else if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U];
        } else if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U];
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] = 0U;
        }
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U];
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1_ns 
        = ((((((- (IData)((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                           & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                               >> 9U) | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
               & ((0x1eU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                            << 1U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1))) 
              | ((- (IData)(((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                              & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                    >> 9U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                 & ((0x1cU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                              << 2U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1) 
                                          << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1))))) 
             | ((- (IData)(((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                             & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
                                   >> 0x12U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                & ((0x1eU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                             << 1U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1)))) 
            | ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4))) 
           | ((- (IData)((1U & (((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
                              << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb;
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1 
        = (0xfU & ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb) 
                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))))) 
                   & ((IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout) 
                      | (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1 
        = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns)) 
                    ^ (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns) 
                             >> 1U)))) | (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1) 
                                                ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod) 
             & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                   >> 2U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b0 
        = (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b1 
        = (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b2 
        = (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 2U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b3 
        = (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop 
        = ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push 
        = ((IData)((2U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2 
        = (0x7fU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                     & ((0x40U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                  >> 1U)) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                           >> 6U)))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                              >> 5U)))) 
                                                 << 4U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                 >> 4U)))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3fU 
                                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                       >> 2U)))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                >> 1U)))))))))) 
                    | (- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f2));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_in 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid)) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen 
        = ((6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen)) 
           | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen 
        = ((5U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen)) 
           | (((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen 
        = ((3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen)) 
           | (((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | (((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | (((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | (((IData)((4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_illegal 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
            & ((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal)))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift) 
              & ((((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                   & (3U != (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 0x10U))))) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal))) 
                 | (((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                     & (3U != (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                             >> 0x20U))))) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__third_legal))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift) 
            << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift))) 
           & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift))) 
            & (3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift)) 
               & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
              & (3U != (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                      >> 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift)) 
             & (0x30000ULL == (0x30000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
            & (3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift)) 
               & (3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
              & (3U != (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                      >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift)) 
           & (0x300000003ULL == (0x300000003ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_addr__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                        + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                           >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__predtgt_addr__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc) 
                  + (0xfffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                               >> 4U))) >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass 
        = ((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)) 
            << 9U) | ((((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)) 
                       << 8U) | ((((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)) 
                                  << 7U) | ((((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)) 
                                             << 6U) 
                                            | ((((5U 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xdU 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                                                << 5U) 
                                               | ((((6U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xdU 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                                                   << 4U) 
                                                  | ((((7U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)))) 
                                                      << 3U) 
                                                     | ((((8U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)))) 
                                                         << 2U) 
                                                        | ((((9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)))) 
                                                            << 1U) 
                                                           | ((0xaU 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d)))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1 
        = ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
           | (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2 
        = ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
           | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0xfffc3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xffffc000U & (((0xfffe0000U & ((((IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                         >> 0x31U)) 
                                                & (5U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                 << 0x10U))) 
                              | (0xffff0000U & ((((IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x31U)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                   << 0xfU)))) 
                             | ((0xffff8000U & ((((IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x31U)) 
                                                  & (5U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                 << 0xfU) 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   << 0xeU))) 
                                | (0xffffc000U & ((
                                                   ((IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 0x31U)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 0xeU) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 0xdU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass 
        = ((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
            << 9U) | ((((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                       << 8U) | ((((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                                  << 7U) | ((((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                                             << 6U) 
                                            | ((((5U 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xdU 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                                                << 5U) 
                                               | ((((6U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xdU 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                                                   << 4U) 
                                                  | ((((7U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)))) 
                                                      << 3U) 
                                                     | ((((8U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)))) 
                                                         << 2U) 
                                                        | ((((9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)))) 
                                                            << 1U) 
                                                           | ((0xaU 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1 
        = ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
           | (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2 
        = ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
           | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U] 
        = ((0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U]) 
           | ((IData)((((QData)((IData)(((0xfffffffeU 
                                          & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                              << 0x11U) 
                                             | (0x1fffeU 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                   >> 0xfU)))) 
                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall)))) 
                        << 2U) | (QData)((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja)))))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xfffe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (((IData)((((QData)((IData)(((0xfffffffeU 
                                           & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                               << 0x11U) 
                                              | (0x1fffeU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                    >> 0xfU)))) 
                                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall)))) 
                         << 2U) | (QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja)))))) 
               >> 0x11U) | ((IData)(((((QData)((IData)(
                                                       ((0xfffffffeU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                             << 0x11U) 
                                                            | (0x1fffeU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                                  >> 0xfU)))) 
                                                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall)))) 
                                       << 2U) | (QData)((IData)(
                                                                (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja))))) 
                                     >> 0x20U)) << 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br 
        = (1U & ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0x1cU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra 
        = (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                       >> 0x31U)) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x31U))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
            << 2U) | (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                  >> 0x31U)) & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 9U))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                       << 1U) | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                           >> 0x31U)) 
                                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x29U))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra 
        = (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                       >> 0x31U)) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x31U))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
            << 2U) | (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                  >> 0x31U)) & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 9U))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
                       << 1U) | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                           >> 0x31U)) 
                                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x29U))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write) 
           & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d 
        = (IData)(((0ULL != (0x60000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d 
        = (1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x13U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                        & (0x400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0xc00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x1000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x1400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x1800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x1c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x2000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x2400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x2800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x2c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x3000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x3400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x3800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x3c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x4000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x4400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x4800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x4c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x5000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x5400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x5800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x5c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x6000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x6400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x6800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x6c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x7000U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x7400U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x7800U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
}
