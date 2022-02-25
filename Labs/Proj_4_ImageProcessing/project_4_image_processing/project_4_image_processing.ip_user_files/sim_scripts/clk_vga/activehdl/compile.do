vlib work
vlib activehdl

vlib activehdl/xpm
vlib activehdl/xil_defaultlib

vmap xpm activehdl/xpm
vmap xil_defaultlib activehdl/xil_defaultlib

vlog -work xpm  -sv2k12 "+incdir+../../../ipstatic" \
"/home/atharva/software_installs/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -93 \
"/home/atharva/software_installs/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../ipstatic" \
"../../../../project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga_clk_wiz.v" \
"../../../../project_4_image_processing.srcs/sources_1/ip/clk_vga/clk_vga.v" \

vlog -work xil_defaultlib \
"glbl.v"

