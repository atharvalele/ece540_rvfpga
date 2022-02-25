// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Tue Feb 22 15:19:28 2022
// Host        : drogon running 64-bit EndeavourOS Linux
// Command     : write_verilog -force -mode synth_stub
//               /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_4_ImageProcessing/project_4_image_processing/project_4_image_processing.srcs/sources_1/ip/blk_mem_vga/blk_mem_vga_stub.v
// Design      : blk_mem_vga
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "blk_mem_gen_v8_4_4,Vivado 2019.2" *)
module blk_mem_vga(clka, wea, addra, dina, clkb, addrb, doutb)
/* synthesis syn_black_box black_box_pad_pin="clka,wea[0:0],addra[18:0],dina[3:0],clkb,addrb[18:0],doutb[3:0]" */;
  input clka;
  input [0:0]wea;
  input [18:0]addra;
  input [3:0]dina;
  input clkb;
  input [18:0]addrb;
  output [3:0]doutb;
endmodule
