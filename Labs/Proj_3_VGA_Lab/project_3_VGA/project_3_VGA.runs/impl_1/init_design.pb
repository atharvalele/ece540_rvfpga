
x
Command: %s
53*	vivadotcl2G
3link_design -top rvfpganexys -part xc7a100tcsg324-12default:defaultZ4-113h px? 
g
#Design is defaulting to srcset: %s
437*	planAhead2
	sources_12default:defaultZ12-437h px? 
j
&Design is defaulting to constrset: %s
434*	planAhead2
	constrs_12default:defaultZ12-434h px? 
W
Loading part %s157*device2$
xc7a100tcsg324-12default:defaultZ21-403h px? 
?
-Reading design checkpoint '%s' for cell '%s'
275*project2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.dcp2default:default2"
vga_clock_inst2default:defaultZ1-454h px? 
?
-Reading design checkpoint '%s' for cell '%s'
275*project2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/blk_mem_vga/blk_mem_vga.dcp2default:default2.
swervolf/vga/vga_image_mem2default:defaultZ1-454h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.972default:default2
00:00:00.992default:default2
1805.2502default:default2
0.0002default:default2
48712default:default2
98222default:defaultZ17-722h px? 
h
-Analyzing %s Unisim elements for replacement
17*netlist2
16982default:defaultZ29-17h px? 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px? 
x
Netlist was created with %s %s291*project2
Vivado2default:default2
2019.22default:defaultZ1-479h px? 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px? 
?
LRemoving redundant IBUF, %s, from the path connected to top-level port: %s 
35*opt24
 vga_clock_inst/inst/clkin1_ibufg2default:default2
clk2default:defaultZ31-35h px? 
?
?Could not create '%s' constraint because net '%s' is not directly connected to top level port. Synthesis is ignored for %s but preserved for implementation.
528*constraints2 
IBUF_LOW_PWR2default:default2,
vga_clock_inst/clk_in12default:default2 
IBUF_LOW_PWR2default:default8Z18-550h px? 
?
$Parsing XDC File [%s] for cell '%s'
848*designutils2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga_board.xdc2default:default2)
vga_clock_inst/inst	2default:default8Z20-848h px? 
?
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga_board.xdc2default:default2)
vga_clock_inst/inst	2default:default8Z20-847h px? 
?
$Parsing XDC File [%s] for cell '%s'
848*designutils2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.xdc2default:default2)
vga_clock_inst/inst	2default:default8Z20-848h px? 
?
%Done setting XDC timing constraints.
35*timing2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.xdc2default:default2
572default:default8@Z38-35h px? 
?
Deriving generated clocks
2*timing2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.xdc2default:default2
572default:default8@Z38-2h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2 
get_clocks: 2default:default2
00:00:112default:default2
00:00:122default:default2
2553.3162default:default2
558.8052default:default2
41722default:default2
91142default:defaultZ17-722h px? 
?
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.srcs/sources_1/ip/clk_vga/clk_vga.xdc2default:default2)
vga_clock_inst/inst	2default:default8Z20-847h px? 
?
Parsing XDC File [%s]
179*designutils2V
@/run/media/atharva/nux/ece540_rvfpga_sources/src/rvfpganexys.xdc2default:default8Z20-179h px? 
?
Finished Parsing XDC File [%s]
178*designutils2V
@/run/media/atharva/nux/ece540_rvfpga_sources/src/rvfpganexys.xdc2default:default8Z20-178h px? 
?
Parsing XDC File [%s]
179*designutils2\
F/run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/liteDRAM.xdc2default:default8Z20-179h px? 
?
Finished Parsing XDC File [%s]
178*designutils2\
F/run/media/atharva/nux/ece540_rvfpga_sources/src/LiteDRAM/liteDRAM.xdc2default:default8Z20-178h px? 
u
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:00.012default:default2
2553.3162default:default2
0.0002default:default2
42862default:default2
92272default:defaultZ17-722h px? 
?
!Unisim Transformation Summary:
%s111*project2?
?  A total of 113 instances were transformed.
  IOBUF => IOBUF (IBUF, OBUFT): 37 instances
  IOBUFDS => IOBUFDS (IBUFDS, INV, OBUFTDS(x2)): 2 instances
  OBUFDS => OBUFDS_DUAL_BUF (INV, OBUFDS(x2)): 1 instance 
  RAM32M => RAM32M (RAMD32(x6), RAMS32(x2)): 73 instances
2default:defaultZ1-111h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
112default:default2
22default:default2
02default:default2
02default:defaultZ4-41h px? 
]
%s completed successfully
29*	vivadotcl2
link_design2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2!
link_design: 2default:default2
00:00:312default:default2
00:00:482default:default2
2553.3162default:default2
1120.2232default:default2
42862default:default2
92272default:defaultZ17-722h px? 


End Record