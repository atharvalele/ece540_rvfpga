# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrvfpgasim \
	Vrvfpgasim___024root__DepSet_h98fbe5a2__0 \
	Vrvfpgasim___024root__DepSet_hd79ddff9__0 \
	Vrvfpgasim_rvfpgasim__DepSet_h05a44532__0 \
	Vrvfpgasim_rvfpgasim__DepSet_h54793f69__0 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__0 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__0 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__1 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__2 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__3 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__4 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__5 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__6 \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__7 \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_hd9fe21d1__0 \
	Vrvfpgasim_wb_mem_wrapper__M1000_Iz1__DepSet_h391a2dd1__0 \
	Vrvfpgasim_dpram64__S1000_MBz1__DepSet_h0465af2f__0 \
	Vrvfpgasim_dpram64__S10000_MBz1__DepSet_h4c4a48b7__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h259290f3__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h48024f9b__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h3486f4aa__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h1ae012bc__0 \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6a9e4b6d__0 \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6983493c__0 \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hf095863d__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrvfpgasim__ConstPool_0 \
	Vrvfpgasim___024root__Slow \
	Vrvfpgasim___024root__DepSet_h98fbe5a2__0__Slow \
	Vrvfpgasim___024root__DepSet_hd79ddff9__0__Slow \
	Vrvfpgasim_rvfpgasim__Slow \
	Vrvfpgasim_rvfpgasim__DepSet_h05a44532__0__Slow \
	Vrvfpgasim_rvfpgasim__DepSet_h54793f69__0__Slow \
	Vrvfpgasim___024unit__Slow \
	Vrvfpgasim___024unit__DepSet_h8ec872cd__0__Slow \
	Vrvfpgasim_swervolf_core__Bz1__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__0__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__1__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__2__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__3__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_he4d88862__4__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__0__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__1__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__2__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__3__Slow \
	Vrvfpgasim_swervolf_core__Bz1__DepSet_hf3bd0c39__4__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_hd9fe21d1__0__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_h18a3a3c8__0__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000_Iz1__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000_Iz1__DepSet_h38ffa7c8__0__Slow \
	Vrvfpgasim_dpram64__S1000_MBz1__Slow \
	Vrvfpgasim_dpram64__S1000_MBz1__DepSet_h5438257e__0__Slow \
	Vrvfpgasim_dpram64__S10000_MBz1__Slow \
	Vrvfpgasim_dpram64__S10000_MBz1__DepSet_h8c4f4ce6__0__Slow \
	Vrvfpgasim_axi_demux__pi2__Slow \
	Vrvfpgasim_axi_demux__pi2__DepSet_h48024f9b__0__Slow \
	Vrvfpgasim_axi_demux__pi2__DepSet_h3486f4aa__0__Slow \
	Vrvfpgasim_axi_mux__pi4__Slow \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6a9e4b6d__0__Slow \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6983493c__0__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hf095863d__0__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hff87fe6c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \
	Vrvfpgasim__Trace__0 \
	Vrvfpgasim__Trace__1 \
	Vrvfpgasim__Trace__2 \
	Vrvfpgasim__Trace__3 \
	Vrvfpgasim__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \
	Vrvfpgasim__Trace__0__Slow \
	Vrvfpgasim__Trace__1__Slow \
	Vrvfpgasim__Trace__2__Slow \
	Vrvfpgasim__Trace__3__Slow \
	Vrvfpgasim__Trace__4__Slow \
	Vrvfpgasim__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
