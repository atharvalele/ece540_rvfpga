// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h0b1f2208__0;
    VlWide<3>/*73:0*/ __Vlvbound_h0898aebd__0;
    CData/*0:0*/ __Vlvbound_h2dee8b9e__0;
    VlWide<3>/*65:0*/ __Vlvbound_h3c8c634c__0;
    CData/*0:0*/ __Vlvbound_h8ac0ca9b__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d8e758d__0;
    // Body
    vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (IData)(((0xa0U == (0xa0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                              >> 0x11U))));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = (IData)(
                                                            ((0xa0U 
                                                              == 
                                                              (0xa0U 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                                >> 5U)));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (IData)(((0xa0U == (0xa0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                              >> 0x19U))));
    }
    vlSelf->__PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x52U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (7U 
                                                      & (((IData)(0x52U) 
                                                          + 
                                                          ((IData)(0x54U) 
                                                           * 
                                                           (3U 
                                                            & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x52U) 
                                                         + 
                                                         ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))));
    vlSelf->__PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x53U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (7U 
                                                      & (((IData)(0x53U) 
                                                          + 
                                                          ((IData)(0x54U) 
                                                           * 
                                                           (3U 
                                                            & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x53U) 
                                                         + 
                                                         ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                     >> 0x11U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                     >> 5U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                     >> 0x19U));
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                      >> 3U)) 
                                                  | ((0x3f80U 
                                                      & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                          << 0xaU) 
                                                         | (0x380U 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                               >> 0x16U)))) 
                                                     | (0x7fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                           >> 9U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U];
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U];
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
             << 0x14U) | (0xfff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                      >> 0xcU))) | 
           (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                     >> 0xcU)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                   << 0x14U) | (0xfff00U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
        = ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                           << 8U)) | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                >> 0xcU)) 
                                      | (0xff00U & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                          >> 0xcU))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                   >> 0x18U)) | (0xffff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                                                    << 8U)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                                   >> 0x18U)) | (0xff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                    << 8U)));
    vlSelf->__PVT__gen_demux__DOT__mst_b_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                       >> 0x16U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                            >> 0x10U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                       >> 0xeU)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                            >> 8U))));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                } else {
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    }
    vlSelf->__PVT__slv_resp_o[2U] = ((0xdffffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((IData)(vlSelf->__PVT__gen_demux__DOT__slv_w_ready) 
                                         << 0x11U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x3fffU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x1fc000U & vlSelf->__PVT__gen_demux__DOT__mst_b_chans));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (0xffffffU & ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
                        | (0xff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U])));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_valids));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_valids));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fc07fU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x3f80U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (vlSelf->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : vlSelf->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                    << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                 >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
              << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                  << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                               >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
            >> 0x18U) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                               << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                            >> 8U))
                           : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                         << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffff0000U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                  >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
               >> 0x18U) | (0xff00U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                               >> 8U))
                                         : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                       << 8U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fff80U & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x7fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                           >> 0xeU) : (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                       >> 7U))));
    vlSelf->__PVT__slv_resp_o[2U] = ((0xe01ffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xffe00U & 
                                        ((0x10000U 
                                          & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                             << 0x10U)) 
                                         | (0xfe00U 
                                            & (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                               << 9U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__mst_reqs_o[0U] = 0U;
    vlSelf->__PVT__mst_reqs_o[1U] = 0U;
    vlSelf->__PVT__mst_reqs_o[2U] = 0U;
    vlSelf->__PVT__mst_reqs_o[3U] = 0U;
    vlSelf->__PVT__mst_reqs_o[4U] = 0U;
    vlSelf->__PVT__mst_reqs_o[5U] = 0U;
    vlSelf->__PVT__mst_reqs_o[6U] = 0U;
    vlSelf->__PVT__mst_reqs_o[7U] = 0U;
    vlSelf->__PVT__mst_reqs_o[8U] = 0U;
    vlSelf->__PVT__mst_reqs_o[9U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xaU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xbU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xcU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xdU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xeU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xfU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x10U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x11U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x12U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x13U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x14U] = 0U;
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h0b1f2208__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h0b1f2208__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h0b1f2208__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h0b1f2208__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h0b1f2208__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h0b1f2208__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h0898aebd__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h0898aebd__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h0898aebd__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h0898aebd__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 5U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 4U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3c8c634c__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3c8c634c__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3c8c634c__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3c8c634c__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h8ac0ca9b__0));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h0b1f2208__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h0b1f2208__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h0b1f2208__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h0b1f2208__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h0b1f2208__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h0b1f2208__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h0898aebd__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h0898aebd__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h0898aebd__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h0898aebd__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h0898aebd__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h0898aebd__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h0898aebd__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 0x1eU));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 0x1dU));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3c8c634c__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3c8c634c__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3c8c634c__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3c8c634c__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                        << 0x19U));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h0b1f2208__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h0b1f2208__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h0b1f2208__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h0b1f2208__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h0b1f2208__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h0b1f2208__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h0898aebd__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h0898aebd__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                              << 0x17U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                          << 0x16U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3c8c634c__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3c8c634c__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3c8c634c__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3c8c634c__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3c8c634c__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3c8c634c__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3c8c634c__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                          << 0x12U));
    if (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                     << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                  >> 0x10U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0x10U));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0x10U));
    } else {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 8U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 8U)));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 8U));
    }
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h1d8e758d__0[1U];
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffffff00U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp_h1d8e758d__0[2U]);
    vlSelf->__PVT__slv_resp_o[0U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U];
    vlSelf->__PVT__slv_resp_o[1U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U];
    vlSelf->__PVT__slv_resp_o[2U] = ((0xffe00U & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((0x100U & 
                                          ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                         >> 4U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                        & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h0b1f2208__0;
    VlWide<3>/*73:0*/ __Vlvbound_h0898aebd__0;
    CData/*0:0*/ __Vlvbound_h2dee8b9e__0;
    VlWide<3>/*65:0*/ __Vlvbound_h3c8c634c__0;
    CData/*0:0*/ __Vlvbound_h8ac0ca9b__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d8e758d__0;
    // Body
    vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                     >> 0x1eU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                  >> 0xdU)) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                     >> 0x1eU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                  >> 1U)) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                     >> 0x1eU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                  >> 0x15U)) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    vlSelf->__PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x52U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (0x1fU 
                                                      & (((IData)(0xfcU) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x52U) 
                                                              + 
                                                              ((IData)(0x54U) 
                                                               * 
                                                               (3U 
                                                                & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0xfcU) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x52U) 
                                                             + 
                                                             ((IData)(0x54U) 
                                                              * 
                                                              (3U 
                                                               & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x53U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (0x1fU 
                                                      & (((IData)(0xfcU) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x53U) 
                                                              + 
                                                              ((IData)(0x54U) 
                                                               * 
                                                               (3U 
                                                                & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0xfcU) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x53U) 
                                                             + 
                                                             ((IData)(0x54U) 
                                                              * 
                                                              (3U 
                                                               & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                     >> 0xdU));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                     >> 1U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                     >> 0x15U));
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                      << 1U)) 
                                                  | ((0x3f80U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                         >> 0x12U)) 
                                                     | (0x7fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                           >> 5U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
            << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                      >> 0x1cU));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
            << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
                      >> 0x1cU));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
             << 0x18U) | (0xffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                       >> 8U))) | (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
                                                         >> 0x1cU))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                     >> 8U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                 << 0x18U) | (0xffff00U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                                                 >> 8U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
        = ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                           << 0xcU)) | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                  >> 8U)) 
                                        | (0xff00U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                              >> 8U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
        = (((0xf000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                        << 0xcU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                                                      << 0xcU)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U] 
        = (((0xf000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                        << 0xcU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                                     >> 0x14U)) | (0xff0000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                      << 0xcU)));
    vlSelf->__PVT__gen_demux__DOT__mst_b_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                       >> 0x12U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                            >> 0xcU))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                       >> 0xaU)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                          >> 0x17U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                            >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                } else {
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    }
    vlSelf->__PVT__slv_resp_o[2U] = ((0xdffffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((IData)(vlSelf->__PVT__gen_demux__DOT__slv_w_ready) 
                                         << 0x11U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x3fffU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x1fc000U & vlSelf->__PVT__gen_demux__DOT__mst_b_chans));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (0xffffffU & ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
                        | (0xff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U])));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_valids));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_valids));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fc07fU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x3f80U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (vlSelf->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : vlSelf->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                    << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                 >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
              << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                  << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                               >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
            >> 0x18U) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                               << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                            >> 8U))
                           : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                         << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffff0000U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                  >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
               >> 0x18U) | (0xff00U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                               >> 8U))
                                         : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                       << 8U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fff80U & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x7fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                           >> 0xeU) : (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                       >> 7U))));
    vlSelf->__PVT__slv_resp_o[2U] = ((0xe01ffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xffe00U & 
                                        ((0x10000U 
                                          & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                             << 0x10U)) 
                                         | (0xfe00U 
                                            & (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                               << 9U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__mst_reqs_o[0U] = 0U;
    vlSelf->__PVT__mst_reqs_o[1U] = 0U;
    vlSelf->__PVT__mst_reqs_o[2U] = 0U;
    vlSelf->__PVT__mst_reqs_o[3U] = 0U;
    vlSelf->__PVT__mst_reqs_o[4U] = 0U;
    vlSelf->__PVT__mst_reqs_o[5U] = 0U;
    vlSelf->__PVT__mst_reqs_o[6U] = 0U;
    vlSelf->__PVT__mst_reqs_o[7U] = 0U;
    vlSelf->__PVT__mst_reqs_o[8U] = 0U;
    vlSelf->__PVT__mst_reqs_o[9U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xaU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xbU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xcU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xdU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xeU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xfU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x10U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x11U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x12U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x13U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x14U] = 0U;
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h0b1f2208__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h0b1f2208__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h0b1f2208__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h0b1f2208__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h0b1f2208__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h0b1f2208__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h0898aebd__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h0898aebd__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h0898aebd__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h0898aebd__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 5U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 4U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3c8c634c__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3c8c634c__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3c8c634c__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3c8c634c__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h8ac0ca9b__0));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h0b1f2208__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h0b1f2208__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h0b1f2208__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h0b1f2208__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h0b1f2208__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h0b1f2208__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h0898aebd__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h0898aebd__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h0898aebd__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h0898aebd__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h0898aebd__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h0898aebd__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h0898aebd__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 0x1eU));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 0x1dU));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3c8c634c__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3c8c634c__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3c8c634c__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3c8c634c__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                        << 0x19U));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h0b1f2208__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h0b1f2208__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h0b1f2208__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h0b1f2208__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h0b1f2208__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h0b1f2208__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h0898aebd__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h0898aebd__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                              << 0x17U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                          << 0x16U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3c8c634c__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3c8c634c__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3c8c634c__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3c8c634c__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3c8c634c__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3c8c634c__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3c8c634c__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                          << 0x12U));
    if (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                     << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                  >> 0x10U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0x10U));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0x10U));
    } else {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 8U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 8U)));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 8U));
    }
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h1d8e758d__0[1U];
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffffff00U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp_h1d8e758d__0[2U]);
    vlSelf->__PVT__slv_resp_o[0U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U];
    vlSelf->__PVT__slv_resp_o[1U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U];
    vlSelf->__PVT__slv_resp_o[2U] = ((0xffe00U & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((0x100U & 
                                          ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                         >> 0x1dU) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h0b1f2208__0;
    VlWide<3>/*73:0*/ __Vlvbound_h0898aebd__0;
    CData/*0:0*/ __Vlvbound_h2dee8b9e__0;
    VlWide<3>/*65:0*/ __Vlvbound_h3c8c634c__0;
    CData/*0:0*/ __Vlvbound_h8ac0ca9b__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d8e758d__0;
    // Body
    vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (IData)(((0x2800000U == (0x2800000U 
                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                              >> 9U))));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (IData)(((0x2800000U == (0x2800000U 
                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                              >> 0x1dU))));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = 
            (1U & (IData)(((0x2800000U == (0x2800000U 
                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                              >> 0x11U))));
    }
    vlSelf->__PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x52U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (0x1fU 
                                                      & (((IData)(0x1f8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x52U) 
                                                              + 
                                                              ((IData)(0x54U) 
                                                               * 
                                                               (3U 
                                                                & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x1f8U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x52U) 
                                                             + 
                                                             ((IData)(0x54U) 
                                                              * 
                                                              (3U 
                                                               & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                               & ((0xfbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x53U) 
                                                       + 
                                                       ((IData)(0x54U) 
                                                        * 
                                                        (3U 
                                                         & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[
                                                     (0x1fU 
                                                      & (((IData)(0x1f8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x53U) 
                                                              + 
                                                              ((IData)(0x54U) 
                                                               * 
                                                               (3U 
                                                                & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x1f8U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x53U) 
                                                             + 
                                                             ((IData)(0x54U) 
                                                              * 
                                                              (3U 
                                                               & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                     >> 9U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                     >> 0x1dU));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                     >> 0x11U));
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                      << 5U)) 
                                                  | ((0x3f80U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                         >> 0xeU)) 
                                                     | (0x7fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
            << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                      >> 0x18U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
            << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
                      >> 0x18U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
             << 0x1cU) | (0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                        >> 4U))) | 
           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
            >> 0x18U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                     >> 4U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                 << 0x1cU) | (0xfffff00U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                                                 >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
            << 0x10U) | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                   >> 4U)) | (0xff00U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                 >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
            >> 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
                         << 0x10U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
            >> 0x10U) | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                      << 0x10U)));
    vlSelf->__PVT__gen_demux__DOT__mst_b_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                       >> 0xeU)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                            >> 8U))));
    vlSelf->__PVT__gen_demux__DOT__mst_r_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                       >> 6U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U])));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__ar_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                } else {
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                }
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                if (vlSelf->__PVT__gen_demux__DOT__aw_ready) {
                    vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                } else {
                    vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
                }
            } else {
                vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
                vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
                vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
            }
        } else {
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
            vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        }
    }
    vlSelf->__PVT__slv_resp_o[2U] = ((0xdffffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((IData)(vlSelf->__PVT__gen_demux__DOT__slv_w_ready) 
                                         << 0x11U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x3fffU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x1fc000U & vlSelf->__PVT__gen_demux__DOT__mst_b_chans));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (0xffffffU & ((0xffffU & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
                        | (0xff0000U & vlSelf->__PVT__gen_demux__DOT__mst_r_chans[6U])));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_valids));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_valids));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready)));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_ready));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fc07fU & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x3f80U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (vlSelf->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : vlSelf->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0 
        = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hf50ec04c__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffU & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                    << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                 >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
              << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                  << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                               >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
            >> 0x18U) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                               << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                            >> 8U))
                           : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                         << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffff0000U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                  >> 8U)) : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
               >> 0x18U) | (0xff00U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelf->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                               >> 8U))
                                         : vlSelf->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                       << 8U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fff80U & vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
           | (0x7fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                           >> 0xeU) : (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                       >> 7U))));
    vlSelf->__PVT__slv_resp_o[2U] = ((0xe01ffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xffe00U & 
                                        ((0x10000U 
                                          & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                             << 0x10U)) 
                                         | (0xfe00U 
                                            & (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                               << 9U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                ? 0U : 1U) << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((9U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | ((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                 << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    vlSelf->__PVT__mst_reqs_o[0U] = 0U;
    vlSelf->__PVT__mst_reqs_o[1U] = 0U;
    vlSelf->__PVT__mst_reqs_o[2U] = 0U;
    vlSelf->__PVT__mst_reqs_o[3U] = 0U;
    vlSelf->__PVT__mst_reqs_o[4U] = 0U;
    vlSelf->__PVT__mst_reqs_o[5U] = 0U;
    vlSelf->__PVT__mst_reqs_o[6U] = 0U;
    vlSelf->__PVT__mst_reqs_o[7U] = 0U;
    vlSelf->__PVT__mst_reqs_o[8U] = 0U;
    vlSelf->__PVT__mst_reqs_o[9U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xaU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xbU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xcU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xdU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xeU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0xfU] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x10U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x11U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x12U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x13U] = 0U;
    vlSelf->__PVT__mst_reqs_o[0x14U] = 0U;
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h0b1f2208__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h0b1f2208__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h0b1f2208__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h0b1f2208__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h0b1f2208__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h0b1f2208__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h0898aebd__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h0898aebd__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h0898aebd__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h0898aebd__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 5U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 4U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3c8c634c__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3c8c634c__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3c8c634c__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3c8c634c__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h8ac0ca9b__0));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h0b1f2208__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h0b1f2208__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h0b1f2208__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h0b1f2208__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h0b1f2208__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h0b1f2208__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h0898aebd__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h0898aebd__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h0898aebd__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h0898aebd__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h0898aebd__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h0898aebd__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h0898aebd__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h0898aebd__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                            << 0x1eU));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                        << 0x1dU));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3c8c634c__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3c8c634c__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3c8c634c__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3c8c634c__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3c8c634c__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3c8c634c__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3c8c634c__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                        << 0x19U));
    __Vlvbound_h0b1f2208__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h0b1f2208__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h0b1f2208__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h0b1f2208__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h0b1f2208__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h0b1f2208__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h0b1f2208__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h0b1f2208__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h0b1f2208__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h0898aebd__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h0898aebd__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h0898aebd__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h0898aebd__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h0898aebd__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h0898aebd__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h0898aebd__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_hc3641985__1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_hc3641985__1) 
                                              << 0x17U));
    }
    __Vlvbound_h2dee8b9e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_h2dee8b9e__0) 
                                          << 0x16U));
    __Vlvbound_h3c8c634c__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3c8c634c__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3c8c634c__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3c8c634c__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3c8c634c__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3c8c634c__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3c8c634c__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3c8c634c__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3c8c634c__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h8ac0ca9b__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h8ac0ca9b__0) 
                                          << 0x12U));
    if (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                     << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                  >> 0x10U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0x10U));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0x10U));
    } else {
        __Vtemp_h1d8e758d__0[1U] = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 8U));
        __Vtemp_h1d8e758d__0[2U] = (0xffU & ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 8U)));
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 8U));
    }
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h1d8e758d__0[1U];
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xffffff00U & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp_h1d8e758d__0[2U]);
    vlSelf->__PVT__slv_resp_o[0U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U];
    vlSelf->__PVT__slv_resp_o[1U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U];
    vlSelf->__PVT__slv_resp_o[2U] = ((0xffe00U & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xfffffU & 
                                        ((0x100U & 
                                          ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                         >> 0x16U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}
