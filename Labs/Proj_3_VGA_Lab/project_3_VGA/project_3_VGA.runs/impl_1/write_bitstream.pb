
o
Command: %s
1870*	planAhead2:
&open_checkpoint rvfpganexys_routed.dcp2default:defaultZ12-2866h px? 
^

Starting %s Task
103*constraints2#
open_checkpoint2default:defaultZ18-103h px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:00.06 ; elapsed = 00:00:00.10 . Memory (MB): peak = 1437.738 ; gain = 0.000 ; free physical = 5410 ; free virtual = 118292default:defaulth px? 
W
Loading part %s157*device2$
xc7a100tcsg324-12default:defaultZ21-403h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.942default:default2
00:00:00.952default:default2
1768.5982default:default2
0.0002default:default2
47342default:default2
113002default:defaultZ17-722h px? 
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
?
?Could not create '%s' constraint because net '%s' is not directly connected to top level port. Synthesis is ignored for %s but preserved for implementation.
528*constraints2 
IBUF_LOW_PWR2default:default2,
vga_clock_inst/clk_in12default:default2 
IBUF_LOW_PWR2default:default8Z18-550h px? 
L
*Restoring timing data from binary archive.264*timingZ38-478h px? 
F
$Binary timing data restore complete.265*timingZ38-479h px? 
L
*Restoring constraints from binary archive.481*projectZ1-856h px? 
?
?The checkpoint was created with non-default parameter values which do not match the current Vivado settings.  Mismatching parameters are:1090*constraintsZ18-5170h px? 
G
  %s
*constraints2&
general.maxThreads2default:defaulth px? 
E
#Binary constraint restore complete.478*projectZ1-853h px? 
?
Reading XDEF placement.
206*designutilsZ20-206h px? 
D
Reading placer database...
1602*designutilsZ20-1892h px? 
=
Reading XDEF routing.
207*designutilsZ20-207h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2$
Read XDEF File: 2default:default2
00:00:032default:default2
00:00:032default:default2
2552.9962default:default2
42.3982default:default2
40072default:default2
105622default:defaultZ17-722h px? 
?
7Restored from archive | CPU: %s secs | Memory: %s MB |
1612*designutils2
3.3100002default:default2
	60.3905492default:defaultZ20-1924h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common20
Finished XDEF File Restore: 2default:default2
00:00:032default:default2
00:00:032default:default2
2552.9962default:default2
42.3982default:default2
40072default:default2
105622default:defaultZ17-722h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:00.012default:default2
2552.9962default:default2
0.0002default:default2
40112default:default2
105672default:defaultZ17-722h px? 
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
'Checkpoint was created with %s build %s378*project2+
Vivado v2019.2 (64-bit)2default:default2
27088762default:defaultZ1-604h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2%
open_checkpoint: 2default:default2
00:00:282default:default2
00:00:472default:default2
2552.9962default:default2
1115.2582default:default2
40112default:default2
105672default:defaultZ17-722h px? 
k
Command: %s
53*	vivadotcl2:
&write_bitstream -force rvfpganexys.bit2default:defaultZ4-113h px? 
?
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7a100t2default:defaultZ17-347h px? 
?
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7a100t2default:defaultZ17-349h px? 
x
,Running DRC as a precondition to command %s
1349*	planAhead2#
write_bitstream2default:defaultZ12-1349h px? 
>
Refreshing IP repositories
234*coregenZ19-234h px? 
G
"No user IP repositories specified
1154*coregenZ19-1704h px? 
?
"Loaded Vivado IP repository '%s'.
1332*coregen2P
</home/atharva/software_installs/Xilinx/Vivado/2019.2/data/ip2default:defaultZ19-2313h px? 
P
Running DRC with %s threads
24*drc2
42default:defaultZ23-27h px? 
?
?Bank IO standard internal Vref conflict: Conflicting INTERNAL_VREF constraint in Bank %s.  Some ports in this bank, for example, %s   (SSTL18_II, Vref=0.900V) 
 at site %s conflict with constrained INTERNAL_VREF of 0.750V.%s*DRC2.
 "
342default:default2default:default2D
 ".
ddram_dq[0]ddram_dq[0]2default:default2default:default2@
 "*
	IOB_X1Y54
	IOB_X1Y542default:default2default:default24
 DRC|Pin Planning|IO Standard2default:default8ZBIIVRC-1h px? 
