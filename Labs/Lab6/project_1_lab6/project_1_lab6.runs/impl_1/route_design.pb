
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
B
-Phase 1 Build RT Design | Checksum: d2325516
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:27 ; elapsed = 00:00:18 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6322 ; free virtual = 104312default:defaulth px? 
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
A
,Phase 2.1 Create Timer | Checksum: d2325516
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:27 ; elapsed = 00:00:19 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6344 ; free virtual = 104532default:defaulth px? 
{

Phase %s%s
101*constraints2
2.2 2default:default2,
Fix Topology Constraints2default:defaultZ18-101h px? 
M
8Phase 2.2 Fix Topology Constraints | Checksum: d2325516
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:27 ; elapsed = 00:00:19 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6322 ; free virtual = 104322default:defaulth px? 
t

Phase %s%s
101*constraints2
2.3 2default:default2%
Pre Route Cleanup2default:defaultZ18-101h px? 
F
1Phase 2.3 Pre Route Cleanup | Checksum: d2325516
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:27 ; elapsed = 00:00:19 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6323 ; free virtual = 104332default:defaulth px? 
p

Phase %s%s
101*constraints2
2.4 2default:default2!
Update Timing2default:defaultZ18-101h px? 
C
.Phase 2.4 Update Timing | Checksum: 109251604
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:47 ; elapsed = 00:00:29 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6307 ; free virtual = 104162default:defaulth px? 
?
Intermediate Timing Summary %s164*route2K
7| WNS=0.596  | TNS=0.000  | WHS=-3.792 | THS=-809.205|
2default:defaultZ35-416h px? 
H
3Phase 2 Router Initialization | Checksum: 7f978e5b
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:00:56 ; elapsed = 00:00:33 . Memory (MB): peak = 3251.598 ; gain = 0.000 ; free physical = 6279 ; free virtual = 103922default:defaulth px? 
p

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101h px? 
C
.Phase 3 Initial Routing | Checksum: 238287c17
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:01:34 ; elapsed = 00:00:53 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6242 ; free virtual = 103522default:defaulth px? 
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
Intermediate Timing Summary %s164*route2J
6| WNS=0.063  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
H
3Phase 4.1 Global Iteration 0 | Checksum: 2088c7468
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:07 ; elapsed = 00:01:57 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6284 ; free virtual = 103982default:defaulth px? 
u

Phase %s%s
101*constraints2
4.2 2default:default2&
Global Iteration 12default:defaultZ18-101h px? 
?
Intermediate Timing Summary %s164*route2J
6| WNS=0.063  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
H
3Phase 4.2 Global Iteration 1 | Checksum: 10cd281b4
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:12 ; elapsed = 00:02:02 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6285 ; free virtual = 103962default:defaulth px? 
u

Phase %s%s
101*constraints2
4.3 2default:default2&
Global Iteration 22default:defaultZ18-101h px? 
?
Intermediate Timing Summary %s164*route2J
6| WNS=0.063  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px? 
H
3Phase 4.3 Global Iteration 2 | Checksum: 15beaf56a
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:16 ; elapsed = 00:02:06 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6279 ; free virtual = 103912default:defaulth px? 
F
1Phase 4 Rip-up And Reroute | Checksum: 15beaf56a
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:17 ; elapsed = 00:02:06 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6279 ; free virtual = 103912default:defaulth px? 
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
C
.Phase 5.1 Delay CleanUp | Checksum: 15beaf56a
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:17 ; elapsed = 00:02:07 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6279 ; free virtual = 103912default:defaulth px? 
z

Phase %s%s
101*constraints2
5.2 2default:default2+
Clock Skew Optimization2default:defaultZ18-101h px? 
M
8Phase 5.2 Clock Skew Optimization | Checksum: 15beaf56a
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:17 ; elapsed = 00:02:07 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6279 ; free virtual = 103912default:defaulth px? 
O
:Phase 5 Delay and Skew Optimization | Checksum: 15beaf56a
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:17 ; elapsed = 00:02:07 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6279 ; free virtual = 103912default:defaulth px? 
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
E
0Phase 6.1.1 Update Timing | Checksum: 201fd19bd
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:23 ; elapsed = 00:02:10 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6276 ; free virtual = 103912default:defaulth px? 
?
Intermediate Timing Summary %s164*route2J
6| WNS=0.070  | TNS=0.000  | WHS=-1.315 | THS=-4.097 |
2default:defaultZ35-416h px? 
C
.Phase 6.1 Hold Fix Iter | Checksum: 18b0af854
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:23 ; elapsed = 00:02:10 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6276 ; free virtual = 103912default:defaulth px? 
A
,Phase 6 Post Hold Fix | Checksum: 18766ac98
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:23 ; elapsed = 00:02:10 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6275 ; free virtual = 103902default:defaulth px? 
o

Phase %s%s
101*constraints2
7 2default:default2"
Route finalize2default:defaultZ18-101h px? 
B
-Phase 7 Route finalize | Checksum: 111b08966
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:24 ; elapsed = 00:02:10 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6275 ; free virtual = 103902default:defaulth px? 
v

Phase %s%s
101*constraints2
8 2default:default2)
Verifying routed nets2default:defaultZ18-101h px? 
I
4Phase 8 Verifying routed nets | Checksum: 111b08966
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:24 ; elapsed = 00:02:11 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6275 ; free virtual = 103902default:defaulth px? 
r

