-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Wed Feb  9 22:34:37 2022
-- Host        : drogon running 64-bit EndeavourOS Linux
-- Command     : write_vhdl -force -mode synth_stub
--               /run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga_stub.vhdl
-- Design      : clk_vga
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity clk_vga is
  Port ( 
    clk_31_5 : out STD_LOGIC;
    reset : in STD_LOGIC;
    clk_in1 : in STD_LOGIC
  );

end clk_vga;

architecture stub of clk_vga is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk_31_5,reset,clk_in1";
begin
end;
