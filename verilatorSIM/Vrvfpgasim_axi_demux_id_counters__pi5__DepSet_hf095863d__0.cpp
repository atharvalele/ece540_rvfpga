// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__7(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__7\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__11(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__11\n"); );
    // Body
    vlSelf->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                       >> 4U))) ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                          >> 3U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                ? (~ (IData)(vlSelf->__PVT__pop_en))
                : (IData)(vlSelf->__PVT__pop_en)))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                               & (IData)(vlSelf->__PVT__pop_en)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(((~ ((IData)(vlSelf->__PVT__push_en) 
                                     >> 0xfU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                  >> 0xfU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__16(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__16\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__22(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__22\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 5U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__10(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__10\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                               : 0U);
    vlSelf->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                      >> 6U))))
                                 : 0U);
    vlSelf->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 1U))) ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                          >> 4U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                  ? ((IData)(vlSelf->__PVT__inject_en) 
                     | (~ (IData)(vlSelf->__PVT__pop_en)))
                  : ((1U & (IData)(vlSelf->__PVT__inject_en))
                      ? (~ (IData)(vlSelf->__PVT__pop_en))
                      : (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                 & ((~ (IData)(vlSelf->__PVT__inject_en)) 
                    & (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((1U & (IData)(vlSelf->__PVT__inject_en))
             ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((1U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((2U & (IData)(vlSelf->__PVT__inject_en))
             ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((4U & (IData)(vlSelf->__PVT__inject_en))
             ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((8U & (IData)(vlSelf->__PVT__inject_en))
             ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x10U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x20U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x40U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x80U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x100U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x200U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x400U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x800U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xfU))));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (IData)((((~ ((IData)(vlSelf->__PVT__push_en) 
                        >> 0xfU)) & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                        >> 0xfU))) 
                   & ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__19(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__19\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__23(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__23\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                    << 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__8(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__8\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__13(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__13\n"); );
    // Body
    vlSelf->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                       >> 0x1dU))) ? 
                             (0xffffU & ((IData)(1U) 
                                         << (0xfU & 
                                             (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                              >> 3U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                ? (~ (IData)(vlSelf->__PVT__pop_en))
                : (IData)(vlSelf->__PVT__pop_en)))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                               & (IData)(vlSelf->__PVT__pop_en)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(((~ ((IData)(vlSelf->__PVT__push_en) 
                                     >> 0xfU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                  >> 0xfU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__17(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__17\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__24(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__24\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 5U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__12(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__12\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                               : 0U);
    vlSelf->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                      >> 6U))))
                                 : 0U);
    vlSelf->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                        >> 0x19U)) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 1U))) ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                          >> 4U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                  ? ((IData)(vlSelf->__PVT__inject_en) 
                     | (~ (IData)(vlSelf->__PVT__pop_en)))
                  : ((1U & (IData)(vlSelf->__PVT__inject_en))
                      ? (~ (IData)(vlSelf->__PVT__pop_en))
                      : (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                 & ((~ (IData)(vlSelf->__PVT__inject_en)) 
                    & (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((1U & (IData)(vlSelf->__PVT__inject_en))
             ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((1U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((2U & (IData)(vlSelf->__PVT__inject_en))
             ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((4U & (IData)(vlSelf->__PVT__inject_en))
             ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((8U & (IData)(vlSelf->__PVT__inject_en))
             ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x10U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x20U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x40U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x80U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x100U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x200U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x400U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x800U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xfU))));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (IData)((((~ ((IData)(vlSelf->__PVT__push_en) 
                        >> 0xfU)) & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                        >> 0xfU))) 
                   & ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__20(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__20\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__25(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__25\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                    << 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__9(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__9\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__15(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__15\n"); );
    // Body
    vlSelf->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                       >> 0x16U))) ? 
                             (0xffffU & ((IData)(1U) 
                                         << (0xfU & 
                                             (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                              >> 3U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                ? (~ (IData)(vlSelf->__PVT__pop_en))
                : (IData)(vlSelf->__PVT__pop_en)))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                               & (IData)(vlSelf->__PVT__pop_en)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(vlSelf->__PVT__push_en))
                                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(vlSelf->__PVT__push_en))
                                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(vlSelf->__PVT__push_en))
                                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(vlSelf->__PVT__push_en))
                                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(((~ ((IData)(vlSelf->__PVT__push_en) 
                                     >> 0xfU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                  >> 0xfU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__18(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__18\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__26(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__26\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 5U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__14(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__14\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                               : 0U);
    vlSelf->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                      >> 6U))))
                                 : 0U);
    vlSelf->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                        >> 0x12U)) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 1U))) ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                          >> 4U))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                  ? ((IData)(vlSelf->__PVT__inject_en) 
                     | (~ (IData)(vlSelf->__PVT__pop_en)))
                  : ((1U & (IData)(vlSelf->__PVT__inject_en))
                      ? (~ (IData)(vlSelf->__PVT__pop_en))
                      : (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(vlSelf->__PVT__push_en)) 
                 & ((~ (IData)(vlSelf->__PVT__inject_en)) 
                    & (IData)(vlSelf->__PVT__pop_en))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((1U & (IData)(vlSelf->__PVT__inject_en))
             ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((1U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 1U))));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((2U & (IData)(vlSelf->__PVT__inject_en))
             ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((2U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 2U))));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((4U & (IData)(vlSelf->__PVT__inject_en))
             ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((4U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 3U))));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((8U & (IData)(vlSelf->__PVT__inject_en))
             ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                 ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__pop_en))
                                ? 0U : 1U)) : ((8U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 4U))));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x10U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x10U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 5U))));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x20U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x20U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 6U))));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x40U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x40U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 7U))));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x80U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x80U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 8U))));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x100U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(vlSelf->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(vlSelf->__PVT__pop_en) 
                                               >> 9U))));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x200U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xaU))));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x400U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xbU))));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x800U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xcU))));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xdU))));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(vlSelf->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xeU))));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                  ? (((IData)(vlSelf->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(vlSelf->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__pop_en) 
                                                    >> 0xfU))));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (IData)((((~ ((IData)(vlSelf->__PVT__push_en) 
                        >> 0xfU)) & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                        >> 0xfU))) 
                   & ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(vlSelf->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__21(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__21\n"); );
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    // Body
    __Vdly__mst_select_q = vlSelf->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                ? (3U & ((1U & (IData)(vlSelf->__PVT__push_en))
                                          ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                          : vlSelf->__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((2U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((4U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((8U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelf->__PVT__push_en))
                                           ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                           : (vlSelf->__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    vlSelf->__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelf->__PVT__occupied = ((0x7fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xfU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xbfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__occupied = ((0xdfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__occupied = ((0xefffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0xf7ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__occupied = ((0xfbffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xfdffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__occupied = ((0xfeffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xff7fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__occupied = ((0xffbfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xffdfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__occupied = ((0xffefU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xfff7U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__occupied = ((0xfffbU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xfffdU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__occupied = ((0xfffeU & (IData)(vlSelf->__PVT__occupied)) 
                               | (0U != (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__27(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__27\n"); );
    // Body
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                    << 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((IData)(vlSelf->__PVT__occupied) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}
