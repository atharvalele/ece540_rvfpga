// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_AXI_DEMUX__PI2_H_
#define VERILATED_VRVFPGASIM_AXI_DEMUX__PI2_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_demux_id_counters__pi5;

VL_MODULE(Vrvfpgasim_axi_demux__pi2) {
  public:
    // CELLS
    Vrvfpgasim_axi_demux_id_counters__pi5* __PVT__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5* __PVT__gen_demux__DOT__i_ar_id_counter;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_ni,0,0);
        VL_IN8(__PVT__test_i,0,0);
        VL_IN8(__PVT__slv_aw_select_i,1,0);
        VL_IN8(__PVT__slv_ar_select_i,1,0);
        CData/*0:0*/ __PVT__gen_demux__DOT__slv_aw_valid;
        CData/*0:0*/ __PVT__gen_demux__DOT__slv_aw_ready;
        CData/*0:0*/ __PVT__gen_demux__DOT__aw_push;
        CData/*0:0*/ __PVT__gen_demux__DOT__atop_inject;
        CData/*0:0*/ __PVT__gen_demux__DOT__w_fifo_pop;
        CData/*0:0*/ __PVT__gen_demux__DOT__lock_aw_valid_d;
        CData/*0:0*/ __PVT__gen_demux__DOT__lock_aw_valid_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__load_aw_lock;
        CData/*0:0*/ __PVT__gen_demux__DOT__aw_valid;
        CData/*0:0*/ __PVT__gen_demux__DOT__aw_ready;
        CData/*0:0*/ __PVT__gen_demux__DOT__slv_w_ready;
        IData/*20:0*/ __PVT__gen_demux__DOT__mst_b_chans;
        CData/*2:0*/ __PVT__gen_demux__DOT__mst_b_valids;
        CData/*2:0*/ __PVT__gen_demux__DOT__mst_b_readies;
        CData/*0:0*/ __PVT__gen_demux__DOT__slv_ar_valid;
        CData/*0:0*/ __PVT__gen_demux__DOT__slv_ar_ready;
        CData/*0:0*/ __PVT__gen_demux__DOT__ar_push;
        CData/*0:0*/ __PVT__gen_demux__DOT__lock_ar_valid_d;
        CData/*0:0*/ __PVT__gen_demux__DOT__lock_ar_valid_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__load_ar_lock;
        CData/*0:0*/ __PVT__gen_demux__DOT__ar_valid;
        CData/*0:0*/ __PVT__gen_demux__DOT__ar_ready;
        CData/*2:0*/ __PVT__gen_demux__DOT__mst_r_valids;
        CData/*2:0*/ __PVT__gen_demux__DOT__mst_r_readies;
        CData/*0:0*/ __Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o;
        CData/*1:0*/ __Vcellout__gen_demux__DOT__i_w_fifo__data_o;
        CData/*0:0*/ __Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o;
        CData/*0:0*/ __Vlvbound_hc3641985__1;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
        CData/*4:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        CData/*4:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
        IData/*19:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        IData/*19:0*/ __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
        CData/*1:0*/ gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h9ff19aab__0;
        CData/*5:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    };
    struct {
        CData/*0:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        CData/*5:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*3:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        VL_INW(__PVT__slv_req_i,216,0,7);
        VL_OUTW(__PVT__slv_resp_o,83,0,3);
        VL_OUTW(__PVT__mst_reqs_o,650,0,21);
        VL_INW(__PVT__mst_resps_i,251,0,8);
        VlWide<7>/*215:0*/ __PVT__gen_demux__DOT__mst_r_chans;
        VlWide<3>/*73:0*/ __Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o;
        VlWide<3>/*67:0*/ __Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o;
        VlWide<3>/*73:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q;
        VlWide<3>/*73:0*/ __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q;
        VlWide<3>/*67:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q;
        VlWide<3>/*67:0*/ __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q;
        VlWide<7>/*215:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes;
    };

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim_axi_demux__pi2(const char* name);
    ~Vrvfpgasim_axi_demux__pi2();
    VL_UNCOPYABLE(Vrvfpgasim_axi_demux__pi2);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
