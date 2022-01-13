// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_axi_demux__pi2.h"

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (0xfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (0xfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 1U))) ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U))))
            : 0U);
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelf->__PVT__slv_resp_o[2U] = ((0x3ffffU & vlSelf->__PVT__slv_resp_o[2U]) 
                                     | (0xc0000U & 
                                        (((IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                          << 0x13U) 
                                         | ((IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                            << 0x12U))));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___ctor_var_reset(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(217, vlSelf->__PVT__slv_req_i);
    vlSelf->__PVT__slv_aw_select_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__slv_ar_select_i = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(84, vlSelf->__PVT__slv_resp_o);
    VL_RAND_RESET_W(651, vlSelf->__PVT__mst_reqs_o);
    VL_RAND_RESET_W(252, vlSelf->__PVT__mst_resps_i);
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__slv_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__aw_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__atop_inject = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__aw_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__mst_b_chans = VL_RAND_RESET_I(21);
    vlSelf->__PVT__gen_demux__DOT__mst_b_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__slv_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__ar_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__ar_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__ar_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(216, vlSelf->__PVT__gen_demux__DOT__mst_r_chans);
    vlSelf->__PVT__gen_demux__DOT__mst_r_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(74, vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o);
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(68, vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o);
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hc3641985__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(20);
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(20);
    vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes = VL_RAND_RESET_I(21);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(68, vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(216, vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
}