?
{Input Buffer Connections: Input buffer %s has no loads. It is recommended to have an input buffer drive an internal load.%s*DRC2\
 "F
ddr2/ldc/IOBUFDS/IBUFDS	ddr2/ldc/IOBUFDS/IBUFDS2default:default2default:default2>
 &DRC|Netlist|Instance|Required Pin|IBUF2default:default8ZBUFC-1h px? 
?
{Input Buffer Connections: Input buffer %s has no loads. It is recommended to have an input buffer drive an internal load.%s*DRC2`
 "J
ddr2/ldc/IOBUFDS_1/IBUFDS	ddr2/ldc/IOBUFDS_1/IBUFDS2default:default2default:default2>
 &DRC|Netlist|Instance|Required Pin|IBUF2default:default8ZBUFC-1h px? 
?
?Missing CFGBVS and CONFIG_VOLTAGE Design Properties: Neither the CFGBVS nor CONFIG_VOLTAGE voltage property is set in the current_design.  Configuration bank voltage select (CFGBVS) must be set to VCCO or GND, and CONFIG_VOLTAGE must be set to the correct configuration voltage, in order to determine the I/O voltage support for the pins in bank 0.  It is suggested to specify these either using the 'Edit Device Properties' function in the GUI or directly in the XDC file using the following syntax:

 set_property CFGBVS value1 [current_design]
 #where value1 is either VCCO or GND

 set_property CONFIG_VOLTAGE value2 [current_design]
 #where value2 is the voltage provided to configuration bank 0

Refer to the device configuration user guide for more information.%s*DRC2(
 DRC|Pin Planning2default:default8ZCFGBVS-1h px? 
?
YReport rule limit reached: REQP-1839 rule limit reached: 20 violations have been found.%s*DRC29
 !DRC|DRC System|Rule limit reached2default:default8ZCHECK-3h px? 
?
YReport rule limit reached: REQP-1840 rule limit reached: 20 violations have been found.%s*DRC29
 !DRC|DRC System|Rule limit reached2default:default8ZCHECK-3h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "z
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/A[29:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/A2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "z
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/B[17:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/B2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/A2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/B2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/A2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/B2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/A2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/B2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPIP-1h px? 
?
?PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "z
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P[47:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-1h px? 
?
?PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-1h px? 
?
?PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-1h px? 
?
?PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-1h px? 
?
?MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "z
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P[47:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-2h px? 
?
?MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-2h px? 
?
?MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-2h px? 
?
?MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2?
 "v
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22default:default2default:default2?
 "?
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P2default:default2default:default2=
 %DRC|Netlist|Instance|Pipeline|DSP48E12default:default8ZDPOP-2h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[0]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[0]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[10]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[10]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[11]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[11]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[12]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[12]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[13]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[13]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[14]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[14]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[15]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[15]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[1]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[1]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[2]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[2]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[3]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[3]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[4]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[4]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[5]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[5]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[6]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[6]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[7]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[7]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[8]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[8]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2?
 "p
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202default:default2default:default2?
 "?
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[9]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[9]2default:default2default:default2I
 1DRC|Netlist|Instance|Synchronous controls|DSP48E12default:default8ZDPOR-1h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y18
RAMB36_X0Y182default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[18].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[18].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y19
RAMB36_X0Y192default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[18].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[18].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y20
RAMB36_X0Y202default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[16].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[16].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y21
RAMB36_X0Y212default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[16].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[16].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y22
RAMB36_X0Y222default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[12].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[12].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y23
RAMB36_X0Y232default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[12].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[12].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y24
RAMB36_X0Y242default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[31].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[31].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y25
RAMB36_X0Y252default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[31].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[31].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y26
RAMB36_X0Y262default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[23].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[23].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y27
RAMB36_X0Y272default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[23].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[23].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y28
RAMB36_X0Y282default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[7].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[7].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y29
RAMB36_X0Y292default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[7].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[7].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y30
RAMB36_X0Y302default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[29].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[29].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y31
RAMB36_X0Y312default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[29].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[29].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y32
RAMB36_X0Y322default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[30].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[30].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y33
RAMB36_X0Y332default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[30].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[30].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y34
RAMB36_X0Y342default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[6].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[6].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y35
RAMB36_X0Y352default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[6].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[6].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y36
RAMB36_X0Y362default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[27].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[27].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y37
RAMB36_X0Y372default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[27].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[27].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y38
RAMB36_X0Y382default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[5].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[5].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X0Y39
RAMB36_X0Y392default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[5].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[5].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y19
RAMB36_X1Y192default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[8].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[8].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y20
RAMB36_X1Y202default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[8].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[8].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y21
RAMB36_X1Y212default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[9].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[9].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y22
RAMB36_X1Y222default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[9].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[9].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y23
RAMB36_X1Y232default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[17].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[17].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y24
RAMB36_X1Y242default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[17].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[17].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y25
RAMB36_X1Y252default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[2].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[2].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y26
RAMB36_X1Y262default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[2].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[2].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y27
RAMB36_X1Y272default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[25].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[25].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y28
RAMB36_X1Y282default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[25].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[25].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y29
RAMB36_X1Y292default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[1].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[1].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y30
RAMB36_X1Y302default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[1].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[1].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y31
RAMB36_X1Y312default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[4].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[4].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y32
RAMB36_X1Y322default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[4].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[4].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y33
RAMB36_X1Y332default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[28].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[28].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y34
RAMB36_X1Y342default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[28].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[28].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y35
RAMB36_X1Y352default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[26].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[26].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y36
RAMB36_X1Y362default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[26].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[26].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y37
RAMB36_X1Y372default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[13].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[13].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X1Y38
RAMB36_X1Y382default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[13].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[13].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y20
RAMB36_X2Y202default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[11].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[11].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y21
RAMB36_X2Y212default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[11].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[11].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y22
RAMB36_X2Y222default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[20].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[20].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y23
RAMB36_X2Y232default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[20].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[20].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y24
RAMB36_X2Y242default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[19].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[19].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y25
RAMB36_X2Y252default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[19].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[19].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y26
RAMB36_X2Y262default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[0].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[0].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y27
RAMB36_X2Y272default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[0].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[0].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y28
RAMB36_X2Y282default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[21].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[21].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y29
RAMB36_X2Y292default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[21].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[21].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y35
RAMB36_X2Y352default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[24].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[24].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y36
RAMB36_X2Y362default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[24].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[24].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y37
RAMB36_X2Y372default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[3].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[3].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X2Y38
RAMB36_X2Y382default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[3].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[3].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y22
RAMB36_X3Y222default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[10].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[10].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y23
RAMB36_X3Y232default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[10].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[10].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y24
RAMB36_X3Y242default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[14].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[14].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y25
RAMB36_X3Y252default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[14].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[14].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y26
RAMB36_X3Y262default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[22].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[22].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y27
RAMB36_X3Y272default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[22].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[22].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to LOWER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y28
RAMB36_X3Y282default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[15].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[15].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_B2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?enum_RAM_EXTENSION_A_not_NONE_connects_ADDRARDADDRL15_Tieoff: RAMB36E1 site %s has BlockRam (%s) with RAM_EXTENSION_A attribute set to UPPER and ADDRARADDRL15 pin tied to LOGIC 0 (GND). In this case only the Lower BRAM will be used.%s*DRC2F
 "0
RAMB36_X3Y29
RAMB36_X3Y292default:default2default:default2?
 "?
?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[15].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T	?swervolf/vga/vga_image_mem/U0/inst_blk_mem_gen/gnbram.gnativebmg.native_blk_mem_gen/valid.cstr/ramloop[15].ram.r/prim_init.ram/DEVICE_7SERIES.NO_BMM_INFO.SDP.CASCADED_PRIM36.ram_T2default:default2default:default2_
 GDRC|Physical Configuration|Physical Design Connection Required|RAMB36E12default:default8ZPDCN-137h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2?
 "?
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2?
 "?
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2?
 "?
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2?
 "?
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2?
 "~
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2?
 "~
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2?
 "?
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2?
 "?
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[22]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[22]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
?
?RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2?
 "?
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2?
 "?
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2?
 "?
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2?
 "?
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840h px? 
h
DRC finished with %s
1905*	planAhead2*
0 Errors, 142 Warnings2default:defaultZ12-3199h px? 
i
BPlease refer to the DRC report (report_drc) for more information.
1906*	planAheadZ12-3200h px? 
i
)Running write_bitstream with %s threads.
1750*designutils2
42default:defaultZ20-2272h px? 
?
Loading data files...
1271*designutilsZ12-1165h px? 
>
Loading site data...
1273*designutilsZ12-1167h px? 
?
Loading route data...
1272*designutilsZ12-1166h px? 
?
Processing options...
1362*designutilsZ12-1514h px? 
<
Creating bitmap...
1249*designutilsZ12-1141h px? 
7
Creating bitstream...
7*	bitstreamZ40-7h px? 
b
Writing bitstream %s...
11*	bitstream2%
./rvfpganexys.bit2default:defaultZ40-11h px? 
F
Bitgen Completed Successfully.
1606*	planAheadZ12-1842h px? 
?
?WebTalk data collection is mandatory when using a WebPACK part without a full Vivado license. To see the specific WebTalk data collected for your design, open the usage_statistics_webtalk.html or usage_statistics_webtalk.xml file in the implementation directory.
120*projectZ1-120h px? 
?
?'%s' has been successfully sent to Xilinx on %s. For additional details about this file, please refer to the Webtalk help file at %s.
186*common2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/usage_statistics_webtalk.xml2default:default2,
Mon Feb 14 21:33:18 20222default:default2f
R/home/atharva/software_installs/Xilinx/Vivado/2019.2/doc/webtalk_introduction.html2default:defaultZ17-186h px? 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
242default:default2
1432default:default2
02default:default2
02default:defaultZ4-41h px? 
a
%s completed successfully
29*	vivadotcl2#
write_bitstream2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2%
write_bitstream: 2default:default2
00:00:532default:default2
00:00:382default:default2
3119.4842default:default2
566.4882default:default2
26632default:default2
99472default:defaultZ17-722h px? 


End Record