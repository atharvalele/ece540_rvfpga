// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__4(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__4\n"); );
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelf->__PVT__dmi_wrapper__DOT__dmireset = 
            (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
              & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
             & (IData)((vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                        >> 0x10U)));
        vlSelf->__PVT__dmi_hard_reset = (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                          & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                         & (IData)(
                                                   (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                    >> 0x11U)));
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
            = (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                & ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                   >> 1U)) ? vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                : (0x1fffffffffcULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr));
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__dmireset = 0U;
        vlSelf->__PVT__dmi_hard_reset = 0U;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = 0ULL;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__6(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__6\n"); );
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        if ((0U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                = ((0U == (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                    ? 0x1fU : (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
        }
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__8(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___sequent__TOP__rvfpgasim__8\n"); );
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vrvfpgasim__ConstPool__TABLE_hcf762e2a_0;

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___combo__TOP__rvfpgasim__9(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___combo__TOP__rvfpgasim__9\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_hcf762e2a_0[__Vtableidx1];
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___combo__TOP__rvfpgasim__10(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___combo__TOP__rvfpgasim__10\n"); );
    // Body
    vlSelf->__Vcellinp__swervolf__rstn = (1U & (~ (IData)(vlSymsp->TOP.rst)));
}
