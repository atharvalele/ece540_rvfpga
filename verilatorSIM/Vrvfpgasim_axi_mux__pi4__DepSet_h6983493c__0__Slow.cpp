// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_axi_mux__pi4.h"

VL_ATTR_COLD void Vrvfpgasim_axi_mux__pi4___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (0xfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (0xfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = (0x20U | (0xcfU & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                             << 1U))) ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 1U))))
            : 0U);
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_readies = (
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)));
}

VL_ATTR_COLD void Vrvfpgasim_axi_mux__pi4___ctor_var_reset(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(651, vlSelf->__PVT__slv_reqs_i);
    VL_RAND_RESET_W(252, vlSelf->__PVT__slv_resps_o);
    VL_RAND_RESET_W(221, vlSelf->__PVT__mst_req_o);
    VL_RAND_RESET_W(88, vlSelf->__PVT__mst_resp_i);
    VL_RAND_RESET_W(222, vlSelf->__PVT__gen_mux__DOT__slv_aw_chans);
    vlSelf->__PVT__gen_mux__DOT__slv_aw_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_aw_readies = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(222, vlSelf->__PVT__gen_mux__DOT__slv_w_chans);
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_w_readies = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_b_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(204, vlSelf->__PVT__gen_mux__DOT__slv_ar_chans);
    vlSelf->__PVT__gen_mux__DOT__slv_ar_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_ar_readies = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_r_valids = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__gen_mux__DOT__mst_w_chan);
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__ar_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VL_RAND_RESET_W(74, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VL_RAND_RESET_W(68, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VL_RAND_RESET_W(74, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VL_RAND_RESET_W(68, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VL_RAND_RESET_W(74, vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o);
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(2);
    vlSelf->__Vlvbound_hc8ba31da__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(222, vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(12);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(12);
    vlSelf->gen_mux__DOT__i_w_fifo__DOT____Vlvbound_hfda7190e__0 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(74, vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(204, vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(68, vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
}
