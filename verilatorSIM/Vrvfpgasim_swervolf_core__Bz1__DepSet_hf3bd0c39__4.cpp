// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__22(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__22\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
                           & (0x7c00U == (0x7c00U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                        & (0x20U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x40U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x60U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x80U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0xa0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0xc0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0xe0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x100U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x120U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x140U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x160U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x180U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x1a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x1c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x1e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x200U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x220U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x240U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x260U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x280U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x2a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x2c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x2e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x300U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x320U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x340U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x360U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x380U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x3a0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x3c0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
                           & (0x3e0U == (0x3e0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                           >> 0xaU))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                             >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0xaU)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0xaU)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0x14U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 0x14U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 8U)) == 
                                (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 8U)) == 
                                (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 0x12U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                          >> 0x12U)) 
                                == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                         >> 0xaU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                         >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e2 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (2U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (2U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin);
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout));
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
                           << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
                                        >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 4U));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 8U));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                           << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                                        >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0xcU));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x10U));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                           << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                                        >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x14U));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U]);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x18U));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
                           << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
                                        >> 0x10U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x1cU));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__dout));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                          >> 0xbU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 1U))) | (0x3ffffeU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 0xaU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 2U))) | (0x7ffffcU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 9U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (8U & ((0xfffffff8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 3U))) | (0xfffff8U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x10U & ((0xfffffff0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 4U))) 
                       | (0x1fffff0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 5U))) 
                       | (0x3ffffe0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x40U & ((0xffffffc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 6U))) 
                       | (0x7ffffc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 5U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x80U & ((0xffffff80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 7U))) 
                       | (0xfffff80U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 4U))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                >> 0xeU) | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                             >> 0xdU) & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x18000U 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)))) 
                                         | (0U != (3U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1)))))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(((1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)) 
                       & ((((((0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                        >> 0x1cU)) 
                              & (~ ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                 >> 0x10U)) 
                                    | (0x1e018U == 
                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                        >> 0xfU))))) 
                             | ((0xfU == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                          >> 0x1cU)) 
                                & (~ ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                   >> 0x10U)) 
                                      | (0x1e018U == 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                          >> 0xfU)))))) 
                            | ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                            >> 0x10U)) 
                               & (0x1e018U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                               >> 0xfU)))) 
                           | ((0x1e018U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                            >> 0xfU)) 
                              & (0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                             >> 0x10U)))) 
                          | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1) 
                             & ((0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1)) 
                                | (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                      >> 0x10U)))))));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc1 
        = (1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_rden 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
               >> 0xeU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_mken 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
               >> 0xdU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any 
        = (0xfU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                     + (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1) 
                              << ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1))))) 
                    + (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2) 
                             << ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2))))) 
                   + (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3) 
                            << ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3) 
                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & (((((((IData)((1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1))) 
                        << (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1))) 
                       + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                          << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2))) 
                      + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                         << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3))) 
                     + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                        << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4))) 
                    + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                       << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                   + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
               : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
               : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
               : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                     : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                        >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
               : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                            >> 0x11U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                     : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                        >> 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfff3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xffcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xff3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfcffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xcfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0x3fffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                 ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                 : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
               << 1U) | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                 ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                 : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
               << 3U) | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                           ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                           : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
                         << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                 ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                 : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
               << 5U) | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                           ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                           : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
                         << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                 ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                 : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
               << 7U) | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                           ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                           : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
                         << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                  & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfffff8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
               : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                   ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                   : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xffffc7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfffe3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfff1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xff8fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfc7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xe3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
               : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                   ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                   : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U] 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xffffff0fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U] 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffff0ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U] 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xffff0fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U] 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfff0ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[4U] 
        = ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xff0fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[5U] 
        = ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xf0ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[6U] 
        = ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[7U] 
        = ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 9U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0xcU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0xfU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0x12U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_state_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0x15U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 4U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 5U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 6U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 7U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)(((((4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                         & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
                            | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)((((IData)(((0x20U == (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 1U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 1U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 1U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 1U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)((((IData)(((0x100U == (0x1c0U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 2U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 2U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 2U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 2U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)((((IData)(((0x800U == (0xe00U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 3U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 3U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 3U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 3U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
              & (- (IData)((((IData)(((0x4000U == (0x7000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 4U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 4U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 4U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 4U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
              & (- (IData)((((IData)(((0x20000U == 
                                       (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 5U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 5U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 5U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 5U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
              & (- (IData)((((IData)(((0x100000U == 
                                       (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 6U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 6U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 6U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 6U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
              & (- (IData)((((IData)(((0x800000U == 
                                       (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 7U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 7U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 7U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 7U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)(((((4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)((((IData)(((0x20U == (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 1U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)((((IData)(((0x100U == (0x1c0U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 2U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 2U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)((((IData)(((0x800U == (0xe00U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 3U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
              & (- (IData)((((IData)(((0x4000U == (0x7000U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 4U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 4U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
              & (- (IData)((((IData)(((0x20000U == 
                                       (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 5U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 5U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 5U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
              & (- (IData)((((IData)(((0x100000U == 
                                       (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 6U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 6U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
              & (- (IData)((((IData)(((0x800000U == 
                                       (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 7U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 7U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 1U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 1U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 2U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 2U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 3U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 3U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x4000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 4U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 4U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 5U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 5U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 6U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 6U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 7U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 7U))) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                 >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error))) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
              | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 1U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 1U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 1U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 2U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 2U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 2U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 3U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 3U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 3U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x4000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 4U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 4U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 4U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 5U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 5U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 5U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 6U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 6U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 6U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                               >> 7U)) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                     >> 7U))) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                     >> 7U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 1U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 2U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 3U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x4000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 4U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 4U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 5U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 5U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 6U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 6U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 7U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 7U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                             >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
              | (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 1U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 1U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 1U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 2U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 2U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 2U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 3U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 3U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 3U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x4000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 4U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 4U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 4U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x20000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 5U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 5U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 5U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x100000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 6U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 6U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 6U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (0x800000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                   >> 5U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                               >> 7U)) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                  >> 7U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                 >> 7U)) | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (1U & (- (IData)((((IData)(((0x20U == (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                         >> 1U))) & 
                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                              >> 1U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 1U)) 
                                         | (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                               >> 1U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (2U & (- (IData)((((IData)(((0x100U == 
                                          (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 2U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 2U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 2U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 2U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (3U & (- (IData)((((IData)(((0x800U == 
                                          (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 3U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 3U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 3U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 3U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (4U & (- (IData)((((IData)(((0x4000U == 
                                          (0x7000U 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 4U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 4U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 4U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 4U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (5U & (- (IData)((((IData)(((0x20000U 
                                          == (0x38000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 5U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 5U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 5U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 5U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (6U & (- (IData)((((IData)(((0x100000U 
                                          == (0x1c0000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 6U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 6U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 6U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 6U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                 | (- (IData)((((IData)(((0x800000U 
                                          == (0xe00000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                            >> 7U))) 
                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                   >> 7U)) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                  >> 7U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 7U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
            & (2U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 1U) & (0x10U == 
                                          (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 2U) & (0x80U == 
                                          (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 3U) & (0x400U == 
                                          (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 4U) & (0x2000U == 
                                          (0x7000U 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 5U) & (0x10000U 
                                          == (0x38000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 6U) & (0x80000U 
                                          == (0x1c0000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 7U) & (0x400000U 
                                          == (0xe00000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                      & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = ((2U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 3U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 6U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 9U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xcU))) & (~ 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xfU))) & (~ 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x12U))) & (~ 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x15U))) & (~ 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = ((1U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | ((2U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 3U))) | (IData)(
                                                       ((0x10U 
                                                         == 
                                                         (0x38U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 1U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 6U))) | (IData)(
                                                       ((0x80U 
                                                         == 
                                                         (0x1c0U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 2U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 9U))) | (IData)(
                                                       ((0x400U 
                                                         == 
                                                         (0xe00U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 3U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xcU))) | (IData)(
                                                         ((0x2000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                          & (~ 
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                              >> 4U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xfU))) | (IData)(
                                                         ((0x10000U 
                                                           == 
                                                           (0x38000U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                          & (~ 
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                              >> 5U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x12U))) | (IData)(
                                                          ((0x80000U 
                                                            == 
                                                            (0x1c0000U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                           & (~ 
                                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                               >> 6U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x15U))) | (IData)(
                                                          ((0x400000U 
                                                            == 
                                                            (0xe00000U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                           & (~ 
                                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                               >> 7U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffeULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | (IData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                                    & (~ ((2U == (7U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffdULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 1U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffbULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 2U)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffff7ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 3U)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffefULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 4U)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffdfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 5U)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffbfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 6U)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffff7fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 7U)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffeffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 8U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffdffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 9U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffbffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xaU)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffff7ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xbU)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffefffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xcU)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffdfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xdU)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffbfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xeU)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffff7fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xfU)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffeffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x10U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffdffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x11U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffbffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x12U)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffff7ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x13U)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffefffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x14U)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffdfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x15U)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffbfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x16U)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffff7fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x17U)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffeffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x18U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffdffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x19U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffbffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1aU)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffff7ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1bU)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffefffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1cU)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffdfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1dU)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffbfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1eU)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffff7fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1fU)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffeffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x20U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffdffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x21U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x21U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffbffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x22U)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x22U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffff7ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x23U)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x23U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffefffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x24U)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x24U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffdfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x25U)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x25U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffbfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x26U)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x26U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffff7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x27U)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x27U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffeffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x28U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x28U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffdffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x29U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x29U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffbffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2aU)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x2aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffff7ffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2bU)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x2bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffefffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2cU)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x2cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffdfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2dU)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x2dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffbfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2eU)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x2eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffff7fffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2fU)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x2fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffeffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x30U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x30U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffdffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x31U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x31U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffbffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x32U)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x32U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfff7ffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x33U)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x33U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffefffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x34U)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x34U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffdfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x35U)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x35U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffbfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x36U)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x36U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xff7fffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x37U)) 
                                     & (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x37U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfeffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x38U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x38U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfdffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x39U)) 
                                     & (~ (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x38U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 1U)))))))) 
              << 0x39U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfbffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3aU)) 
                                     & (~ (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x1c0U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 2U)))))))) 
              << 0x3aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xf7ffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3bU)) 
                                     & (~ (IData)((
                                                   (0x400U 
                                                    == 
                                                    (0xe00U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 3U)))))))) 
              << 0x3bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xefffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3cU)) 
                                     & (~ (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U)))))))) 
              << 0x3cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xdfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3dU)) 
                                     & (~ (IData)((
                                                   (0x10000U 
                                                    == 
                                                    (0x38000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U)))))))) 
              << 0x3dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xbfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3eU)) 
                                     & (~ (IData)((
                                                   (0x80000U 
                                                    == 
                                                    (0x1c0000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 6U)))))))) 
              << 0x3eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0x7fffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((IData)(((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                        >> 0x3fU) & 
                                       (~ (IData)((
                                                   (0x400000U 
                                                    == 
                                                    (0xe00000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 7U)))))))) 
              << 0x3fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3)) 
                       | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)))) 
                          & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                     >> 0x20U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                         >> 0x38U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | ((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                  >> 3U)))) & (IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                       >> 0x18U))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                    >> 3U)))) & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                         >> 0x38U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xffU & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U]
                        : ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U]
                        : ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xff00U & (((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                           ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                               << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                            >> 8U))
                           : ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                               ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                  >> 8U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                            >> 8U))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xff00U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                           ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                               << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                            >> 8U))
                           : ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                               ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                  >> 8U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                            >> 8U))) 
                         << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xff0000U & (((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                             ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                 << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                              >> 0x10U))
                             : ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                 ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                    >> 0x10U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xff0000U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                             ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                 << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                              >> 0x10U))
                             : ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                 ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                    >> 0x10U) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                    << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                              >> 0x18U)) : ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                                >> 0x18U)
                                             : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                                >> 0x18U))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                    << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                              >> 0x18U)) : ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                >> 0x18U)
                                             : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                                >> 0x18U))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
        = (((- (IData)((1U & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((IData)((0x28U == (0x28U & 
                                            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
        = (((- (IData)((1U & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((IData)((0xa00U == (0xa00U 
                                             & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
        = (((- (IData)((1U & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((IData)((0x28000U == (0x28000U 
                                               & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
        = (((- (IData)((1U & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U))))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((IData)((0xa00000U == (0xa00000U 
                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1_ns));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
               >> 0x1eU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in = 0U;
    if ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 8U));
    }
    if ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0xeU));
    }
    if ((8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x10U));
    }
    if ((9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x12U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x14U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x16U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x18U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x1aU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
                     >> 0x1cU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
               >> 0x1eU);
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__iccrit_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod) 
            << 2U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word) 
                       << 1U) | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                       >> 1U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__btb_lru_ff__din 
        = ((0xf000U & (((0xfffff000U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b0)) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b0))) 
                                         << 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout))) 
                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b0) 
                            & (- (IData)((1U & (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]))))) 
                           << 0xcU)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b0) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2))))) 
                                        << 0xcU))) 
           | ((0xf00U & (((0xffffff00U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b1)) 
                                            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b1))) 
                                           << 8U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout))) 
                          | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b1) 
                              & (- (IData)((1U & (~ 
                                                  vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]))))) 
                             << 8U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b1) 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                                          >> 1U))))) 
                                        << 8U))) | 
              ((0xf0U & (((0xfffffff0U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b2)) 
                                            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b2))) 
                                           << 4U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout))) 
                          | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b2) 
                              & (- (IData)((1U & (~ 
                                                  vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]))))) 
                             << 4U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b2) 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                                          >> 2U))))) 
                                        << 4U))) | 
               (0xfU & (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b3)) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b3))) 
                          & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout)) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b3) 
                            & (- (IData)((1U & (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U])))))) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b3) 
                           & (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                               >> 3U))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | (1U & (~ ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push)) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((9U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | (6U & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                     | (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop)))) 
                    << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]) 
           | (0x80000000U & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]) 
                              << 0x1fU) | (0x80000000U 
                                           & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                               << 0x1fU) 
                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                 << 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
        = ((0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U]) 
           | (0x3fffffffU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]) 
                              >> 1U) | (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                         >> 1U) & (
                                                   (0x7ffffffeU 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                                       << 1U)) 
                                                   | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                      >> 0x1fU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               << 0x1eU) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                             << 0x1fU) 
                                            | (0x40000000U 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U] 
                                                  >> 1U)))) 
                             | (0xc0000000U & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                                << 0x1eU) 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                                  << 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
        = ((0xe0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U]) 
           | (0x1fffffffU & ((0x3fffffffU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                                              >> 2U) 
                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                >> 1U))) 
                             | (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                 >> 2U) & ((0x3ffffffeU 
                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[3U] 
                                               << 1U)) 
                                           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                              >> 0x1fU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_bp_mem_mask 
        = (((((((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask)))) 
                  & (1U | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                           << 1U))) | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                                      >> 1U)))) 
                                       & (2U | (0xfcU 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 2U))))) 
                | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                     >> 2U)))) & (4U 
                                                  | (0xf8U 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                        << 3U))))) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                    >> 3U)))) & (8U 
                                                 | (0xf0U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                       << 4U))))) 
              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                   >> 4U)))) & (0x10U 
                                                | (0xe0U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 5U))))) 
             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                  >> 5U)))) & (0x20U 
                                               | (0xc0U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                     << 6U))))) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                 >> 6U)))) & (0x40U 
                                              | (0x80U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                    << 7U))))) 
           | (0x80U & (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                        >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))) 
           & ((0xf0U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half))) 
                        << 4U)) | (0xfU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout_in 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_illegal) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_illegal) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout)))
                       ? (((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal)))
                           ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)
                           : ((((3U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                & (3U != (3U & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x10U))))) 
                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal)))
                               ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                          >> 0x10U))
                               : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                          >> 0x20U))))
                       : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_illegal_inst)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
               >> 2U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B) 
                          & (4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val 
        = (((((0x7fU & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                           >> 1U))) | (0x3fU & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                   >> 2U)))) 
             | (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                            >> 3U)))) | (0xfU & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                    >> 4U)))) 
           | ((- (IData)((1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B 
        = ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B 
        = (((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
           | ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B 
        = ((((IData)((4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
            | ((IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
           | ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_addr__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_addr__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_addr__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                                >> 0xfU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__predtgt_addr__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__predtgt_addr__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                      >> 0xfU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__predtgt_addr__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                      >> 9U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                        >> 8U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                       >> 7U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                      >> 6U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                     >> 5U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                    >> 4U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                   >> 3U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                  >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2)) 
           | ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
              | (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                      >> 9U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                        >> 8U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                       >> 7U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                      >> 6U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                     >> 5U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                    >> 4U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                   >> 3U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                  >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2)) 
           | ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
              | (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfffe3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
               << 4U) | ((0x1ff8U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                       >> 0x13U) & 
                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                       << 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br) 
                                                  << 3U))) 
                         | (((~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                  >> 0x16U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra) 
                << 0xbU) | ((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x31U)) 
                                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                               & (IData)((0U != (0xeU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                              & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra))))) 
                             << 0xaU) | ((((((IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x31U)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xeU 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra))))) 
                                          << 9U) | 
                                         ((((((IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                       >> 0x31U)) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xeU 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra))))) 
                                           << 8U) | 
                                          (((((IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                       >> 0x31U)) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xeU 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs1_intra))))) 
                                           << 7U))))) 
              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra) 
                  << 4U) | ((((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x31U)) 
                                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                               & (IData)((0U != (0xeU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                              & (~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra))))) 
                             << 3U) | ((((((IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x31U)) 
                                           & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                          & (IData)(
                                                    (0U 
                                                     != 
                                                     (0xeU 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra))))) 
                                        << 2U) | ((
                                                   ((((IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 0x31U)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra))))) 
                                                   << 1U) 
                                                  | ((((IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x31U)) 
                                                       & (4U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xeU 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d))))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1rs2_intra)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d 
        = ((((((- (IData)((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x2eU))))) 
               & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                               >> 0x1fU))) << 0xcU) 
                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                     >> 0x14U))) | (0x1fU & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                    >> 0x2cU))))) 
                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                >> 0x14U)))) 
             | ((- (IData)((IData)((0x80000800000ULL 
                                    == (0x80000800000ULL 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0) 
                      | ((0x800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 0x14U))))))) 
            | (0xfffff000U & ((- (IData)((IData)((0x80000000000ULL 
                                                  == 
                                                  (0x80000800000ULL 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
           | (0x1fU & ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                   & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0xfU))))) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                          >> 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
               << 1U) | (1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0xfU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d 
        = (0xfU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e1)
                     ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e1)
                                          ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e1)
                    ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e1)
                                         ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d 
        = (0xfU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e1)
                     ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e1)
                                          ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e1)
                    ? (1U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e1)
                                         ? (2U | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_rden_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc2));
    vlSelf->__PVT__swerv_eh1__DOT__dccm_rden = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc1) 
                & (1U == (0x801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1))) 
               & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                    >> 0x1cU) != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                  >> 0x1cU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1) 
                                                & (~ 
                                                   ((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                       >> 0x10U) 
                                                      & (0U 
                                                         == 
                                                         (3U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1))) 
                                                     | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                         >> 0x11U) 
                                                        & (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1))) 
                                                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                       >> 0x12U))))));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_in 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_in 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_ff;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_in 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_rden;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_in 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_mken;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_any) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
           & (((~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_rden)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_mken))) 
               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_rden) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__picm_mken)) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any)))) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any) 
                    | (~ (((7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                  >> 2U)) == (7U & 
                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                               >> 2U))) 
                          | ((7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                    >> 2U)) == (7U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                   >> 2U)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any 
        = ((6U < (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any)) 
           | (7U <= (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_samedwff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_sideeffectff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_unsignff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 8U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xaU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xcU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xeU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_szff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_writeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nomergeff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 1U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 5U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 7U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualhiff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 3U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 9U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0xcU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0xfU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0x12U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0x15U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualtagff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 8U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0xcU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x10U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x14U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x18U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x1cU) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_byteenff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[4U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[5U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[6U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[7U]
            : vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz 
        = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                 >> (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
        = (IData)(((0x3fU >= (0x18U & ((((0U == (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                    << 5U)))
                                          ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                       << 5U))))) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                           (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                  << 5U)))) 
                                       << 3U))) ? (
                                                   (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo))) 
                                                   >> 
                                                   (0x18U 
                                                    & ((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                              << 5U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                          (((IData)(1U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                                << 5U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U))))) 
                                                        | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U)))) 
                                                       << 3U)))
                    : 0ULL));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
               == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                         >> 5U))) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 9U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x3ffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                           == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0xfU))) << 1U) 
                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                            >> 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x1cU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                         == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                   >> 0x19U))) << 2U) 
                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x1bU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffffff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                              == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        >> 3U))) << 3U) 
                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                               >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x7fff0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                            == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                      >> 0xdU))) << 4U) 
                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                             >> 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x3e0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                          == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                    >> 0x17U))) << 5U) 
                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                           >> 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffffffc0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                               == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 1U))) << 6U) 
                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffff80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                       >> 0xbU))) << 7U) 
                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                              >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_dual 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
             & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
              >> 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffeULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | (IData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                     & ((((1U == (7U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                          | ((2U == 
                                              (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffdULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffbULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffff7ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffefULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffdfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffbfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffff7fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffeffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffdffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffbffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffff7ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffefffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffdfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffbfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffff7fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 1U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffeffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffdffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffbffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffff7ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffefffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffdfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffbfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffff7fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 2U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffeffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffdffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffbffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffff7ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffefffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffdfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffbfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffff7fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 3U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffeffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffdffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffbffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffff7ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffefffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffdfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffbfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffff7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 4U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffeffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffdffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffbffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffff7ffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffefffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffdfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffbfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffff7fffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x38000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 5U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (5U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffeffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffdffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffbffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfff7ffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffefffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffdfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffbfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xff7fffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0x1c0000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 6U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (6U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfeffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           | ((2U == 
                                               (7U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfdffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | (IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 1U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfbffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | (IData)(
                                                     ((0x80U 
                                                       == 
                                                       (0x1c0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 2U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xf7ffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | (IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0xe00U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 3U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xefffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | (IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 4U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xdfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | (IData)(
                                                     ((0x10000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 5U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xbfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | (IData)(
                                                     ((0x80000U 
                                                       == 
                                                       (0x1c0000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 6U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0x7fffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & (((IData)(((0U 
                                                == 
                                                (0xe00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                                  >> 7U))) 
                                      & ((((1U == (7U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | (IData)(
                                                     ((0x400000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                          >> 7U))))) 
                                          | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (7U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((~ (IData)((0U != (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))))) 
               & (2U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x10U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 8U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 1U))) << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x80U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x10U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 2U))) << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x400U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x18U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 3U))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x2000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x20U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 4U))) << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x10000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x28U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 5U))) << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x80000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x30U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 6U))) << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((IData)(((0x400000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                        & (~ (IData)((0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                        >> 0x38U)))))))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 7U))) << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffffffdULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 1U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffffffbULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 2U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffffff7ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 3U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffffefULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 4U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffffdfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 5U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffffbfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 6U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffff7fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 7U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffffeffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 8U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffffbffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xaU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffff7ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xbU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffefffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xcU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffdfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xdU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffffbfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xeU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffff7fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0xfU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffeffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x10U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffffdffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x11U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffff7ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x13U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffefffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x14U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffdfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x15U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffffbfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x16U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffff7fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x17U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffeffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x18U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffdffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x19U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffffbffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x1aU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffefffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x1cU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffdfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x1dU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffffbfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x1eU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffff7fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x1fU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffeffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x20U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffdffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x21U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x21U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffffbffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x22U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0x22U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffff7ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x23U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0x23U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffdfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x25U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0x25U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffffbfffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x26U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0x26U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffff7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x27U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0x27U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffeffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x28U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x28U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffdffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x29U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x29U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffffbffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x2aU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0x2aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffff7ffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x2bU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0x2bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffefffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x2cU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0x2cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffffbfffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x2eU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0x2eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffff7fffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x2fU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0x2fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffeffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x30U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x30U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffdffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x31U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x31U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffbffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x32U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0x32U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfff7ffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x33U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0x33U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffefffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x34U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0x34U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffdfffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x35U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0x35U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xff7fffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x37U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))))) 
              << 0x37U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfeffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x38U))) 
                               & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
              << 0x38U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfdffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x39U))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))))) 
              << 0x39U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfbffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x3aU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))))) 
              << 0x3aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xf7ffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x3bU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))))) 
              << 0x3bU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xefffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x3cU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))))) 
              << 0x3cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xdfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x3dU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))))) 
              << 0x3dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xbfffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
           | ((QData)((IData)(((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                           >> 0x3eU))) 
                               & (0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))))) 
              << 0x3eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                            >> 1U)))) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                            >> 1U)))) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                              >> 2U)))) 
                            << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                              >> 2U)))) 
                            << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                                >> 3U)))) 
                              << 0x18U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                                >> 3U)))) 
                              << 0x18U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = (IData)((((QData)((IData)(((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                      : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                    << 0x20U) | (QData)((IData)(((1U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                  : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = (IData)(((((QData)((IData)(((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                       : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                     << 0x20U) | (QData)((IData)(((1U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                   : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = (IData)((((QData)((IData)(((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                      : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                  : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = (IData)(((((QData)((IData)(((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                       : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                   : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[4U] 
        = (IData)((((QData)((IData)(((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                      : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                  : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[5U] 
        = (IData)(((((QData)((IData)(((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                       : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                   : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[6U] 
        = (IData)((((QData)((IData)(((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                      : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                    << 0x20U) | (QData)((IData)(((0x40U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                  : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[7U] 
        = (IData)(((((QData)((IData)(((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                       : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3))) 
                     << 0x20U) | (QData)((IData)(((0x40U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                                   ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
                                                   : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                            >> 1U)))) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffff00ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                            >> 1U)))) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                              >> 2U)))) 
                            << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xff00ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                              >> 2U)))) 
                            << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                                >> 3U)))) 
                              << 0x18U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                                >> 3U)))) 
                              << 0x18U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0xc0000U == (0xc0000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x1c0000U == (0x1c0000U & 
                                       vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x3c0000U == (0x3c0000U & 
                                       vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x7c0000U == (0x7c0000U & 
                                       vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0xfc0000U == (0xfc0000U & 
                                       vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x1fc0000U == (0x1fc0000U 
                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x3fc0000U == (0x3fc0000U 
                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x7fc0000U == (0x7fc0000U 
                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0xffc0000U == (0xffc0000U 
                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x1ffc0000U == (0x1ffc0000U 
                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x3ffc0000U == (0x3ffc0000U 
                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | (((IData)(((0x7ffc0000U == (0x7ffc0000U 
                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U])) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask))) 
               | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                   >> 0x1fU) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                       >> 0xdU)))) 
              << 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                             >> 0x12U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
}
