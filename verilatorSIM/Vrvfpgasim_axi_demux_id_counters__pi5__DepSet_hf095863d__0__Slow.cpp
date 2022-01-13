// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1\n"); );
    // Body
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
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

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__4(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__4\n"); );
    // Body
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
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

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2\n"); );
    // Body
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
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

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__5(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__5\n"); );
    // Body
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
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

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__3(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__3\n"); );
    // Body
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
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

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__6(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__6\n"); );
    // Body
    vlSelf->__PVT__occupied = ((0xfffcU & (IData)(vlSelf->__PVT__occupied)) 
                               | (((IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                   << 1U) | (0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))));
    vlSelf->__PVT__occupied = ((0xfff3U & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 2U));
    vlSelf->__PVT__occupied = ((0xffcfU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 4U));
    vlSelf->__PVT__occupied = ((0xff3fU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 6U));
    vlSelf->__PVT__occupied = ((0xfcffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 8U));
    vlSelf->__PVT__occupied = ((0xf3ffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xaU));
    vlSelf->__PVT__occupied = ((0xcfffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xcU));
    vlSelf->__PVT__occupied = ((0x3fffU & (IData)(vlSelf->__PVT__occupied)) 
                               | ((((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                    << 1U) | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0xfffeU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | (IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__cnt_full = ((0xfffdU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U));
    vlSelf->__PVT__cnt_full = ((0xfffbU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 2U));
    vlSelf->__PVT__cnt_full = ((0xfff7U & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 3U));
    vlSelf->__PVT__cnt_full = ((0xffefU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 4U));
    vlSelf->__PVT__cnt_full = ((0xffdfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 5U));
    vlSelf->__PVT__cnt_full = ((0xffbfU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 6U));
    vlSelf->__PVT__cnt_full = ((0xff7fU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 7U));
    vlSelf->__PVT__cnt_full = ((0xfeffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 8U));
    vlSelf->__PVT__cnt_full = ((0xfdffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 9U));
    vlSelf->__PVT__cnt_full = ((0xfbffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xaU));
    vlSelf->__PVT__cnt_full = ((0xf7ffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xbU));
    vlSelf->__PVT__cnt_full = ((0xefffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xcU));
    vlSelf->__PVT__cnt_full = ((0xdfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xdU));
    vlSelf->__PVT__cnt_full = ((0xbfffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xeU));
    vlSelf->__PVT__cnt_full = ((0x7fffU & (IData)(vlSelf->__PVT__cnt_full)) 
                               | ((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 0xfU));
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
