
Q
Command: %s
53*	vivadotcl2 
route_design2default:defaultZ4-113h px? 
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
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
route_design2default:defaultZ4-22h px? 
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
b
DRC finished with %s
79*	vivadotcl2(
0 Errors, 1 Warnings2default:defaultZ4-198h px? 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px? 
V

Starting %s Task
103*constraints2
Routing2default:defaultZ18-103h px? 
}
BMultithreading enabled for route_design using a maximum of %s CPUs17*	routeflow2
42default:defaultZ35-254h px? 
p

Phase %s%s
101*constraints2
1 2default:default2#
Build RT Design2default:defaultZ18-101h px? 
C
.Phase 1 Build RT Design | Checksum: 13d1cb085
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:28 ; elapsed = 00:00:19 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3494 ; free virtual = 86302default:defaulth px? 
v

Phase %s%s
101*constraints2
2 2default:default2)
Router Initialization2default:defaultZ18-101h px? 
o

Phase %s%s
101*constraints2
2.1 2default:default2 
Create Timer2default:defaultZ18-101h px? 
B
-Phase 2.1 Create Timer | Checksum: 13d1cb085
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:29 ; elapsed = 00:00:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3512 ; free virtual = 86482default:defaulth px? 
{

Phase %s%s
101*constraints2
2.2 2default:default2,
Fix Topology Constraints2default:defaultZ18-101h px? 
N
9Phase 2.2 Fix Topology Constraints | Checksum: 13d1cb085
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:29 ; elapsed = 00:00:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3490 ; free virtual = 86262default:defaulth px? 
t

Phase %s%s
101*constraints2
2.3 2default:default2%
Pre Route Cleanup2default:defaultZ18-101h px? 
G
2Phase 2.3 Pre Route Cleanup | Checksum: 13d1cb085
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:29 ; elapsed = 00:00:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3491 ; free virtual = 86272default:defaulth px? 
p

Phase %s%s
101*constraints2
2.4 2default:default2!
Update Timing2default:defaultZ18-101h px? 
C
.Phase 2.4 Update Timing | Checksum: 19f450a2c
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:50 ; elapsed = 00:00:32 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3452 ; free virtual = 85882default:defaulth px? 
?
Intermediate Timing Summary %s164*route2L
8| WNS=-14.474| TNS=-341.590| WHS=-2.710 | THS=-918.267|
2default:defaultZ35-416h px? 
I
4Phase 2 Router Initialization | Checksum: 13f77101e
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:59 ; elapsed = 00:00:36 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3446 ; free virtual = 85822default:defaulth px? 
p

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101h px? 
C
.Phase 3 Initial Routing | Checksum: 145c936a4
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:01:24 ; elapsed = 00:00:46 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3409 ; free virtual = 85432default:defaulth px? 
s

Phase %s%s
101*constraints2
4 2default:default2&
Rip-up And Reroute2default:defaultZ18-101h px? 
u

Phase %s%s
101*constraints2
4.1 2default:default2&
Global Iteration 02default:defaultZ18-101h px? 
?
Intermediate Timing Summary %s164*route2K
7| WNS=-14.478| TNS=-344.356| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
G
2Phase 4.1 Global Iteration 0 | Checksum: f92376ca
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:24 ; elapsed = 00:02:08 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3346 ; free virtual = 85152default:defaulth px? 
u

Phase %s%s
101*constraints2
4.2 2default:default2&
Global Iteration 12default:defaultZ18-101h px? 
?
Intermediate Timing Summary %s164*route2K
7| WNS=-14.478| TNS=-341.682| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
H
3Phase 4.2 Global Iteration 1 | Checksum: 1e4aaa443
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:29 ; elapsed = 00:02:13 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3384 ; free virtual = 85382default:defaulth px? 
F
1Phase 4 Rip-up And Reroute | Checksum: 1e4aaa443
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:29 ; elapsed = 00:02:13 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3384 ; free virtual = 85382default:defaulth px? 
|

Phase %s%s
101*constraints2
5 2default:default2/
Delay and Skew Optimization2default:defaultZ18-101h px? 
p

Phase %s%s
101*constraints2
5.1 2default:default2!
Delay CleanUp2default:defaultZ18-101h px? 
r

Phase %s%s
101*constraints2
5.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px? 
E
0Phase 5.1.1 Update Timing | Checksum: 150144249
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:15 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3387 ; free virtual = 85422default:defaulth px? 
?
Intermediate Timing Summary %s164*route2K
7| WNS=-14.478| TNS=-341.682| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
B
-Phase 5.1 Delay CleanUp | Checksum: 967d46e4
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:15 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3387 ; free virtual = 85422default:defaulth px? 
z

Phase %s%s
101*constraints2
5.2 2default:default2+
Clock Skew Optimization2default:defaultZ18-101h px? 
L
7Phase 5.2 Clock Skew Optimization | Checksum: 967d46e4
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:15 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3387 ; free virtual = 85422default:defaulth px? 
N
9Phase 5 Delay and Skew Optimization | Checksum: 967d46e4
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:35 ; elapsed = 00:02:16 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3387 ; free virtual = 85422default:defaulth px? 
n

Phase %s%s
101*constraints2
6 2default:default2!
Post Hold Fix2default:defaultZ18-101h px? 
p

Phase %s%s
101*constraints2
6.1 2default:default2!
Hold Fix Iter2default:defaultZ18-101h px? 
r

Phase %s%s
101*constraints2
6.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px? 
D
/Phase 6.1.1 Update Timing | Checksum: 96101d27
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:41 ; elapsed = 00:02:18 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3387 ; free virtual = 85412default:defaulth px? 
?
Intermediate Timing Summary %s164*route2K
7| WNS=-14.478| TNS=-341.647| WHS=-0.923 | THS=-9.152 |
2default:defaultZ35-416h px? 
C
.Phase 6.1 Hold Fix Iter | Checksum: 108d26325
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:42 ; elapsed = 00:02:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3377 ; free virtual = 85312default:defaulth px? 
@
+Phase 6 Post Hold Fix | Checksum: 6240b202
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:43 ; elapsed = 00:02:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3377 ; free virtual = 85312default:defaulth px? 
o

Phase %s%s
101*constraints2
7 2default:default2"
Route finalize2default:defaultZ18-101h px? 
A
,Phase 7 Route finalize | Checksum: 34d3a46c
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:43 ; elapsed = 00:02:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3377 ; free virtual = 85312default:defaulth px? 
v

Phase %s%s
101*constraints2
8 2default:default2)
Verifying routed nets2default:defaultZ18-101h px? 
H
3Phase 8 Verifying routed nets | Checksum: 34d3a46c
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:43 ; elapsed = 00:02:20 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3377 ; free virtual = 85312default:defaulth px? 
r

