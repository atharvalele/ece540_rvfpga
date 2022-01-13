// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__12(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__12\n"); );
    // Body
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
            << 0x14U) | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
            >> 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x14U));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
            >> 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                        << 0x14U));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
            << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0xcU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
            >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                         << 8U));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
            >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         << 8U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])
            ? (((QData)((IData)(vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])) 
                << 0x28U) | (((QData)((IData)(vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])) 
                                        >> 0x18U)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff_in 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
           & (~ ((((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
                  & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                     >> 0x12U)) & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
        = ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
            ? ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                ? 0U : ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                         ? 0U : ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                  ? 0U : 9U))) : ((4U 
                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 8U
                                                     : 
                                                    ((IData)(
                                                             (0xa000000U 
                                                              == 
                                                              (0xa000000U 
                                                               & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])))
                                                      ? 8U
                                                      : 
                                                     ((0x8000000U 
                                                       & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])
                                                       ? 6U
                                                       : 5U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 4U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0)
                                                      ? 2U
                                                      : 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken 
        = (((((IData)(vlSelf->__PVT__sb_awvalid) | (IData)(vlSelf->__PVT__sb_wvalid)) 
             | (IData)(vlSelf->__PVT__sb_arvalid)) 
            | (0U != (0x1010000U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U]))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
              >> 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
        = ((((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                         & ((0x3fU >= (0x38U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                << 3U)))
                             ? ((((QData)((IData)(vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                  >> 0xcU))) 
                                >> (0x38U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                             << 3U)))
                             : 0ULL))) | (0xffffULL 
                                          & ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & ((0x3fU 
                                                 >= 
                                                 (0x30U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 ? 
                                                ((((QData)((IData)(
                                                                   vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                        >> 0xcU))) 
                                                 >> 
                                                 (0x30U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 : 0ULL)))) 
            | (0xffffffffULL & ((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                & ((0x3fU >= (0x20U 
                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                 << 3U)))
                                    ? ((((QData)((IData)(
                                                         vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                              >> 0xcU))) 
                                       >> (0x20U & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                            << 3U)))
                                    : 0ULL)))) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                  & (((QData)((IData)(
                                                                      vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                           >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlSelf->__PVT__lsu_awvalid) & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                  >> 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlSelf->__PVT__lsu_wvalid) & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                 >> 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                         >> 0x18U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                   & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                      >> 0x13U));
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                             >> 0x10U));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                    = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                       & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                          >> 0xbU));
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = ((IData)(vlSelf->__PVT__sb_wvalid) 
                       & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                          >> 0x19U));
            }
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                    ? ((IData)(vlSelf->__PVT__sb_awvalid) 
                       & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                          >> 0x1bU)) : (((IData)(vlSelf->__PVT__sb_awvalid) 
                                         & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                            >> 0x1bU)) 
                                        | ((IData)(vlSelf->__PVT__sb_wvalid) 
                                           & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                              >> 0x19U))));
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelf->__PVT__sb_arvalid) 
                   & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                      >> 0x1aU));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x13U)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x13U)));
        }
    } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
            = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                     | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                        >> 0x13U)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                     | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                        >> 0x13U)));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
            = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                 | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                     & (0xf000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                       >> 0xfU))) | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                      & (0xe400000000ULL 
                                         == (0x1fc00000000ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                        >> 0x14U))) 
               & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                          >> 0xcU))))));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
               & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                       >> 0xeU)))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
               | ((((2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                             ? (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                             : 0U)) & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                   & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & ((((~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                            >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
                       | (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en)))) 
              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                   ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                       ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                           ? (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 5U) : (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                        >> 7U)) : (IData)(
                                                          (0xa0U 
                                                           == 
                                                           (0xa0U 
                                                            & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))))
                   : (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      >> 6U)) | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)))) 
             & (~ ((((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                       & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
                      & (7U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))) 
                     & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 2U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                                          >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                          >> 0x11U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                       >> 1U)));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 2U);
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                    = (IData)((0U != (0x1010000U & 
                                      vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 8U);
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error 
                    = (1U & (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                               >> 0x10U) & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                            >> 0xbU)) 
                             | (IData)((0x1080000U 
                                        == (0x1080000U 
                                            & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])))));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 
                    = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                        & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                              >> 0x10U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error)));
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                    = (((IData)(vlSelf->__PVT__sb_awvalid) 
                        & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                           >> 0x1bU)) | ((IData)(vlSelf->__PVT__sb_arvalid) 
                                         & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                            >> 0x1aU)));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en 
                    = (((IData)(vlSelf->__PVT__sb_wvalid) 
                        & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                           >> 0x19U)) | ((IData)(vlSelf->__PVT__sb_arvalid) 
                                         & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                            >> 0x1aU)));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 7U);
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                    = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)));
            }
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                          >> 8U))) ? 8U
                             : 6U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((0U != (0x700U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                          | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((((((3U 
                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                               | (4U 
                                                  == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                              | (5U 
                                                 == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                             | (6U 
                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                            | (7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                           | (8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))))));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 8U);
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((IData)(((0U != (0x700U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                                     | (0U == (0xff020000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg))))
                             ? 8U : 4U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                           | (0U != (0x700U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg))) 
                          | (IData)((0U == (0xff020000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                           >> 9U) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                        >> 1U)))) ? 
                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)
                     ? 9U : (((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x18U)) & 
                              (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))
                              ? 5U : 3U)) : ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                              >> 0x1fU)
                                              ? 1U : 0U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                             >> 9U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                          | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                            >> 9U) 
                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                   & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)) 
                      | (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                   & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)));
        }
    } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
            = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                ? 0U : 2U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
            = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                      >> 9U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                >> 1U)));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
            = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                       >> 9U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                ? 2U : 1U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
            = (1U & (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                         >> 0x1fU) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 3U))) | 
                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                        >> 9U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                     & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                           >> 1U))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_cmd_beat_count 
        = (7U & (((6U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                  | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt))) 
                     & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt)) 
                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)))))) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                      << 0xeU) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                  >> 0x12U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      << 0x16U) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                   >> 0xaU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_in 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_rd_addr_count 
        = (7U & ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                      : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                  : (6U & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1 
        = (((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in;
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5;
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
                = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
                = (3U & ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                                   >> 0x11U))));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
                = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0;
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
                = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
                = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
                = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                         >> (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 1U))));
            vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 5U))) ? 0U : 
                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U))))) 
                   | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                      >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                   << 5U))));
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in 
            = (7U & (((0U < (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                      & (7U > (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))
                      : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)) 
             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent))) 
            | ((IData)(vlSelf->__PVT__lsu_arvalid) 
               & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                  >> 6U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))
            ? ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done)
                                            ? (((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | (0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U)))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))
                                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb))) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req)) 
                 & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                              | (0U != (0x1800U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                >> 7U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  ? (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_in 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_in 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = ((0x400U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                      << 9U)) | ((0x200U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                            << 9U)) 
                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                     << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                << 7U) 
                                               | (((((0x7fffffc0U 
                                                      & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                         >> 1U)) 
                                                     | (0x3ffffc0U 
                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 6U))) 
                                                    | (0xffffffc0U 
                                                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                       & (~ 
                                                          (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 1U))) 
                                                      << 6U)) 
                                                  | ((0x1fffffe0U 
                                                      & (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                            >> 3U) 
                                                           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 4U)) 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                            << 5U))) 
                                                     | ((0x10U 
                                                         & (((IData)(
                                                                     ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)))) 
                                                             << 4U) 
                                                            | (0xfffffff0U 
                                                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                     << 4U))))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                     >> 2U)) 
                                                                 | (IData)(
                                                                           (0x100U 
                                                                            == 
                                                                            (0x108U 
                                                                             & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken) 
            << 0x15U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
                          << 0x14U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
                                        << 0x13U) | 
                                       (((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                            << 0x11U) 
                                           | ((0x7fff0000U 
                                               & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                    << 0x10U) 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                      >> 1U)) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                     << 0x10U))) 
                                              | ((0x3fff8000U 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                      << 0xfU) 
                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 2U))) 
                                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                     << 0xeU) 
                                                    | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                         & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns))))) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                           << 0xcU) 
                                                          | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                                 & (~ 
                                                                    (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                     >> 0x11U))) 
                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                 << 0xaU) 
                                                                | (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                                                                     | ((- (IData)(
                                                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                                                                          << 4U) 
                                                                         | ((8U 
                                                                             & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U)) 
                                                                                << 3U))))) 
                                                                            | (((IData)(
                                                                                ((~ 
                                                                                (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 0x11U)) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__13(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__13\n"); );
    // Body
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
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[1U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[2U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[3U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[3U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[4U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[5U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[5U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0xfe000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0x7ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
               << 0x12U) | (0x3f800U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U] 
                                        >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                                        >> 0xeU)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                      >> 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[7U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0xfffc0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | (0x3ffffU & ((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU] 
                                         << 0xeU)) 
                          | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                             >> 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1eU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0xe0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U]) 
              | (0x1ffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
               << 0x1cU) | (0xffc0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                          >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                                        >> 4U)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | (0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                        >> 4U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0x1fffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
        = (0x3fffffU & ((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                                        << 0xeU)) | 
                        (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                         >> 0x12U)));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__dccm_bank__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 3U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__4__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 4U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__5__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 5U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__6__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 6U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__7__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 7U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 3U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 4U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 5U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 6U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 7U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 8U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 9U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xaU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xbU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xcU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xdU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xeU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xfU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 3U));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vrvfpgasim__ConstPool__TABLE_he971c88a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vrvfpgasim__ConstPool__TABLE_h470b5f0b_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vrvfpgasim__ConstPool__TABLE_h7fc80ddf_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vrvfpgasim__ConstPool__TABLE_hb8720013_0;

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__14(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__14\n"); );
    // Init
    CData/*4:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msr;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    SData/*9:0*/ __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    CData/*3:0*/ __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    CData/*4:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    CData/*0:0*/ __Vdly__wb_s2m_gpio_err;
    VlWide<3>/*95:0*/ __Vtemp_he3ed439b__0;
    VlWide<3>/*95:0*/ __Vtemp_hf50ab54b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b2831f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f8bbafa__0;
    VlWide<3>/*95:0*/ __Vtemp_h53877cb0__0;
    VlWide<3>/*95:0*/ __Vtemp_h563120bb__0;
    // Body
    __Vdly__uart16550_0__DOT__regs__DOT__msi_reset 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msi_reset;
    __Vdly__wb_s2m_gpio_err = vlSelf->__PVT__wb_s2m_gpio_err;
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r;
    __Vdly__uart16550_0__DOT__regs__DOT__msr = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl = vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl;
    vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl = vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t;
    __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__dlc 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc;
    vlSelf->__Vdly__gpio_module__DOT__rgpio_ints = vlSelf->__PVT__gpio_module__DOT__rgpio_ints;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_count = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msi_reset) {
            __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read) {
            __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)) 
                 | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition;
        __Vdly__wb_s2m_gpio_err = ((IData)(vlSelf->__PVT__gpio_module__DOT__wb_err) 
                                   & (~ (IData)(vlSelf->__PVT__wb_s2m_gpio_err)));
        vlSelf->__PVT__gpio_module__DOT__pextc_sampled 
            = vlSelf->__PVT__gpio_module__DOT__extc_in;
        vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__wb_s2m_gpio_dat = vlSelf->__PVT__gpio_module__DOT__wb_dat;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d = 0U;
        __Vdly__wb_s2m_gpio_err = 0U;
        vlSelf->__PVT__gpio_module__DOT__pextc_sampled = 0U;
        vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__wb_s2m_gpio_dat = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = (1U 
                                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)) 
                                                     | ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                                                        & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                                           | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5) 
                                                              & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5_d)))))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)) 
                 | ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                    & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6) 
                          & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6_d)))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7r 
            = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
               & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7) 
                     & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7_d)))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r 
            = (1U & ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                        | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                            >> 2U) & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4_d))))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r 
            = (1U & ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                        | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                           & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3_d))))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r 
            = (1U & ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                        | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                            >> 1U) & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2_d))))));
        vlSelf->__PVT__gpio_module__DOT__clk_r = vlSelf->__PVT__gpio_module__DOT__clk_s;
        vlSelf->__PVT__gpio_module__DOT__ext_pad_s 
            = vlSelf->__PVT__gpio_module__DOT__sync;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is 
            = vlSelf->__PVT__wb_m2s_io_we;
        vlSelf->__PVT__wb_s2m_gpio_ack = ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                                            & (~ (IData)(vlSelf->__PVT__wb_s2m_gpio_err))) 
                                           & (~ (IData)(vlSelf->__PVT__wb_s2m_gpio_ack))) 
                                          & (~ (IData)(vlSelf->__PVT__gpio_module__DOT__wb_err)));
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7r = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r = 0U;
        vlSelf->__PVT__gpio_module__DOT__clk_r = 0U;
        vlSelf->__PVT__gpio_module__DOT__ext_pad_s = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is = 0U;
        vlSelf->__PVT__wb_s2m_gpio_ack = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is) 
                     << 4U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
                                << 3U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))))));
    vlSelf->__PVT__wb_s2m_uart_ack = Vrvfpgasim__ConstPool__TABLE_he971c88a_0
        [__Vtableidx2];
    if ((2U & Vrvfpgasim__ConstPool__TABLE_h470b5f0b_0
         [__Vtableidx2])) {
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate 
            = Vrvfpgasim__ConstPool__TABLE_h7fc80ddf_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre 
        = Vrvfpgasim__ConstPool__TABLE_hb8720013_0[__Vtableidx2];
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr 
                = (3U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                         >> 6U));
        }
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xf0U & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msi_reset)
                 ? 0U : (0xfU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr) 
                                 | (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals))))));
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xfU & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
                   ? (1U & ((((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                              >> 3U) | (0xcU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                << 2U))) 
                            | (2U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                     >> 1U)))) : 0U) 
                 << 7U) | ((0x40U & (((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                       ? ((0xcU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                   >> 3U))))
                                       : 0U) << 5U)) 
                           | ((0x20U & (((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                          ? ((0xcU 
                                              & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                    >> 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      >> 3U))))
                                          : 0U) << 3U)) 
                              | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                            ? ((0xcU 
                                                & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                        >> 3U))))
                                            : 0U) << 1U))))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0r 
            = ((~ ((((1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
                     & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
                    & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse))) 
                   | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rx_reset))) 
               & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0r) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0) 
                     & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0_d)))));
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop) {
            __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
                     & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
                    & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 1U;
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (8U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_eclk 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (9U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        if ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 2U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl 
                = (0x1ffU & vlSelf->__PVT__wb_m2s_io_dat);
        } else if ((0x20U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
            vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl 
                = ((0x1bfU & (IData)(vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl)) 
                   | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)) 
                               | ((IData)(vlSelf->__PVT__timer_ptc__DOT__int_ptc) 
                                  << 6U))));
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl 
                = (3U & vlSelf->__PVT__wb_m2s_io_dat);
        } else if ((1U & (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl))) {
            vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl 
                = ((1U & (IData)(vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl)) 
                   | ((IData)((((IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl) 
                                >> 1U) | (IData)(vlSelf->__PVT__gpio_irq))) 
                      << 1U));
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
            = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read)) 
               & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int) 
                   & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_d))) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                        >> 3U))));
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
            = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read)) 
               & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int) 
                   & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_d))) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd) 
                     & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier))));
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
            = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
               & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int) 
                   & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_d))) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                        >> 2U))));
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd 
            = ((~ (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                    == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level)) 
                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read))) 
               & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int) 
                   & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_d))) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                     & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier))));
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
            = ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                   | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read) 
                      & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir))))) 
               & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int) 
                   & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_d))) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd) 
                     & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                        >> 1U))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r 
            = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
               & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                  | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun) 
                     & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1_d)))));
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        vlSelf->__PVT__o_gpio = ((vlSelf->__PVT__gpio_module__DOT__rgpio_out 
                                  & (~ vlSelf->__PVT__gpio_module__DOT__rgpio_aux)) 
                                 | (vlSelf->__PVT__gpio_module__DOT__aux_i 
                                    & vlSelf->__PVT__gpio_module__DOT__rgpio_aux));
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) {
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write))) {
            __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_value;
        } else if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc))))))
                           ? ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc) 
                                                - (IData)(1U))));
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (7U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vdly__gpio_module__DOT__rgpio_ints 
                = vlSelf->__PVT__wb_m2s_io_dat;
        } else if ((1U & (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl))) {
            vlSelf->__Vdly__gpio_module__DOT__rgpio_ints 
                = (vlSelf->__PVT__gpio_module__DOT__rgpio_ints 
                   | (((vlSelf->__PVT__gpio_module__DOT__in_muxed 
                        ^ vlSelf->__PVT__gpio_module__DOT__rgpio_in) 
                       & (~ (vlSelf->__PVT__gpio_module__DOT__in_muxed 
                             ^ vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig))) 
                      & vlSelf->__PVT__gpio_module__DOT__rgpio_inte));
        }
        vlSelf->__PVT__uart_rdt = (0xffU & ((4U & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__scratch)
                                                  : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                                  : 
                                                 (0xc0U 
                                                  | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                   ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                                   >> 3U))))));
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rx_reset) {
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
            __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
                __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr = 3U;
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0r = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_eclk = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_nec = 0U;
        vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl = 0U;
        vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_oe = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->__PVT__o_gpio = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__uart16550_0__DOT__regs__DOT__counter_t = 0x27fU;
        __Vdly__uart16550_0__DOT__regs__DOT__block_cnt = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__dlc = 0U;
        vlSelf->__Vdly__gpio_module__DOT__rgpio_ints = 0U;
        vlSelf->__PVT__uart_rdt = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    vlSelf->__PVT__wb_s2m_gpio_err = __Vdly__wb_s2m_gpio_err;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msi_reset 
        = __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t 
        = __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt 
        = __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r 
        = __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr 
        = __Vdly__uart16550_0__DOT__regs__DOT__msr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = 1U;
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d 
        = (0x1fffffU & ((IData)(1U) + vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)) 
                 | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)) 
                 | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4_d 
            = (1U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 2U));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3_d 
            = (1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2_d 
            = (1U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 1U));
        vlSelf->__PVT__gpio_module__DOT__clk_s = vlSelf->__PVT__gpio_module__DOT__sync_clk;
        vlSelf->__PVT__gpio_module__DOT__sync = vlSelf->__PVT__i_gpio;
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2_d = 0U;
        vlSelf->__PVT__gpio_module__DOT__clk_s = 0U;
        vlSelf->__PVT__gpio_module__DOT__sync = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
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
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & (IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o));
    vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals = 0xfU;
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (4U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
        }
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0;
        vlSelf->__PVT__timer_ptc__DOT__int_ptc = (((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                                                   | (IData)(vlSelf->__PVT__timer_ptc__DOT__hrc_match)) 
                                                  & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                     >> 5U));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1_d 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun;
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0_d = 0U;
        vlSelf->__PVT__timer_ptc__DOT__int_ptc = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_d = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1_d = 0U;
    }
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
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_out 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (5U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_aux 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
    } else {
        vlSelf->__PVT__gpio_module__DOT__rgpio_out = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_aux = 0U;
    }
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
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__start_dlc 
            = (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
                & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
               & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U));
        vlSelf->__PVT__gpio_module__DOT__rgpio_in = vlSelf->__PVT__gpio_module__DOT__in_muxed;
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (4U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        if (((IData)(((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                        >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
                      & (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__gpio_module__DOT__rgpio_inte 
                = vlSelf->__PVT__wb_m2s_io_dat;
        }
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir 
            = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
                ? 6U : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int)
                         ? 4U : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                                  ? 0xcU : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                                             ? 2U : 
                                            ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd)
                                              ? 0U : 1U)))));
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (7U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__scratch 
                = vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        }
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__start_dlc = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_in = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig = 0U;
        vlSelf->__PVT__gpio_module__DOT__rgpio_inte = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir = 1U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__scratch = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_he3ed439b__0[0U] = 0xeb72ac7bU;
    __Vtemp_he3ed439b__0[1U] = 0x2846ac7aU;
    __Vtemp_he3ed439b__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_hf50ab54b__0, __Vtemp_he3ed439b__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_hf50ab54b__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_hf50ab54b__0[0U] >> 0x1eU) | (__Vtemp_hf50ab54b__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_hf50ab54b__0[1U] 
                           >> 0x1eU) | (__Vtemp_hf50ab54b__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_h5b2831f5__0[0U] = 0xeb72ac7bU;
    __Vtemp_h5b2831f5__0[1U] = 0x2846ac7aU;
    __Vtemp_h5b2831f5__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_h3f8bbafa__0, __Vtemp_h5b2831f5__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_h3f8bbafa__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_h3f8bbafa__0[0U] >> 0x1eU) | (__Vtemp_h3f8bbafa__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_h3f8bbafa__0[1U] 
                           >> 0x1eU) | (__Vtemp_h3f8bbafa__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_h53877cb0__0[0U] = 0xeb72ac7bU;
    __Vtemp_h53877cb0__0[1U] = 0x2846ac7aU;
    __Vtemp_h53877cb0__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_h563120bb__0, __Vtemp_h53877cb0__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_h563120bb__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_h563120bb__0[0U] >> 0x1eU) | (__Vtemp_h563120bb__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_h563120bb__0[1U] 
                           >> 0x1eU) | (__Vtemp_h563120bb__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->io_data__out = ((((((((((((((((((((((((
                                                   ((((((((1U 
                                                           & (vlSelf->io_data__out__out32 
                                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)) 
                                                          | (2U 
                                                             & (vlSelf->io_data__out__out33 
                                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                         | (4U 
                                                            & (vlSelf->io_data__out__out34 
                                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                        | (8U 
                                                           & (vlSelf->io_data__out__out35 
                                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                       | (0x10U 
                                                          & (vlSelf->io_data__out__out36 
                                                             & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                      | (0x20U 
                                                         & (vlSelf->io_data__out__out37 
                                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                     | (0x40U 
                                                        & (vlSelf->io_data__out__out38 
                                                           & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                    | (0x80U 
                                                       & (vlSelf->io_data__out__out39 
                                                          & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                   | (0x100U 
                                                      & (vlSelf->io_data__out__out40 
                                                         & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                  | (0x200U 
                                                     & (vlSelf->io_data__out__out41 
                                                        & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                 | (0x400U 
                                                    & (vlSelf->io_data__out__out42 
                                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                | (0x800U 
                                                   & (vlSelf->io_data__out__out43 
                                                      & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                               | (0x1000U 
                                                  & (vlSelf->io_data__out__out44 
                                                     & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                              | (0x2000U 
                                                 & (vlSelf->io_data__out__out45 
                                                    & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                             | (0x4000U 
                                                & (vlSelf->io_data__out__out46 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                            | (0x8000U 
                                               & (vlSelf->io_data__out__out47 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                           | (0x10000U 
                                              & (vlSelf->io_data__out__out48 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                          | (0x20000U 
                                             & (vlSelf->io_data__out__out49 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                         | (0x40000U 
                                            & (vlSelf->io_data__out__out50 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                        | (0x80000U 
                                           & (vlSelf->io_data__out__out51 
                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                       | (0x100000U 
                                          & (vlSelf->io_data__out__out52 
                                             & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                      | (0x200000U 
                                         & (vlSelf->io_data__out__out53 
                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                     | (0x400000U & 
                                        (vlSelf->io_data__out__out54 
                                         & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                    | (0x800000U & 
                                       (vlSelf->io_data__out__out55 
                                        & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                   | (0x1000000U & 
                                      (vlSelf->io_data__out__out56 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                  | (0x2000000U & (vlSelf->io_data__out__out57 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                 | (0x4000000U & (vlSelf->io_data__out__out58 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                | (0x8000000U & (vlSelf->io_data__out__out59 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                               | (0x10000000U & (vlSelf->io_data__out__out60 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                              | (0x20000000U & (vlSelf->io_data__out__out61 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                             | (0x40000000U & (vlSelf->io_data__out__out62 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                            | (0x80000000U & (vlSelf->io_data__out__out63 
                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->__PVT__gpio_module__DOT__in_muxed = ((vlSelf->__PVT__gpio_module__DOT__rgpio_eclk 
                                                  & vlSelf->__PVT__gpio_module__DOT__pextc_sampled) 
                                                 | ((~ vlSelf->__PVT__gpio_module__DOT__rgpio_eclk) 
                                                    & vlSelf->__PVT__gpio_module__DOT__ext_pad_s));
    vlSelf->__PVT__gpio_module__DOT__in_lach = (((~ vlSelf->__PVT__gpio_module__DOT__rgpio_nec) 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->__PVT__gpio_module__DOT__clk_s) 
                                                               & (~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r)))))) 
                                                | (vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
                                                   & (- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_s)) 
                                                                 & (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r))))));
    vlSelf->__PVT__gpio_module__DOT__sync_clk = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                                 & (IData)(vlSelf->__PVT__gpio_module__DOT__clk_pad_i));
    vlSelf->__PVT__uart16550_0__DOT__re_o = ((((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
                                               & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
                                              & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
                                             & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 1U;
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (IData)((((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                    >> 2U) & (0U != (0x1eU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSelf->__PVT__gpio_module__DOT__extc_in = ((vlSelf->__PVT__gpio_module__DOT__in_lach 
                                                 & vlSelf->__PVT__gpio_module__DOT__ext_pad_s) 
                                                | ((~ vlSelf->__PVT__gpio_module__DOT__in_lach) 
                                                   & vlSelf->__PVT__gpio_module__DOT__pextc_sampled));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_pop 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rx_reset 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
               & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                 >> 1U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__24(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__24\n"); );
    // Body
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rready_q = 1U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bready_q = 1U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__dmi_reg_rdata = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rvalid_q 
            = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x10U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bvalid_q 
            = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x18U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arready_q 
            = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x1aU));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wready_q 
            = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x19U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awready_q 
            = (1U & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x1bU));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arvalid_q 
            = vlSelf->__PVT__sb_arvalid;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wvalid_q 
            = vlSelf->__PVT__sb_wvalid;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awvalid_q 
            = vlSelf->__PVT__sb_awvalid;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted 
            = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0x11U) & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout 
            = (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                   >> 0xcU) & (~ (IData)((0U != (7U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U)))))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                      & ((0x16U == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))) 
                         | (0x17U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                     | (0x18U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U))))) 
                    | (4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 0x22U))))) 
                   | (5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 0x22U))))))
                ? 1U : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))) 
                         & ((((~ ((0U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0x18U)) 
                                  | (2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0x18U)))) 
                              | (((3U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x14U))) 
                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                     >> 0x16U)) & (2U 
                                                   == 
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U)))) 
                             | ((2U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                              >> 0x14U))) 
                                & (IData)((0x20000U 
                                           == (0xff020000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg))))) 
                            | (IData)((0x40000U == 
                                       (0xff040000U 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))))
                         ? 2U : (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                    & ((0U != (3U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                    << 1U))))) 
                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                           >> 5U) & 
                                          (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xfU)))) 
                                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                       & (0U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                 >> 0x18U))) 
                                      & ((IData)(((0x1000U 
                                                   == 
                                                   (0xf000U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                         >> 5U))))) 
                                         | (0U != (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                      >> 0xdU)))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))
                                  ? 3U : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                            & (2U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                             >> 8U))))))
                                           ? 4U : (
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                                      >> 8U))))))
                                                    ? 5U
                                                    : 
                                                   (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                       & (2U 
                                                          == 
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                           >> 0x18U))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                                        >> 8U)))))) 
                                                     & ((IData)(
                                                                ((0x100000U 
                                                                  == 
                                                                  (0x700000U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                                                        | (IData)(
                                                                  ((0x200000U 
                                                                    == 
                                                                    (0x700000U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg))))))
                                                     ? 7U
                                                     : 
                                                    (7U 
                                                     & (((IData)(
                                                                 ((0x5800000000ULL 
                                                                   == 
                                                                   (0x1fc00000000ULL 
                                                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                     >> 0xaU))) 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                            >> 8U))
                                                         : 
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                         >> 8U)))))))));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q = 0U;
        vlSelf->__PVT__dmi_reg_rdata = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0xc0000U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset))) 
                           << 0x12U)) | (0x30000U & 
                                         ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))) 
                                          << 0x10U))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xffff8fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout) 
              << 0xcU));
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
        = ((0xff8fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout) 
               << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                             << 0x15U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout) 
                                          << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0xc0000000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0x10000000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1bU)));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
               | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                   & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                         >> 0xcU))) & ((IData)(((0x1000000000ULL 
                                                 == 
                                                 (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
                                       | (IData)(((0x1400000000ULL 
                                                   == 
                                                   (0x1fc00000000ULL 
                                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg) 
                                                     >> 1U))))));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)));
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = (((IData)(((0x20000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)) 
            | (IData)(((0x40000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                       & (0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))))) 
           | (IData)(((0x60000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                      & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata 
        = ((((- (IData)((0U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x14U))))) 
             & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                 << 0x18U) | ((0xff0000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                             << 8U)) 
                                 | (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg))))) 
            | ((- (IData)((1U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                        >> 0x14U))))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                   << 0x10U) | (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))) 
           | ((- (IData)((2U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                       >> 0x14U))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type 
        = ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x18U)) ? 2U : (0U == (0xfU & 
                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                              >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xfffff8ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                    >> 0x18U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
             : (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
           + ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                      >> 0x18U)) ? (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x14U))))
               : 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
        = ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x18U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
            : (0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local 
        = ((0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                     >> 0x1cU)) | (0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                                            >> 0x1cU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l)
            ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din)
            : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__25(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__25\n"); );
    // Init
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3;
    IData/*31:0*/ __Vdly__syscon__DOT__irq_timer_cnt;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_timer_en;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_edge;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_pol;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_timer;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_edge;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_pol;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_timer;
    IData/*31:0*/ __Vdly__nmi_vec;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_gpio_enable;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_ptc_enable;
    QData/*63:0*/ __Vdly__syscon__DOT__mtimecmp;
    QData/*63:0*/ __Vdly__syscon__DOT__mtime;
    CData/*0:0*/ __Vdly__wb_s2m_sys_ack;
    CData/*1:0*/ __Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*1:0*/ __Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0;
    // Body
    __Vdly__wb_s2m_sys_ack = vlSelf->__PVT__wb_s2m_sys_ack;
    vlSelf->__Vdly__axi2wb__DOT__arbiter = vlSelf->__PVT__axi2wb__DOT__arbiter;
    vlSelf->__Vdly__axi2wb__DOT__cs = vlSelf->__PVT__axi2wb__DOT__cs;
    vlSelf->__Vdly__spi2__DOT__clkcnt = vlSelf->__PVT__spi2__DOT__clkcnt;
    vlSelf->__Vdly__spi__DOT__clkcnt = vlSelf->__PVT__spi__DOT__clkcnt;
    vlSelf->__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__o_flash_sclk = vlSelf->__PVT__o_flash_sclk;
    vlSelf->__Vdly__spi__DOT__wfre = vlSelf->__PVT__spi__DOT__wfre;
    vlSelf->__Vdly__spi__DOT__treg = vlSelf->__PVT__spi__DOT__treg;
    vlSelf->__Vdly__spi__DOT__bcnt = vlSelf->__PVT__spi__DOT__bcnt;
    vlSelf->__Vdly__spi__DOT__state = vlSelf->__PVT__spi__DOT__state;
    vlSelf->__Vdly__o_accel_sclk = vlSelf->__PVT__o_accel_sclk;
    vlSelf->__Vdly__spi2__DOT__wfre = vlSelf->__PVT__spi2__DOT__wfre;
    vlSelf->__Vdly__spi2__DOT__treg = vlSelf->__PVT__spi2__DOT__treg;
    vlSelf->__Vdly__spi2__DOT__bcnt = vlSelf->__PVT__spi2__DOT__bcnt;
    vlSelf->__Vdly__spi2__DOT__state = vlSelf->__PVT__spi2__DOT__state;
    __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0 = 0U;
    __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0 = 0U;
    __Vdly__syscon__DOT__mtime = vlSelf->__PVT__syscon__DOT__mtime;
    __Vdly__syscon__DOT__mtimecmp = vlSelf->__PVT__syscon__DOT__mtimecmp;
    __Vdly__syscon__DOT__irq_ptc_enable = vlSelf->__PVT__syscon__DOT__irq_ptc_enable;
    __Vdly__syscon__DOT__irq_gpio_enable = vlSelf->__PVT__syscon__DOT__irq_gpio_enable;
    __Vdly__syscon__DOT__sw_irq3_timer = vlSelf->__PVT__syscon__DOT__sw_irq3_timer;
    __Vdly__syscon__DOT__sw_irq3_pol = vlSelf->__PVT__syscon__DOT__sw_irq3_pol;
    __Vdly__syscon__DOT__sw_irq3_edge = vlSelf->__PVT__syscon__DOT__sw_irq3_edge;
    __Vdly__syscon__DOT__sw_irq4_timer = vlSelf->__PVT__syscon__DOT__sw_irq4_timer;
    __Vdly__syscon__DOT__sw_irq4_pol = vlSelf->__PVT__syscon__DOT__sw_irq4_pol;
    __Vdly__syscon__DOT__sw_irq4_edge = vlSelf->__PVT__syscon__DOT__sw_irq4_edge;
    __Vdly__syscon__DOT__irq_timer_en = vlSelf->__PVT__syscon__DOT__irq_timer_en;
    __Vdly__syscon__DOT__irq_timer_cnt = vlSelf->__PVT__syscon__DOT__irq_timer_cnt;
    __Vdly__syscon__DOT__sw_irq3 = vlSelf->__PVT__syscon__DOT__sw_irq3;
    __Vdly__syscon__DOT__sw_irq4 = vlSelf->__PVT__syscon__DOT__sw_irq4;
    __Vdly__nmi_vec = vlSelf->__PVT__nmi_vec;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if ((1U & ((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
               | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))))) {
        vlSelf->__PVT__timer_ptc__DOT__pwm_pad_o = 0U;
    } else if (vlSelf->__PVT__timer_ptc__DOT__hrc_match) {
        vlSelf->__PVT__timer_ptc__DOT__pwm_pad_o = 1U;
    }
    vlSelf->__PVT__wb_s2m_spi_accel_ack = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                           & ((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                              & (~ (IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack))));
    vlSelf->__PVT__wb_s2m_spi_flash_ack = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                           & ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                              & (~ (IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack))));
    __Vdly__wb_s2m_sys_ack = (1U & (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 5U) & (~ (IData)(vlSelf->__PVT__wb_s2m_sys_ack))));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) {
        __Vdly__wb_s2m_sys_ack = 0U;
    }
    vlSelf->__Vdly__spi2__DOT__clkcnt = (0xfffU & (
                                                   (((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                                     >> 6U) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->__PVT__spi2__DOT__clkcnt)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->__PVT__spi2__DOT__state))))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__spi2__DOT__clkcnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                      ? 0xfffU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 0x7ffU
                                                        : 0x3ffU)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 0x1ffU
                                                        : 0xffU)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 0x7fU
                                                        : 0x3fU)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 7U
                                                        : 0x1fU))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 0xfU
                                                        : 3U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__spi2__DOT__espr))
                                                        ? 1U
                                                        : 0U))))));
    vlSelf->__Vdly__spi__DOT__clkcnt = (0xfffU & ((
                                                   ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                                    >> 6U) 
                                                   & ((0U 
                                                       != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)) 
                                                      & (0U 
                                                         != (IData)(vlSelf->__PVT__spi__DOT__state))))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__spi__DOT__clkcnt) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                     ? 0xfffU
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 0x7ffU
                                                       : 0x3ffU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 0x1ffU
                                                       : 0xffU)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 0x7fU
                                                       : 0x3fU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 7U
                                                       : 0x1fU))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 0xfU
                                                       : 3U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__spi__DOT__espr))
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->__PVT__spi2_irq = ((IData)(vlSelf->__PVT__spi2__DOT__spif) 
                               & ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                  >> 7U));
    vlSelf->__PVT__spi0_irq = ((IData)(vlSelf->__PVT__spi__DOT__spif) 
                               & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                  >> 7U));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err 
        = ((IData)(vlSelf->__PVT__wb_m2s_io_cyc) & 
           (~ (IData)((0U != (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)))));
    vlSelf->__PVT__spi2__DOT__wcol = ((~ ((~ ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                              >> 6U)) 
                                          | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) 
                                      & ((((IData)(vlSelf->__PVT__spi2__DOT__wfwe) 
                                           & (IData)(vlSelf->__PVT__spi2__DOT__wffull)) 
                                          | (IData)(vlSelf->__PVT__spi2__DOT__wcol)) 
                                         & (~ ((IData)(vlSelf->__PVT__spi2__DOT__wr_spsr) 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 6U)))));
    vlSelf->__PVT__spi__DOT__wcol = ((~ ((~ ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                             >> 6U)) 
                                         | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) 
                                     & ((((IData)(vlSelf->__PVT__spi__DOT__wfwe) 
                                          & (IData)(vlSelf->__PVT__spi__DOT__wffull)) 
                                         | (IData)(vlSelf->__PVT__spi__DOT__wcol)) 
                                        & (~ ((IData)(vlSelf->__PVT__spi__DOT__wr_spsr) 
                                              & (vlSelf->__PVT__wb_m2s_io_dat 
                                                 >> 6U)))));
    if (vlSelf->__PVT__spi2__DOT__wfwe) {
        vlSelf->__Vdlyvval__spi2__DOT__wfifo__DOT__mem__v0 
            = (0xffU & vlSelf->__PVT__wb_m2s_io_dat);
        vlSelf->__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__spi2__DOT__wfifo__DOT__mem__v0 
            = vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp;
    }
    if (vlSelf->__PVT__spi__DOT__wfwe) {
        vlSelf->__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0 
            = (0xffU & vlSelf->__PVT__wb_m2s_io_dat);
        vlSelf->__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0 
            = vlSelf->__PVT__spi__DOT__wfifo__DOT__wp;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp))) 
                  == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)) 
                 & (IData)(vlSelf->__PVT__spi2__DOT__wfwe))) {
                vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb = 1U;
            } else if (vlSelf->__PVT__spi2__DOT__wfre) {
                vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp))) 
                  == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)) 
                 & (IData)(vlSelf->__PVT__spi__DOT__wfwe))) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__gb = 1U;
            } else if (vlSelf->__PVT__spi__DOT__wfre) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__gb = 0U;
            }
        } else {
            vlSelf->__PVT__spi__DOT__wfifo__DOT__gb = 0U;
        }
        if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
              >> 1U) & (IData)(vlSelf->__PVT__io_arready))) {
            vlSelf->__PVT__io_rid = (0x3fU & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U]);
            vlSelf->__PVT__axi2wb__DOT__ar_req = 1U;
        } else if ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
                    & (IData)(vlSelf->__PVT__io_rvalid))) {
            vlSelf->__PVT__axi2wb__DOT__ar_req = 0U;
        }
    } else {
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
        vlSelf->__PVT__spi__DOT__wfifo__DOT__gb = 0U;
        vlSelf->__PVT__axi2wb__DOT__ar_req = 0U;
        vlSelf->__PVT__io_rid = 0U;
    }
    if ((4U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
        if ((2U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
            vlSelf->__PVT__spi2_rdt = 0U;
            vlSelf->__PVT__spi_rdt = 0U;
        } else if ((1U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
            vlSelf->__PVT__spi2_rdt = 0U;
            vlSelf->__PVT__spi_rdt = 0U;
        } else {
            vlSelf->__PVT__spi2_rdt = vlSelf->__PVT__spi2__DOT__ss_r;
            vlSelf->__PVT__spi_rdt = vlSelf->__PVT__spi__DOT__ss_r;
        }
    } else if ((2U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
        if ((1U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
            vlSelf->__PVT__spi2_rdt = vlSelf->__PVT__spi2__DOT__sper;
            vlSelf->__PVT__spi_rdt = vlSelf->__PVT__spi__DOT__sper;
        } else {
            vlSelf->__PVT__spi2_rdt = vlSelf->__PVT__spi2__DOT__rfifo__DOT__mem
                [vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp];
            vlSelf->__PVT__spi_rdt = vlSelf->__PVT__spi__DOT__rfifo__DOT__mem
                [vlSelf->__PVT__spi__DOT__rfifo__DOT__rp];
        }
    } else if ((1U & (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
        vlSelf->__PVT__spi2_rdt = vlSelf->__PVT__spi2__DOT__spsr;
        vlSelf->__PVT__spi_rdt = vlSelf->__PVT__spi__DOT__spsr;
    } else {
        vlSelf->__PVT__spi2_rdt = vlSelf->__PVT__spi2__DOT__spcr;
        vlSelf->__PVT__spi_rdt = vlSelf->__PVT__spi__DOT__spcr;
    }
    vlSelf->__PVT__spi__DOT__spif = ((~ ((~ ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                             >> 6U)) 
                                         | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) 
                                     & ((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->__PVT__spi__DOT__tcnt)))) 
                                          & (IData)(vlSelf->__PVT__spi__DOT__rfwe)) 
                                         | (IData)(vlSelf->__PVT__spi__DOT__spif)) 
                                        & (~ ((IData)(vlSelf->__PVT__spi__DOT__wr_spsr) 
                                              & (vlSelf->__PVT__wb_m2s_io_dat 
                                                 >> 7U)))));
    vlSelf->__PVT__spi2__DOT__spif = ((~ ((~ ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                              >> 6U)) 
                                          | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) 
                                      & ((((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__spi2__DOT__tcnt)))) 
                                           & (IData)(vlSelf->__PVT__spi2__DOT__rfwe)) 
                                          | (IData)(vlSelf->__PVT__spi2__DOT__spif)) 
                                         & (~ ((IData)(vlSelf->__PVT__spi2__DOT__wr_spsr) 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 7U)))));
    if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
        if (vlSelf->__PVT__spi__DOT__rfwe) {
            vlSelf->__PVT__spi__DOT__tcnt = (3U & (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__spi__DOT__tcnt))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__spi__DOT__tcnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                                    >> 6U)));
        }
    } else {
        vlSelf->__PVT__spi__DOT__tcnt = (3U & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                               >> 6U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
        if (vlSelf->__PVT__spi2__DOT__rfwe) {
            vlSelf->__PVT__spi2__DOT__tcnt = (3U & 
                                              ((0U 
                                                != (IData)(vlSelf->__PVT__spi2__DOT__tcnt))
                                                ? ((IData)(vlSelf->__PVT__spi2__DOT__tcnt) 
                                                   - (IData)(1U))
                                                : ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                                   >> 6U)));
        }
    } else {
        vlSelf->__PVT__spi2__DOT__tcnt = (3U & ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                                >> 6U));
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
              >> 0x12U) & (IData)(vlSelf->__PVT__io_awready))) {
            vlSelf->__PVT__io_bid = (0x3fU & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                              >> 0x17U));
            vlSelf->__PVT__axi2wb__DOT__aw_req = 1U;
        } else if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                     >> 6U) & (IData)(vlSelf->__PVT__io_bvalid))) {
            vlSelf->__PVT__axi2wb__DOT__aw_req = 0U;
        }
        if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
              >> 7U) & (IData)(vlSelf->__PVT__io_wready))) {
            vlSelf->__PVT__axi2wb__DOT__w_req = 1U;
        } else if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                     >> 6U) & (IData)(vlSelf->__PVT__io_bvalid))) {
            vlSelf->__PVT__axi2wb__DOT__w_req = 0U;
        }
    } else {
        vlSelf->__PVT__axi2wb__DOT__aw_req = 0U;
        vlSelf->__PVT__axi2wb__DOT__w_req = 0U;
        vlSelf->__PVT__io_bid = 0U;
    }
    if (vlSelf->__PVT__spi__DOT__rfwe) {
        __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0 = vlSelf->__PVT__spi__DOT__treg;
        __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0 
            = vlSelf->__PVT__spi__DOT__rfifo__DOT__wp;
    }
    if (vlSelf->__PVT__spi2__DOT__rfwe) {
        __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0 
            = vlSelf->__PVT__spi2__DOT__treg;
        __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0 
            = vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp;
    }
    vlSelf->__PVT__syscon__DOT__nmi_int_r = vlSelf->__PVT__syscon__DOT__nmi_int;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp))) 
                  == (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)) 
                 & (IData)(vlSelf->__PVT__spi__DOT__rfwe))) {
                vlSelf->__PVT__spi__DOT__rfifo__DOT__gb = 1U;
            } else if (vlSelf->__PVT__spi__DOT__rfre) {
                vlSelf->__PVT__spi__DOT__rfifo__DOT__gb = 0U;
            }
        } else {
            vlSelf->__PVT__spi__DOT__rfifo__DOT__gb = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp))) 
                  == (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)) 
                 & (IData)(vlSelf->__PVT__spi2__DOT__rfwe))) {
                vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb = 1U;
            } else if (vlSelf->__PVT__spi2__DOT__rfre) {
                vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
        }
    } else {
        vlSelf->__PVT__spi__DOT__rfifo__DOT__gb = 0U;
        vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
    }
    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) {
        __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push) {
        __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if (__Vdlyvset__spi__DOT__rfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi__DOT__rfifo__DOT__mem[__Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0] 
            = __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0;
    }
    if (__Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi2__DOT__rfifo__DOT__mem[__Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0] 
            = __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSelf->__PVT__spi2__DOT__wb_wr) {
            if ((4U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi2__DOT__ss_r = (1U 
                                                  & vlSelf->__PVT__wb_m2s_io_dat);
            }
        }
        if (vlSelf->__PVT__spi__DOT__wb_wr) {
            if ((4U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi__DOT__ss_r = (1U 
                                                 & vlSelf->__PVT__wb_m2s_io_dat);
            }
            if ((3U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi__DOT__sper = (0xffU 
                                                 & vlSelf->__PVT__wb_m2s_io_dat);
            }
        }
        if (vlSelf->__PVT__spi2__DOT__wb_wr) {
            if ((3U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi2__DOT__sper = (0xffU 
                                                  & vlSelf->__PVT__wb_m2s_io_dat);
            }
        }
    } else {
        vlSelf->__PVT__spi2__DOT__ss_r = 0U;
        vlSelf->__PVT__spi__DOT__ss_r = 0U;
        vlSelf->__PVT__spi__DOT__sper = 0U;
        vlSelf->__PVT__spi2__DOT__sper = 0U;
    }
    vlSelf->__PVT__syscon__DOT__nmi_int = 0U;
    if (((IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable) 
         & (IData)(vlSelf->__PVT__gpio_irq))) {
        __Vdly__syscon__DOT__sw_irq4 = 1U;
    }
    if (((IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable) 
         & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
            >> 6U))) {
        __Vdly__syscon__DOT__sw_irq3 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable)) 
               & (~ (IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable))))) {
        if (vlSelf->__PVT__syscon__DOT__sw_irq3_edge) {
            __Vdly__syscon__DOT__sw_irq3 = 0U;
        }
        if (vlSelf->__PVT__syscon__DOT__sw_irq4_edge) {
            __Vdly__syscon__DOT__sw_irq4 = 0U;
        }
        if (vlSelf->__PVT__syscon__DOT__irq_timer_en) {
            __Vdly__syscon__DOT__irq_timer_cnt = (vlSelf->__PVT__syscon__DOT__irq_timer_cnt 
                                                  - (IData)(1U));
        }
        if ((1U == vlSelf->__PVT__syscon__DOT__irq_timer_cnt)) {
            __Vdly__syscon__DOT__irq_timer_en = 0U;
            if (vlSelf->__PVT__syscon__DOT__sw_irq3_timer) {
                __Vdly__syscon__DOT__sw_irq3 = 1U;
            }
            if (vlSelf->__PVT__syscon__DOT__sw_irq4_timer) {
                __Vdly__syscon__DOT__sw_irq4 = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                          | (IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer))))) {
                vlSelf->__PVT__syscon__DOT__nmi_int = 1U;
            }
        }
    }
    if ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 5U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
          & (IData)(vlSelf->__PVT__wb_m2s_io_we)) & 
         (~ (IData)(vlSelf->__PVT__wb_s2m_sys_ack)))) {
        if (((((((((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
                   | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                 | (0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                | (0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
               | (0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (0xeU == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
            if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel)))) {
                    if (VL_UNLIKELY((0U != vlSelf->__PVT__syscon__DOT__f))) {
                        VL_FWRITEF(vlSelf->__PVT__syscon__DOT__f,"%c",
                                   8,(0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                    }
                    VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if (VL_UNLIKELY((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel)))) {
                    VL_WRITEF("\nFinito\n");
                    VL_FINISH_MT("../src/SweRVolfSoC/Peripherals/SystemController/swervolf_syscon.v", 172, "");
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__sw_irq4 = 
                        (vlSelf->__PVT__wb_m2s_io_dat 
                         >> 0x1fU);
                    __Vdly__syscon__DOT__sw_irq4_edge 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1eU));
                    __Vdly__syscon__DOT__sw_irq4_pol 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1dU));
                    __Vdly__syscon__DOT__sw_irq4_timer 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1cU));
                    __Vdly__syscon__DOT__sw_irq3 = 
                        (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                               >> 0x1bU));
                    __Vdly__syscon__DOT__sw_irq3_edge 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1aU));
                    __Vdly__syscon__DOT__sw_irq3_pol 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x19U));
                    __Vdly__syscon__DOT__sw_irq3_timer 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x18U));
                }
            } else if ((3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__nmi_vec = ((0xffffff00U 
                                        & __Vdly__nmi_vec) 
                                       | (0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__nmi_vec = ((0xffff00ffU 
                                        & __Vdly__nmi_vec) 
                                       | (0xff00U & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__nmi_vec = ((0xff00ffffU 
                                        & __Vdly__nmi_vec) 
                                       | (0xff0000U 
                                          & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__nmi_vec = ((0xffffffU & __Vdly__nmi_vec) 
                                       | (0xff000000U 
                                          & vlSelf->__PVT__wb_m2s_io_dat));
                }
            } else if ((6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_gpio_enable 
                        = (1U & vlSelf->__PVT__wb_m2s_io_dat);
                }
                __Vdly__syscon__DOT__irq_ptc_enable 
                    = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                             >> 1U));
            } else if ((0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffffffffffff00ULL & __Vdly__syscon__DOT__mtimecmp) 
                         | (IData)((IData)((0xffU & vlSelf->__PVT__wb_m2s_io_dat))));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffffffffff00ffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((0xffU 
                                             & (vlSelf->__PVT__wb_m2s_io_dat 
                                                >> 8U)))) 
                            << 8U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffffffff00ffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((0xffU 
                                             & (vlSelf->__PVT__wb_m2s_io_dat 
                                                >> 0x10U)))) 
                            << 0x10U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffffff00ffffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((vlSelf->__PVT__wb_m2s_io_dat 
                                             >> 0x18U))) 
                            << 0x18U));
                }
            } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffff00ffffffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((0xffU 
                                             & vlSelf->__PVT__wb_m2s_io_dat))) 
                            << 0x20U));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffff00ffffffffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((0xffU 
                                             & (vlSelf->__PVT__wb_m2s_io_dat 
                                                >> 8U)))) 
                            << 0x28U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xff00ffffffffffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((0xffU 
                                             & (vlSelf->__PVT__wb_m2s_io_dat 
                                                >> 0x10U)))) 
                            << 0x30U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__mtimecmp = 
                        ((0xffffffffffffffULL & __Vdly__syscon__DOT__mtimecmp) 
                         | ((QData)((IData)((vlSelf->__PVT__wb_m2s_io_dat 
                                             >> 0x18U))) 
                            << 0x38U));
                }
            } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffff00U & __Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffff00ffU & __Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff00U & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xff00ffffU & __Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff0000U & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffffU & __Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff000000U & vlSelf->__PVT__wb_m2s_io_dat));
                }
            } else if ((0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__irq_timer_en 
                        = (1U & vlSelf->__PVT__wb_m2s_io_dat);
                }
            } else if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Enables_Reg 
                    = (0xffU & vlSelf->__PVT__wb_m2s_io_dat);
            }
        } else if ((0xfU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffffff00U & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xffU & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffff00ffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff00U & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xff00ffffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff0000U & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffffffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff000000U & vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
    }
    if (((((((((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
               | (1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
            | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
           | (8U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
          | (9U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
         | (0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
        if ((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__version;
        } else if ((1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = 0x8946d48dU;
        } else if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = ((0xfffffffU 
                                              & vlSelf->__PVT__wb_s2m_sys_dat) 
                                             | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_edge) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_pol) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer) 
                                                         << 0x1cU)))));
            vlSelf->__PVT__wb_s2m_sys_dat = ((0xf0ffffffU 
                                              & vlSelf->__PVT__wb_s2m_sys_dat) 
                                             | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_edge) 
                                                    << 0x1aU) 
                                                   | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_pol) 
                                                       << 0x19U) 
                                                      | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                                                         << 0x18U)))));
            vlSelf->__PVT__wb_s2m_sys_dat = (0x10000U 
                                             | (0xff000000U 
                                                & vlSelf->__PVT__wb_s2m_sys_dat));
        } else {
            vlSelf->__PVT__wb_s2m_sys_dat = ((3U == 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__wb_adr)))
                                              ? vlSelf->__PVT__nmi_vec
                                              : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->__PVT__wb_adr)))
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable))
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__wb_adr)))
                                                   ? (IData)(vlSelf->__PVT__syscon__DOT__mtime)
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__wb_adr)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__syscon__DOT__mtime 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__syscon__DOT__mtimecmp)))));
        }
    } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = (IData)((vlSelf->__PVT__syscon__DOT__mtimecmp 
                                                 >> 0x20U));
    } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__irq_timer_cnt;
    } else if ((0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__irq_timer_en;
    } else if ((0xfU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = 0U;
    }
    __Vdly__syscon__DOT__mtime = (1ULL + vlSelf->__PVT__syscon__DOT__mtime);
    vlSelf->__PVT__timer_irq = (vlSelf->__PVT__syscon__DOT__mtime 
                                >= vlSelf->__PVT__syscon__DOT__mtimecmp);
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) {
        __Vdly__syscon__DOT__mtime = 0ULL;
        __Vdly__syscon__DOT__mtimecmp = 0ULL;
    }
    vlSelf->__PVT__syscon__DOT__irq_timer_cnt = __Vdly__syscon__DOT__irq_timer_cnt;
    vlSelf->__PVT__syscon__DOT__irq_timer_en = __Vdly__syscon__DOT__irq_timer_en;
    vlSelf->__PVT__syscon__DOT__sw_irq4_edge = __Vdly__syscon__DOT__sw_irq4_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq4_timer = __Vdly__syscon__DOT__sw_irq4_timer;
    vlSelf->__PVT__syscon__DOT__sw_irq3_edge = __Vdly__syscon__DOT__sw_irq3_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq3_timer = __Vdly__syscon__DOT__sw_irq3_timer;
    vlSelf->__PVT__syscon__DOT__irq_gpio_enable = __Vdly__syscon__DOT__irq_gpio_enable;
    vlSelf->__PVT__syscon__DOT__irq_ptc_enable = __Vdly__syscon__DOT__irq_ptc_enable;
    vlSelf->__PVT__syscon__DOT__mtimecmp = __Vdly__syscon__DOT__mtimecmp;
    vlSelf->__PVT__syscon__DOT__sw_irq4 = __Vdly__syscon__DOT__sw_irq4;
    vlSelf->__PVT__syscon__DOT__sw_irq4_pol = __Vdly__syscon__DOT__sw_irq4_pol;
    vlSelf->__PVT__syscon__DOT__sw_irq3 = __Vdly__syscon__DOT__sw_irq3;
    vlSelf->__PVT__syscon__DOT__sw_irq3_pol = __Vdly__syscon__DOT__sw_irq3_pol;
    vlSelf->__PVT__syscon__DOT__mtime = __Vdly__syscon__DOT__mtime;
    vlSelf->__PVT__wb_s2m_sys_ack = __Vdly__wb_s2m_sys_ack;
    vlSelf->__PVT__nmi_vec = __Vdly__nmi_vec;
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffffffffff000000ULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | (IData)((IData)((0xfbfdfeU | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg)))))));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffff000000ffffffULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | ((QData)((IData)((0xdfeff7U | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg)))))) 
              << 0x18U));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffffffffffffULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | ((QData)((IData)((0x7fbfU | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                           << 8U) | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg))))) 
              << 0x30U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__26(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__26\n"); );
    // Body
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = (0x2000000U | ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
                         | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                            << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[3U] 
        = ((0x1ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                          >> 4U)) | ((0xe000000U & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                                       >> 4U)) | ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[4U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                   >> 0x20U)) >> 4U)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
               << 0x1cU) | (0xe000000U & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                   >> 0x20U)) 
                                          >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfff8U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffU & ((0x1fffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid) 
                                        << 2U)) | (0x1ffffffU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
                                                      >> 4U)))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready) 
                           << 0xfU) | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready) 
                                       << 0xeU)) | 
                         (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready) 
                           << 0xdU) | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid) 
                                        << 0xcU) | 
                                       ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid) 
                                        << 6U))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__28(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__28\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 2U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
              & (1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__timer_ptc__DOT__rptc_hrc 
                = vlSelf->__PVT__wb_m2s_io_dat;
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
            vlSelf->__PVT__timer_ptc__DOT__rptc_hrc 
                = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
        }
    } else {
        vlSelf->__PVT__timer_ptc__DOT__rptc_hrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__29(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__29\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 2U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
              & (2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__PVT__timer_ptc__DOT__rptc_lrc 
                = vlSelf->__PVT__wb_m2s_io_dat;
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
            vlSelf->__PVT__timer_ptc__DOT__rptc_lrc 
                = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
        }
    } else {
        vlSelf->__PVT__timer_ptc__DOT__rptc_lrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__30(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__30\n"); );
    // Init
    IData/*31:0*/ __Vdly__timer_ptc__DOT__rptc_cntr;
    // Body
    __Vdly__timer_ptc__DOT__rptc_cntr = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 2U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb)) 
              & (0U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            __Vdly__timer_ptc__DOT__rptc_cntr = vlSelf->__PVT__wb_m2s_io_dat;
        } else if ((1U & (((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                           & (~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                 >> 4U))) | ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                             >> 7U)))) {
            __Vdly__timer_ptc__DOT__rptc_cntr = 0U;
        } else if ((1U & (((~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                               & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                  >> 4U))) & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)) 
                          & (~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate) 
                                & (~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                      >> 1U))))))) {
            __Vdly__timer_ptc__DOT__rptc_cntr = ((IData)(1U) 
                                                 + vlSelf->__PVT__timer_ptc__DOT__rptc_cntr);
        }
    } else {
        __Vdly__timer_ptc__DOT__rptc_cntr = 0U;
    }
    vlSelf->__PVT__timer_ptc__DOT__rptc_cntr = __Vdly__timer_ptc__DOT__rptc_cntr;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__59(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__59\n"); );
    // Body
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    }
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
            >> 9U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
            >> 0x1eU) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
            >> 0x13U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                     >> 0xcU));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                     >> 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                     >> 0x16U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
            >> 0x18U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
            >> 0xdU) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
            >> 2U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn));
    vlSelf->__PVT__timer_ptc__DOT__eclk_gate = (1U 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__gate_clk_pad_i) 
                                                   ^ 
                                                   ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                    >> 2U)));
    vlSelf->__PVT__timer_ptc__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_hrc));
    vlSelf->__PVT__timer_ptc__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_lrc));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0 
            = ((0xf00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U]) 
               | (0xffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U]));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0 
            = ((0xf00U & ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                           << 0xbU) | (0x700U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                                 >> 0x15U)))) 
               | (0xffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                           >> 0x15U)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0 
            = ((0xf00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hd1f4bbfb__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                                       << 3U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                                 >> 0x1dU))) 
                             << (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                         << 2U)))));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                        << 3U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                  >> 0x1dU)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                      >> 0x12U)) << 
                             (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                      << 2U)))));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                       >> 0x12U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                     << 2U)))));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                       >> 7U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__pl_in_q 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                    ? (~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                           << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)))
                    : ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                        << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]) 
           < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                      >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 8U)) < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                       >> 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x10U)) < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                          >> 0x14U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x18U)) < (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                      >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                    >> 0xcU)) < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                         >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                    >> 0x14U)) < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                          >> 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
            >> 0x1cU) < (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                    >> 0x18U)) < (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]) 
           < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                      >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                    >> 4U)) < (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                       >> 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0xa000U == (0xa000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U])))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x14U == (0x14U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U])))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x2800000U == (0x2800000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU])))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 4U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]);
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                   >> 0x18U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0xcU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 8U)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                    >> 0x14U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0x10U)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                   >> 0x18U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x18U)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 4U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]);
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0x10U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                   >> 0x18U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x14U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0xcU)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x18U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0xcU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                    >> 0x14U)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                   >> 0x18U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x1cU)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                         << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                   >> 0x18U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                         << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                      >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x18U)));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                        << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                     >> 4U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]);
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                         << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                        << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 8U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                         << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 8U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                        << 0x1cU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 4U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                     << 2U)))));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
        = (0xfffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                     << 2U)))));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
              << 4U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            >> 0x1cU) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                         << 4U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xff000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
               >> 0x1cU) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                            << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                     << 2U)))));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
              << 8U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                         << 8U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
               >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                            << 8U)));
}

