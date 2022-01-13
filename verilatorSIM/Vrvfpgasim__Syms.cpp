// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim.h"
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

// FUNCTIONS
Vrvfpgasim__Syms::~Vrvfpgasim__Syms()
{
}

Vrvfpgasim__Syms::Vrvfpgasim__Syms(VerilatedContext* contextp, const char* namep,Vrvfpgasim* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__rvfpgasim(Verilated::catName(namep, "rvfpgasim"))
    , TOP__rvfpgasim__ram(Verilated::catName(namep, "rvfpgasim.ram"))
    , TOP__rvfpgasim__ram__ram(Verilated::catName(namep, "rvfpgasim.ram.ram"))
    , TOP__rvfpgasim__swervolf(Verilated::catName(namep, "rvfpgasim.swervolf"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_mst_port_mux[0].i_axi_mux"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_mst_port_mux[1].i_axi_mux"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux.gen_demux.i_ar_id_counter"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux.gen_demux.i_aw_id_counter"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux.gen_demux.i_ar_id_counter"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux.gen_demux.i_aw_id_counter"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux.gen_demux.i_ar_id_counter"))
    , TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter(Verilated::catName(namep, "rvfpgasim.swervolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux.gen_demux.i_aw_id_counter"))
    , TOP__rvfpgasim__swervolf__bootrom(Verilated::catName(namep, "rvfpgasim.swervolf.bootrom"))
    , TOP__rvfpgasim__swervolf__bootrom__ram(Verilated::catName(namep, "rvfpgasim.swervolf.bootrom.ram"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.rvfpgasim = &TOP__rvfpgasim;
    TOP__rvfpgasim.ram = &TOP__rvfpgasim__ram;
    TOP__rvfpgasim__ram.ram = &TOP__rvfpgasim__ram__ram;
    TOP__rvfpgasim.swervolf = &TOP__rvfpgasim__swervolf;
    TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__rvfpgasim__swervolf.bootrom = &TOP__rvfpgasim__swervolf__bootrom;
    TOP__rvfpgasim__swervolf__bootrom.ram = &TOP__rvfpgasim__swervolf__bootrom__ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__rvfpgasim.__Vconfigure(this, true);
    TOP__rvfpgasim__ram.__Vconfigure(this, true);
    TOP__rvfpgasim__ram__ram.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(this, false);
    TOP__rvfpgasim__swervolf__bootrom.__Vconfigure(this, true);
    TOP__rvfpgasim__swervolf__bootrom__ram.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_rvfpgasim__ram__ram.configure(this, name(), "rvfpgasim.ram.ram", "ram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rvfpgasim__swervolf__bootrom__ram.configure(this, name(), "rvfpgasim.swervolf.bootrom.ram", "ram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_rvfpgasim__ram__ram.varInsert(__Vfinal,"mem", &(TOP__rvfpgasim__ram__ram.mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,63,0 ,0,8191);
        __Vscope_rvfpgasim__swervolf__bootrom__ram.varInsert(__Vfinal,"mem", &(TOP__rvfpgasim__swervolf__bootrom__ram.mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,63,0 ,0,511);
    }
}
