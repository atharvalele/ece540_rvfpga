-makelib xcelium_lib/xpm -sv \
  "/home/atharva/xilinx_vivado/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "/home/atharva/xilinx_vivado/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../../project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga_clk_wiz.v" \
  "../../../../project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

