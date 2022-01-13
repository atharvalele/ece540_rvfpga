// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_ATTR_COLD void Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__10(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__10\n"); );
    // Init
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0;
    VlWide<3>/*95:0*/ __Vtemp_h9633071c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b1dd7b8__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1dU == (0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0) 
              << 0x1cU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x740U == (0x7c0U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0) 
              << 0x1cU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x6fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0) 
              << 0x1cU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0 
        = ((((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1cU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1cU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1cU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1eU == (0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0) 
              << 0x1dU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x780U == (0x7c0U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0) 
              << 0x1dU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x5fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0) 
              << 0x1dU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0 
        = ((((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1dU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1dU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1dU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1fU == (0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8130b1f1__0) 
              << 0x1eU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x7c0U == (0x7c0U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h8cccd3b8__0) 
              << 0x1eU));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h3790539d__0) 
              << 0x1eU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0 
        = ((((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1eU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1eU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1eU)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound_h7c7aa7c0__0;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en)
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_error)
                ? (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                     << 5U))) ? 0U : 
                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                            << 5U))))) 
                   | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                      >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                   << 5U)))) : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U))))) 
                                                | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                   (7U 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U)))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__lsu_dccm_errorff__din 
        = ((2U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout) 
                                            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                                                   & (0x5e000000U 
                                                      == 
                                                      (0x7ff80000U 
                                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])))) 
                                               << 1U))))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc5) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                    >> 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                  == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                            >> 5U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                         >> 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3ffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                              == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                        >> 0xfU)))) 
                          << 1U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x1cU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                            == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                      >> 0x19U)))) 
                        << 2U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                 == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           >> 3U)))) 
                             << 3U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x7fff0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                               == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         >> 0xdU)))) 
                           << 4U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3e0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 0x17U)))) 
                         << 5U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffffc0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                  == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            >> 1U)))) 
                              << 6U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffff80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          >> 0xbU)))) 
                            << 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected 
        = (1U & (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                    >> 5U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                 >> 3U))) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected)) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                     >> 2U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                  >> 1U)))));
    if ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
               (7U & (((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 5U)) >> 5U))] 
               >> (0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                           << 5U)))))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((QData)((IData)((((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                  << 5U)))
                                  ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U))))) 
                                | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                   (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                   >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U)))))) 
               << 0x20U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xf0U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                         >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 2U))) << 4U));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = (QData)((IData)((((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                 << 5U)))
                                 ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U))))) 
                               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                  (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                  >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                               << 5U))))));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                       >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                    << 2U))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en 
        = (((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                  != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
                 & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
               & (2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                             * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                          ? (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                          : 0U))) & (2U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                             ? (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                             : 0U))) 
             & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                   >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
            & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                  >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
           & ((((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                    >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                   >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffffff00ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo
                                        : ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo
                                                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffff00ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                          ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                             >> 8U)
                                          : ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 8U)
                                              : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 8U))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffff00ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (1U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (2U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (4U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (8U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffffff00ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi
                                        : ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi
                                                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffff00ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                          ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                             >> 8U)
                                          : ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 8U)
                                              : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 8U))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffff00ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (1U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (2U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (4U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (8U & (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                      >> 9U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                        >> 8U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                       >> 7U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                      >> 6U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                     >> 5U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                    >> 4U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                   >> 3U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                  >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
           | ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
              | (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                      >> 9U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                        >> 8U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                       >> 7U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                      >> 6U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                     >> 5U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                    >> 4U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                   >> 3U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                  >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2)) 
           | ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
              | (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))
            ? ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                 & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)) 
                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))
                           ? (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
                               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc)) 
                              | ((- (IData)((1U & (
                                                   ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))))) 
                                 & (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                       & ((IData)(1U) 
                                          + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                      | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                         & ((IData)(2U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                     | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                        & ((IData)(3U) 
                                           + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                    | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                       & ((IData)(4U) 
                                          + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            | ((- (IData)((1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
           & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity));
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U];
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U];
    }
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U];
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off_in 
        = (7U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off_in 
        = (7U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off_in 
        = (7U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
        = ((0x80000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]) 
           | (0x7fffffffU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2) 
                             | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                    << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U] 
                                              >> 0x1fU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2 
        = (0x7fffffffU & ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2))))
                           ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]
                           : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in) 
                << 0xeU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in) 
                             << 0xcU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in) 
                                             << 8U) 
                                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in) 
                                                << 6U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in))))))));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
            << 9U) | (((((((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                      >> 6U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid)) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                        & ((3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                  >> 0x16U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) 
                       << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  << 4U) | ((8U & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((0x7ffffffeU 
                                                       & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 1U))) 
                                                      | (0xfffffffeU 
                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            & ((~ 
                                                                ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
            | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
            & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_en = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                        >> 1U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc)) 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                        << 1U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                   << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                        << 2U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                   << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 3U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                      << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 4U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                      << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 5U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                      << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 6U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                      << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0xfffff800U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (0x7ffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                         ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                            >> 5U) : ((IData)(((0U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                       ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                          >> 5U) : 
                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                       >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0xffc007ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (0x3ff800U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : ((IData)((
                                                   (4U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xbU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                   >> 5U) : ((IData)(((8U == (0x1cU 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                 >> 5U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                           >> 5U))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (1U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                         >> 5U) : ((IData)(((8U == 
                                             (0x1cU 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                       >> 5U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                 >> 5U))) 
                    >> 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xfffff001U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (0xffeU & (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                             >> 5U) : ((IData)(((0xcU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                           >> 5U) : 
                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                        >> 5U))) << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xff800fffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (0x7ff000U & (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : ((IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                   >> 5U) : ((IData)(((0x14U == (0x1cU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                 >> 5U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                           >> 5U))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0xfffffcU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (3U & (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                         >> 5U) : ((IData)(((0x14U 
                                             == (0x1cU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                       >> 5U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                 >> 5U))) 
                    >> 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0xffe003U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (0x1ffcU & (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                           ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                              >> 5U) : ((IData)(((0x18U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                         ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                            >> 5U) : 
                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                         >> 5U))) << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0x1fffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (0xffe000U & (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : ((IData)((
                                                   (0x1cU 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1)) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned)))
                                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass))))))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d) 
            | ((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                 & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                            >> 0x2aU)))))) 
               & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                           >> 1U)) << 1U))) | ((- (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass))))))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d) 
            | ((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass))))))) 
               & (((((- (IData)((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x2eU))))) 
                     & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                     >> 0x1fU))) << 0xcU) 
                        | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                           >> 0x14U))) | (0x1fU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                          >> 0x2cU))))) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                      >> 0x14U)))) 
                   | ((- (IData)((IData)((0x80000800000ULL 
                                          == (0x80000800000ULL 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))))) 
                      & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                      >> 0x1fU))) << 0x14U) 
                         | ((0xff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1) 
                            | ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                          >> 9U)) | 
                               (0x7feU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                          >> 0x14U))))))) 
                  | (0xfffff000U & ((- (IData)((IData)(
                                                       (0x80000000000ULL 
                                                        == 
                                                        (0x80000800000ULL 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))))) 
                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))))) 
           | ((- (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d 
        = ((((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U)) & (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2)) 
               | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x31U)) & (IData)((0U 
                                                  != 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2))) 
              | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x31U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                         >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3))) 
             | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                        >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3))) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 7U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
           & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0x11U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en 
        = (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
             | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
            | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? (0x200U | ((0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                         | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                             << 5U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd))))
            : ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                           & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                         << 2U) | (
                                                   vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                              == (0x1fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                             >> 8U))) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                          & ((0x1fU 
                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 >> 6U)) 
                                             == (0x1fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                            >> 8U))))
                ? (0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                       >> 5U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 9U))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x100U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfff003ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? ((0xfff003ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfffffc00U & (0x80000U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                              << 0xfU) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                                << 0xaU)))))
            : ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0xaU)))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x12U))) | 
                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     >> 6U)) == (0x1fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                    >> 0xaU)))) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x12U)))) ? (0xfff7ffffU 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfff003ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0xffc00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                       >> 0xfU)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                      >> 0x13U))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x40000U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xc00fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? ((0xc00fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfff00000U & (0x20000000U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                                 << 0x19U) 
                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                                   << 0x14U)))))
            : ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0x14U)))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x1cU))) | 
                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     >> 6U)) == (0x1fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                    >> 0x14U)))) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x1cU)))) ? (0xdfffffffU 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xc00fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ff00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                       >> 0x19U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                       >> 0x1dU))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x10000000U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                  << 0x1eU));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0x3fffffffU & (0x80U | ((0x3ffffff8U 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                              << 3U)) 
                                          | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                             >> 2U)))));
    } else if ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    << 2U) 
                                                   | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                      >> 0x1eU))))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 6U))) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                                  & ((0x1fU 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U)) 
                                                     == 
                                                     (0x1fU 
                                                      & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                          << 2U) 
                                                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                            >> 0x1eU))))) 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    >> 6U))))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
    }
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                       >> 3U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                    >> 7U))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x40U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffc00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? ((0xfffc00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffffff00U & (0x20000U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                              << 0xdU) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                                << 8U)))))
            : ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 4U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 8U)))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x10U))) | 
                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     >> 6U)) == (0x1fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    >> 8U)))) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x10U)))) ? (0xfffdffffU 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xfffc00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0x3ff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                       >> 0xdU)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                      >> 0x11U))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x10000U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xf003ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? ((0xf003ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xfffc0000U & (0x8000000U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                                  << 0x12U)))))
            : ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 5U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 0x12U)))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x1aU))) | 
                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     >> 6U)) == (0x1fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    >> 0x12U)))) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x1aU)))) ? (0xf7ffffffU 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xf003ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xffc0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                       >> 0x17U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 0x1bU))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x4000000U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0xffc0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                  << 0x1cU));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xffc0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xffffU & (0x20U | ((0xffffffeU & 
                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                        << 1U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                                   >> 4U)))));
    } else if ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 6U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                      >> 0x1cU))))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                     >> 4U))) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                                  & ((0x1fU 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U)) 
                                                     == 
                                                     (0x1fU 
                                                      & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                          << 4U) 
                                                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                            >> 0x1cU))))) 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    >> 4U))))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0xffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xf0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xffc0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U]));
    }
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 1U)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                    >> 5U))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x10U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))
            ? ((0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xffc0U & (0x8000U | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                         << 6U)))))
            : ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 7U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                   >> 6U)))) 
                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                     >> 0xeU))) | (
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                                    & ((0x1fU 
                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                           >> 6U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                           >> 6U)))) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                      >> 0xeU))))
                ? (0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U])
                : ((0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
                   | (0xffc0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U]))));
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 0xbU)))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 0xfU))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x4000U | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__nmi_ff__din 
        = ((8U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 2U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                              << 2U) | ((2U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_error)) 
                                                 & (~ 
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                      >> 2U) 
                                                     & (~ 
                                                        ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                         >> 1U))))) 
                                                << 1U) 
                                               | (0xfffffffeU 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                     & ((~ 
                                                         ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U)) 
                                                        << 1U))))) 
                                        | (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any)) 
                                                  & (~ 
                                                     (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U))))) 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                        >> 1U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4 
        = (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
              & (0x10U == (0x204010U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
             & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                   >> 3U))) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                  >> 0xeU))) & (~ (
                                                   (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                        >> 1U)) 
                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                               | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                  >> 1U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mhwakeup) 
                                & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                       >> 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                                                  >> 2U)))) 
                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                               >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 2U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x10U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 4U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x20U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 5U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x40U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 6U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 7U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffff00ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | (IData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in))
                                        ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                        : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffff00ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 1U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 8U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 8U)))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffff00ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 2U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x10U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x10U)))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffff00ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 3U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x18U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x18U)))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffff00ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 4U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffff00ffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 5U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xff00ffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 6U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x30U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x30U)))))) 
              << 0x30U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 7U))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x38U))
                                         : (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x38U)))))) 
              << 0x38U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs1_d 
        = (((((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 5U)))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d) 
             | ((- (IData)((1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                   & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 5U)))) 
                                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 5U)))))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d)) 
            | ((- (IData)(((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 5U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
           | ((- (IData)((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                           & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 5U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))))) 
             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_debug_wdata_rs1_d)
                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg
                 : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d)) 
            | ((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                 & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x2aU)))))) 
               & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                           >> 1U)) << 1U))) | ((- (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d 
        = (((((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 5U)))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
             | ((- (IData)((1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                   & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 5U)))) 
                                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 5U)))))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d)) 
            | ((- (IData)(((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 5U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
           | ((- (IData)((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                           & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 5U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
            | ((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
               & (((- (IData)((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x13U))))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d) 
                  | ((- (IData)((1U & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x13U)))))) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d)))) 
           | ((- (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d 
        = (((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & (IData)((0U != 
                                               (0xcU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
              | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x31U)) & (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2))) 
             | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x31U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                        >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3))) 
            | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                       >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 7U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
                               << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
                                         >> 0x1fU))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
                               << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
                                         >> 0x1eU))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[3U] 
                               << 3U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
                                         >> 0x1dU))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
            << 0x31U) | (((QData)((IData)(((((0U != 
                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
                                            << 0x1fU) 
                                           | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2))) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
        = ((((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
              | ((- (IData)((1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)))))) 
                 & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout)) 
             | ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2)) 
            | ((- (IData)(((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
           | (0x7ffffff8U & ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))) 
                             & (((IData)(1U) + (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                                >> 3U)) 
                                << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((((1U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                        | (2U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                       | (7U & ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 1U)))) | (3U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                   & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                      >> 2U)))) 
                     | (1U & ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 3U)))) | (0xeU 
                                              & ((- (IData)(
                                                            ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                    << 1U)))) 
                   | ((- (IData)((1U & (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left))) 
                                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))))) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_en) 
                 | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw 
        = (IData)((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                     >> 0x26U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U))) & (~ 
                                                 ((IData)(
                                                          (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                           >> 0x23U)) 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4)) 
                                                     | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                        >> 9U))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
               >> 0xeU)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2 
        = (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d))) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 0x28U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d 
        = (1U & (((((((((((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x13U)) & 
                              (((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U] 
                                   | vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U]) 
                                  | vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]) 
                                 | vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U]) 
                                | vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]) 
                               >> 0x1fU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall)) 
                           | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xeU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                        | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 3U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_idle)))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                      | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1)) 
                           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
                              & (0ULL == (0x30000000200ULL 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp)))) 
                          | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1)) 
                             & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U))))) 
                         | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                 >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2)) 
                            & (0ULL == (0x10000000200ULL 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                     | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                             >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                               >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2)))) 
                    | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x28U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any) 
                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                   | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | ((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                  >> 0x31U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                        & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x31U)))) 
                       | (IData)((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                    >> 0x31U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
                                  & (0ULL == (0x2010000000000ULL 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))))) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                     & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 7U)))) | (((((~ (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x31U))) 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                              >> 1U)) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3)) 
                                         | (IData)(
                                                   (((0ULL 
                                                      == 
                                                      (0x2010000000000ULL 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp)) 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                        >> 1U)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3)))) 
                                        & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                              >> 7U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                       >> 1U)) | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2))) 
                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                     & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)))))
            ? (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                    & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
               | ((- (IData)((1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 1U))) << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
              & ((~ (IData)((0U != (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 1U))))) 
                 | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                            >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
               & ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                      >> 2U)) | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                         >> 1U)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
               & ((~ (IData)((3U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 1U))))) 
                  | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                             >> 1U)))) << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                       & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 9U))) 
                                      & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                            >> 0xeU)))) 
                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_full_hit_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7ff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7ff81U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((((0xffffffc0U & ((((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 6U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                            << 5U)) 
                                | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 6U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 5U)))) 
                | (0xffffffe0U & ((((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x27U))) 
                                      & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x28U))) 
                                     & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                    << 5U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                              << 4U)) 
                                  | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x28U)) 
                                       & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                      << 5U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 4U))))) 
               & ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                  << 5U)) | ((((0xfffffff0U & (((((
                                                   (~ (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x28U))) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                 << 4U) 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   << 3U)) 
                                               | ((((IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x28U)) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                   << 4U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 3U)))) 
                               | (0xfffffff8U & (((
                                                   (((~ (IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 2U)) 
                                                 | ((((IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 3U) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 2U))))) 
                              & ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                 << 3U)) | (((0xfffffffcU 
                                              & ((((((~ (IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 2U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 1U)) 
                                                 | ((((IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (1U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 2U) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 1U)))) 
                                             | (0xfffffffeU 
                                                & ((((((~ (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 0x27U))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                  >> 0x28U))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                                                   | ((((IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x28U)) 
                                                        & (2U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
                                            & ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                               << 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7f8ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0xfffffc00U & ((((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x28U)) 
                                    & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                   | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 0x28U)) 
                                      & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)))) 
                                  << 0xaU) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 8U)) 
                                | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x27U))) 
                                      & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x28U))) 
                                     & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                    << 0xaU) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                << 8U))) 
                               | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U))) 
                                     & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x28U))) 
                                    & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                   << 0xaU) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                               << 8U))) 
                              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                 << 0xaU))) | ((0xfffffe00U 
                                                & (((((((IData)(
                                                                (0ULL 
                                                                 != 
                                                                 (0x30000000000ULL 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))) 
                                                        & (3U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                         << 7U)) 
                                                     | ((((IData)(
                                                                  (0ULL 
                                                                   != 
                                                                   (0x30000000000ULL 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))) 
                                                          & (4U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                         << 9U) 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                           << 7U))) 
                                                    | (((((~ (IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                      >> 0x27U))) 
                                                          & (IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0x30000000000ULL 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)))) 
                                                         & (3U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                        << 9U) 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                          << 7U))) 
                                                   | (((((~ (IData)(
                                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 0x27U))) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x30000000000ULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)))) 
                                                        & (4U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                         << 7U)))) 
                                               | (0xffffff00U 
                                                  & ((((((((IData)(
                                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                    >> 0x28U)) 
                                                           & (1U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                          << 8U) 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                            << 6U)) 
                                                        | ((((IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                      >> 0x28U)) 
                                                             & (2U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                            << 8U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                              << 6U))) 
                                                       | (((((~ (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                         >> 0x27U))) 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                        >> 0x28U))) 
                                                            & (1U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                           << 8U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                             << 6U))) 
                                                      | (((((~ (IData)(
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                        >> 0x27U))) 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                       >> 0x28U))) 
                                                           & (2U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                          << 8U) 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                            << 6U))) 
                                                     & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                                        << 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d 
        = (1U & (((((((((((((((((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal)) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                                   | (0ULL != (0x96000ULL 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))) 
                                  | (0ULL != (0xf00000000ULL 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))) 
                                 | (0ULL != (0x90000ULL 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))) 
                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall)) 
                               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                  >> 0xaU)) | (((0U 
                                                 != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d)) 
                                                | ((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x10800000ULL 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                               & (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x29U)))) 
                             | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x28U)) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                   >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1))) 
                           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                   >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2)) 
                              & (0ULL == (0x30000000200ULL 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)))) 
                          | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1)) 
                             & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                           >> 0x28U))))) 
                         | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                 >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2)) 
                            & (0ULL == (0x10000000200ULL 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)))) 
                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                               >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                              >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2))) 
                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d))) 
                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                     | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x27U)) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x27U)))) 
                    | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                >> 9U)) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 9U)))) 
                   | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                  >> 0x31U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                 >> 1U)) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3))) 
                 | ((IData)((((0ULL == (0x2010000000000ULL 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)) 
                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                 >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3))) 
                    & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                          >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d))) 
                   & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xfffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
                     | (0x1ffffffeU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                       >> 3U)))) | 
              (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xfff3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
                     | (0x7ffff8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                     >> 9U)))) | (4U 
                                                  & ((0xfffffffcU 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
                                                     | (0x3fffffcU 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                           >> 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xffcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                         << 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) 
              | (0x10U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                           << 4U) | (0xfffffff0U & 
                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                      << 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xff3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((0x80U & ((0xffffff80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                                        << 4U)) | (0x3ffff80U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                      >> 6U)))) 
              | (0x40U & ((0xffffffc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                                          << 4U)) | 
                          (0x1fffffc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                          >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xfcffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((0x200U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                          << 8U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                    << 3U))) | (0x100U 
                                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                                                    << 8U) 
                                                   | (0xffffff00U 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                         << 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((0x800U & ((0xfffff800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                                         << 8U)) | 
                         (0x1ffff800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                         >> 3U)))) 
              | (0x400U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                            << 8U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xcfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | ((0x2000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                           << 0xcU) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                       << 6U))) | (0x1000U 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                                                       << 0xcU) 
                                                      | (0xfffff000U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                            << 9U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0x3fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                         >> 3U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                   >> 0xfU))) << 0xfU) 
              | (0x4000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read) 
                             << 0xcU) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                         << 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4 
        = (((((((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x11U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
            & (0U == (0x20008U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xeU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall_in 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall) 
              & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                       << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))
            ? ((((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))) 
                   & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4)) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4)))))) 
                  & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual 
        = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 8U) & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4 
        = ((~ (((((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))) 
                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                     >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 6U)) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
           & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout_any_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)
            : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))
            ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_illegal_inst))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_illegal_inst);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout)
                  : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                     >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb1_data_en 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 2U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en 
        = (1U & ((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 3U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 4U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 5U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 2U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 3U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en 
        = (1U & ((0U != (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 4U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                << 0x19U) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x18U) | (((IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                     >> 0x24U)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                           << 0x17U))) 
              | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                            >> 0x21U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                  << 0x16U) | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                          >> 0x22U)) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                << 0x15U) | ((((IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 2U)) 
                                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                             << 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xc3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfc000000U & (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 9U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                               << 0x1dU) | (((IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x29U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                            << 0x1cU)) 
                             | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U)) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                 << 0x1bU) | (((IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 5U)) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                              << 0x1aU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfcffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xff000000U & (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x2dU)) 
                                & (0U != (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x19U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                           << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xfff80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                              << 0x1fU) | (0x7ff80000U 
                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0x7ffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                          | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                             >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (0xfffe0000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x13U) | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
                                            << 0x12U) 
                                           | (0x3ffe0000U 
                                              & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                                     << 0x11U)) 
                                                 & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
                                                    << 0x11U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
            & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x13U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc 
        = ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 9U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
            << 3U) | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x29U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                       << 2U) | (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
            & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action)))) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
              & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
             & (0x2800000000ULL == (0x3c00000001ULL 
                                    & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4));
    if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb1_data_en) 
         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_raw);
    if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en) 
         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_inst
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e4);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout;
    }
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) 
          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)) 
         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U];
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en) 
            << 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) 
                       << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en)));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U];
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U];
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U];
        if (vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din = 0U;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout;
        }
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) 
            << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) 
                       << 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) 
                                  << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = ((0x37fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                >> 1U)) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0xf00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__divpcff__dout);
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_trigger;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_inst;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csrmiscff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)
            : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
                << 4U) | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x12U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                           << 3U) | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x11U)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                      << 2U) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 0xfU))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x29U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x28U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 1U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xcU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xbU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 3U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 2U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xaU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x1cU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x17U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((IData)(((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc))) 
                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x31U))) << 0x13U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stallff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall)
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                    | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)))) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal))) 
               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1loadff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? ((0x7ffffffeU & ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   >> 1U) & (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                              | (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                             << 1U)) 
                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                     >> 1U) & (((1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                | (2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                               << 1U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                   << 1U)) | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                 >> 1U) 
                                                & (((1U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                   << 1U)) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   >> 1U) 
                                                  & (((1U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                      | (2U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U))) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                 << 1U)))) 
               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                   & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                              >> 0x29U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3f00fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d) 
                & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d)))))) 
               << 0x10U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_trigger_match_d) 
                             & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))) 
                            << 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffff801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffffffeU & ((0x7c0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                        << 6U)) | (
                                                   ((0x20U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                 >> 9U)) 
                                                        << 5U)) 
                                                    | (0x18U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                   >> 0x28U)) 
                                                          << 3U))) 
                                                   | (((((IData)(
                                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                  >> 0x2dU)) 
                                                         & (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                         << 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2 
        = (1U & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                       >> 2U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                 | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)))) 
                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                         >> 2U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                   | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))))) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                   | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                         >> 2U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                   | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)))) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                           >> 2U) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                     | (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))))) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d))) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout) 
                     >> 1U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (0xfffe0000U & ((0xfff80000U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                << 0x13U))) 
                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_error) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                 << 0x12U) | (0x3ffe0000U 
                                              & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                    << 0x11U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0U;
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) {
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 9U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 1U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x29U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 2U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x28U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 3U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 1U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 4U;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x1cU)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xdU;
        }
        if ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x17U)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xeU;
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                       >> 0x31U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 5U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                     & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 5U)))) 
            << 2U) | ((2U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 5U)))
                               ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x1dU))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                          >> 0x1dU))) 
                             << 1U)) | (1U & ((1U & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 5U)))
                                               ? (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 4U))
                                               : (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc 
        = ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 9U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
            << 3U) | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x29U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                       << 2U) | (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                       & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                  >> 9U)))) 
              << 5U) | (0x10U & (((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 9U)))
                                   ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 8U))
                                   : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 8U))) 
                                 << 4U))) | ((8U & 
                                              (((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 9U)))
                                                 ? (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 7U))
                                                 : (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 7U))) 
                                               << 3U)) 
                                             | (4U 
                                                & (((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                >> 9U)))
                                                     ? (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                >> 6U))
                                                     : (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 6U))) 
                                                   << 2U)))) 
           | ((0x7ffffffeU & (((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 9U)) 
                                   & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                  << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                            >> 1U)) 
                                | ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 9U)) 
                                     & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                    << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                              >> 1U))) 
                               | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 9U))) 
                                     & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U))) 
                                    & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                   << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                             >> 1U))) 
                              | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 9U))) 
                                    & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 9U))) 
                                   & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                  << 1U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                            >> 1U)))) 
              | ((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                              >> 9U)) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                       >> 2U)) | (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 9U)) 
                                   & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                     >> 2U))) | (((
                                                   (~ (IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 9U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 9U))) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                    >> 2U))) 
                 | ((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                  >> 9U))) & (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 9U))) 
                     & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                       >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                       << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                         & (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x27U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4 
        = (((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                  & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 2U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4))) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                      >> 9U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
             & (~ ((((IData)((0U != (0x60000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U]))) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfpc_dc4)))) 
            & ((IData)((0U != (0x60000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U]))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                  & (0x2800000001ULL == (0x3c00000001ULL 
                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout))))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__csr_rs1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1);
    __Vtemp_h9633071c__0[0U] = (((IData)((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                 >> 0x15U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                             >> 0x16U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x15U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                  >> 0x13U)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x14U)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                 >> 0xcU))))))) 
                                 << 0xcU) | (0xfffU 
                                             & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U]));
    __Vtemp_h9633071c__0[1U] = (((IData)((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                 >> 0x15U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                             >> 0x16U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x15U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                  >> 0x13U)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x14U)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                 >> 0xcU))))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x15U)))
                                                                           ? 
                                                                          (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x16U)))) 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                           | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                           : 
                                                                          ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                                            << 0x14U) 
                                                                           | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                              >> 0xcU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x14U)))) 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                            | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                            : 
                                                                           ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                             << 0x14U) 
                                                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                               >> 0xcU)))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h9633071c__0[2U] = ((IData)(((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                 >> 0x15U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                             >> 0x16U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x15U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                  >> 0x13U)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x14U)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                 >> 0xcU)))))) 
                                         >> 0x20U)) 
                                >> 0x14U);
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp_h9633071c__0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp_h9633071c__0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp_h9633071c__0[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
                           ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)) : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout));
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout);
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U]);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        if (vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] = 0U;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U];
        }
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_path_e1 
                << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                 >> 1U))) << 0x20U) 
               | (QData)((IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pred_correct_npc_e2 
                                   << 1U) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)))))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((0x7fffffffU & (IData)(
                                                       (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                        >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((((IData)(
                                                      (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                       >> 1U)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))))))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff);
    if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_sec_decode_e3))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                               >> 0xfU))) ? (((((- (IData)(
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                               >> 0x12U)))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                                 >> 0x11U)))) 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                                >> 0x10U)))) 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                               >> 0xfU)))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                               >> 0xbU))) ? (((((- (IData)(
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                               >> 0xeU)))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                                 >> 0xdU)))) 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                                >> 0xcU)))) 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                               >> 0xbU)))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff;
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d 
        = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
                   >> 2U) & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)
            : ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                      << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freezeff__DOT__din_new 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst)) 
           & (((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                     >> 0xeU)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2))) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = ((0x37fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                >> 1U)) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0xf00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3fff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype) 
               << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype) 
                          << 4U) | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                                      & (0ULL != (0x10800000ULL 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))) 
                                     << 3U) | (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br)) 
                                                & (0ULL 
                                                   != 
                                                   (0x10800000ULL 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))) 
                                               << 2U)))));
    if (vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p))
            ? (((QData)((IData)(((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                     >> 1U)) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                                >> 0x1fU)))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_in 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                    >> 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p))
            ? ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs1_d 
                      >> 0x1cU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                           >> 0x1dU)) 
                                    | ((((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                             >> 1U)) 
                                         & (0U != vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d)) 
                                        << 1U) | (1U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p)))))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                    >> 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable))) 
                              & (0x21U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct)))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x1ffffffffULL & ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                     >> 2U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable)))))
                              ? ((((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)))))) 
                                   & (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs1_d))) 
                                  | ((- (QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U)))))) 
                                     & ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_eff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                        << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff)))) 
                                 | ((- (QData)((IData)(
                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U))))))) 
                                    & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U)))))))))
                              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((IData)(((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc))) 
                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U))) << 0x13U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1)
                  : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                   >> 5U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 6U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout)
                  : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                     >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 2U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 5U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 4U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 3U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en 
        = ((8U & ((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                  >> 4U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                              >> 7U)) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                  << 3U)) | ((4U & ((((0U != (3U & 
                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                               >> 3U))) 
                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                    << 2U)) | ((2U 
                                                & ((((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                                          >> 2U))) 
                                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U)) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0U 
                                                      != 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en))) 
                                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken 
        = (1U & ((((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                        | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1) 
                       | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2) 
                      | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
                     | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
                   | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any))) 
                  | (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid) 
               >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & (~ (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                   | (6U < (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                 | (((IData)((1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1))) 
                     | (IData)((1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)))) 
                    | (IData)((1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval 
        = (((7U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1))) 
                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                      >> 1U))) | (3U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2))) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                                           >> 2U)))) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (~ (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                         >> 0x21U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x21U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x24U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt 
        = ((((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4))) 
                 & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                       >> 9U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
            & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 3U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                << 0xcU) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                      >> 0x20U)) << 0xcU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                        >> 0x20U)) >> 0x14U);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en)
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)
                ? ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap)
                    ? ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                              << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset))
                : ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap)
                    ? ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                              << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))))
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d 
        = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
                   >> 2U) & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset)
            : ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                      << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 4U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 3U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 2U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 1U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mul_p));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                    & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                       & (~ (IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                | ((- (IData)(((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                               & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                    & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                       & (~ (IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                | ((- (IData)(((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                               & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs1_bypass_e1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs2_bypass_e1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e1;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en)
            ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e1);
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en) 
            << 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) 
                       << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en)));
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                      >> 1U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout);
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout);
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U]);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                       >> 1U)) : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout);
    if ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en) 
          >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff;
    }
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        if (vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] = 0U;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U];
        }
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0x80000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout 
                               & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                  << 0x1fU))) | (0x7fffffffU 
                                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (((QData)((IData)(((0x80000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                 << 0x1eU)) 
                                 | (0x7fffffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal)
                                                    ? 
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                                    >> 1U)
                                                    : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout))))) 
                << 1U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout);
    if (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en) 
         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_sec_decode_e3))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                >> 7U))) ? ((((((((- (IData)(
                                                             (1U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                                 >> 0xdU)))) 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                                   >> 0xcU)))) 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3)) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                                  >> 0xbU)))) 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3)) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                                 >> 0xaU)))) 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                                >> 9U)))) 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                               >> 8U)))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                              >> 7U)))) 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))
                ? ((((((((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 6U)))) 
                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                        | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                             >> 5U)))) 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3)) 
                       | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                            >> 4U)))) 
                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3)) 
                      | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 3U)))) 
                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff)) 
                     | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                          >> 2U)))) 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                         >> 1U)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))) 
                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                  | ((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                   >> (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 1U))))) 
                     & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                           >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
                      >= (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0x10U))) ? ((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)))
                          ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
              & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken 
        = (1U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | ((((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error))) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 2U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 4U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 6U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3 
        = ((IData)((4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3 
        = ((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2 
        = ((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2 
        = ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1 
        = ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual 
        = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 4U) & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = (((((((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U];
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                << 0xcU) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                                      >> 0x20U)) << 0xcU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                        >> 0x20U)) >> 0x14U);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    }
    __Vtemp_h3b1dd7b8__0[0U] = (((IData)((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                 >> 0x10U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                             >> 0x11U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0x10U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                  >> 0xeU)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0xfU)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                 >> 0xcU))))))) 
                                 << 0xcU) | (0xfffU 
                                             & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U]));
    __Vtemp_h3b1dd7b8__0[1U] = (((IData)((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                 >> 0x10U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                             >> 0x11U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0x10U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                  >> 0xeU)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0xfU)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                 >> 0xcU))))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0x10U)))
                                                                           ? 
                                                                          (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x11U)))) 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                           | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                           : 
                                                                          ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                                            << 0x14U) 
                                                                           | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                              >> 0xcU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xfU)))) 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                            | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                            : 
                                                                           ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                             << 0x14U) 
                                                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                               >> 0xcU)))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h3b1dd7b8__0[2U] = ((IData)(((((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                 >> 0x10U)))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                             >> 0x11U)))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0x10U)))) 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                             : 
                                                            ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                              << 0x14U) 
                                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                >> 0xcU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                  >> 0xeU)))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0xfU)))) 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                               << 0x14U) 
                                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                 >> 0xcU)))))) 
                                         >> 0x20U)) 
                                >> 0x14U);
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp_h3b1dd7b8__0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp_h3b1dd7b8__0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp_h3b1dd7b8__0[2U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U];
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken) 
                    & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                        >> 0xdU) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                      >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
                ? ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                     (((IData)(0x3fU) 
                                       + (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                   << 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                       << 6U))) ? 0x20U
                       : ((IData)(0x40U) - (0x1fU & 
                                            ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 6U))))) 
                    | (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                         << 6U))) ? 0ULL
                         : ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                     << 6U))))) 
                       | ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                          (6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                 << 1U))])) 
                          >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                       << 6U))))) >> 
                   (0x38U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr 
                             << 3U))) : (QData)((IData)(
                                                        (((((- (IData)(
                                                                       (1U 
                                                                        & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))))) 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                                                              & (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U)))))) 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                                                          | ((- (IData)(
                                                                        ((0U 
                                                                          != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U))))) 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
                                                         | ((- (IData)(
                                                                       (((0U 
                                                                          != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                                                         & (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U))))) 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d)))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in) 
           | (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & ((((((- (IData)((IData)((0x28000000000ULL 
                                                 == 
                                                 (0x28000000000ULL 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                >> 0x14U)) | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((~ 
                                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                       >> 0x27U)) 
                                                                     & (0x28000000000ULL 
                                                                        == 
                                                                        (0x28000000000ULL 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))))))) 
                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                 >> 0x14U))) 
                           | ((- (IData)((IData)((0x18000000000ULL 
                                                  == 
                                                  (0x18000000000ULL 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                              & ((0xfe0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 7U))))) 
                          | ((- (IData)((1U & (IData)(
                                                      ((~ 
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)) 
                                                       & (0x18000000000ULL 
                                                          == 
                                                          (0x18000000000ULL 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp))))))) 
                             & ((0xfe0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 7U))))) 
                         & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr
                : (((((- (IData)((1U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                        & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 0x27U)))))) 
                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d) 
                     | ((- (IData)((1U & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                           & (~ (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)))) 
                                          & (IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x27U)))))) 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                    | ((- (IData)(((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                                   & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x27U))))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
                   | ((- (IData)((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                   & (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U)))) 
                                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x27U))))) 
                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1_raw;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q)) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3)) 
            << 3U) | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2)) 
                       << 2U) | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1)) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1)) 
                                  << 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0) 
                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0)) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & ((((((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xeU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                    >> 3U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 4U))) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
                   & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x15U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
               & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | (IData)((((2U == (0x802U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 9U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken)
                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                           >> 1U) : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__dout))));
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3;
    }
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U]));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U];
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2;
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                            | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                 | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))
            ? ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                     ? (((((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                           & (0x6033U | (0xf8000U & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0xfU)))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                             & (0x6033U | (0xf80U & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 7U))))) 
                         | ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                            & (0x2073U | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0x14U)))) 
                        | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                           & (0x1073U | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                         << 0x14U))))
                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((((((((((IData)((0x10U == (0x14U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                  | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 1U)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((((((((((((((0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                       | (7U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))))) 
                  | (0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4))))) 
                 | (1U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))))) 
                | (3U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))) 
               | (4U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
              | (5U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
             | (6U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
            | (7U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
           & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                       << 8U) | ((0x80U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             << 5U) 
                                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                               << 7U)) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                  << 7U)) 
                                              & ((~ 
                                                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U)) 
                                                 << 7U)))) 
                                 | (((IData)((0x204U 
                                              == (0x204U 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                     << 6U) | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa0U 
                                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual)) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                                         << 2U) 
                                                        | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                              << 1U) 
                                                             & ((0x7ffffffeU 
                                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                    >> 1U)) 
                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                                   << 1U))) 
                                                            | (0xfffffffeU 
                                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                                     << 1U) 
                                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                   & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                       >> 3U)) 
                                                                     << 1U)))) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                               & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                   >> 2U) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                     >> 3U)))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & ((((((((
                                                   ((((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4) 
                                                     | ((- (IData)(
                                                                   (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4))) 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))))) 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4)) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                   & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt))) 
                                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                                                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
                                                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))))) 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4)) 
                                                   | ((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4)) 
                                                  | ((- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                                                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                        ? 
                                                       (vlSelf->__PVT__nmi_vec 
                                                        >> 1U)
                                                        : 
                                                       ((1U 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                         ? 
                                                        ((0x7ffffffeU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                             << 1U)))
                                                         : 
                                                        (0x7ffffffeU 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))))) 
                                                | (0x7ffffffeU 
                                                   & ((- (IData)(
                                                                 ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4)))) 
                                                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))) 
                                               | ((- (IData)(
                                                             (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb))))) 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)) 
                                              | ((- (IData)(
                                                            ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout)) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)) 
                                            | ((- (IData)(
                                                          (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                  >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((0x200U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      << 1U)) | ((0x100U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            << 5U)) 
                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                     << 7U) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                 & (~ 
                                                    ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                     >> 7U))) 
                                                << 6U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                   << 5U) 
                                                  | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 2U))) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                                            << 2U) 
                                                           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                 << 1U) 
                                                                | (0xfffeU 
                                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                       << 1U) 
                                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                         >> 0x10U)))) 
                                                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                        | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 0x11U))) 
                                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
              & ((((((((((((((((((((((((((((((((((((((((((((((((((((1U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))))) 
                                                                   | (1U 
                                                                      & ((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                            >> 3U)))) 
                                                                  | (1U 
                                                                     & ((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                           >> 4U)))) 
                                                                 | ((- (IData)(
                                                                               (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                    & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                                | ((- (IData)(
                                                                              (5U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                   & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        & (~ 
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 6U))) 
                                                                       << 1U) 
                                                                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                               | ((- (IData)(
                                                                             (6U 
                                                                              == 
                                                                              (0x3fU 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                  & ((0x7fffffeU 
                                                                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                          << 1U) 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 5U))) 
                                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                              | ((- (IData)(
                                                                            (7U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned))) 
                                                             | ((- (IData)(
                                                                           (8U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded))) 
                                                            | ((- (IData)(
                                                                          (0x1dU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                                           | ((- (IData)(
                                                                         (0x1eU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                          | ((- (IData)(
                                                                        (9U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                             & (((1U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                         | ((- (IData)(
                                                                       (0xaU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                            & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                >> 1U) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))) 
                                                        | ((- (IData)(
                                                                      (0xbU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                           & (((2U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                       | ((- (IData)(
                                                                     (0xcU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((3U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (3U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                      | (((- (IData)(
                                                                     (0xdU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((2U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (2U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                     | (((- (IData)(
                                                                    (0xeU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                         & (((3U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                             << 1U) 
                                                            | (3U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                    | ((- (IData)(
                                                                  (0xfU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                       & (((4U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           << 1U) 
                                                          | (4U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                   | ((- (IData)(
                                                                 (0x10U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                      & (5U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                  | ((- (IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                     & (6U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                 | ((- (IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x3fU 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                    & (7U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                | ((- (IData)(
                                                              (0x13U 
                                                               == 
                                                               (0x3fU 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                   & (8U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                               | ((- (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                  & (9U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                              | ((- (IData)(
                                                            (0x15U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                 & (0xaU 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                             | ((- (IData)(
                                                           (0x16U 
                                                            == 
                                                            (0x3fU 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                & (0xbU 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                            | ((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x3fU 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (0xcU 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                           | ((- (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                              & ((((0xdU 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                   | (0xeU 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                  << 1U) 
                                                 | ((0xdU 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))))) 
                                          | ((- (IData)(
                                                        (0x19U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & ((0xfffffeU 
                                                 & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                       << 1U))) 
                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                         | ((- (IData)(
                                                       (0x1aU 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                            & ((0x1fffffeU 
                                                & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                      << 1U))) 
                                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                        | ((- (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                           & ((0x7ffffffeU 
                                               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                     << 1U))) 
                                              | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                       | ((- (IData)(
                                                     (0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall))) 
                                      | ((- (IData)(
                                                    (0x1dU 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                     | ((- (IData)(
                                                   (0x1eU 
                                                    == 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                    | ((- (IData)((0x1fU 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall))) 
                                   | ((- (IData)((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall))) 
                                  | ((- (IData)((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                 | ((- (IData)((0x22U 
                                                == 
                                                (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any))) 
                                | ((- (IData)((0x23U 
                                               == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any))) 
                               | ((- (IData)((0x24U 
                                              == (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any))) 
                              | ((- (IData)((0x25U 
                                             == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)))) 
                             | ((- (IData)((0x26U == 
                                            (0x3fU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                            | ((- (IData)((0x27U == 
                                           (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                           | ((- (IData)((0x28U == 
                                          (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4))) 
                          | ((- (IData)((0x29U == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                 << 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))))) 
                         | (1U & ((- (IData)((0x2aU 
                                              == (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                        | ((- (IData)((0x2bU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn))) 
                       | ((- (IData)((0x2cU == (0x3fU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned))) 
                      | (1U & ((- (IData)((0x2dU == 
                                           (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                  >> 2U)))) | ((- (IData)(
                                                          (0x2eU 
                                                           == 
                                                           (0x3fU 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error))) 
                    | (1U & ((- (IData)((0x2fU == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                >> 1U)))) | ((- (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy))) 
                  | (1U & ((- (IData)((0x31U == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
                 | ((- (IData)((0x32U == (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                       & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 2U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((4U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                               << 2U)) 
                                                                           | (4U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                          | (4U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                             << 2U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                            << 2U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                           << 2U) 
                                                                          & ((0x1ffffff8U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 3U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 2U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 2U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 2U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 2U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                      << 2U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 3U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 2U)))) 
                                                                 | (0xfffffffcU 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        << 2U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 1U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 2U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                    << 2U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 3U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 2U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 2U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                  << 2U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 3U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 2U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 2U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                << 2U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 3U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 2U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 6U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 2U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 6U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 2U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 6U))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 6U))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 2U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 6U))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 2U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 6U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 2U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 6U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 2U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 6U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 2U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 6U))))) 
                                                       << 2U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 3U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 6U))))) 
                                                      << 2U) 
                                                     & ((0x3fffff8U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 6U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 3U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 2U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 6U))))) 
                                                     << 2U) 
                                                    & ((0x7fffff8U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 5U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 3U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 2U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 6U))))) 
                                                    << 2U) 
                                                   & ((0xfffffff8U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 3U))) 
                                                      | (0x7ffffffcU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             >> 1U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 2U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 2U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 2U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 6U))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 2U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 2U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 2U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 6U))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 2U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 6U))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 2U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 6U))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 2U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 2U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 2U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 2U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                                      << 2U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 3U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 2U)))) 
                                 | (4U & (((- (IData)(
                                                      (0x2aU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                          << 2U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 2U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 2U)) 
                              | (4U & (((- (IData)(
                                                   (0x2dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        << 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 2U)) | (4U & (((- (IData)(
                                                             (0x2fU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  << 2U) 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    << 1U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 6U))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 2U)) | (4U & (((- (IData)(
                                                           (0x31U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                               << 2U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 4U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x10U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                               << 4U)) 
                                                                           | (0x10U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 1U)))) 
                                                                          | (0x10U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                             << 4U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                            << 4U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                           << 4U) 
                                                                          & ((0x7fffffe0U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 1U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 4U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 4U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 4U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 4U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                      << 4U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 5U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 4U)))) 
                                                                 | (0xfffffff0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        << 4U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 3U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 4U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                    << 4U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 5U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 4U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 4U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                  << 4U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 5U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 4U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 4U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                << 4U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 5U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 4U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xcU))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 4U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xcU))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 4U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xcU))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xcU))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 4U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xcU))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 4U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xcU))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 4U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xcU))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 4U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xcU))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 4U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xcU))))) 
                                                       << 4U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 5U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xcU))))) 
                                                      << 4U) 
                                                     & ((0xfffffe0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 4U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 5U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 4U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xcU))))) 
                                                     << 4U) 
                                                    & ((0x1fffffe0U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 3U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 5U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 4U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xcU))))) 
                                                    << 4U) 
                                                   & ((0xffffffe0U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 3U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 5U))) 
                                                      | (0xfffffff0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 1U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 4U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 4U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xcU))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 4U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0xcU))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 4U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xcU))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 4U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 4U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 4U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 4U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xcU))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 4U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 4U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 4U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 4U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                                      << 4U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 4U)))) 
                                 | (0x10U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 4U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 4U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 4U)) 
                              | (0x10U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           << 4U) & 
                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 2U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 4U)) | (0x10U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             << 4U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 3U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0xcU))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 4U)) | (0x10U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 4U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 6U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x40U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                               << 6U)) 
                                                                           | (0x40U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 3U)))) 
                                                                          | (0x40U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                            << 6U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 7U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                           << 6U) 
                                                                          & ((0xffffff80U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                << 1U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 6U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 6U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 6U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 6U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                      << 6U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 7U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 6U)))) 
                                                                 | (0xffffffc0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        << 6U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 5U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 6U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                    << 6U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 7U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 6U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 6U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                  << 6U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 7U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 6U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 6U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                << 6U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 7U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 6U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x12U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 6U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x12U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 6U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x12U))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x12U))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 6U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x12U))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 6U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x12U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 6U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x12U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 6U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x12U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 6U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x12U))))) 
                                                       << 6U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 7U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x12U))))) 
                                                      << 6U) 
                                                     & ((0x3fffff80U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 2U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 7U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 6U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x12U))))) 
                                                     << 6U) 
                                                    & ((0x7fffff80U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 7U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 6U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x12U))))) 
                                                    << 6U) 
                                                   & ((0xffffff80U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 7U))) 
                                                      | (0xffffffc0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 6U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 6U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x12U))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 6U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0x12U))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 6U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x12U))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 6U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 6U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 6U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 6U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x12U))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 6U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 6U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 6U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 6U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                                      << 6U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 7U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 6U)))) 
                                 | (0x40U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 6U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 6U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 6U)) 
                              | (0x40U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           << 6U) & 
                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 4U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 6U)) | (0x40U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             << 6U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 5U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0x12U))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 6U)) | (0x40U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 6U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 6U))));
}
