vlib work
vlib riviera

vlib riviera/xpm
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -sv2k12 "+incdir+../../../ipstatic" \
"/home/atharva/xilinx_vivado/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -93 \
"/home/atharva/xilinx_vivado/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../ipstatic" \
"../../../../project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga_clk_wiz.v" \
"../../../../project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.v" \

vlog -work xil_defaultlib \
"glbl.v"