Phase %s%s
101*constraints2
9 2default:default2%
Depositing Routes2default:defaultZ18-101h px? 
E
0Phase 9 Depositing Routes | Checksum: 1273a9517
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:28 ; elapsed = 00:02:15 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6270 ; free virtual = 103842default:defaulth px? 
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
D
/Phase 10.1 Update Timing | Checksum: 12910f0b5
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:17 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6268 ; free virtual = 103792default:defaulth px? 
?
Estimated Timing Summary %s
57*route2J
6| WNS=0.070  | TNS=0.000  | WHS=0.050  | THS=0.000  |
2default:defaultZ35-57h px? 
?
?The final timing numbers are based on the router estimated timing analysis. For a complete and accurate timing signoff, please run report_timing_summary.
127*routeZ35-327h px? 
G
2Phase 10 Post Router Timing | Checksum: 12910f0b5
*commonh px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:17 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6268 ; free virtual = 103792default:defaulth px? 
@
Router Completed Successfully
2*	routeflowZ35-16h px? 
?

%s
*constraints2?
?Time (s): cpu = 00:04:34 ; elapsed = 00:02:17 . Memory (MB): peak = 3300.715 ; gain = 49.117 ; free physical = 6311 ; free virtual = 104222default:defaulth px? 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1022default:default2
442default:default2
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
00:04:402default:default2
00:02:202default:default2
3300.7152default:default2
49.1172default:default2
63112default:default2
104222default:defaultZ17-722h px? 
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
3300.7152default:default2
0.0002default:default2
63102default:default2
104212default:defaultZ17-722h px? 
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
00:00:042default:default2
3300.7152default:default2
0.0002default:default2
62122default:default2
104082default:defaultZ17-722h px? 
?
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2?
w/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Lab6/project_1_lab6/project_1_lab6.runs/impl_1/rvfpganexys_routed.dcp2default:defaultZ17-1381h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:222default:default2
00:00:142default:default2
3300.7152default:default2
0.0002default:default2
62682default:default2
104062default:defaultZ17-722h px? 
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
{/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Lab6/project_1_lab6/project_1_lab6.runs/impl_1/rvfpganexys_drc_routed.rpt{/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Lab6/project_1_lab6/project_1_lab6.runs/impl_1/rvfpganexys_drc_routed.rpt2default:default8Z2-168h px? 
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
?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Lab6/project_1_lab6/project_1_lab6.runs/impl_1/rvfpganexys_methodology_drc_routed.rpt?/run/media/atharva/nux/ece540_rvfpga_sources/Labs/Lab6/project_1_lab6/project_1_lab6.runs/impl_1/rvfpganexys_methodology_drc_routed.rpt2default:default8Z2-1520h px? 
d
%s completed successfully
29*	vivadotcl2&
report_methodology2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2(
report_methodology: 2default:default2
00:00:302default:default2
00:00:102default:default2
3350.4652default:default2
25.7382default:default2
62012default:default2
103452default:defaultZ17-722h px? 
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
1162default:default2
452default:default2
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
00:00:302default:default2
00:00:162default:default2
3382.4842default:default2
32.0202default:default2
61582default:default2
103132default:defaultZ17-722h px? 
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