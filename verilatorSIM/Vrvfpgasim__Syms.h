// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRVFPGASIM__SYMS_H_
#define VERILATED_VRVFPGASIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrvfpgasim.h"

// INCLUDE MODULE CLASSES
#include "Vrvfpgasim___024root.h"
#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim___024unit.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000_Iz1.h"
#include "Vrvfpgasim_dpram64__S1000_MBz1.h"
#include "Vrvfpgasim_dpram64__S10000_MBz1.h"
#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim_axi_mux__pi4.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vrvfpgasim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrvfpgasim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrvfpgasim___024root           TOP;
    Vrvfpgasim_rvfpgasim           TOP__rvfpgasim;
    Vrvfpgasim_axi_mem_wrapper__I6_M10000 TOP__rvfpgasim__ram;
    Vrvfpgasim_dpram64__S10000_MBz1 TOP__rvfpgasim__ram__ram;
    Vrvfpgasim_swervolf_core__Bz1  TOP__rvfpgasim__swervolf;
    Vrvfpgasim_axi_mux__pi4        TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_mux__pi4        TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_wb_mem_wrapper__M1000_Iz1 TOP__rvfpgasim__swervolf__bootrom;
    Vrvfpgasim_dpram64__S1000_MBz1 TOP__rvfpgasim__swervolf__bootrom__ram;

    // SCOPE NAMES
    VerilatedScope __Vscope_rvfpgasim__ram__ram;
    VerilatedScope __Vscope_rvfpgasim__swervolf__bootrom__ram;

    // CONSTRUCTORS
    Vrvfpgasim__Syms(VerilatedContext* contextp, const char* namep, Vrvfpgasim* modelp);
    ~Vrvfpgasim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