Phase %s%s
101*constraints2
9 2default:default2%
Depositing Routes2default:defaultZ18-101h px? 
D
/Phase 9 Depositing Routes | Checksum: a8e9f6ec
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:48 ; elapsed = 00:02:25 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3374 ; free virtual = 85302default:defaulth px? 
t

Phase %s%s
101*constraints2
10 2default:default2&
Post Router Timing2default:defaultZ18-101h px? 
q

Phase %s%s
101*constraints2
10.1 2default:default2!
Update Timing2default:defaultZ18-101h px? 
C
.Phase 10.1 Update Timing | Checksum: ca0ad064
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:54 ; elapsed = 00:02:28 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3373 ; free virtual = 85292default:defaulth px? 
?
Estimated Timing Summary %s
57*route2K
7| WNS=-14.478| TNS=-341.647| WHS=0.052  | THS=0.000  |
2default:defaultZ35-57h px? 
B
!Router estimated timing not met.
128*routeZ35-328h px? 
F
1Phase 10 Post Router Timing | Checksum: ca0ad064
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:54 ; elapsed = 00:02:28 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3373 ; free virtual = 85292default:defaulth px? 
@
Router Completed Successfully
2*	routeflowZ35-16h px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:54 ; elapsed = 00:02:28 . Memory (MB): peak = 3368.691 ; gain = 0.000 ; free physical = 3433 ; free virtual = 85902default:defaulth px? 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1422default:default2
472default:default2
02default:default2
02default:defaultZ4-41h px? 
^
%s completed successfully
29*	vivadotcl2 
route_design2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
route_design: 2default:default2
00:05:002default:default2
00:02:312default:default2
3368.6912default:default2
0.0002default:default2
34332default:default2
85902default:defaultZ17-722h px? 
~
4The following parameters have non-default value.
%s
395*common2&
general.maxThreads2default:defaultZ17-600h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3368.6912default:default2
0.0002default:default2
34332default:default2
85902default:defaultZ17-722h px? 
H
&Writing timing data to binary archive.266*timingZ38-480h px? 
D
Writing placer database...
1603*designutilsZ20-1893h px? 
=
Writing XDEF routing.
211*designutilsZ20-211h px? 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px? 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2)
Write XDEF Complete: 2default:default2
00:00:102default:default2
00:00:032default:default2
3368.6912default:default2
0.0002default:default2
33182default:default2
85832default:defaultZ17-722h px? 
?
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2?
/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/rvfpganexys_routed.dcp2default:defaultZ17-1381h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:232default:default2
00:00:152default:default2
3368.6912default:default2
0.0002default:default2
33882default:default2
85932default:defaultZ17-722h px? 
?
%s4*runtcl2?
vExecuting : report_drc -file rvfpganexys_drc_routed.rpt -pb rvfpganexys_drc_routed.pb -rpx rvfpganexys_drc_routed.rpx
2default:defaulth px? 
?
Command: %s
53*	vivadotcl2}
ireport_drc -file rvfpganexys_drc_routed.rpt -pb rvfpganexys_drc_routed.pb -rpx rvfpganexys_drc_routed.rpx2default:defaultZ4-113h px? 
>
IP Catalog is up to date.1232*coregenZ19-1839h px? 
P
Running DRC with %s threads
24*drc2
42default:defaultZ23-27h px? 
?
#The results of DRC are in file %s.
168*coretcl2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/rvfpganexys_drc_routed.rpt?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/rvfpganexys_drc_routed.rpt2default:default8Z2-168h px? 
\
%s completed successfully
29*	vivadotcl2

