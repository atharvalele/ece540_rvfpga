// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"

extern const VlUnpacked<CData/*3:0*/, 32768> Vrvfpgasim__ConstPool__TABLE_hfce4bb29_0;

VL_ATTR_COLD void Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__2(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__2\n"); );
    // Init
    SData/*14:0*/ __Vtableidx6;
    VlWide<3>/*95:0*/ __Vtemp_h39a53b52__0;
    VlWide<3>/*95:0*/ __Vtemp_hebfed785__0;
    VlWide<3>/*95:0*/ __Vtemp_h1529f235__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_clk = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U] 
        = (0x7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U] 
        = (0x7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = (0x7f801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = (0xffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[0U] = 0x3020100U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[1U] = 0x7060504U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[2U] = 8U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = (0xffff3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = (0x82U | (0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = (0x7f7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
        = (0x1feU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = (0x20000000U | (0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = (0x40fU | (0xfffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
        = (0x3fffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
        = (0xffffffff0ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xfffffffffffffffeULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xfffffffffffffdffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xfffffffffffbffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xfffffffff7ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xffffffefffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xffffdfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0xffbfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = (0x7fffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = (0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = (0xf0000003U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0xbU) | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
            >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                         << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0x16U) | ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                          >> 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                       << 0xbU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
            >> 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                        << 0x16U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
        = (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
           >> 0xaU);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk 
        = (0xffU & (- (IData)((IData)(vlSymsp->TOP.clk))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk 
        = (0xffffU & (- (IData)((IData)(vlSymsp->TOP.clk))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk 
        = (0xfU & (- (IData)((IData)(vlSymsp->TOP.clk))));
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSelf->__PVT__timer_ptc__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (~ (IData)(vlSelf->__PVT__timer_ptc__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptc__DOT__cntr_clk = ((2U 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))
                                                ? (IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate)
                                                : (IData)(vlSymsp->TOP.clk));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U] 
        = (0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
        = (0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
        = (0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU] 
        = (0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | (0xffffffU & ((0xff0000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id) 
                                         << 0x10U)) 
                           | ((0xffff00U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id) 
                                            << 8U)) 
                              | ((0xffffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id)) 
                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                    >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                              << 0x18U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                           << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]) 
           | (0xffffU & ((0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id)) 
                         | ((0xffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                                        >> 8U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                                   >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
        = ((0xff0000ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                              << 0x10U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                           << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
        = (0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
        = (0xffffff0fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
        = (0xffff0fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
        = (0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xf0000fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xfffff000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority) 
                              << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                                               << 0x10U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                                 << 0xcU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                              << 0x1cU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                           << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]) 
           | (0xffffffU & ((0xffffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                           | ((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                                            >> 4U)) 
                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                 >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
        = ((0xfffff00fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U]) 
           | (0xfffffff0U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                              << 8U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                        << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
        = ((0xfff0ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
              << 0x10U));
    vlSelf->__PVT__timer_ptc__DOT__eclk_gate = (1U 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__gate_clk_pad_i) 
                                                   ^ 
                                                   ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                    >> 2U)));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d 
        = (0x1fffffU & ((IData)(1U) + vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__bankid_ff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_postedff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_posted;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tagff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tag;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_sizeff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_size;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteenff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tagff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tag;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_sizeff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_size;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum 
        = ((8U & ((IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                            >> 3U) & (0ULL == (0xeULL 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)))) 
                  << 3U)) | ((4U & ((((IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                >> 3U) 
                                               & (0ULL 
                                                  == 
                                                  (0xdULL 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)))) 
                                      | (IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                  >> 2U) 
                                                 & (0ULL 
                                                    == 
                                                    (0xeULL 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                     | (IData)(((0xcULL 
                                                 == 
                                                 (0xcULL 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                & (0ULL 
                                                   == 
                                                   (0xcULL 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                    << 2U)) | ((2U 
                                                & ((((((((((IData)(
                                                                   ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                     >> 2U) 
                                                                    & (0ULL 
                                                                       == 
                                                                       (0xdULL 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)))) 
                                                           | (IData)(
                                                                     ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                       >> 1U) 
                                                                      & (0ULL 
                                                                         == 
                                                                         (0xeULL 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                          | (IData)(
                                                                    ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                      >> 3U) 
                                                                     & (0ULL 
                                                                        == 
                                                                        (0xbULL 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                         | (IData)(
                                                                   ((8ULL 
                                                                     == 
                                                                     (0xcULL 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                    & (3ULL 
                                                                       == 
                                                                       (0xfULL 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                        | (IData)(
                                                                  ((6ULL 
                                                                    == 
                                                                    (0xeULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                   & (0ULL 
                                                                      == 
                                                                      (0xcULL 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                       | (IData)(
                                                                 ((0xcULL 
                                                                   == 
                                                                   (0xcULL 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                  & (0ULL 
                                                                     == 
                                                                     (9ULL 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                      | (IData)(
                                                                ((0xcULL 
                                                                  == 
                                                                  (0xcULL 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                 & (4ULL 
                                                                    == 
                                                                    (0xeULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                     | (IData)(
                                                               ((0xaULL 
                                                                 == 
                                                                 (0xaULL 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                & (0ULL 
                                                                   == 
                                                                   (0xaULL 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                    | (IData)(
                                                              ((0xeULL 
                                                                == 
                                                                (0xeULL 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                               & (4ULL 
                                                                  == 
                                                                  (0xcULL 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((((((((((((((((((((((((((IData)(
                                                                                ((7ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)))) 
                                                                             | (IData)(
                                                                                ((9ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (3ULL 
                                                                                == 
                                                                                (0xbULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                            | (IData)(
                                                                                ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 2U) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0xbULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                           | (IData)(
                                                                                ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 1U) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                          | (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                         | (IData)(
                                                                                ((4ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (3ULL 
                                                                                == 
                                                                                (0xfULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                        | (IData)(
                                                                                ((6ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (9ULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                       | (IData)(
                                                                                ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 3U) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                      | (IData)(
                                                                                ((8ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (6ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                     | (IData)(
                                                                               ((6ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                                & (4ULL 
                                                                                == 
                                                                                (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                    | (IData)(
                                                                              ((5ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                               & (0ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                   | (IData)(
                                                                             ((8ULL 
                                                                               == 
                                                                               (0xeULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                              & (5ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                  | (IData)(
                                                                            ((3ULL 
                                                                              == 
                                                                              (7ULL 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                             & (0ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                 | (IData)(
                                                                           ((0xcULL 
                                                                             == 
                                                                             (0xcULL 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                            & (0ULL 
                                                                               == 
                                                                               (3ULL 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                                | (IData)(
                                                                          ((0xaULL 
                                                                            == 
                                                                            (0xaULL 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                           & (0ULL 
                                                                              == 
                                                                              (5ULL 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                               | (IData)(
                                                                         ((7ULL 
                                                                           == 
                                                                           (0xfULL 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                          & (4ULL 
                                                                             == 
                                                                             (0xcULL 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                              | (IData)(
                                                                        ((0xcULL 
                                                                          == 
                                                                          (0xcULL 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                         & (8ULL 
                                                                            == 
                                                                            (0xcULL 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                             | (IData)(
                                                                       ((0xaULL 
                                                                         == 
                                                                         (0xaULL 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                        & (8ULL 
                                                                           == 
                                                                           (0xeULL 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                            | (IData)(
                                                                      ((9ULL 
                                                                        == 
                                                                        (9ULL 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                       & (0ULL 
                                                                          == 
                                                                          (6ULL 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                           | (IData)(
                                                                     ((8ULL 
                                                                       == 
                                                                       (0xaULL 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                      & (7ULL 
                                                                         == 
                                                                         (0xfULL 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                          | (IData)(
                                                                    ((0xeULL 
                                                                      == 
                                                                      (0xeULL 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                     & (8ULL 
                                                                        == 
                                                                        (9ULL 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                         | (IData)(
                                                                   ((0xeULL 
                                                                     == 
                                                                     (0xeULL 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                    & (8ULL 
                                                                       == 
                                                                       (0xaULL 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                        | (IData)(
                                                                  ((0xdULL 
                                                                    == 
                                                                    (0xdULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                   & (8ULL 
                                                                      == 
                                                                      (0xaULL 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                       | (IData)(
                                                                 ((0xaULL 
                                                                   == 
                                                                   (0xeULL 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                                                  & (2ULL 
                                                                     == 
                                                                     (0xaULL 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))))) 
                                                      | ((IData)(
                                                                 (0xbULL 
                                                                  == 
                                                                  (0xbULL 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))) 
                                                         & (~ (IData)(
                                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                                       >> 2U))))) 
                                                     | ((IData)(
                                                                (0xfULL 
                                                                 == 
                                                                 (0xfULL 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                                   >> 3U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[7U] 
        = ((0x7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[7U]) 
           | (0x3800U & ((0x2000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                     << 0xdU)) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x140U 
                                                             & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)))) 
                                                   << 0xcU) 
                                                  | ((IData)(
                                                             (0U 
                                                              != 
                                                              (0x280U 
                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)))) 
                                                     << 0xbU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[0U] 
        = (IData)((((QData)((IData)(((0x80U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                               << 7U)) 
                                     | ((0x40U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                             >> 2U)) 
                                           | (0x1fU 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                                 >> 1U))))))) 
                    << 0x23U) | (((QData)((IData)((1U 
                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)))) 
                                  << 0x22U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[1U] 
        = ((0xfffff800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[1U]) 
           | (IData)(((((QData)((IData)(((0x80U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                                   >> 2U)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout) 
                                                     >> 1U))))))) 
                        << 0x23U) | (((QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceff__dout)))) 
                                      << 0x22U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval)))) 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_valid)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_tag)) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[1U] 
        = ((0x7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[2U] 
        = ((0x7ffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout 
                      >> 0x14U)) | ((IData)(((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout)) 
                                             << 1U)) 
                                    << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[3U] 
        = (((IData)(((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout)) 
                     << 1U)) >> 0x15U) | ((IData)((
                                                   ((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout)) 
                                                    << 1U) 
                                                   >> 0x20U)) 
                                          << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[4U] 
        = (((IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout)) 
                      << 1U) >> 0x20U)) >> 0x15U) | 
           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb1 
            << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[5U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb1 
            >> 0x15U) | ((IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1))) 
                         << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[6U] 
        = (((IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1))) 
            >> 0x15U) | ((IData)(((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1)) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[7U] 
        = ((0x3800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__trace_rv_trace_pkt[7U]) 
           | (0x3fffU & ((IData)(((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1)) 
                                  >> 0x20U)) >> 0x15U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_e1 
        = ((0x1fU & ((- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)))) 
                     & (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout 
                                >> 0x20U)))) | ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout))))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0r))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_reg_read 
        = ((0x3c03040U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff 
                           >> 6U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U]) 
           | vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout 
              >> 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
              >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
                    >> 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U]) 
           | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[3U] 
        = (0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
                    >> 0x12U));
    __Vtableidx6 = (0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__mask 
        = Vrvfpgasim__ConstPool__TABLE_hfce4bb29_0[__Vtableidx6];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 
           >= (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 
           >= (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (0xf00000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                           << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U] 
        = ((0xffff8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U]) 
           | ((0x7fc0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                          << 6U)) | (0x3fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                              >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (0xf00000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                           << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xffff8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | ((0x7fc0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                          << 6U)) | (0x3fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                              >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U] 
        = ((0x38fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U]) 
           | (0x3f0U & ((0x40U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                                  << 6U)) | (0x30U 
                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                >> 0x11U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U] 
        = ((0x38fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U]) 
           | (0x3f0U & ((0x40U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                                  << 6U)) | (0x30U 
                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                >> 0x11U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity 
        = ((0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity)) 
           | ((2U & (VL_REDXOR_32((0xffffU & (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                      >> 0x10U)))) 
                     << 1U)) | (1U & VL_REDXOR_32((0xffffU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity 
        = ((3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity)) 
           | ((8U & (VL_REDXOR_32((0xffffU & (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                      >> 0x30U)))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                               >> 0x20U)))) 
                                      << 2U))));
    vlSelf->io_data__out__out32 = ((0xfffffffeU & vlSelf->io_data__out__out32) 
                                   | (1U & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                            & vlSelf->__PVT__o_gpio)));
    vlSelf->io_data__out__out33 = ((0xfffffffdU & vlSelf->io_data__out__out33) 
                                   | (2U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                             & vlSelf->__PVT__o_gpio) 
                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out34 = ((0xfffffffbU & vlSelf->io_data__out__out34) 
                                   | (4U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                             & vlSelf->__PVT__o_gpio) 
                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out35 = ((0xfffffff7U & vlSelf->io_data__out__out35) 
                                   | (8U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                             & vlSelf->__PVT__o_gpio) 
                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out36 = ((0xffffffefU & vlSelf->io_data__out__out36) 
                                   | (0x10U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                & vlSelf->__PVT__o_gpio) 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out37 = ((0xffffffdfU & vlSelf->io_data__out__out37) 
                                   | (0x20U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                & vlSelf->__PVT__o_gpio) 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out38 = ((0xffffffbfU & vlSelf->io_data__out__out38) 
                                   | (0x40U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                & vlSelf->__PVT__o_gpio) 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out39 = ((0xffffff7fU & vlSelf->io_data__out__out39) 
                                   | (0x80U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                & vlSelf->__PVT__o_gpio) 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out40 = ((0xfffffeffU & vlSelf->io_data__out__out40) 
                                   | (0x100U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                 & vlSelf->__PVT__o_gpio) 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out41 = ((0xfffffdffU & vlSelf->io_data__out__out41) 
                                   | (0x200U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                 & vlSelf->__PVT__o_gpio) 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out42 = ((0xfffffbffU & vlSelf->io_data__out__out42) 
                                   | (0x400U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                 & vlSelf->__PVT__o_gpio) 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out43 = ((0xfffff7ffU & vlSelf->io_data__out__out43) 
                                   | (0x800U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                 & vlSelf->__PVT__o_gpio) 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out44 = ((0xffffefffU & vlSelf->io_data__out__out44) 
                                   | (0x1000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                  & vlSelf->__PVT__o_gpio) 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out45 = ((0xffffdfffU & vlSelf->io_data__out__out45) 
                                   | (0x2000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                  & vlSelf->__PVT__o_gpio) 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out46 = ((0xffffbfffU & vlSelf->io_data__out__out46) 
                                   | (0x4000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                  & vlSelf->__PVT__o_gpio) 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out47 = ((0xffff7fffU & vlSelf->io_data__out__out47) 
                                   | (0x8000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                  & vlSelf->__PVT__o_gpio) 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out48 = ((0xfffeffffU & vlSelf->io_data__out__out48) 
                                   | (0x10000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                   & vlSelf->__PVT__o_gpio) 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out49 = ((0xfffdffffU & vlSelf->io_data__out__out49) 
                                   | (0x20000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                   & vlSelf->__PVT__o_gpio) 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out50 = ((0xfffbffffU & vlSelf->io_data__out__out50) 
                                   | (0x40000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                   & vlSelf->__PVT__o_gpio) 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out51 = ((0xfff7ffffU & vlSelf->io_data__out__out51) 
                                   | (0x80000U & ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                   & vlSelf->__PVT__o_gpio) 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out52 = ((0xffefffffU & vlSelf->io_data__out__out52) 
                                   | (0x100000U & (
                                                   (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                    & vlSelf->__PVT__o_gpio) 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out53 = ((0xffdfffffU & vlSelf->io_data__out__out53) 
                                   | (0x200000U & (
                                                   (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                    & vlSelf->__PVT__o_gpio) 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out54 = ((0xffbfffffU & vlSelf->io_data__out__out54) 
                                   | (0x400000U & (
                                                   (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                    & vlSelf->__PVT__o_gpio) 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out55 = ((0xff7fffffU & vlSelf->io_data__out__out55) 
                                   | (0x800000U & (
                                                   (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                    & vlSelf->__PVT__o_gpio) 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out56 = ((0xfeffffffU & vlSelf->io_data__out__out56) 
                                   | (0x1000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out57 = ((0xfdffffffU & vlSelf->io_data__out__out57) 
                                   | (0x2000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out58 = ((0xfbffffffU & vlSelf->io_data__out__out58) 
                                   | (0x4000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out59 = ((0xf7ffffffU & vlSelf->io_data__out__out59) 
                                   | (0x8000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out60 = ((0xefffffffU & vlSelf->io_data__out__out60) 
                                   | (0x10000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out61 = ((0xdfffffffU & vlSelf->io_data__out__out61) 
                                   | (0x20000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out62 = ((0xbfffffffU & vlSelf->io_data__out__out62) 
                                   | (0x40000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->io_data__out__out63 = ((0x7fffffffU & vlSelf->io_data__out__out63) 
                                   | (0x80000000U & 
                                      ((vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                        & vlSelf->__PVT__o_gpio) 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c000cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c200cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c400cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c001cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c201cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c401cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) 
           | (((IData)((0xf00c0020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) 
           | (((IData)((0xf00c2020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) 
           | (((IData)((0xf00c4020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c000cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c200cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c400cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c001cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c201cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c401cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)) 
           | (((IData)((0xf00c0020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
           | (((IData)((0xf00c2020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)) 
           | (((IData)((0xf00c4020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[1U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[2U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[3U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[4U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[5U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[6U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[7U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5004U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5008U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c500cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5010U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5014U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5018U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c501cU == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we)) 
           | (((IData)((0xf00c5020U == (0xfffffffcU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = ((0xfffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
               << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                     << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = ((0xff000fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]) 
           | (0xfffff000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                               << 0xfU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                 << 0xcU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                            << 0x1bU) 
                                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                              << 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xffffffU & ((0xfffffeU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                         << 1U)) | 
                           ((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                          >> 2U)) | 
                            ((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                           >> 5U)) 
                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xffff000fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xfffffff0U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0xdU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                              << 7U) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                << 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xf000ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                              << 0x19U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                               << 0x13U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xf0000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                              << 0x1fU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                           << 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U]) 
           | (0xfffffffU & ((0xfffffe0U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                           << 5U)) 
                            | ((0xffffffcU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 2U)) 
                               | ((0xfffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                 >> 1U)) 
                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                     >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = ((0xfff000ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                              << 0x11U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                               << 0xbU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                 << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U]) 
           | (0xfff00000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0x1dU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                               << 0x17U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                 << 0x14U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = ((0xfffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
               << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                     << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = ((0xff000fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]) 
           | (0xfffff000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                               << 0xfU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                 << 0xcU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                            << 0x1bU) 
                                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                              << 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xffffffU & ((0xfffffeU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                         << 1U)) | 
                           ((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                          >> 2U)) | 
                            ((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                           >> 5U)) 
                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xffff000fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xfffffff0U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0xdU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                              << 7U) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                << 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xf000ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                              << 0x19U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                               << 0x13U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xf0000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                              << 0x1fU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                           << 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U]) 
           | (0xfffffffU & ((0xfffffe0U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                           << 5U)) 
                            | ((0xffffffcU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 2U)) 
                               | ((0xfffffffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                 >> 1U)) 
                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                     >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = ((0xfff000ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                              << 0x11U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                               << 0xbU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                 << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U]) 
           | (0xfff00000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                              << 0x1dU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                               << 0x17U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                 << 0x14U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff 
        = ((((0x1fU & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                        >> 3U))))) 
             | (0x18U & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                          >> 2U)))))) 
            | (0x10U & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                         >> 1U)))))) 
           | (8U & (- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__last_pc_e2 
        = ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U])
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
        = (IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5)) 
                    << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                 << 3U))) >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action 
        = (((IData)((0x240U == (0x240U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
            << 3U) | (((IData)((0x240U == (0x240U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))) 
                       << 2U) | (((IData)((0x240U == 
                                           (0x240U 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))) 
                                  << 1U) | (IData)(
                                                   (0x240U 
                                                    == 
                                                    (0x240U 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out 
        = (((((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
              & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               << 0x12U)) 
                                | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                 << 0xcU)) 
                                   | ((0x1800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                  << 6U)) 
                                      | ((0xc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                   << 3U)) 
                                         | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))))) 
             | ((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                 << 0x12U)) 
                                  | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   << 0xcU)) 
                                     | ((0x1800U & 
                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                          << 6U)) | 
                                        ((0xc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   << 3U)) 
                                         | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))))))) 
            | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
               & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                << 0x12U)) 
                                 | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                  << 0xcU)) 
                                    | ((0x1800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                   << 6U)) 
                                       | ((0xc0U & 
                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                            << 3U)) 
                                          | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))))))) 
           | ((- (IData)((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
              & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                               << 0x12U)) 
                                | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                 << 0xcU)) 
                                   | ((0x1800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                  << 6U)) 
                                      | ((0xc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                   << 3U)) 
                                         | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__b_cls 
        = (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                          >> 0x20U))) & (0U != (0xffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                           >> 0x18U))))) 
             | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                         >> 0x20U)) & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                            >> 0x18U)))))) 
            << 2U) | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                     >> 0x20U))) & 
                         (0U != (0xffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                  >> 0x10U))))) 
                        | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                    >> 0x20U)) & (0xffU 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                              >> 0x10U)))))) 
                       << 1U) | (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                              >> 0x20U))) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                             >> 8U))))) 
                                 | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                             >> 0x20U)) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                            >> 8U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_inc 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh 
           + (IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_f))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_inc 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth 
           + (IData)((QData)((IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__minstretf_cout_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))
                     ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                       >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7effffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7dffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x7bffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x77ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0 
        = ((6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
           | (1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1 
        = ((6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
           | (1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout) 
            << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout) 
                                  << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct 
        = (((0x21U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)) 
            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1 
        = (7U & (((4U & (- (IData)((IData)((4U == (0xcU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val))))))) 
                  | (6U & (- (IData)((IData)((2U == 
                                              (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                 | (- (IData)((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6) 
            << 0x12U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5) 
                          << 0xcU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4) 
                                       << 6U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q)) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q))) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q)))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U]) 
           | (0xffffff00U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                              << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U]) 
           | (0xffff0000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                              << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                 << 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U]) 
           | (0xff000000U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                              << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                 << 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout) 
            << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout) 
                       << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout) 
                                  << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nomergeff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nomergeff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nomergeff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nomergeff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nomergeff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nomergeff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nomergeff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nomergeff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
        = (((QData)((IData)((1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                    >> 1U) & (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                      >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_iccm_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout)) 
                    << 0x1fU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout 
            << 0x1eU) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout)) 
                                   << 0x1fU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout 
            << 0x1dU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout 
                         >> 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout 
           >> 3U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                     >> 8U)))) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                  >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken)) 
           | (((1U == (7U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                             >> 3U))) << 1U) | (0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                                                    >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken)) 
           | (((3U == (7U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                             >> 3U))) << 3U) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                                                     >> 3U))) 
                                                << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken)) 
           | (((5U == (7U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                             >> 3U))) << 5U) | ((4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                                                     >> 3U))) 
                                                << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken)) 
           | (((7U == (7U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                             >> 3U))) << 7U) | ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout) 
                                                     >> 3U))) 
                                                << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0xc0000U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset))) 
                           << 0x12U)) | (0x30000U & 
                                         ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))) 
                                          << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2 
        = (3U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                   >> 3U) ^ (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 5U)) ^ (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                        >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                  >> 3U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5 
                                    >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
        = ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5)) 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                        << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_sideeffectff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_sideeffectff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_sideeffectff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_sideeffectff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_sideeffectff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_sideeffectff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_sideeffectff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_sideeffectff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__logic_sel 
        = ((6U & ((0xfffeU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                              >> 0x10U)) | (0x1fffeU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                                               >> 0xfU)))) 
           | (IData)((0U != (0x30000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__logic_sel 
        = ((6U & ((0xfffeU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                              >> 0x10U)) | (0x1fffeU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                                               >> 0xfU)))) 
           | (IData)((0U != (0x30000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any 
        = ((8U & ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                      >> 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)) 
                    & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                   | (IData)((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)))) 
                  << 3U)) | ((4U & ((((IData)((1U == 
                                               (5U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                                      & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                                     | (IData)((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))))) 
                                    << 2U)) | ((2U 
                                                & ((((IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                                                     & (0xfU 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                                                    | (IData)(
                                                              (1U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((IData)(
                                                              (0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                                                     | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                  >> 4U) | (0U != (0x38000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3)
            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3 
                       >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2 
        = (((IData)((7U != (7U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout))) 
            << 6U) | (((IData)((6U != (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout))) 
                       << 5U) | ((0x10U & (((IData)(
                                                    (0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout))) 
                                            | (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                  >> 2U))) 
                                           << 4U)) 
                                 | ((8U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               >> 2U)) 
                                           << 3U)) 
                                    | ((4U & (((IData)(
                                                       (0U 
                                                        == 
                                                        (5U 
                                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout))) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (6U 
                                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)))) 
                                              << 2U)) 
                                       | (((IData)(
                                                   (0U 
                                                    == 
                                                    (6U 
                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout))) 
                                           << 1U) | (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                  >> 4U) | (0U != (0x38000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
        = ((0x1e1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
               << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                          << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                     << 2U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                               << 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
        = ((0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
               << 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                          << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                     << 6U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                               << 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_unsignff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_unsignff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_unsignff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_unsignff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_unsignff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_unsignff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_unsignff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_unsignff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz 
        = ((0xff00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_szff__dout) 
               << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_szff__dout) 
                          << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_szff__dout) 
                                     << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_szff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_szff__dout) 
               << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_szff__dout) 
                            << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_szff__dout) 
                                         << 0xaU) | 
                                        ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_szff__dout) 
                                         << 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            ? (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))
            : (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc5) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout) 
               << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout) 
                            << 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout) 
                                       << 4U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__dout) 
               << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__dout) 
                             << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__dout) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__dout) 
                                             << 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__jit_in_same_region 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_flush_vldff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_flush_vldff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_flush_vldff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_flush_vldff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_flush_vldff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_flush_vldff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_flush_vldff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_flush_vldff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xfff07fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | ((0x80000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                           << 0xfU)) | ((0x40000U & 
                                         ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                              >> 3U)) 
                                          << 0x12U)) 
                                        | (0x38000U 
                                           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                              << 0xfU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xffff8fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xff8fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout) 
               << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                             << 0x15U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout) 
                                          << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_drain_vldff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_drain_vldff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_drain_vldff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_drain_vldff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_drain_vldff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_drain_vldff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_drain_vldff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_drain_vldff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout)) 
                    << 0x30U) | (((QData)((IData)((
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout)))) 
                                  << 0x10U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout)) 
                     << 0x30U) | (((QData)((IData)(
                                                   (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout)))) 
                                   << 0x10U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout)) 
                    << 0x30U) | (((QData)((IData)((
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                                  << 0x10U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout)) 
                     << 0x30U) | (((QData)((IData)(
                                                   (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                                   << 0x10U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
        = ((0x3fc03U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
               << 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                     << 4U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                               << 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
        = ((0x3ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
               << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                             << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                          << 0xcU) 
                                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                            << 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
        = ((0xffff0000fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg) 
           | ((QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
        = ((0xfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg) 
           | ((QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority)
            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                             << 0x19U)) 
                             | ((0x7e000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                >> 1U)) 
                                | ((0x1000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                  << 0x13U)) 
                                   | ((0xfffe00U & 
                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                        >> 2U)) | (
                                                   (0x100U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                       << 4U)) 
                                                   | ((0xfeU 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                            >> 3U)))))))))) 
            << 7U) | (QData)((IData)(((0x70U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                << 3U)) 
                                      | ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                << 1U)) 
                                         | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                   << 2U)) 
                                            | (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                             << 0x19U)) 
                             | ((0x7e000000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                >> 1U)) 
                                | ((0x1000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                  << 0x13U)) 
                                   | ((0xfffe00U & 
                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                        >> 2U)) | (
                                                   (0x100U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                       << 4U)) 
                                                   | ((0xfeU 
                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                            >> 3U)))))))))) 
            << 7U) | (QData)((IData)(((0x70U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                << 3U)) 
                                      | ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                << 1U)) 
                                         | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                   << 2U)) 
                                            | (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt 
        = ((0x7ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)) 
           | ((0x8000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                          << 2U)) | (0x7800U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                                >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt 
        = ((0x7ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)) 
           | ((0x8000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                          << 7U)) | (0x7800U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                                << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt 
        = ((0xfe7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)) 
           | (0x180U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                        << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt 
        = ((0xfe7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)) 
           | (0x180U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                        << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt 
        = ((0xfffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)) 
           | ((2U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 2U)) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt 
        = ((0xfffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)) 
           | ((2U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 1U)) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt 
        = ((0xff83U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)) 
           | (0x7cU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                       >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt 
        = ((0xff83U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)) 
           | (0x7cU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                       << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt 
        = ((0xf9ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)) 
           | (0x600U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                        << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt 
        = ((0xf9ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)) 
           | (0x600U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                        << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
           | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
        = ((0x1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U]) 
           | (0x200U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
        = ((0xfffc7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
           | (0x38000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U]) 
           | (0xfff00000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
        = ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U]) 
           | (0x1ffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4 
        = (1U & (IData)(((((0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])) 
                           | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U]))) 
                          | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U]))) 
                         | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd 
        = (0x1fU & ((0x10000000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])
                     ? ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                         << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                   >> 0x1eU)) : ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                    >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                    << 0x1eU) | (QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                     << 0xaU) 
                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                        << 0x1eU) | (QData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                         << 0xaU) 
                                                        | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))) 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                        << 0x1eU) | (QData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                         << 0xaU) 
                                                        | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
        = (0xffffU & (((IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                                  << 0xaU) 
                                                                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout))))))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                                     << 0xaU) 
                                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout)))))) 
                                             >> 0x20U)) 
                                    << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_fifo_ready 
        = (1U & (~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_full_spec_bus) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_bus)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dec_tlu_stall_dma_bus))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rpend 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout) 
            << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout) 
                       << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
                                  << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_data_vldff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_data_vldff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_data_vldff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_data_vldff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_data_vldff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_data_vldff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_data_vldff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_data_vldff__dout) 
                                               << 4U)))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__logic_sel 
        = ((6U & ((0xfffeU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                              >> 0x10U)) | (0x1fffeU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                               >> 0xfU)))) 
           | (IData)((0U != (0x30000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__logic_sel 
        = ((6U & ((0xfffeU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                              >> 0x10U)) | (0x1fffeU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                               >> 0xfU)))) 
           | (IData)((0U != (0x30000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout) 
           | (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0xc0000000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0x10000000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1bU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | ((2U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                     << 1U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7eU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                    ^ VL_REDXOR_32((0x56aaad5bU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7dU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 1U) ^ VL_REDXOR_32((0x9b33366dU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7bU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 2U) ^ VL_REDXOR_32((0xe3c3c78eU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x77U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 3U) ^ VL_REDXOR_32((0x3fc07f0U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x6fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 4U) ^ VL_REDXOR_32((0x3fff800U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x5fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 5U) ^ VL_REDXOR_32((0xfc000000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3) 
                        ^ VL_REDXOR_8(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3)) 
                       << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7eU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                    ^ VL_REDXOR_32((0x56aaad5bU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7dU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 1U) ^ VL_REDXOR_32((0x9b33366dU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7bU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 2U) ^ VL_REDXOR_32((0xe3c3c78eU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x77U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 3U) ^ VL_REDXOR_32((0x3fc07f0U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x6fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 4U) ^ VL_REDXOR_32((0x3fff800U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x5fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 5U) ^ VL_REDXOR_32((0xfc000000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3) 
                        ^ VL_REDXOR_8(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3)) 
                       << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval 
        = (0xfU & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                       >> 3U)))) | 
                     ((- (IData)((IData)((4U == (0xcU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                      & (7U | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                     << 3U))))) | (
                                                   (- (IData)((IData)(
                                                                      (2U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                                   & (3U 
                                                      | (0xcU 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                            << 2U))))) 
                   | ((- (IData)((IData)((1U == (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                      & (1U | (0xeU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                       << 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2 
        = (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
               & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                             >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
              << 3U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                          & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                        >> 0x11U)) 
                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                         << 2U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                     & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                                   >> 0x11U)) 
                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                                    << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                              & ((0x1ffU 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                     >> 0x11U)) 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2)))))) 
            & (~ ((- (IData)((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                       >> 2U))))) & 
                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                   >> 9U)))) & (- (IData)((IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2 
        = (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
               & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                             >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
              << 3U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                          & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                        >> 0x11U)) 
                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                         << 2U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                     & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                                   >> 0x11U)) 
                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                                    << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                              & ((0x1ffU 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                     >> 0x11U)) 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2)))))) 
            & (~ ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                    >> 2U)))) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                 >> 9U)))) 
           & (- (IData)((IData)((1U == (3U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_byteenff__dout) 
               << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_byteenff__dout) 
                            << 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_byteenff__dout) 
                                       << 4U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_byteenff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_byteenff__dout) 
               << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_byteenff__dout) 
                             << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_byteenff__dout) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_byteenff__dout) 
                                             << 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_errorff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_errorff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_errorff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_errorff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_errorff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_errorff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_errorff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_errorff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nbff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nbff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nbff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nbff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nbff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nbff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nbff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nbff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr 
        = ((((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)) 
            | ((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off))) 
           | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr 
        = ((((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)) 
            | ((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off))) 
           | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                  >> 4U) | (0U != (0x38000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren 
        = (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
            << 2U) | (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                       << 1U) | (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))
                     ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                       >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff))
                     ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                   >> 1U))) : (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                       >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                    >> 2U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                    >> 3U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                      ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                    >> 4U))) : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 5U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 6U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 7U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                         ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 8U))) : (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 9U))) : (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                          ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0xdU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                      >> 0xdU))) << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0xeU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                      >> 0xeU))) << 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0xfU)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                      >> 0xfU))) << 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                           ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0x10U)))
                           : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                      >> 0x10U))) << 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x11U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x12U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x13U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                            ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x14U)))
                            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0x15U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0x16U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0x17U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0x18U)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x19U)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x1aU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x1bU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                              ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x1cU)))
                              : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0x1dU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0x1eU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                               ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0x1fU)))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_read_data_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_bus_data_dc3);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
        = ((0xffffffc0U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]) 
           | (((0x20U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                         >> 2U)) | ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                                    | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                             << 2U)))) 
              | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                        << 2U)) | ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                          >> 3U))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
        = ((0xfffff03fU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
           | (0xffffffc0U & (((0x800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 4U)) | 
                              ((0x400U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                          << 6U)) | 
                               (0x200U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                          << 8U)))) 
                             | ((0x100U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                           << 8U)) 
                                | ((0x80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                             << 5U)) 
                                   | (0x40U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                               << 3U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
        = ((0xfffc0fffU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
           | (0xfffff000U & (((0x20000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                           << 0xaU)) 
                              | ((0x10000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                              << 0xcU)) 
                                 | (0x8000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                               << 0xeU)))) 
                             | ((0x4000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                            << 0xeU)) 
                                | ((0x2000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                               << 0xbU)) 
                                   | (0x1000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                 << 9U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
        = ((0x3ffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
           | (0xfc0000U & (((0x800000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                          << 0x10U)) 
                            | ((0x400000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                             << 0x12U)) 
                               | (0x200000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                               << 0x14U)))) 
                           | ((0x100000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 0x14U)) 
                              | ((0x80000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                              << 0x11U)) 
                                 | (0x40000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                << 0xfU)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
        = ((0x3fU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
              << 6U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
        = ((0xffffffc0U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
              >> 0x1aU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
        = ((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
              << 0xcU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
        = ((0xfffff000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
              >> 0x14U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
        = ((0x3ffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
              << 0x12U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
        = ((0xfc0000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
           | (0xffffffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                           >> 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xffffffff00000000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
           | (IData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_ageff__dout) 
                               << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_ageff__dout) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_ageff__dout) 
                                                << 8U) 
                                               | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_ageff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
           | ((QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_ageff__dout) 
                                << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_ageff__dout) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_ageff__dout) 
                                                 << 8U) 
                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_ageff__dout)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain 
        = ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                  >> 3U)) | ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                    >> 4U)) | (1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d 
        = (IData)((0ULL != (0x900000000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data 
        = ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                  >> 4U)) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    >> 5U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   >> 6U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                     >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_store 
        = ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                  << 2U)) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    << 1U)) | ((2U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                     >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled 
        = ((8U & (((0x1ffffff8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                   >> 3U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                              << 3U)) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
           | ((4U & (((0xffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                     >> 4U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                                << 2U)) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                        >> 1U))) | ((2U & (((0x7fffffeU 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                >> 5U)) 
                                            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                               << 1U)) 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                              >> 2U))) 
                                    | (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 6U) 
                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3) 
            << 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid 
        = (IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U] 
                    >> 3U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r 
        = ((0x7c00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                       >> 5U)) | ((0x3e0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                              >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp_raw 
        = (((QData)((IData)((((IData)((((0U != (0x44U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
                                        | (0x10U == 
                                           (0x2000010U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                       | (0x10U == 
                                          (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((((((((((((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x6004U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                           | (IData)(
                                                                     (0x800U 
                                                                      == 
                                                                      (0x2804U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                          | (IData)(
                                                                    (0x82000U 
                                                                     == 
                                                                     (0x82004U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                         | (IData)(
                                                                   (0x400U 
                                                                    == 
                                                                    (0x2404U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                        | (IData)(
                                                                  (0x42000U 
                                                                   == 
                                                                   (0x42004U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                       | (IData)(
                                                                 (0x200U 
                                                                  == 
                                                                  (0x2204U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                      | (IData)(
                                                                (0x22000U 
                                                                 == 
                                                                 (0x22004U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                     | (IData)(
                                                               (0x100U 
                                                                == 
                                                                (0x2104U 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                    | (IData)(
                                                              (0x12000U 
                                                               == 
                                                               (0x12004U 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x2084U 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                  | (IData)(
                                                            (0xa000U 
                                                             == 
                                                             (0xa004U 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                 | (IData)(
                                                           (0U 
                                                            == 
                                                            (0x18U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x44U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (((IData)(
                                                           (0x20U 
                                                            == 
                                                            (0x34U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x64U 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (((((IData)(
                                                                (4U 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                        | (IData)(
                                                                  (0x2010U 
                                                                   == 
                                                                   (0x2034U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                       | (IData)(
                                                                 (0x50U 
                                                                  == 
                                                                  (0x3050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                      | (IData)(
                                                                (0x10U 
                                                                 == 
                                                                 (0x1034U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x24U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                          | (IData)(
                                                                    (0x24U 
                                                                     == 
                                                                     (0x24U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                         << 0x1bU) 
                                                        | (0xf8000000U 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                              << 0x17U)))) 
                                                    | (((IData)(
                                                                (0x1010U 
                                                                 == 
                                                                 (0x3034U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                        << 0x1aU) 
                                                       | ((0x2000000U 
                                                           & (((IData)(
                                                                       (0x28U 
                                                                        == 
                                                                        (0x28U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                               | (IData)(
                                                                         (0x14U 
                                                                          == 
                                                                          (0x14U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (((IData)(
                                                                          (4U 
                                                                           == 
                                                                           (0x2cU 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                  | (IData)(
                                                                            (0x28U 
                                                                             == 
                                                                             (0x28U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                 << 0x18U)) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          == 
                                                                          (0x34U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                 << 0x17U) 
                                                                | (((IData)(
                                                                            (0x20U 
                                                                             == 
                                                                             (0x70U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                    << 0x16U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                       << 0x15U) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x7030U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                               | (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x2cU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                              | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x42007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (((((IData)(
                                                                                (0x40000030U 
                                                                                == 
                                                                                (0x40001074U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x2006054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x6034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(
                                                                                (0x7000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x7000U 
                                                                                == 
                                                                                (0x2007044U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((((((((((IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x48U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x6010U 
                                                                                == 
                                                                                (0x2007014U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0xd0U 
                                                                                == 
                                                                                (0xd0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x150U 
                                                                                == 
                                                                                (0x150U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x250U 
                                                                                == 
                                                                                (0x250U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x450U 
                                                                                == 
                                                                                (0x450U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x850U 
                                                                                == 
                                                                                (0x850U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(
                                                                                (0x4010U 
                                                                                == 
                                                                                (0x2007014U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x4010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(
                                                                                (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0x5010U 
                                                                                == 
                                                                                (0x42007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x2006054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x6034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x2040U 
                                                                                == 
                                                                                (0x2054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x4000U 
                                                                                == 
                                                                                (0x4030U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x2007044U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x2005020U 
                                                                                == 
                                                                                (0x2005064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x5054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0x1040U 
                                                                                == 
                                                                                (0x5054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0x5020U 
                                                                                == 
                                                                                (0x5034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x4020U 
                                                                                == 
                                                                                (0x5034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x44U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x1054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((((((IData)(
                                                                                (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0xd0U 
                                                                                == 
                                                                                (0xd0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x150U 
                                                                                == 
                                                                                (0x150U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x250U 
                                                                                == 
                                                                                (0x250U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x450U 
                                                                                == 
                                                                                (0x450U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x850U 
                                                                                == 
                                                                                (0x850U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((((IData)(
                                                                                (0xb050U 
                                                                                == 
                                                                                (0xb050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x13050U 
                                                                                == 
                                                                                (0x13050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x23050U 
                                                                                == 
                                                                                (0x23050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x43050U 
                                                                                == 
                                                                                (0x43050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x83050U 
                                                                                == 
                                                                                (0x83050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))))))))))))))))))))))))))))))))))))) 
            << 0x12U) | (QData)((IData)(((0x20000U 
                                          & ((((((IData)(
                                                         (0x8050U 
                                                          == 
                                                          (0x9050U 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                 | (IData)(
                                                           (0x10050U 
                                                            == 
                                                            (0x11050U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                | (IData)(
                                                          (0x20050U 
                                                           == 
                                                           (0x21050U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                               | (IData)(
                                                         (0x40050U 
                                                          == 
                                                          (0x41050U 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                              | (IData)(
                                                        (0x80050U 
                                                         == 
                                                         (0x81050U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                             << 0x11U)) 
                                         | (((IData)(
                                                     (0x1050U 
                                                      == 
                                                      (0x3050U 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                             << 0x10U) 
                                            | ((0x8000U 
                                                & (((((((IData)(
                                                                (0x4050U 
                                                                 == 
                                                                 (0x6050U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                        | (IData)(
                                                                  (0xc050U 
                                                                   == 
                                                                   (0xc050U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                       | (IData)(
                                                                 (0x14050U 
                                                                  == 
                                                                  (0x14050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                      | (IData)(
                                                                (0x24050U 
                                                                 == 
                                                                 (0x24050U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                     | (IData)(
                                                               (0x44050U 
                                                                == 
                                                                (0x44050U 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                    | (IData)(
                                                              (0x84050U 
                                                               == 
                                                               (0x84050U 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & (((((((((((((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x28U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                 | (IData)(
                                                                           (0x2004020U 
                                                                            == 
                                                                            (0x2004064U 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                | (IData)(
                                                                          (0xd0U 
                                                                           == 
                                                                           (0x20d0U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                               | (IData)(
                                                                         (0x150U 
                                                                          == 
                                                                          (0x2150U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                              | (IData)(
                                                                        (0x250U 
                                                                         == 
                                                                         (0x2250U 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                             | (IData)(
                                                                       (0x450U 
                                                                        == 
                                                                        (0x2450U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                            | (IData)(
                                                                      (0x850U 
                                                                       == 
                                                                       (0x2850U 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                           | (IData)(
                                                                     (0xa050U 
                                                                      == 
                                                                      (0xa050U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                          | (IData)(
                                                                    (0x12050U 
                                                                     == 
                                                                     (0x12050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                         | (IData)(
                                                                   (0x22050U 
                                                                    == 
                                                                    (0x22050U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                        | (IData)(
                                                                  (0x42050U 
                                                                   == 
                                                                   (0x42050U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                       | (IData)(
                                                                 (0x82050U 
                                                                  == 
                                                                  (0x82050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                      << 0xeU)) 
                                                  | ((0x2000U 
                                                      & ((((((((((((((IData)(
                                                                             (0x1008U 
                                                                              == 
                                                                              (0x1028U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                     | (IData)(
                                                                               (0x50U 
                                                                                == 
                                                                                (0x403050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                    | (IData)(
                                                                              (0x2004020U 
                                                                               == 
                                                                               (0x2004064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                   | (IData)(
                                                                             (0xd0U 
                                                                              == 
                                                                              (0x20d0U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                  | (IData)(
                                                                            (0x150U 
                                                                             == 
                                                                             (0x2150U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                 | (IData)(
                                                                           (0x250U 
                                                                            == 
                                                                            (0x2250U 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                | (IData)(
                                                                          (0x450U 
                                                                           == 
                                                                           (0x2450U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                               | (IData)(
                                                                         (0x850U 
                                                                          == 
                                                                          (0x2850U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                              | (IData)(
                                                                        (0xa050U 
                                                                         == 
                                                                         (0xa050U 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                             | (IData)(
                                                                       (0x12050U 
                                                                        == 
                                                                        (0x12050U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                            | (IData)(
                                                                      (0x22050U 
                                                                       == 
                                                                       (0x22050U 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                           | (IData)(
                                                                     (0x42050U 
                                                                      == 
                                                                      (0x42050U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                          | (IData)(
                                                                    (0x82050U 
                                                                     == 
                                                                     (0x82050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                         << 0xdU)) 
                                                     | (((IData)(
                                                                 (0x100050U 
                                                                  == 
                                                                  (0x503050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                         << 0xcU) 
                                                        | (((IData)(
                                                                    (0x50U 
                                                                     == 
                                                                     (0x303050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                            << 0xbU) 
                                                           | (((IData)(
                                                                       (0x20000050U 
                                                                        == 
                                                                        (0x20003050U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                               << 0xaU) 
                                                              | (((IData)(
                                                                          (0x2000030U 
                                                                           == 
                                                                           (0x2004074U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                  << 9U) 
                                                                 | ((0x100U 
                                                                     & (((IData)(
                                                                                (0x2002030U 
                                                                                == 
                                                                                (0x2007074U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                         | (IData)(
                                                                                (0x2001010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                        << 8U)) 
                                                                    | (((IData)(
                                                                                (0x2001010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                        << 7U) 
                                                                       | (((IData)(
                                                                                (0x2000030U 
                                                                                == 
                                                                                (0x2007034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                           << 6U) 
                                                                          | (((IData)(
                                                                                (0x2004020U 
                                                                                == 
                                                                                (0x2004064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                              << 5U) 
                                                                             | (((IData)(
                                                                                (0x2006020U 
                                                                                == 
                                                                                (0x2006064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0x1008U 
                                                                                == 
                                                                                (0x1028U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((((IData)(
                                                                                (0x10400010U 
                                                                                == 
                                                                                (0x10403010U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x2000050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((((((((((((((((((((IData)(
                                                                                (0x30200073U 
                                                                                == 
                                                                                (0xffffcfffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
                                                                                | (IData)(
                                                                                (0x10500073U 
                                                                                == 
                                                                                (0xffffcfffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xffefcfbfU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0xfe00005bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0xbe00704fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0xbe00705bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xfc00007bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x4063U 
                                                                                == 
                                                                                (0x407fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x107bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x603fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xffffefffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xf00fffffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x207bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x505fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))) 
                                                                                | (IData)(
                                                                                (0x17U 
                                                                                == 
                                                                                (0x5fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0xfff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualtagff__dout) 
               << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualtagff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualtagff__dout) 
                                     << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualtagff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualtagff__dout) 
               << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualtagff__dout) 
                             << 0x12U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualtagff__dout) 
                                           << 0xfU) 
                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualtagff__dout) 
                                             << 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_samedwff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_samedwff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_samedwff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_samedwff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_samedwff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_samedwff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_samedwff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_samedwff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualhiff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualhiff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualhiff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualhiff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualhiff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualhiff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualhiff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualhiff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((0xf0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_writeff__dout) 
               << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_writeff__dout) 
                          << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_writeff__dout) 
                                     << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_writeff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_writeff__dout) 
               << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_writeff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_writeff__dout) 
                                     << 5U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_writeff__dout) 
                                               << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_imm 
        = ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 0x15U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_q) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rready_q));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_q) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bready_q));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                  >> 4U) | (0U != (0x38000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
        = (IData)(((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5)) 
                   << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc4ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_out 
        = ((0xfff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_out) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_state_ff__dout) 
               << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_state_ff__dout) 
                          << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_state_ff__dout) 
                                     << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_state_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_out 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_out) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_state_ff__dout) 
               << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_state_ff__dout) 
                             << 0x12U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_state_ff__dout) 
                                           << 0xfU) 
                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_state_ff__dout) 
                                             << 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
        = ((0x70000U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                            >> 0xbU)) << 0x10U)) | 
           ((0x780U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int)) 
            | ((0x40U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                             >> 6U)) << 6U)) | (0x3fU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3 
        = (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc5ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out 
        = ((vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelf->__PVT__gpio_module__DOT__in_muxed = ((vlSelf->__PVT__gpio_module__DOT__rgpio_eclk 
                                                  & vlSelf->__PVT__gpio_module__DOT__pextc_sampled) 
                                                 | ((~ vlSelf->__PVT__gpio_module__DOT__rgpio_eclk) 
                                                    & vlSelf->__PVT__gpio_module__DOT__ext_pad_s));
    vlSelf->__PVT__timer_ptc__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_hrc));
    vlSelf->__PVT__timer_ptc__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_lrc));
    vlSelf->__PVT__i_gpio = 0xfe340000U;
    vlSelf->__PVT__axi_intercon__DOT__masters_req[4U] 
        = (0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[4U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
        = (0xfe000000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[6U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[2U] 
        = (0x7fU & vlSelf->__PVT__axi_intercon__DOT__masters_req[2U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[3U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__masters_req[4U] 
        = (0xfffe0000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[4U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[2U] 
        = (0xffffffcfU & vlSelf->__PVT__axi_intercon__DOT__masters_req[2U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0U] 
        = (1U | vlSelf->__PVT__axi_intercon__DOT__masters_req[0U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
        = (0x2000000U | vlSelf->__PVT__axi_intercon__DOT__masters_req[6U]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = (0x40000U | vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU]);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[9U] 
        = (1U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data) 
                  << 9U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen) 
                             & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)))) 
                            << 1U)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xaU] 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data) 
            >> 0x17U) | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data 
                                  >> 0x20U)) << 9U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0xfffffe00U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data 
                       >> 0x20U)) >> 0x17U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0x7ffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                 ? 0U : 0xfU) << 0x1cU) | (0x1e0000U 
                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                              >> 0xbU))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
        = (2U | (((0x7f8U & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0xbU) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                     : 3U)))))) 
                             << 3U)) | (0x7ffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                    ? 0U
                                                    : 0xfU) 
                                                  >> 4U))) 
                 | (0xfffff800U & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                  : 
                                                                 (0xfffffff8U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                << 0xbU) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                   ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                   : 3U)))))) 
                                   << 3U))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfffc0000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | ((((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                          << 0x2bU) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0xbU) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                     : 3U)))))) 
                >> 0x1dU) | (0x7f8U & ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                       : 
                                                                      (0xfffffff8U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                        ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                        : 3U))))) 
                                                >> 0x20U)) 
                                       << 3U))) | (0xfffff800U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                                 << 0x2bU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                                 : 
                                                                                (0xfffffff8U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                                    << 0xbU) 
                                                                   | (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                                 ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                                 : 3U))))) 
                                                               >> 0x20U)) 
                                                      << 3U))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
        = ((0xfffffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[6U]) 
           | (0xf0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
        = (0x1000U | (((0xfffc000U & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                     ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                     : 
                                                                    (0xfffffff8U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                   << 0xbU) 
                                                  | (QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                      : 3U)))))) 
                                      << 0xeU)) | (0xfffff80U 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                        ? 0U
                                                        : 0xfU) 
                                                      << 7U))) 
                      | (0xf0000000U & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                       : 
                                                                      (0xfffffff8U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                        ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                        : 3U)))))) 
                                        << 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
        = ((0xe0000000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[8U]) 
           | ((((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                          << 0x2bU) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0xbU) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                     : 3U)))))) 
                >> 0x12U) | (0xfffc000U & ((IData)(
                                                   ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                           ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                           : 
                                                                          (0xfffffff8U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                         << 0xbU) 
                                                        | (QData)((IData)(
                                                                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                            : 3U))))) 
                                                    >> 0x20U)) 
                                           << 0xeU))) 
              | (0xf0000000U & ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                : 
                                                               (0xfffffff8U 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                 ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                 : 3U))))) 
                                         >> 0x20U)) 
                                << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1)) 
            << 0x33U) | (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0)) 
                          << 0x13U) | (QData)((IData)(
                                                      ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                        << 2U) 
                                                       | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = (0x1fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = (0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = (2U | (0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xfffff8ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
              << 8U));
    vlSelf->__PVT__spi__DOT__rfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__spi__DOT__rfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_in 
        = ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((0xf00c3000U == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask 
        = (((7U == (7U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
            << 7U) | (((6U == (7U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                       << 6U) | (((5U == (7U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                  << 5U) | (((4U == 
                                              (7U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                             << 4U) 
                                            | (((3U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                << 3U) 
                                               | (((2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        }
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                } else {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                }
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
            }
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 1U;
                }
            }
        }
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 1U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 1U;
                } else {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                }
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
            }
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
        }
    }
    vlSelf->__PVT__gpio_module__DOT__in_lach = (((~ vlSelf->__PVT__gpio_module__DOT__rgpio_nec) 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->__PVT__gpio_module__DOT__clk_s) 
                                                               & (~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r)))))) 
                                                | (vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
                                                   & (- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_s)) 
                                                                 & (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff 
        = ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
           | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                              >> 8U) | (IData)((8U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout))))) 
                            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                            >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                  >> 6U) & (~ (IData)((0U != (0x1c0U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))))));
    vlSelf->__PVT__uart16550_0__DOT__re_o = ((((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
                                               & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
                                              & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
                                             & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                              >> 1U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                           >> 0xaU)))) 
                 & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
            << 7U) | (IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
                              >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
            << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
                         >> 0x19U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
            << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
                          >> 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xf0000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
               >> 0xbU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
                                    >> 0x20U)) << 0x15U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
            >> 4U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                               >> 0x20U)) << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = (((0xffffff8U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                           << 3U)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      >> 4U)) | (0xf0000000U 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                                                    << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = (((0xffffc00U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                           << 0xaU)) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                                         >> 0x1dU) 
                                        | (0xffffff8U 
                                           & ((IData)(
                                                      (vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
                                                       >> 0x20U)) 
                                              << 3U)))) 
           | (0xf0000000U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                             << 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = (((0xffe0000U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                           << 0x11U)) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                                          >> 0x16U) 
                                         | (0xffffc00U 
                                            & ((IData)(
                                                       (vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
                                                        >> 0x20U)) 
                                               << 0xaU)))) 
           | (0xf0000000U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                             << 0x11U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[9U] 
        = (0xffffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                         >> 0xfU) | (0xffe0000U & ((IData)(
                                                           (vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
                                                            >> 0x20U)) 
                                                   << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
        = (0x7fffffffU & (((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                               >> 3U)))) 
                             & ((IData)(3U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                            | ((- (IData)((IData)((4U 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                               & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                           | ((- (IData)((IData)((2U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                              & ((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                          | ((- (IData)((IData)((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                             & ((IData)(2U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl0 
        = (IData)((0x5400000U == (0x5700000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl1 
        = (IData)((0x4700000U == (0x4700000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb0 
        = (IData)((0x5100000U == (0x7500000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb1 
        = (IData)((0x5600000U == (0x5700000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt0 
        = (IData)((0x5200000U == (0x7700000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt1 
        = (IData)((0x4500000U == (0x4700000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = (((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            | (6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           | (7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
        = (0x7fffffffU & (IData)(((((((0x1fffffffeULL 
                                       & ((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                                         >> 3U)))))) 
                                          << 1U)) | 
                                      ((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                                      >> 3U)))))) 
                                       >> 0x1fU)) & 
                                     ((0x1ffffffffULL 
                                       & (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))))) 
                                      | ((QData)((IData)(
                                                         (0x7fffffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
                                         >> 0x1fU))) 
                                    | (((0x1fffffffeULL 
                                         & ((QData)((IData)(
                                                            (- (IData)((IData)(
                                                                               (4U 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                            << 1U)) 
                                        | ((QData)((IData)(
                                                           (- (IData)((IData)(
                                                                              (4U 
                                                                               == 
                                                                               (0xcU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                           >> 0x1fU)) 
                                       & ((0x1ffffffffULL 
                                           & (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & ((IData)(2U) 
                                                                 + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))))) 
                                          | ((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                                             >> 0x1fU)))) 
                                   | (((0x1fffffffeULL 
                                        & ((QData)((IData)(
                                                           (- (IData)((IData)(
                                                                              (2U 
                                                                               == 
                                                                               (6U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                           << 1U)) 
                                       | ((QData)((IData)(
                                                          (- (IData)((IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                          >> 0x1fU)) 
                                      & ((0x1ffffffffULL 
                                          & (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                                         | ((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))) 
                                            >> 0x1fU)))) 
                                  | (((0x1fffffffeULL 
                                       & ((QData)((IData)(
                                                          (- (IData)((IData)(
                                                                             (1U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                          << 1U)) | 
                                      ((QData)((IData)(
                                                       (- (IData)((IData)(
                                                                          (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))))) 
                                       >> 0x1fU)) & 
                                     ((0x1ffffffffULL 
                                       & (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))))) 
                                      | ((QData)((IData)(
                                                         (0x7fffffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))) 
                                         >> 0x1fU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
        = ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc4)) 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                        << 3U)));
    __Vtemp_h39a53b52__0[1U] = (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                   >> 3U)))) 
                                 & ((((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                     << 0x1eU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (0x7fffffffU 
                                                                             & ((IData)(2U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
                                                            << 0x1fU) 
                                                           | (QData)((IData)(
                                                                             (0x7fffffffU 
                                                                              & ((IData)(3U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))))) 
                                                          >> 0x20U)))) 
                                | ((- (IData)((IData)(
                                                      (4U 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                   & ((((IData)(1U) 
                                        + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                       << 0x1eU) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (0x7fffffffU 
                                                                               & ((IData)(2U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
                                                              << 0x1fU) 
                                                             | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                                                            >> 0x20U)))));
    __Vtemp_hebfed785__0[0U] = ((((- (IData)((1U & 
                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                               >> 3U)))) 
                                  & (IData)((((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               (0x7fffffffU 
                                                                & ((IData)(3U) 
                                                                   + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))))))) 
                                 | ((- (IData)((IData)(
                                                       (4U 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                    & (IData)((((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & ((IData)(2U) 
                                                                    + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))))) 
                                | ((- (IData)((IData)(
                                                      (2U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                   & (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & ((IData)(1U) 
                                                                    + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))))))));
    __Vtemp_h1529f235__0[1U] = ((__Vtemp_h39a53b52__0[1U] 
                                 | ((- (IData)((IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                    & ((((IData)(1U) 
                                         + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                        << 0x1eU) | (IData)(
                                                            ((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                                                               << 0x1fU) 
                                                              | (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))))) 
                                                             >> 0x20U))))) 
                                | ((- (IData)((IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                   & ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout 
                                       << 0x1eU) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (0x7fffffffU 
                                                                               & ((IData)(1U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))) 
                                                              << 0x1fU) 
                                                             | (QData)((IData)(
                                                                               (0x7fffffffU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))))) 
                                                            >> 0x20U)))));
    __Vtemp_h1529f235__0[2U] = ((0x1fffffffU & ((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                                 >> 3U)))) 
                                                  & (((IData)(1U) 
                                                      + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                                     >> 2U)) 
                                                 | ((- (IData)((IData)(
                                                                       (4U 
                                                                        == 
                                                                        (0xcU 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                                    & (((IData)(1U) 
                                                        + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                                       >> 2U))) 
                                                | ((- (IData)((IData)(
                                                                      (2U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                                   & (((IData)(1U) 
                                                       + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                                      >> 2U)))) 
                                | ((- (IData)((IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))))) 
                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout 
                                      >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
        = (0x7fffffffU & ((__Vtemp_h1529f235__0[2U] 
                           << 2U) | (__Vtemp_h1529f235__0[1U] 
                                     >> 0x1eU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
            << 2U) | (IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                              >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
            << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                       >> 0x1eU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
            << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                       >> 0x1cU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x1aU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
            >> 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                          << 0xaU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                               >> 0x20U)) 
                                      << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = (((0xffU & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                      >> 0x16U)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    >> 0x18U)) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                   << 0xcU) 
                                                  | ((0x300U 
                                                      & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                         >> 0x16U)) 
                                                     | ((IData)(
                                                                (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                                 >> 0x20U)) 
                                                        << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0xffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                      >> 0x14U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                            >> 0x20U)) 
                                   >> 0x16U))) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                   << 0xeU) 
                                                  | ((0xf00U 
                                                      & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                         >> 0x14U)) 
                                                     | ((IData)(
                                                                (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | ((0xffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                         >> 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                               >> 0x20U)) 
                                      >> 0x14U))) | 
              ((0x3f00U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                           >> 0x12U)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                  >> 0x20U)) 
                                         << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
            >> 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                          << 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
        = (((0xffffU & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                        >> 0xeU)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (
                                                   ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                    << 0x14U) 
                                                   | ((0x30000U 
                                                       & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                          >> 0xeU)) 
                                                      | ((IData)(
                                                                 (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                                  >> 0x20U)) 
                                                         << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
        = ((0xffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                        >> 0xcU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    >> 0xeU))) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                   << 0x16U) 
                                                  | ((0xf0000U 
                                                      & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                         >> 0xcU)) 
                                                     | ((IData)(
                                                                (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                 >> 0x20U)) 
                                                        << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | ((0xffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                           >> 0xaU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                >> 0x20U)) 
                                       >> 0xcU))) | 
              ((0x3f0000U & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                             >> 0xaU)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                   >> 0x20U)) 
                                          << 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
            >> 8U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                       << 0x1aU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
        = (((0xffffffU & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                          >> 6U)) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                              >> 0x20U)) 
                                     >> 8U)) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                 << 0x1cU) 
                                                | ((0x3000000U 
                                                    & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                       >> 6U)) 
                                                   | ((IData)(
                                                              (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                               >> 0x20U)) 
                                                      << 0x1aU))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
        = ((0xffffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                          >> 4U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    >> 6U))) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                 << 0x1eU) 
                                                | ((0xf000000U 
                                                    & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                       >> 4U)) 
                                                   | ((IData)(
                                                              (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                               >> 0x20U)) 
                                                      << 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
        = ((0xffffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                          >> 2U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                             >> 0x20U)) 
                                    >> 4U))) | ((0x3f000000U 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                    >> 2U)) 
                                                | ((IData)(
                                                           (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                            >> 0x20U)) 
                                                   << 0x1eU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2_delayed) 
           & (1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
        = ((0x1ffffff8U & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
              >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc4) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)) 
                    << 0x2aU) | (((QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)) 
                                  << 0x15U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)) 
                                   << 0x2aU) | (((QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
        = (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
           >> 1U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rvalid_ff 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rvalid_unq_ff) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local 
        = ((0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                     >> 0x1cU)) | (0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                                            >> 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync 
        = (1U & ((((((((IData)((0x41900000U == (0x41900000U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                       | (IData)((0x500000U == (0x83500000U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                      | (IData)((0U == (0x86500000U 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                     | (IData)((0x4100000U == (0xc300000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                    | (IData)((0x40100000U == (0x41900000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                   | (IData)((0x40400000U == (0x41400000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                  | (IData)((0x8000000U == (0x8ae00000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                 | (IData)((0x40200000U == (0x41a00000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__legal_csr 
        = (1U & ((((((((((((((((((((((((((IData)((0x30000000U 
                                                  == 
                                                  (0xffa00000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                         | (IData)(
                                                   (0xbc000000U 
                                                    == 
                                                    (0xbf700000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                        | (IData)((0xb0000000U 
                                                   == 
                                                   (0xf6100000U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                       | (IData)((0x7f000000U 
                                                  == 
                                                  (0xff600000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                      | (IData)((0x32400000U 
                                                 == 
                                                 (0xfe400000U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                     | (IData)((0x7d000000U 
                                                == 
                                                (0xfdd00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                    | (IData)((0x7a000000U 
                                               == (0xfee00000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                   | (IData)((0xb1100000U 
                                              == (0xbfd00000U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                  | (IData)((0x7d400000U 
                                             == (0xffc00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                 | (IData)((0xb1400000U 
                                            == (0xbff00000U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                | (IData)((0xb8800000U 
                                           == (0xfbc00000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                               | (IData)((0x7c800000U 
                                          == (0xffc00000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                              | (IData)((0x32300000U 
                                         == (0xfe300000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                             | (IData)((0xb8800000U 
                                        == (0xfbb00000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                            | (IData)((0xb1200000U 
                                       == (0xbfe00000U 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                           | (IData)((0x7d200000U == 
                                      (0xffa00000U 
                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                          | (IData)((0xb0400000U == 
                                     (0xf6400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                         | (IData)((0x7a000000U == 
                                    (0xffd00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                        | (IData)((0xb0200000U == (0xf6200000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                       | (IData)((0x7c000000U == (0xfe900000U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                      | (IData)((0x34000000U == (0xffc00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                     | (IData)((0x30000000U == (0xfbb00000U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                    | (IData)((0x32800000U == (0xfe800000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                   | (IData)((0xb0800000U == (0xf6800000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                  | (IData)((0x33000000U == (0xff000000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                 | (IData)((0xb1000000U == (0xf7000000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))));
}