extern const VlUnpacked<CData/*6:0*/, 16> Vrvfpgasim__ConstPool__TABLE_h9edcaeff_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vrvfpgasim__ConstPool__TABLE_h0d3b6ad1_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vrvfpgasim__ConstPool__TABLE_h218ca11c_0;

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__60(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__60\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx4;
    // Body
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_data_out 
        = ((vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    __Vtableidx1 = (0xfU & (vlSelf->__PVT__syscon__DOT__Digits_Reg 
                            >> (0x1cU & (vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                         >> 0xfU))));
    vlSelf->__PVT__Digits_Bits = Vrvfpgasim__ConstPool__TABLE_h9edcaeff_0
        [__Vtableidx1];
    vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl = vlSelf->__Vdly__timer_ptc__DOT__rptc_ctrl;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart_irq = (1U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
                                          ? (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))
                                          : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                                             | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                                                 ? 
                                                (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read))
                                                 : 
                                                ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                                                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read)))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                                                  & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read))))))));
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if (vlSelf->__PVT__spi2__DOT__wfwe) {
                vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp 
                    = vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp_p1;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if (vlSelf->__PVT__spi__DOT__wfwe) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__wp 
                    = vlSelf->__PVT__spi__DOT__wfifo__DOT__wp_p1;
            }
            if (vlSelf->__PVT__spi__DOT__rfre) {
                vlSelf->__PVT__spi__DOT__rfifo__DOT__rp 
                    = vlSelf->__PVT__spi__DOT__rfifo__DOT__rp_p1;
            }
            if (vlSelf->__PVT__spi__DOT__rfwe) {
                vlSelf->__PVT__spi__DOT__rfifo__DOT__wp 
                    = vlSelf->__PVT__spi__DOT__rfifo__DOT__wp_p1;
            }
        } else {
            vlSelf->__PVT__spi__DOT__wfifo__DOT__wp = 0U;
            vlSelf->__PVT__spi__DOT__rfifo__DOT__rp = 0U;
            vlSelf->__PVT__spi__DOT__rfifo__DOT__wp = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if (vlSelf->__PVT__spi2__DOT__rfre) {
                vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp 
                    = vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp_p1;
            }
            if (vlSelf->__PVT__spi2__DOT__rfwe) {
                vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp 
                    = vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp_p1;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp = 0U;
            vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp = 0U;
        }
    } else {
        vlSelf->__PVT__uart_irq = 0U;
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp = 0U;
        vlSelf->__PVT__spi__DOT__wfifo__DOT__wp = 0U;
        vlSelf->__PVT__spi__DOT__rfifo__DOT__rp = 0U;
        vlSelf->__PVT__spi__DOT__rfifo__DOT__wp = 0U;
        vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp = 0U;
        vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable) {
            if ((8U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 4U;
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity)));
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 3U;
                            } else {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 4U;
                                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 2U;
                        }
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 2U;
                            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 6U;
                        }
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                      ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in)));
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0xaU;
                    }
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity 
                            = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 8U;
                    }
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                    ? ((0xc0U & (IData)(vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 7U;
                    }
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate 
                        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 1U;
                }
            }
        }
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tx_reset) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0x10U > (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)));
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count) 
                                - (IData)(1U)));
            }
        } else if ((3U == (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
        vlSelf->__PVT__gpio_irq = ((0U != vlSelf->__PVT__gpio_module__DOT__rgpio_ints) 
                                   & (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl));
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count = 0U;
        vlSelf->__PVT__gpio_irq = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rstate 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rstate;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__PVT__gpio_module__DOT__rgpio_ints = vlSelf->__Vdly__gpio_module__DOT__rgpio_ints;
    vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl = vlSelf->__Vdly__gpio_module__DOT__rgpio_ctrl;
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__spi__DOT__rfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi__DOT__rfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tx_reset 
            = (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
                & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
               & ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                  >> 2U));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push 
            = (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
                & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
               & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                     >> 7U)));
        if (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable) {
            if ((4U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 4U;
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            if ((0U < (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out));
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 3U;
                            } else {
                                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 4U;
                            }
                        } else {
                            vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 2U;
                    } else {
                        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 5U;
            } else {
                vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tx_reset = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_push = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tstate;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__tf_count;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5 
        = ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable 
            = ((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl)) 
               & (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc)))));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc 
            = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__dlc;
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (1U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl)) 
                       | ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl)) 
                       | (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
        if (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
             & (3U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr 
                = vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        }
    } else {
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__enable = 0U;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dlc 
            = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__dlc;
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl 
            = (0xffU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl));
        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr = 3U;
    }
    vlSelf->__PVT__uart16550_0__DOT__we_o = ((((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is) 
                                               & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
                                              & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
                                             & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    __Vtableidx3 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_value 
        = Vrvfpgasim__ConstPool__TABLE_h0d3b6ad1_0[__Vtableidx3];
    __Vtableidx4 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vrvfpgasim__ConstPool__TABLE_h218ca11c_0[__Vtableidx4];
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is 
            = (0xffU & vlSelf->__PVT__wb_m2s_io_dat);
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is 
            = (7U & (IData)(vlSelf->__PVT__wb_adr));
    } else {
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is = 0U;
        vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
            ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_out)
            : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__srx_pad));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (6U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
            & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (5U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__64(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__64\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                    ? 3U : 4U);
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
            = (7U & ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                          ? 3U : 4U) : ((~ (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0xeU))) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__66(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__66\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))))) {
        vlSelf->__Vdly__spi__DOT__state = 0U;
        vlSelf->__Vdly__spi__DOT__bcnt = 0U;
        vlSelf->__Vdly__spi__DOT__treg = 0U;
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        vlSelf->__Vdly__o_flash_sclk = 0U;
    } else {
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                    vlSelf->__Vdly__spi__DOT__treg 
                        = (0xfeU & ((IData)(vlSelf->__PVT__spi__DOT__treg) 
                                    << 1U));
                    vlSelf->__Vdly__spi__DOT__bcnt 
                        = (7U & ((IData)(vlSelf->__PVT__spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__spi__DOT__bcnt))) {
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                        vlSelf->__Vdly__spi__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__spi__DOT__state = 0U;
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                     >> 3U));
                        vlSelf->__PVT__spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelf->__Vdly__spi__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                vlSelf->__Vdly__o_flash_sclk = (1U 
                                                & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                vlSelf->__Vdly__spi__DOT__state = 3U;
            }
        } else {
            vlSelf->__Vdly__o_flash_sclk = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                                  >> 3U));
            vlSelf->__Vdly__spi__DOT__bcnt = 7U;
            vlSelf->__Vdly__spi__DOT__treg = vlSelf->__PVT__spi__DOT__wfifo__DOT__mem
                [vlSelf->__PVT__spi__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelf->__PVT__spi__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
                    vlSelf->__Vdly__o_flash_sclk = 
                        (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                }
                vlSelf->__Vdly__spi__DOT__wfre = 1U;
                vlSelf->__Vdly__spi__DOT__state = 1U;
            }
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))))) {
        vlSelf->__Vdly__spi2__DOT__state = 0U;
        vlSelf->__Vdly__spi2__DOT__bcnt = 0U;
        vlSelf->__Vdly__spi2__DOT__treg = 0U;
        vlSelf->__Vdly__spi2__DOT__wfre = 0U;
        vlSelf->__PVT__spi2__DOT__rfwe = 0U;
        vlSelf->__Vdly__o_accel_sclk = 0U;
    } else {
        vlSelf->__Vdly__spi2__DOT__wfre = 0U;
        vlSelf->__PVT__spi2__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi2__DOT__clkcnt)))))) {
                    vlSelf->__Vdly__spi2__DOT__treg 
                        = ((0xfeU & ((IData)(vlSelf->__PVT__spi2__DOT__treg) 
                                     << 1U)) | (IData)(vlSelf->__PVT__i_accel_miso));
                    vlSelf->__Vdly__spi2__DOT__bcnt 
                        = (7U & ((IData)(vlSelf->__PVT__spi2__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__spi2__DOT__bcnt))) {
                        vlSelf->__Vdly__o_accel_sclk 
                            = (1U & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                        vlSelf->__Vdly__spi2__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__spi2__DOT__state = 0U;
                        vlSelf->__Vdly__o_accel_sclk 
                            = (1U & ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                     >> 3U));
                        vlSelf->__PVT__spi2__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelf->__Vdly__spi2__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi2__DOT__clkcnt)))))) {
                vlSelf->__Vdly__o_accel_sclk = (1U 
                                                & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                vlSelf->__Vdly__spi2__DOT__state = 3U;
            }
        } else {
            vlSelf->__Vdly__o_accel_sclk = (1U & ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                                  >> 3U));
            vlSelf->__Vdly__spi2__DOT__bcnt = 7U;
            vlSelf->__Vdly__spi2__DOT__treg = vlSelf->__PVT__spi2__DOT__wfifo__DOT__mem
                [vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelf->__PVT__spi2__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
                    vlSelf->__Vdly__o_accel_sclk = 
                        (1U & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                }
                vlSelf->__Vdly__spi2__DOT__wfre = 1U;
                vlSelf->__Vdly__spi2__DOT__state = 1U;
            }
        }
    }
    vlSelf->__PVT__spi__DOT__bcnt = vlSelf->__Vdly__spi__DOT__bcnt;
    vlSelf->__PVT__o_flash_sclk = vlSelf->__Vdly__o_flash_sclk;
    vlSelf->__PVT__spi__DOT__state = vlSelf->__Vdly__spi__DOT__state;
    vlSelf->__PVT__spi__DOT__clkcnt = vlSelf->__Vdly__spi__DOT__clkcnt;
    vlSelf->__PVT__spi__DOT__treg = vlSelf->__Vdly__spi__DOT__treg;
    if (vlSelf->__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi__DOT__wfifo__DOT__mem[vlSelf->__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0;
    }
    vlSelf->__PVT__spi2__DOT__bcnt = vlSelf->__Vdly__spi2__DOT__bcnt;
    vlSelf->__PVT__o_accel_sclk = vlSelf->__Vdly__o_accel_sclk;
    vlSelf->__PVT__spi2__DOT__state = vlSelf->__Vdly__spi2__DOT__state;
    vlSelf->__PVT__spi2__DOT__clkcnt = vlSelf->__Vdly__spi2__DOT__clkcnt;
    vlSelf->__PVT__spi2__DOT__treg = vlSelf->__Vdly__spi2__DOT__treg;
    if (vlSelf->__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__mem[vlSelf->__Vdlyvdim0__spi2__DOT__wfifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__spi2__DOT__wfifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__71(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__71\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new 
        = ((~ (((IData)((0x4040000000ULL == (0x1fc40000000ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
           & ((((IData)((0x4000000008ULL == (0x1fc00000008ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = (((IData)(((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x6000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                  & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                              >> 0x18U))) | (((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                             & (((0x39U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                                 | (0x3cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))) 
                                                | (0x3dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))))
                  ? (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                        & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x18U)))) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__72(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__72\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = ((IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren 
        = ((IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__73(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__73\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (0x1400000000ULL == (0x1fc00000000ULL 
                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
            & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (0x1000000000ULL == (0x1fc00000000ULL 
                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
            & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__75(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__75\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                  >> 1U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSelf->__PVT__swerv_eh1__DOT__core_rst_l = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                                 & (~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                     >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffc0ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0x3000U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail))) 
                          << 0xcU)) | ((0xc00U & ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                  << 0xaU)) 
                                       | (0x300U & 
                                          ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
                                           << 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((((((((((((- (IData)((4U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg) 
                     | ((- (IData)((5U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                    | (0x2fffffffU & ((- (IData)((0x10U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg))) 
                   | ((- (IData)((0x11U == (0x7fU & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))) 
                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg)) 
                  | ((- (IData)((0x16U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                 | ((- (IData)((0x17U == (0x7fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                | ((- (IData)((0x18U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
               | ((- (IData)((0x40U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
              | ((- (IData)((0x38U == (0x7fU & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
             | ((- (IData)((0x39U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)) 
            | ((- (IData)((0x3cU == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U)))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg)) 
           | ((- (IData)((0x3dU == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSelf->__PVT__dmi_reg_rdata);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__78(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__78\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if (vlSelf->__PVT__spi__DOT__wfre) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if (vlSelf->__PVT__spi2__DOT__wfre) {
                vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp 
                    = vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
    }
    vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__spi__DOT__wfempty = (((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp) 
                                         == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)) 
                                        & (~ (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb)));
    vlSelf->__PVT__spi__DOT__wffull = (((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp) 
                                        == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)) 
                                       & (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__wfempty = (((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp) 
                                          == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)) 
                                         & (~ (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb)));
    vlSelf->__PVT__spi2__DOT__wffull = (((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp) 
                                         == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)) 
                                        & (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__spi__DOT__spsr = ((((IData)(vlSelf->__PVT__spi__DOT__spif) 
                                       << 7U) | (((IData)(vlSelf->__PVT__spi__DOT__wcol) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->__PVT__spi__DOT__wffull) 
                                                    << 3U))) 
                                     | (((IData)(vlSelf->__PVT__spi__DOT__wfempty) 
                                         << 2U) | (
                                                   ((((IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp) 
                                                      == (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                     & (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp) 
                                                       == (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                      & (~ (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__gb))))));
    vlSelf->__PVT__spi2__DOT__spsr = ((((IData)(vlSelf->__PVT__spi2__DOT__spif) 
                                        << 7U) | (((IData)(vlSelf->__PVT__spi2__DOT__wcol) 
                                                   << 6U) 
                                                  | ((IData)(vlSelf->__PVT__spi2__DOT__wffull) 
                                                     << 3U))) 
                                      | (((IData)(vlSelf->__PVT__spi2__DOT__wfempty) 
                                          << 2U) | 
                                         (((((IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp) 
                                             == (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                            & (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                           << 1U) | 
                                          (((IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp) 
                                            == (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                           & (~ (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__gb))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__81(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__81\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
        = (((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                     >> 0x1aU)) << 0x18U) | (((0x780000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x15U)) 
                                                  << 0x13U)) 
                                              | (((IData)(
                                                          (0x100000ULL 
                                                           == 
                                                           (0x3fc100000ULL 
                                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                  << 0x12U) 
                                                 | (((IData)(
                                                             (0x80000ULL 
                                                              == 
                                                              (0x3fc080000ULL 
                                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                     << 0x11U) 
                                                    | (0x10000U 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                   >> 0x12U)) 
                                                          << 0x10U))))) 
                                             | (0xffffU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                                    ? (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 2U))
                                                    : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                       ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__82(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__82\n"); );
    // Init
    CData/*2:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    CData/*6:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    // Body
    vlSelf->__PVT__spi__DOT__wfre = vlSelf->__Vdly__spi__DOT__wfre;
    vlSelf->__PVT__spi2__DOT__wfre = vlSelf->__Vdly__spi2__DOT__wfre;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSelf->__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi__DOT__spcr = (0xffU 
                                                 & (0x10U 
                                                    | vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
        if (vlSelf->__PVT__spi2__DOT__wb_wr) {
            if ((0U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi2__DOT__spcr = (0xffU 
                                                  & (0x10U 
                                                     | vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSelf->__PVT__spi__DOT__spcr = 0x10U;
        vlSelf->__PVT__spi2__DOT__spcr = 0x10U;
    }
    vlSelf->__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                              << 2U)) 
                                     | (3U & (IData)(vlSelf->__PVT__spi__DOT__spcr)));
    vlSelf->__PVT__spi2__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                               << 2U)) 
                                      | (3U & (IData)(vlSelf->__PVT__spi2__DOT__spcr)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            vlSelf->__PVT__io_awready = 0U;
            vlSelf->__PVT__io_wready = 0U;
            vlSelf->__PVT__io_arready = 0U;
            vlSelf->__PVT__io_rvalid = 0U;
            vlSelf->__PVT__io_bvalid = 0U;
            vlSelf->__PVT__wb_adr = 0U;
            vlSelf->__PVT__wb_m2s_io_cyc = 0U;
            vlSelf->__PVT__wb_m2s_io_stb = 0U;
            vlSelf->__PVT__wb_m2s_io_sel = 0U;
            vlSelf->__PVT__wb_m2s_io_we = 0U;
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                    vlSelf->__PVT__io_rvalid = 1U;
                    if ((1U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                        vlSelf->__PVT__io_rvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                } else {
                    vlSelf->__PVT__io_bvalid = 1U;
                    if ((0x40U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                        vlSelf->__PVT__io_bvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                     | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                    vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                    vlSelf->__PVT__wb_m2s_io_stb = 0U;
                    vlSelf->__PVT__wb_m2s_io_sel = 0U;
                    vlSelf->__PVT__io_rvalid = 1U;
                    vlSelf->__PVT__io_rdata = (((QData)((IData)(vlSelf->__PVT__wb_s2m_io_dat)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__axi2wb__DOT__wb_rdt_low)));
                    vlSelf->__Vdly__axi2wb__DOT__cs = 7U;
                }
            } else {
                vlSelf->__PVT__wb_adr = (1U | (IData)(vlSelf->__PVT__wb_adr));
                vlSelf->__PVT__wb_m2s_io_sel = 0xfU;
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 5U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                     | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                    vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                    vlSelf->__PVT__wb_m2s_io_stb = 0U;
                    vlSelf->__PVT__wb_m2s_io_sel = 0U;
                    vlSelf->__PVT__axi2wb__DOT__wb_rdt_low 
                        = vlSelf->__PVT__wb_s2m_io_dat;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 4U;
                }
            } else if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                        | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                vlSelf->__PVT__wb_m2s_io_stb = 0U;
                vlSelf->__PVT__wb_m2s_io_sel = 0U;
                vlSelf->__PVT__wb_m2s_io_we = 0U;
                vlSelf->__PVT__io_bvalid = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 6U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((0x80U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                    = (0U == (0xfU & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                      >> 0xaU)));
                vlSelf->__PVT__wb_adr = ((0x3ffeU & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__PVT__wb_m2s_io_we = 1U;
                vlSelf->__PVT__io_wready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                    vlSelf->__PVT__wb_m2s_io_sel = 
                        (0xfU & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                  << 0x12U) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                               >> 0xeU)));
                    vlSelf->__PVT__wb_m2s_io_dat = 
                        ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                          << 0xeU) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                      >> 0x12U));
                } else {
                    vlSelf->__PVT__wb_m2s_io_sel = 
                        (0xfU & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                  << 0x16U) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                               >> 0xaU)));
                    vlSelf->__PVT__wb_m2s_io_dat = 
                        ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                          << 0xeU) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                      >> 0x12U));
                }
            }
        } else {
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            if (((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                  >> 0x12U) & (IData)(vlSelf->__PVT__axi2wb__DOT__arbiter))) {
                vlSelf->__PVT__wb_adr = ((1U & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (0x3ffeU 
                                            & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                                << 7U) 
                                               | (0x7eU 
                                                  & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
                                                     >> 0x19U)))));
                vlSelf->__PVT__io_awready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__arbiter = 0U;
                if ((0x80U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                    vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                        = (0U == (0xfU & (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                          >> 0xaU)));
                    vlSelf->__PVT__wb_adr = ((0x3ffeU 
                                              & (IData)(vlSelf->__PVT__wb_adr)) 
                                             | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                    vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                    vlSelf->__PVT__wb_m2s_io_stb = 1U;
                    vlSelf->__PVT__wb_m2s_io_we = 1U;
                    vlSelf->__PVT__io_wready = 1U;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                    if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                        vlSelf->__PVT__wb_m2s_io_sel 
                            = (0xfU & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        << 0x12U) | 
                                       (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        >> 0xeU)));
                        vlSelf->__PVT__wb_m2s_io_dat 
                            = ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                << 0xeU) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                            >> 0x12U));
                    } else {
                        vlSelf->__PVT__wb_m2s_io_sel 
                            = (0xfU & ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        << 0x16U) | 
                                       (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        >> 0xaU)));
                        vlSelf->__PVT__wb_m2s_io_dat 
                            = ((vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                << 0xeU) | (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                            >> 0x12U));
                    }
                } else {
                    vlSelf->__Vdly__axi2wb__DOT__cs = 1U;
                }
            } else if ((2U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                vlSelf->__PVT__wb_adr = (0x3fffU & 
                                         (vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
                                          >> 2U));
                vlSelf->__PVT__wb_m2s_io_sel = 0xfU;
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__PVT__io_arready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 3U;
            }
        }
    } else {
        vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        vlSelf->__PVT__io_rvalid = 0U;
        vlSelf->__PVT__io_bvalid = 0U;
        vlSelf->__PVT__wb_adr = 0U;
        vlSelf->__PVT__wb_m2s_io_cyc = 0U;
        vlSelf->__PVT__wb_m2s_io_stb = 0U;
        vlSelf->__PVT__wb_m2s_io_sel = 0U;
        vlSelf->__PVT__wb_m2s_io_we = 0U;
        vlSelf->__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSelf->__PVT__axi2wb__DOT__arbiter = vlSelf->__Vdly__axi2wb__DOT__arbiter;
    vlSelf->__PVT__axi2wb__DOT__cs = vlSelf->__Vdly__axi2wb__DOT__cs;
    vlSelf->__Vcellinp__spi__adr_i = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__wb_adr) 
                                                >> 1U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7cU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1400U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 1U) | (0x2000U == (0xfffff000U & 
                                     ((IData)(vlSelf->__PVT__wb_adr) 
                                      << 2U)))));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x73U & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1100U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 3U) | ((0x1200U == (0xffffffc0U & 
                                      ((IData)(vlSelf->__PVT__wb_adr) 
                                       << 2U))) << 2U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x4fU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1000U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 5U) | ((0x1040U == (0xffffffc0U & 
                                      ((IData)(vlSelf->__PVT__wb_adr) 
                                       << 2U))) << 4U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3fU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0U == (0xfffff000U & ((IData)(vlSelf->__PVT__wb_adr) 
                                     << 2U))) << 6U));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = (2U | ((1U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U]) 
                 | ((IData)(vlSelf->__PVT__io_rdata) 
                    << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSelf->__PVT__io_rdata) 
                  >> 0x1cU)) | ((0xeU & ((IData)(vlSelf->__PVT__io_rdata) 
                                         >> 0x1cU)) 
                                | ((IData)((vlSelf->__PVT__io_rdata 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSelf->__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (((IData)(vlSelf->__PVT__io_rvalid) 
                  << 0xaU) | (((IData)(vlSelf->__PVT__io_rid) 
                               << 4U) | (0xeU & ((IData)(
                                                         (vlSelf->__PVT__io_rdata 
                                                          >> 0x20U)) 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff000fffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & ((((IData)(vlSelf->__PVT__io_awready) 
                               << 0x17U) | ((IData)(vlSelf->__PVT__io_arready) 
                                            << 0x16U)) 
                             | (((IData)(vlSelf->__PVT__io_wready) 
                                 << 0x15U) | (((IData)(vlSelf->__PVT__io_bvalid) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__PVT__io_bid) 
                                                 << 0xeU))))));
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((0x40U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 6U;
    }
    if ((0x20U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 5U;
    }
    if ((0x10U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 4U;
    }
    if ((8U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSelf->__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSelf->__PVT__gpio_module__DOT__wb_err = 0U;
    vlSelf->__PVT__spi__DOT__wb_acc = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 4U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__spi2__DOT__wb_acc = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 3U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__spi__DOT__wfwe = ((((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                       & (2U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) 
                                      & (IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack)) 
                                     & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi__DOT__rfre = ((((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                       & (2U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) 
                                      & (IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack)) 
                                     & (~ (IData)(vlSelf->__PVT__wb_m2s_io_we)));
    vlSelf->__PVT__spi__DOT__wb_wr = ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                      & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi2__DOT__wfwe = ((((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                        & (2U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) 
                                       & (IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack)) 
                                      & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi2__DOT__rfre = ((((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                        & (2U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) 
                                       & (IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack)) 
                                      & (~ (IData)(vlSelf->__PVT__wb_m2s_io_we)));
    vlSelf->__PVT__spi2__DOT__wb_wr = ((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                       & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi__DOT__wr_spsr = ((IData)(vlSelf->__PVT__spi__DOT__wb_wr) 
                                        & (1U == (IData)(vlSelf->__Vcellinp__spi__adr_i)));
    vlSelf->__PVT__spi2__DOT__wr_spsr = ((IData)(vlSelf->__PVT__spi2__DOT__wb_wr) 
                                         & (1U == (IData)(vlSelf->__Vcellinp__spi__adr_i)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__84(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__84\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h49169253__0;
    // Body
    __Vtemp_h49169253__0[0U] = vlSelf->__PVT__uart_rdt;
    __Vtemp_h49169253__0[1U] = vlSelf->__PVT__wb_s2m_gpio_dat;
    __Vtemp_h49169253__0[2U] = ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                 ? vlSelf->__PVT__timer_ptc__DOT__rptc_hrc
                                 : ((2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                     ? vlSelf->__PVT__timer_ptc__DOT__rptc_lrc
                                     : ((3U == (7U 
                                                & (IData)(vlSelf->__PVT__wb_adr)))
                                         ? (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)
                                         : vlSelf->__PVT__timer_ptc__DOT__rptc_cntr)));
    __Vtemp_h49169253__0[3U] = vlSelf->__PVT__spi2_rdt;
    __Vtemp_h49169253__0[4U] = vlSelf->__PVT__spi_rdt;
    __Vtemp_h49169253__0[5U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__wb_adr))
                                                           ? (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                      >> 0x20U))
                                                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->__PVT__wb_s2m_sys_dat))));
    __Vtemp_h49169253__0[6U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->__PVT__wb_adr))
                                                            ? (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                       >> 0x20U))
                                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->__PVT__wb_s2m_sys_dat))) 
                                        >> 0x20U));
    vlSelf->__PVT__wb_s2m_io_dat = ((0xdfU >= (0xffU 
                                               & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                  << 5U)))
                                     ? (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h49169253__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                       << 5U))))) 
                                        | (__Vtemp_h49169253__0[
                                           (7U & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                  << 5U))))
                                     : 0U);
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
            << 0x1dU) | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U]);
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
        = (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
           >> 3U);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__85(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__85\n"); );
    // Body
    vlSelf->__PVT__gpio_module__DOT__wb_dat = ((8U 
                                                & (IData)(vlSelf->__PVT__wb_adr))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__wb_adr))
                                                    ? vlSelf->__PVT__gpio_module__DOT__rgpio_in
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? vlSelf->__PVT__gpio_module__DOT__rgpio_in
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_nec
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_eclk)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__wb_adr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_ints
                                                      : (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_aux
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_inte
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_oe)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_out
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_in))));
    vlSelf->__PVT__wb_s2m_io_err = (((6U >= (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                     & ((((IData)(vlSelf->__PVT__wb_s2m_spi_accel_err) 
                                          << 3U) | 
                                         ((IData)(vlSelf->__PVT__wb_s2m_gpio_err) 
                                          << 1U)) >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
                                    | (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSelf->__PVT__wb_s2m_io_ack = ((6U >= (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                    & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->__PVT__wb_s2m_sys_ack) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack) 
                                                          << 3U) 
                                                         | ((0xfffffffcU 
                                                             & ((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                                & ((IData)(vlSelf->__PVT__wb_m2s_io_stb) 
                                                                   << 2U))) 
                                                            | (((IData)(vlSelf->__PVT__wb_s2m_gpio_ack) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->__PVT__wb_s2m_uart_ack))))))) 
                                       >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__86(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___combo__TOP__rvfpgasim__swervolf__86\n"); );
    // Body
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
            << 0x1cU) | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
           >> 4U);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = (((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
             << 0x18U) | (0xf00000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       >> 8U))) | (0xfffffU 
                                                   & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                    << 0x18U) | (0xf00000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                    >> 8U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
        = (((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                                      >> 0x18U)) | 
           (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
        = (((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                      >> 0x18U)) | 
           (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = (((0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]) 
            | (0xffffU & ((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                         << 8U)) | 
                          (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           >> 0x18U)))) | (0xf0000000U 
                                           & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = (((0xffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
            | (0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU])) 
           | (0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = (((0xffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
            | (0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU])) 
           | (0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = (((0xff0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                          << 0x10U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = (((0xff0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                          << 0x10U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = (((0xfff000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                          << 8U)) | (0xfffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                               >> 0x10U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((((0xf00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                        << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                   >> 0x18U)) | (0xfff000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                                    << 8U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((((0xf00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                        << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                   >> 0x18U)) | (0xfff000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                                    << 8U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
}