report_drc2default:defaultZ4-42h px? 
?
%s4*runtcl2?
?Executing : report_methodology -file rvfpganexys_methodology_drc_routed.rpt -pb rvfpganexys_methodology_drc_routed.pb -rpx rvfpganexys_methodology_drc_routed.rpx
2default:defaulth px? 
?
Command: %s
53*	vivadotcl2?
?report_methodology -file rvfpganexys_methodology_drc_routed.rpt -pb rvfpganexys_methodology_drc_routed.pb -rpx rvfpganexys_methodology_drc_routed.rpx2default:defaultZ4-113h px? 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px? 
Y
$Running Methodology with %s threads
74*drc2
42default:defaultZ23-133h px? 
?
2The results of Report Methodology are in file %s.
450*coretcl2?
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/rvfpganexys_methodology_drc_routed.rpt?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Proj_3_VGA_Lab/project_3_VGA/project_3_VGA.runs/impl_1/rvfpganexys_methodology_drc_routed.rpt2default:default8Z2-1520h px? 
d
%s completed successfully
29*	vivadotcl2&
report_methodology2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2(
report_methodology: 2default:default2
00:00:322default:default2
00:00:112default:default2
3389.3872default:default2
20.6952default:default2
33132default:default2
85192default:defaultZ17-722h px? 
?
%s4*runtcl2?
?Executing : report_power -file rvfpganexys_power_routed.rpt -pb rvfpganexys_power_summary_routed.pb -rpx rvfpganexys_power_routed.rpx
2default:defaulth px? 
?
Command: %s
53*	vivadotcl2?
yreport_power -file rvfpganexys_power_routed.rpt -pb rvfpganexys_power_summary_routed.pb -rpx rvfpganexys_power_routed.rpx2default:defaultZ4-113h px? 
q
$Power model is not available for %s
23*power2*
	STARTUPE2		STARTUPE22default:default8Z33-23h px? 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px? 
K
,Running Vector-less Activity Propagation...
51*powerZ33-51h px? 
P
3
Finished Running Vector-less Activity Propagation
1*powerZ33-1h px? 
?
?Detected over-assertion of set/reset/preset/clear net with high fanouts, power estimation might not be accurate. Please run Tool - Power Constraint Wizard to set proper switching activities for control signals.282*powerZ33-332h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1562default:default2
482default:default2
02default:default2
02default:defaultZ4-41h px? 
^
%s completed successfully
29*	vivadotcl2 
report_power2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
report_power: 2default:default2
00:00:352default:default2
00:00:192default:default2
3429.4142default:default2
40.0272default:default2
33442default:default2
85062default:defaultZ17-722h px? 
?
%s4*runtcl2w
cExecuting : report_route_status -file rvfpganexys_route_status.rpt -pb rvfpganexys_route_status.pb
2default:defaulth px? 
?
%s4*runtcl2?
?Executing : report_timing_summary -max_paths 10 -file rvfpganexys_timing_summary_routed.rpt -pb rvfpganexys_timing_summary_routed.pb -rpx rvfpganexys_timing_summary_routed.rpx -warn_on_violation 
2default:defaulth px? 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px? 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
42default:defaultZ38-191h px? 
?
rThe design failed to meet the timing requirements. Please see the %s report for details on the timing violations.
188*timing2"
timing summary2default:defaultZ38-282h px? 
?
%s4*runtcl2h
TExecuting : report_incremental_reuse -file rvfpganexys_incremental_reuse_routed.rpt
2default:defaulth px? 
g
BIncremental flow is disabled. No incremental reuse Info to report.423*	vivadotclZ4-1062h px? 
?
%s4*runtcl2h
TExecuting : report_clock_utilization -file rvfpganexys_clock_utilization_routed.rpt
2default:defaulth px? 
?
%s4*runtcl2?
?Executing : report_bus_skew -warn_on_violation -file rvfpganexys_bus_skew_routed.rpt -pb rvfpganexys_bus_skew_routed.pb -rpx rvfpganexys_bus_skew_routed.rpx
2default:defaulth px? 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px? 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
42default:defaultZ38-191h px? 


End Record