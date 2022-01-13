// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                    >> 4U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]));
    vlSelf->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                vlSelf->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    vlSelf->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
                 & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0 
            = (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | (0xfffffU & ((IData)(vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0) 
                                  << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                               << 1U)))));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    }
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__5(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__5\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                    >> 0x1dU)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                    >> 0x19U)));
    vlSelf->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                vlSelf->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    vlSelf->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
                 & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0 
            = (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | (0xfffffU & ((IData)(vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0) 
                                  << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                               << 1U)))));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    }
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__6(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__6\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                    >> 0x16U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                    >> 0x12U)));
    vlSelf->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                vlSelf->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    vlSelf->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
                 & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0 
            = (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | (0xfffffU & ((IData)(vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0) 
                                  << (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                               << 1U)))));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    }
}
