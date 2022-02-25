# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
set_param chipscope.maxJobs 1
create_project -in_memory -part xc7a100tcsg324-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.cache/wt [current_project]
set_property parent.project_path /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part digilentinc.com:nexys-a7-100t:part0:1.0 [current_project]
set_property ip_output_repo /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
set_property include_dirs {
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/include
} [current_fileset]
add_files /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/pic4.coe
read_verilog {
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/common_defines.vh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/gpio/gpio_defines.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/ptc/ptc_defines.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_params.vh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/WishboneInterconnect/wb_intercon.vh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/axi_intercon.vh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_defines.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include/axi/typedef.svh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include/axi/assign.svh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/include/common_cells/registers.svh
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/global.h
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/pic_map_auto.h
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/build.h
}
set_property is_global_include true [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/common_defines.vh]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/gpio/gpio_defines.v]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/ptc/ptc_defines.v]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_defines.v]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include/axi/typedef.svh]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include/axi/assign.svh]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/include/common_cells/registers.svh]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/global.h]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/pic_map_auto.h]
set_property file_type "Verilog Header" [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/build.h]
read_mem /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/BootROM/sw/boot_main.mem
read_verilog -library xil_defaultlib -sv {
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/cf_math_pkg.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/addr_decode.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_pkg.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_atop_filter.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_cdc.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_demux.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_err_slv.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_id_prepend.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/axi_intercon.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_intf.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_mux.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/src/axi_xbar.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lib/beh_lib.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/binary_to_gray.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/bscan_tap.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/cdc_fifo_gray.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/counter.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dbg/dbg.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/include/swerv_types.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec_decode_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec_gpr_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec_ib_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec_tlu_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dec/dec_trigger.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/delta_counter.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/dma/dma_ctrl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/exu/exu.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/exu/exu_alu_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/exu/exu_div_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/exu/exu_mul_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/deprecated/fifo_v2.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/fifo_v3.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/gray_to_binary.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_aln_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_bp_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_compress_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_ic_mem.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_ifc_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/ifu/ifu_mem_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_addrcheck.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_bus_buffer.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_bus_intf.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_clkdomain.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_dccm_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_dccm_mem.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_ecc.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_lsc_ctl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_stbuf.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lsu/lsu_trigger.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/lzc.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/mem.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/lib/mem_lib.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/pic/pic_ctrl.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/rr_arb_tree.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/spill_register.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/stream_register.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/swerv.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/SweRVEh1CoreComplex/swerv_wrapper_dmi.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/pulp-platform.org__common_cells_1.20.0/src/sync.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/vga/vga.sv
  /run/media/atharva/nux/ece540_rvfpga_sources/src/rvfpganexys.sv
}
read_verilog -library xil_defaultlib {
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/OtherSources/clk_gen_nexys.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/BootROM/dpram64.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/vga/dtg.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/spi/fifo4.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/gpio/gpio_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/litedram_core.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/litedram_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/ptc/ptc_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/raminfr.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_alu.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_bufreg.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_csr.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_ctrl.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_decode.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_mem_if.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_rf_if.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_rf_ram.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_rf_ram_if.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_rf_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_shift.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_state.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/serv_1.0.2/rtl/serv_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/spi/simple_spi_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/swervolf_core.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/SystemController/swervolf_syscon.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_receiver.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_regs.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_rfifo.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_sync_flops.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_tfifo.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_top.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_transmitter.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Peripherals/uart/uart_wb.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/WishboneInterconnect/wb_intercon.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/BootROM/wb_mem_wrapper.v
  /run/media/atharva/nux/ece540_rvfpga_sources/src/SweRVolfSoC/Interconnect/WishboneInterconnect/wb_intercon_1.2.2-r1/wb_mux.v
}
read_ip -quiet /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga.xci
set_property used_in_implementation false [get_files -all /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga_board.xdc]
set_property used_in_implementation false [get_files -all /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga.xdc]
set_property used_in_implementation false [get_files -all /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga_ooc.xdc]

read_ip -quiet /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/blk_mem_vga/blk_mem_vga.xci
set_property used_in_implementation false [get_files -all /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/blk_mem_vga/blk_mem_vga_ooc.xdc]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /run/media/atharva/nux/ece540_rvfpga_sources/src/rvfpganexys.xdc
set_property used_in_implementation false [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/rvfpganexys.xdc]

read_xdc /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/liteDRAM.xdc
set_property used_in_implementation false [get_files /run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/liteDRAM.xdc]

set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top rvfpganexys -part xc7a100tcsg324-1


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef rvfpganexys.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file rvfpganexys_utilization_synth.rpt -pb rvfpganexys_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]