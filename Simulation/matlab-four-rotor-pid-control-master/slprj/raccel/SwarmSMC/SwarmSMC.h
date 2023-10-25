#ifndef RTW_HEADER_SwarmSMC_h_
#define RTW_HEADER_SwarmSMC_h_
#ifndef SwarmSMC_COMMON_INCLUDES_
#define SwarmSMC_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "SwarmSMC_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME SwarmSMC
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (80) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (48)   
#elif NCSTATES != 48
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T nijaehkk5y ; real_T lkykg4vpin ; real_T gqaka0zbqz ;
real_T n2bqd5s3r5 ; real_T d3n1bq2bsd ; real_T o3s0yj5gax ; real_T m3v3rravbj
; real_T dyeejkxwzu ; real_T b11uqayebr ; real_T huzuvha3a1 ; real_T
b2zh23uv2c ; real_T lgh4e2lkcu ; real_T k1vittk2uq ; real_T b4xjixs5fg ;
real_T ja3f0fgj3m ; real_T kcubbifgom ; real_T gkmzudpozm ; real_T jbcm5vqd5h
; real_T niyqay0qte ; real_T nhtgbclv1h ; real_T k3znbdx45a ; real_T
bsg1oz4zao ; real_T ctyx0y5ry4 ; real_T pp3zaopnp0 ; real_T enoevjnv1e ;
real_T gt3e3xlo5h ; real_T p3gegtratp ; real_T ippmxr5ckc ; real_T fq5mh51dfu
; real_T cqv31ub2p2 ; real_T czc3piqflb ; real_T cfd022pdop ; real_T
d5as0a2g43 ; real_T c2bk2ghfvw ; real_T b1bp2gknyd ; real_T nn1ie4rsr3 ;
real_T g2ht0iyolo ; real_T ctgcfcimda ; real_T ojclt4lxsx ; real_T j4pozpl4t4
; real_T hqqlk5o3dg ; real_T chlzcsr5wp ; real_T cjnzoud2pu ; real_T
bxv13iqy1p ; real_T o2lnbkkatl ; real_T eyxfl2tvio ; real_T cmojsmzo0w ;
real_T h3f0jpl1bh ; real_T ijmvtycyip ; real_T ejhqhly2oq ; real_T awqerpv0sd
; real_T mxtnstwk0a ; real_T iyyl3tvpfx ; real_T nqyk4emlzq ; real_T
ecdem3sw01 ; real_T czrl5rwqem ; real_T kzmb3zizp3 ; real_T fsn45jdetv ;
real_T klcywjqtkc ; real_T ajbpx3kvnb ; real_T iyv4ln3f3a ; real_T bbh02spk5k
; real_T l45q3xvr3p ; real_T nqceurawtv ; real_T k1hkyybkdi ; real_T
p0hghhrscv ; real_T hlakq0pjds ; real_T bsscyz3ape ; real_T jtfoulirts ;
real_T fuk2vdeng1 ; real_T nma3hnslh2 ; real_T kj0h3f414v ; real_T crq4svhi5a
; real_T f0zns2surv ; real_T nmglfjrqhn ; real_T covqhj51g0 ; real_T
mxqeg5xjzk ; real_T auamzom4d2 ; real_T ju30daz21p ; real_T haauknmlqq ; } B
; typedef struct { real_T ggis1oipis ; real_T hubalrhh01 ; real_T frwczzk2ln
; real_T jgof1guati ; real_T pudhmmlp12 ; real_T bldz3dvpqv ; real_T
lbub0fpx0q ; real_T alfpa1ng1j ; real_T lvela2u0nd ; real_T mjxuc44ca2 ;
real_T csqyxtw2oa ; real_T owuu23bo0m ; real_T ohvp0kdshz ; real_T egvkxav0b4
; real_T ath115vb4u ; real_T ezhqenn2bw ; real_T op4e4b1azw ; real_T
hf4keotknk ; real_T dtq3oazg3f ; real_T en41udlirg ; real_T pgcprip31o ;
real_T njnzxugshn ; real_T luhpswrkwb ; real_T cop5mbhoom ; real_T aolblubzps
; real_T em4zy3f4e0 ; real_T myqiq4kkg2 ; real_T g3hb4szo4p ; struct { void *
LoggedData ; } nvizvrqlr5 ; struct { void * LoggedData ; } hihqe3az2h ;
struct { void * LoggedData ; } cycryvz2b1 ; struct { void * LoggedData ; }
af3ik2fd1b ; struct { void * LoggedData ; } flntyjdauh ; struct { void *
LoggedData ; } df1f13bwh5 ; struct { void * LoggedData ; } pndsbccm5l ;
struct { void * LoggedData ; } ntmwckhuxh ; struct { void * LoggedData ; }
b3qzu4kcfl ; struct { void * LoggedData ; } i24xwv1ztv ; struct { void *
LoggedData ; } bhtzz1zt2g ; struct { void * LoggedData [ 2 ] ; } j1qcmozwnv ;
struct { void * LoggedData ; } etj2lrnbh5 ; struct { void * LoggedData ; }
m2rugo31gw ; struct { void * LoggedData ; } csdp2f5djy ; struct { void *
LoggedData ; } m1yf0hufdf ; struct { void * LoggedData ; } gc34tc30mo ;
struct { void * LoggedData [ 2 ] ; } mouebbxmxr ; struct { void * LoggedData
; } ihu0uuxaah ; struct { void * LoggedData [ 2 ] ; } b1c5gyl1f3 ; struct {
void * LoggedData ; } iuxlqj2wph ; struct { void * LoggedData ; } agr50kjbs1
; struct { void * LoggedData ; } jeghvsqqnq ; struct { void * LoggedData ; }
ojwngqnle4 ; struct { void * LoggedData ; } g4xrm5zcuj ; struct { void *
AQHandles ; } dlwbwmerme ; struct { void * AQHandles ; } alvifwtdlo ; struct
{ void * AQHandles ; } bomnway3fc ; struct { void * AQHandles ; } khndcgupma
; struct { void * AQHandles ; } lsn03zlptn ; struct { void * AQHandles ; }
jrllfibwlq ; struct { void * LoggedData ; } eub3pylj5i ; struct { void *
LoggedData ; } f3yfr4zmlb ; struct { void * LoggedData ; } djkm1inkaz ;
struct { void * LoggedData ; } mu4sn2q5kd ; struct { void * LoggedData ; }
o1t4dr4j4d ; struct { void * LoggedData ; } d2t3foktlf ; struct { void *
LoggedData ; } fiqk0uygrx ; } DW ; typedef struct { real_T ierzrid0hd ;
real_T m1lmrkxl4o ; real_T o5qayw1v0r ; real_T hcsoiluenw ; real_T nhkqphdmoh
; real_T pcx3j5bpdr ; real_T f0uybwpi4z ; real_T ofeqodlg3q ; real_T
hs52zzikfk ; real_T fpltxrwuy5 ; real_T euoucac3b5 ; real_T bxtgkwb23f ;
real_T fh0br42w3m ; real_T izhgzfb2ax ; real_T j5amdzdzwz ; real_T njsvdofmej
; real_T buctz3bw14 ; real_T azggg3kys4 ; real_T fu4zz1wrfy ; real_T
l0zrm3yqun ; real_T j35xnotddg ; real_T hwso1a4mao ; real_T errtzp5qsv ;
real_T chgtsiahuq ; real_T cscgyskqop ; real_T abbmyk4jok ; real_T pi4frgxyol
; real_T goy0bw45vx ; real_T d2dy5wkkx4 ; real_T a1lipaxdbz ; real_T
hrhvia2p0k ; real_T od4vibyeo2 ; real_T pbsvidhvjd ; real_T giqn3h4hck ;
real_T dbokyzj2ag ; real_T kmj3ah53md ; real_T awmazfpnot ; real_T enudel20zi
; real_T a014sfrrqb ; real_T nc5ml2iypz ; real_T i4tv4sp0jq ; real_T
exdf2roges ; real_T pjifvmn0l1 ; real_T ni1j2c1mbc ; real_T drbsqv3c5a ;
real_T p5duqtatiq ; real_T lyoxyhmuzp ; real_T egwuie0lij ; } X ; typedef
struct { real_T ierzrid0hd ; real_T m1lmrkxl4o ; real_T o5qayw1v0r ; real_T
hcsoiluenw ; real_T nhkqphdmoh ; real_T pcx3j5bpdr ; real_T f0uybwpi4z ;
real_T ofeqodlg3q ; real_T hs52zzikfk ; real_T fpltxrwuy5 ; real_T euoucac3b5
; real_T bxtgkwb23f ; real_T fh0br42w3m ; real_T izhgzfb2ax ; real_T
j5amdzdzwz ; real_T njsvdofmej ; real_T buctz3bw14 ; real_T azggg3kys4 ;
real_T fu4zz1wrfy ; real_T l0zrm3yqun ; real_T j35xnotddg ; real_T hwso1a4mao
; real_T errtzp5qsv ; real_T chgtsiahuq ; real_T cscgyskqop ; real_T
abbmyk4jok ; real_T pi4frgxyol ; real_T goy0bw45vx ; real_T d2dy5wkkx4 ;
real_T a1lipaxdbz ; real_T hrhvia2p0k ; real_T od4vibyeo2 ; real_T pbsvidhvjd
; real_T giqn3h4hck ; real_T dbokyzj2ag ; real_T kmj3ah53md ; real_T
awmazfpnot ; real_T enudel20zi ; real_T a014sfrrqb ; real_T nc5ml2iypz ;
real_T i4tv4sp0jq ; real_T exdf2roges ; real_T pjifvmn0l1 ; real_T ni1j2c1mbc
; real_T drbsqv3c5a ; real_T p5duqtatiq ; real_T lyoxyhmuzp ; real_T
egwuie0lij ; } XDot ; typedef struct { boolean_T ierzrid0hd ; boolean_T
m1lmrkxl4o ; boolean_T o5qayw1v0r ; boolean_T hcsoiluenw ; boolean_T
nhkqphdmoh ; boolean_T pcx3j5bpdr ; boolean_T f0uybwpi4z ; boolean_T
ofeqodlg3q ; boolean_T hs52zzikfk ; boolean_T fpltxrwuy5 ; boolean_T
euoucac3b5 ; boolean_T bxtgkwb23f ; boolean_T fh0br42w3m ; boolean_T
izhgzfb2ax ; boolean_T j5amdzdzwz ; boolean_T njsvdofmej ; boolean_T
buctz3bw14 ; boolean_T azggg3kys4 ; boolean_T fu4zz1wrfy ; boolean_T
l0zrm3yqun ; boolean_T j35xnotddg ; boolean_T hwso1a4mao ; boolean_T
errtzp5qsv ; boolean_T chgtsiahuq ; boolean_T cscgyskqop ; boolean_T
abbmyk4jok ; boolean_T pi4frgxyol ; boolean_T goy0bw45vx ; boolean_T
d2dy5wkkx4 ; boolean_T a1lipaxdbz ; boolean_T hrhvia2p0k ; boolean_T
od4vibyeo2 ; boolean_T pbsvidhvjd ; boolean_T giqn3h4hck ; boolean_T
dbokyzj2ag ; boolean_T kmj3ah53md ; boolean_T awmazfpnot ; boolean_T
enudel20zi ; boolean_T a014sfrrqb ; boolean_T nc5ml2iypz ; boolean_T
i4tv4sp0jq ; boolean_T exdf2roges ; boolean_T pjifvmn0l1 ; boolean_T
ni1j2c1mbc ; boolean_T drbsqv3c5a ; boolean_T p5duqtatiq ; boolean_T
lyoxyhmuzp ; boolean_T egwuie0lij ; } XDis ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
PIDController2_D ; real_T PIDController_D ; real_T PIDController1_D ; real_T
PIDController2_D_dfmo4lhky4 ; real_T PIDController_D_bnpdwpgf2r ; real_T
PIDController1_D_ipmgxlwt3s ; real_T PIDController2_D_g4w5zspqgm ; real_T
PIDController_D_jkhgbbl1en ; real_T PIDController1_D_ak3x55jqvu ; real_T
PIDController2_D_jd4dbxg05c ; real_T PIDController_D_n0ajifbrzl ; real_T
PIDController1_D_lllqr1ay3g ; real_T PIDController_I ; real_T
PIDController1_I ; real_T PIDController2_I ; real_T
PIDController_I_ctexg1ydk0 ; real_T PIDController1_I_g3r3n5sujh ; real_T
PIDController2_I_k3epcgcoj0 ; real_T PIDController_I_dlmuknchuh ; real_T
PIDController1_I_hetisvzriu ; real_T PIDController2_I_ndlknojsy1 ; real_T
PIDController_I_l4hu2imemx ; real_T PIDController1_I_npnz5gp3zv ; real_T
PIDController2_I_edyryjr1ey ; real_T PIDController2_InitialConditionForFilter
; real_T PIDController_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter_g0oftxmj3a ; real_T
PIDController_InitialConditionForFilter_jdtq01u0hx ; real_T
PIDController1_InitialConditionForFilter_e5pnbc3vtr ; real_T
PIDController2_InitialConditionForFilter_dlk0zcvwml ; real_T
PIDController_InitialConditionForFilter_cnipdysl5i ; real_T
PIDController1_InitialConditionForFilter_psmuwl2ggt ; real_T
PIDController2_InitialConditionForFilter_p4g1s3metf ; real_T
PIDController_InitialConditionForFilter_o14mxov0mo ; real_T
PIDController1_InitialConditionForFilter_fwycow5gb3 ; real_T
PIDController2_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator_pbsngr4knz ; real_T
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; real_T
PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; real_T
PIDController2_InitialConditionForIntegrator_azyc2l4qmp ; real_T
PIDController_InitialConditionForIntegrator_i0pcwuwujv ; real_T
PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; real_T
PIDController2_InitialConditionForIntegrator_osgdcreqgv ; real_T
PIDController_InitialConditionForIntegrator_dochlmuieg ; real_T
PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; real_T _Ixx ;
real_T u_Ixx ; real_T Quadrotor1_Ixx ; real_T Quadrotor_Ixx ; real_T _Iyy ;
real_T u_Iyy ; real_T Quadrotor1_Iyy ; real_T Quadrotor_Iyy ; real_T _Izz ;
real_T u_Izz ; real_T Quadrotor1_Izz ; real_T Quadrotor_Izz ; real_T
PIDController2_N ; real_T PIDController_N ; real_T PIDController1_N ; real_T
PIDController2_N_mpslhyucvp ; real_T PIDController_N_nq5smeuvru ; real_T
PIDController1_N_ju5pdg3n40 ; real_T PIDController2_N_gwanukygue ; real_T
PIDController_N_bgper011ra ; real_T PIDController1_N_gfjurlmhit ; real_T
PIDController2_N_lijdwwumlg ; real_T PIDController_N_j1rqxncrvn ; real_T
PIDController1_N_kwhnf3hzry ; real_T PIDController2_P ; real_T
PIDController_P ; real_T PIDController1_P ; real_T
PIDController2_P_dlj4ikvxns ; real_T PIDController_P_l3dvp4gzhj ; real_T
PIDController1_P_oaxjkkp4ew ; real_T PIDController2_P_kp1lf3scwu ; real_T
PIDController_P_bdo03lnhov ; real_T PIDController1_P_m1rpi1feq5 ; real_T
PIDController2_P_evzc3v5wmi ; real_T PIDController_P_gglswmusll ; real_T _g ;
real_T Quadrotor1_g ; real_T _g_itsbn0zy4d ; real_T Quadrotor_g ; real_T _m ;
real_T fantheta1_m ; real_T _m_ezmi533ezn ; real_T fantheta_m ; real_T
_m_acbzxt22m1 ; real_T Integrator1_IC ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Integrator1_IC_njked3y5ka ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T Integrator5_IC ;
real_T Integrator1_IC_heq4ih3sop ; real_T Integrator1_IC_ggm3f24kg1 ; real_T
Integrator_IC ; real_T Integrator_IC_lqzn20lau3 ; real_T
Integrator1_IC_mm1y0ejde0 ; real_T Saturation2_UpperSat ; real_T
Saturation2_LowerSat ; real_T Integrator3_IC ; real_T
Integrator3_IC_nnhhmqfjhs ; real_T Integrator2_IC ; real_T
Integrator2_IC_onz01dod3h ; real_T Integrator4_IC ; real_T
Integrator1_IC_hluxpggxgx ; real_T Saturation_UpperSat_ha4sihnonx ; real_T
Saturation_LowerSat_hvr4bzptww ; real_T Integrator1_IC_lmb1knnxne ; real_T
Saturation1_UpperSat_hb4te1hlrm ; real_T Saturation1_LowerSat_bckpxbzwol ;
real_T Saturation_UpperSat_hwp4xnffla ; real_T Saturation_LowerSat_psalob5khl
; real_T Saturation1_UpperSat_pb2v3x1tuf ; real_T
Saturation1_LowerSat_egd2dbjq3l ; real_T Integrator5_IC_if0dkkc4sn ; real_T
Integrator1_IC_oayqv41ri2 ; real_T Saturation2_UpperSat_eydgfhthvi ; real_T
Saturation2_LowerSat_pvud2psr4g ; real_T SineWave_Amp ; real_T SineWave_Bias
; real_T SineWave_Freq ; real_T SineWave_Phase ; real_T SineWave1_Amp ;
real_T SineWave1_Bias ; real_T SineWave1_Freq ; real_T SineWave1_Phase ;
real_T Gain1_Gain ; real_T SineWave2_Amp ; real_T SineWave2_Bias ; real_T
SineWave2_Freq ; real_T SineWave2_Phase ; real_T Gain_Gain ; real_T
Saturation_UpperSat_ip5m4fy0ed ; real_T Saturation_LowerSat_j5wcuf0dgd ;
real_T Saturation1_UpperSat_ilexu3zjfy ; real_T
Saturation1_LowerSat_bg51c0dlft ; real_T Gain_Gain_ebhlmk5t4x ; real_T
Integrator_IC_dkmzwnjlda ; real_T Integrator_IC_kuhmbxgxyr ; real_T
Integrator_IC_pea4zoukn2 ; real_T Gain_Gain_awestftebg ; real_T
Integrator4_IC_mfxj3ieh1q ; real_T Integrator_IC_gxj5snzs0v ; real_T
Integrator_IC_mwbhsimjtn ; real_T Integrator_IC_mctvldpkh3 ; real_T
Constant5_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
psi_Value ; real_T psi1_Value ; real_T Constant1_Value ; real_T
Constant6_Value_ji4ih5grvx ; real_T Constant1_Value_fgyxvvitry ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern mxArray * mr_SwarmSMC_GetDWork ( ) ;
extern void mr_SwarmSMC_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_SwarmSMC_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SwarmSMC_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
