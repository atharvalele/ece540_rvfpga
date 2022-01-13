// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__27(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__27\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l)
            ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din)
            : 0U);
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = (((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            | (6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           | (7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__31(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__31\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]);
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U])];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = ((0xffffff80U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U]) 
           | (IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__32(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__32\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                         >> 0xbU));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                        >> 0xbU))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = ((0x7fU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
               >> 0x19U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
                                     >> 0x20U)) << 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__33(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__33\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                          << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                      >> 0x16U)));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                         << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                     >> 0x16U)))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = ((0xffe00000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
               >> 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
                                     >> 0x20U)) << 0xeU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__34(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__34\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                         >> 1U));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                        >> 1U))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = ((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xf0000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
               >> 0xbU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
                                    >> 0x20U)) << 0x15U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__35(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__35\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                         >> 0xcU));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                        >> 0xcU))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
            >> 4U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                               >> 0x20U)) << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U]) 
           | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                       >> 0x20U)) >> 4U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__36(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__36\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                          << 9U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                    >> 0x17U)));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                         << 9U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                   >> 0x17U)))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = ((7U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = ((0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
               >> 0x1dU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
                                     >> 0x20U)) << 3U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__37(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__37\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                         >> 2U));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                        >> 2U))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = ((0x3ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = ((0xfffe0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
               >> 0x16U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
                                     >> 0x20U)) << 0xaU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__38(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__38\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                         >> 0xdU));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core
            [(0x7ffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                        >> 0xdU))];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = ((0x1ffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
              << 0x11U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[9U] 
        = (0xffffffU & (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                         >> 0xfU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
                                              >> 0x20U)) 
                                     << 0x11U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__39(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__39\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]) 
           | (IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__40(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__40\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                               >> 2U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = ((3U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x1eU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 2U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__41(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__41\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                               >> 4U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0xfU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = ((0xffffffc0U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x1cU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 4U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__42(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__42\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x1000U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = ((0x3fU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x1aU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 6U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__43(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__43\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = ((0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x18U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 8U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__44(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__44\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                               >> 2U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = ((0x3ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0xfffff000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x16U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 0xaU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__45(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__45\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x200U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                               >> 4U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0xffffc000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x14U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 0xcU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__46(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__46\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x2000U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0x3fffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 0xeU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__47(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__47\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
        = ((0xfffc0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0x10U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                     >> 0x20U)) << 0x10U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__48(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__48\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                               >> 2U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
        = ((0x3ffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
        = ((0xfff00000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0xeU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                    >> 0x20U)) << 0x12U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__49(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__49\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x400U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                               >> 4U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
        = ((0xffc00000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0xcU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                    >> 0x20U)) << 0x14U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__50(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__50\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x4000U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
        = ((0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 0xaU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                    >> 0x20U)) << 0x16U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__51(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__51\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
        = ((0xfc000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 8U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                  >> 0x20U)) << 0x18U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__52(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__52\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                               >> 2U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
        = ((0x3ffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
        = ((0xf0000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 6U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                  >> 0x20U)) << 0x1aU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__53(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__53\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x800U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                               >> 4U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
        = ((0xfffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
        = ((0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU]) 
           | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
               >> 4U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                  >> 0x20U)) << 0x1cU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__54(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__54\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q = 0ULL;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
        = ((0x3fffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU]) 
           | ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
            >> 2U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                               >> 0x20U)) << 0x1eU));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__55(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__55\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q = 0U;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
        = ((0xffe00000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
           | vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__56(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__56\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q = 0U;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
        = ((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0xfffffc00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
              >> 0xbU));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__57(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__57\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q = 0U;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0x800003ffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
              << 0xaU));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__58(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__58\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q = 0U;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
            [vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q];
    }
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
        = (0xfffffU & (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                       >> 1U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__61(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___sequent__TOP__rvfpgasim__swervolf__61\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb771c790__0;
    VlWide<3>/*95:0*/ __Vtemp_h672c2215__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout) 
            << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout) 
                       << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
                                  << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__dccm_wr_data = (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (VL_REDXOR_32(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any) 
                                                                        ^ 
                                                                        VL_REDXOR_8(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT__ecc_out_temp))))) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT__ecc_out_temp)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
              & (0U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (4U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (8U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (0xcU == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (0x10U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (0x14U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (0x18U == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_wren) 
               & (0x1cU == (0x1cU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)))) 
              << 7U));
    __Vtemp_hb771c790__0[2U] = (((IData)((0x3ffffffffULL 
                                          & ((IData)(
                                                     (5ULL 
                                                      == 
                                                      (0xdULL 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                 >> 0x13U)
                                              : (((QData)((IData)(
                                                                  vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                       >> 2U)))))) 
                                 >> 0x1eU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & ((IData)(
                                                                   (5ULL 
                                                                    == 
                                                                    (0xdULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                                            ? 
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                            >> 0x13U)
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                                << 0x1eU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                                  >> 2U))))) 
                                                       >> 0x20U)) 
                                              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U] 
        = (IData)((0x3ffffffffULL & ((IData)((1ULL 
                                              == (0xdULL 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                      ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                         >> 0x13U) : 
                                     (((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U] 
        = (((IData)((0x3ffffffffULL & ((IData)((5ULL 
                                                == 
                                                (0xdULL 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                           >> 0x13U)
                                        : (((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                 >> 2U)))))) 
            << 2U) | (IData)(((0x3ffffffffULL & ((IData)(
                                                         (1ULL 
                                                          == 
                                                          (0xdULL 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                                  ? 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                  >> 0x13U)
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))) 
                              >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U]) 
           | __Vtemp_hb771c790__0[2U]);
    __Vtemp_h672c2215__0[2U] = (((IData)((0x3ffffffffULL 
                                          & ((IData)(
                                                     (0xdULL 
                                                      == 
                                                      (0xdULL 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                              ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                 >> 0x13U)
                                              : (((QData)((IData)(
                                                                  vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                       >> 2U)))))) 
                                 >> 0x1eU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & ((IData)(
                                                                   (0xdULL 
                                                                    == 
                                                                    (0xdULL 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                                            ? 
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                            >> 0x13U)
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                                << 0x1eU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                                  >> 2U))))) 
                                                       >> 0x20U)) 
                                              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
        = ((0xfU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U]) 
           | ((IData)((0x3ffffffffULL & ((IData)((9ULL 
                                                  == 
                                                  (0xdULL 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                          ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                             >> 0x13U)
                                          : (((QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U])))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
        = (((IData)((0x3ffffffffULL & ((IData)((9ULL 
                                                == 
                                                (0xdULL 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                           >> 0x13U)
                                        : (((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U])))))) 
            >> 0x1cU) | (((IData)((0x3ffffffffULL & 
                                   ((IData)((0xdULL 
                                             == (0xdULL 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                     ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                        >> 0x13U) : 
                                    (((QData)((IData)(
                                                      vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                      >> 2U)))))) 
                          << 6U) | ((IData)(((0x3ffffffffULL 
                                              & ((IData)(
                                                         (9ULL 
                                                          == 
                                                          (0xdULL 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                                  ? 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                  >> 0x13U)
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
        = (0xffU & (((0xfU & ((IData)((0x3ffffffffULL 
                                       & ((IData)((0xdULL 
                                                   == 
                                                   (0xdULL 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                              >> 0x13U)
                                           : (((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                    >> 2U)))))) 
                              >> 0x1aU)) | ((IData)(
                                                    ((0x3ffffffffULL 
                                                      & ((IData)(
                                                                 (9ULL 
                                                                  == 
                                                                  (0xdULL 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                                                          ? 
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                          >> 0x13U)
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))) 
                                                     >> 0x20U)) 
                                            >> 0x1cU)) 
                    | (__Vtemp_h672c2215__0[2U] << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q 
        = (0xffU & ((IData)((0ULL != (3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 4U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xfff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
               & (- (IData)((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 2U)))))) | 
              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
               & (- (IData)((0U == (3U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                  >> 2U)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xff0fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 2U)))))) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                  & (- (IData)((1U == (3U & (IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                     >> 2U)))))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                    >> 2U))))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                                                  & (- (IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                            >> 2U)))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xfffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                    >> 2U))))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                                                  & (- (IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                            >> 2U)))))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data 
        = (0x1fffffU & ((IData)((0x40001ULL == (0x40001ULL 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                         ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                    >> 0x1fU)) : ((0x100000U 
                                                   & (VL_REDXOR_32(
                                                                   (0xfffffU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                                       >> 0xbU))) 
                                                      << 0x14U)) 
                                                  | (0xfffffU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                        >> 0xbU)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q 
        = (0x3fU & ((IData)((0ULL != (3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                     ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 6U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
            & (- (IData)((7U == (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 2U)))))) 
           | ((- (IData)((IData)((0x40001ULL == (0x40001ULL 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way)));
    if (vlSelf->__PVT__swerv_eh1__DOT__core_rst_l) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr_dff__DOT____Vcellinp__dffs__din;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req 
        = (1U & ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                    & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rpend) 
                          >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                   & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                  & (~ (IData)((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                             >> (7U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                    << 1U)))))))) 
                 & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                        >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid) 
                       >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__core_rst_l)
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4) 
                << 0xaU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4) 
                             << 9U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                        << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                             & (~ 
                                                                (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                 >> 0x11U))) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                     >> 0x15U)) 
                                                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)))))))))))
            : 0U);
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_iccm_valid) 
               >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid) 
               >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
            ? 0U : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x1ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | ((IData)(((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout 
                        >> 0x19U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))) 
              << 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x3f0ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | (0xf0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_trigger)
                            : (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout 
                               >> 0x10U)) << 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x3fffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) 
              << 1U));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e4) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            = ((0x3f00fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
               | (0xff000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                              << 0xcU)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                              >> 1U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                           >> 0xaU)))) 
                 & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))))
            ? (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr 
        = (3U & (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                   << 5U))) ? 0U : 
                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                   (((IData)(1U) + (0x7fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                             << 5U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                     << 5U))))) 
                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                    (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))] 
                    >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                  (3U & (((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                         << 5U)) >> 5U))] 
                  >> (0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 5U)))))
            ? (((0U == (0x1fU & ((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U))))
                 ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                         (((IData)(0x1fU) + (0xffU 
                                             & ((IData)(0x20U) 
                                                + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (7U & (((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                            << 6U)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x20U) 
                                               + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                  << 6U)))))
            : (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 6U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 6U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 6U))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                         << 1U))] >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
                  >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                 & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid)) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                    | (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                    >> (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 1U))))))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                  >> 6U) & (~ (IData)((0U != (0x1c0U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb 
        = (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) & (0U != (0x600U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb) 
            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
               >> 0xaU)) ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb)
                             ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                 << 0x1bU) | (0x7ffffffU 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
                             : ((0xf8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect) 
                                | (0x7ffffffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                     >> 0xaU))))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                     >> 9U))) ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb)
                                  ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                      << 0x1bU) | (0x7ffffffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
                                  : ((0xf8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect) 
                                     | (0x7ffffffU 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect 
                                           + (1U & 
                                              ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                               >> 9U))))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_ns 
        = (((((2U & (((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb)) 
                                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                           >> 0xcU))))) 
                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)) 
                         << 1U)) | ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb) 
                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                   >> 0xcU)))) 
                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                       >> 2U)))) | 
              ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                       >> 0xcU)))))) 
               & (2U | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                              >> 1U))))) | ((- (IData)(
                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt) 
                                                        & (~ 
                                                           ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                            >> 0xcU))))) 
                                            & (1U | 
                                               (2U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
            | ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb) 
                           & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                 >> 0xcU))))) & ((2U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                       >> 3U))))) 
           | ((- (IData)((1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb)) 
                                  & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 0xcU))) 
                                 & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout))) 
                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__core_rst_l)
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4 
        = (((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                | ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                                       >> 8U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 6U)))))) 
              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                 >> 0xcU)) & (~ (- (IData)((IData)(
                                                   (0U 
                                                    != 
                                                    (0x60000U 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U]))))))) 
            & (~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_store) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                  & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw)))))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 0x18U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset 
        = ((0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))) 
               << 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                         & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset 
        = ((3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))) 
               << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                          & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))) 
                         << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_ns 
        = (((((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout 
                   << 1U)) | ((- (IData)((1U & (IData)(
                                                       ((0x1000U 
                                                         == 
                                                         (0x1002U 
                                                          & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                                                        & (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))))))) 
                              & (((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout) 
                                 << 1U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_illegal_inst)) 
             | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb))) 
                & (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                           >> 2U)))) | ((- (IData)(
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb) 
                                                    & (~ 
                                                       ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                        >> 0xeU))))) 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)) 
           | ((- (IData)((1U & ((((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 1U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb))) 
                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                                 & (~ (IData)(((((0x1000U 
                                                  == 
                                                  (0x1010U 
                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb)))))) 
                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb)))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & ((((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                   | (4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb) 
                     & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout) 
                    >> 2U)));
    if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 3U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
            = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                ? ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                    ? 0U : (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb)) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))
                             ? 0U : 3U)) : ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                             ? 0U : 
                                            (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_rd_parity_final_err_ff) 
                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                                              ? 1U : 2U)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate 
                    = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final));
            }
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4 
        = (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                      >> 3U) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                                    >> 2U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                               >> 2U)))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                             & (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                                     >> 2U)) << 2U) 
                                | (0x7ffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                  >> 1U))))) 
                      | ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4)) 
                                   << 1U))) | (1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                      >> 1U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4 
        = (((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                                    >> 8U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 6U)))))) 
              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                 >> 0x10U)) & (~ (((((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 1U)) 
                                     | ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                                        | ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  >> 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 2U))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                                   & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw)))) 
                                  | (- (IData)((IData)(
                                                       (0U 
                                                        != 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U])))))))) 
            & (~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_store) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                  & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw)))))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl 
                    + (IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb)))) 
                   + (IData)((QData)((IData)((1U & 
                                              ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                               >> 5U)))))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
           & (((((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                 | (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout))) 
                & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                      >> 1U))) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall 
        = (1U & ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                     >> 1U) & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 4U) & (~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken)) 
           | (1U & ((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                     | ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                            >> 5U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken)) 
           | (1U & ((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 1U)) | ((~ 
                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken)) 
           | (1U & ((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 2U)) | ((~ 
                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken)) 
           | (1U & ((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 3U)) | ((~ 
                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               << 1U)) 
                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               >> 1U)) 
                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               >> 2U)) 
                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                       >> 7U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 8U)) | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 0x11U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                               >> 8U))) 
                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                       >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb 
        = ((0xffffc00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb) 
           | ((0x200U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                          >> 0x12U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 8U))) | (
                                                   (0x180U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                       >> 0xcU)) 
                                                   | ((0x40U 
                                                       & ((IData)(
                                                                  ((0x8001000U 
                                                                    == 
                                                                    (0x8001000U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)) 
                                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                      >> 0x11U))) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                             >> 6U)) 
                                                         | ((0x18U 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                >> 3U)) 
                                                            | (((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (0x80004U 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))) 
                                                                << 2U) 
                                                               | ((2U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                                                  | (IData)(
                                                                            (1U 
                                                                             == 
                                                                             (0x80001U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 7U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                             & (0U == (0x210U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))) 
                 & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                 | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xfU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 5U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 0xeU))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x3d100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
             & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                   >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x3d100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
             & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x3d100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
             & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                   >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x3d100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
             & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4 
        = ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0x11U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_ns) 
                 & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 1U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                   >> 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp) 
                 & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                    | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__legal_csr) 
                           & ((~ (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                      | (IData)((0x40400000U 
                                                 == 
                                                 (0x41600000U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                                  | (IData)((0x40b00000U 
                                             == (0x40b00000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))))) 
                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                 >> 0x11U)))) & (~ 
                                                 ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                                                  & ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid) 
                                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid)) 
                                                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid)) 
                                                       | (IData)(
                                                                 (0x40400000U 
                                                                  == 
                                                                  (0x48400000U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac)) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4 
        = (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                      >> 3U) & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                                    >> 2U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                               >> 2U)))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                             & (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                                     >> 2U)) << 2U) 
                                | (0x7ffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                  >> 1U))))) 
                      | ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4)) 
                                   << 1U))) | (1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                      >> 1U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
             >> 1U) & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                        | ((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
            & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 1U)) | ((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((1U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((2U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((3U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((4U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((5U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((6U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((7U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((8U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((9U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xaU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xbU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xcU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xdU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xeU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0xfU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x10U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x11U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x12U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x13U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x14U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x15U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x16U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x17U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x18U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x19U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1aU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1bU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1cU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1dU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1eU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken) 
             >> 1U) & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 1U)) | ((0x1fU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
            & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 2U)) | ((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((1U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((2U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((3U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((4U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((5U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((6U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((7U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((8U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((9U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xaU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xbU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xcU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xdU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xeU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0xfU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x10U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x11U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x12U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x13U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x14U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x15U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x16U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x17U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x18U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x19U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1aU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1bU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1cU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1dU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1eU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken) 
             >> 1U) & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 2U)) | ((0x1fU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
            & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                    >> 3U)) | ((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((1U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((1U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((2U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((2U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((3U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((3U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((4U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((4U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((5U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((5U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((6U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((6U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((7U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((7U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((8U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((8U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((9U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((9U == (0x1fU 
                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xaU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xaU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xbU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xbU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xcU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xcU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xdU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xdU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xeU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xeU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0xfU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0xfU == (0x1fU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x10U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x10U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x11U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x11U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x12U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x12U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x13U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x13U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x14U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x14U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x15U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x15U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x16U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x16U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x17U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x17U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x18U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x18U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x19U == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x19U == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1aU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1aU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1bU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1bU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1cU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1cU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1dU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1dU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1eU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1eU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken) 
             >> 1U) & ((((0x1fU == (0x1fU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                            >> 3U)) | ((0x1fU == (0x1fU 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel 
                   + (IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in)))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ns 
        = (0x3ffU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x3d080000U == (0x7ff80000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                             >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                         | ((0x100U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))) 
                            | (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ns 
        = (0x3ffU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x3d080000U == (0x7ff80000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
                       & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                             >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                         | ((0x100U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                            | (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ns 
        = (0x3ffU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x3d080000U == (0x7ff80000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
                       & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                             >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                         | ((0x100U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                            | (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ns 
        = (0x3ffU & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x3d080000U == (0x7ff80000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))) 
                       & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                             >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                         | ((0x100U & ((0x7fffff00U 
                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 1U)) 
                                       | (0xffffff00U 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
                            | (0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
            & (0x3e400000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])))
            ? ((0x10000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                            >> 8U)) | ((0xc000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U))))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x3e480000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x3e500000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x3d880000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x3d800000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb 
        = (1U & ((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x14U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                  >> 1U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            >> 3U))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb)) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 3U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state_in 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
           & (~ ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                    & (0U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data 
                              >> 1U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4 
        = ((~ ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 0x11U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 6U))) & 
           (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3) 
           | ((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                | (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 1U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 2U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 3U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 4U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 5U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 6U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 7U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data_valid))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data_valid))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb)
                      ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                      : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data 
                                 >> 0x20U))) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                           >> 0x20U))) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                           >> 0x20U))) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                           >> 0x20U))) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                           >> 0x20U))) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4 
        = (1U & (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0x11U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                    >> 2U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb))) 
                 | (((IData)((0x200000U == (0x220000U 
                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
                     & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 2U))) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                          >> 0xeU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1 
        = (IData)((((((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                        >> 1U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall))) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                   & (~ (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                          >> 4U) & (~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 4U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4 
        = (((IData)(((0x800U == (0xf00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4)) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
              >> 0xdU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4 
        = ((IData)(((0xc00U == (0xf00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4 
        = (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x14U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
            & (0x2000000000ULL == (0x3c00000001ULL 
                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4 
        = ((IData)(((0x900U == (0xf00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4 
        = (((IData)(((0x800U == (0xf00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4)) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                 >> 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4 
        = (((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                >> 0x19U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4 
        = (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x16U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4 
        = (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x15U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
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
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_en = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4 
        = ((((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0x11U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4))) 
           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4 
        = (((((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x11U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
             & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U))) & ((((IData)((0U != (0x60000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U]))) 
                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4)) 
                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4)) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfpc_dc4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_en) 
                 | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4 
        = (0x7fffffffU & (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4))) 
                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum_case)
                                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_path_e1
                                 : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                                     ? vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__npc_any_ff__dout
                                     : (((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout 
                                          >> 0x1fU) 
                                         & (~ ((2U 
                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                                                : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout))))
                                         ? ((1U & (
                                                   (1U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                    ? 
                                                   ((((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken))) 
                                                     | ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken))) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__any_jal)))
                                                    : 
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout) 
                                                    >> 1U)))
                                             ? (IData)(
                                                       (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                        >> 1U))
                                             : ((1U 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4
                                                 : vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout))
                                         : ((1U & (
                                                   (2U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                    ? 
                                                   ((((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken))) 
                                                     | ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken))) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__any_jal)))
                                                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout)))
                                             ? (IData)(
                                                       (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                        >> 1U))
                                             : ((2U 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                 ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4
                                                 : (IData)(
                                                           (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                            >> 0x20U)))))))) 
                            | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4))) 
                               & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4))) 
                              & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout)) 
                          | ((- (IData)((1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4))) 
                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4)))))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual 
        = (0xfU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 4U) & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__62(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__62\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9633071c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b1dd7b8__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync 
        = (1U & ((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0xdU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync) 
                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                    & (0x7c2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                  >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync 
        = (1U & (((((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0xeU)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw)) 
                 | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_fence_pending 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 3U))) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync) 
           & ((1U & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 5U))) ? (IData)((((0U 
                                                   != 
                                                   (0x1000002U 
                                                    & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])) 
                                                  | (0U 
                                                     != 
                                                     (0x1000002U 
                                                      & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U]))) 
                                                 | (0U 
                                                    != 
                                                    (0x1000002U 
                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U]))))
               : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4) 
                  | (IData)((0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U]))))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d))) 
                   & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1 
        = ((IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
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
}
