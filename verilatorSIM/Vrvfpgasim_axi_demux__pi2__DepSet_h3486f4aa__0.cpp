// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_axi_demux__pi2.h"

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
    // Body
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
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies)) 
         | (4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
}
