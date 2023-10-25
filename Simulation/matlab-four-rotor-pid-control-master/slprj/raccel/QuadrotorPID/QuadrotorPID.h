#ifndef RTW_HEADER_QuadrotorPID_h_
#define RTW_HEADER_QuadrotorPID_h_
#ifndef QuadrotorPID_COMMON_INCLUDES_
#define QuadrotorPID_COMMON_INCLUDES_
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
#include "QuadrotorPID_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME QuadrotorPID
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (84) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (52)   
#elif NCSTATES != 52
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
typedef struct { real_T cbhluqcqju ; real_T crhr35iead ; real_T iguir2gsge ;
real_T lhfzd3onxp ; real_T pezzeovqv4 ; real_T pi54dzxfx5 ; real_T itarhbwpjr
; real_T lq2lccsyip ; real_T erhfmhyu13 ; real_T nveoii5a01 ; real_T
eqmo5gtkm1 ; real_T psn0xuxziz ; real_T h0xqiicsxy ; real_T lgfs4ja5gv ;
real_T bhlvszt131 ; real_T ltuxbetanp ; real_T mhqccbbvsq ; real_T hwznfoja4u
; real_T pempqddxwi ; real_T anxjju0ubx ; real_T hz3jsp2lkt ; real_T
fdtuqmbm4w ; real_T i54utn5heg ; real_T jy0ejo0e4c ; real_T dveit4wdbi ;
real_T gqbpenn0hb ; real_T kispuopekk ; real_T nygsupejah ; real_T nab1xoheob
; real_T glazkeq1pu ; real_T owxswyztav ; real_T ck0d30amao ; real_T
byxioey3rs ; real_T pvzjspdrrf ; real_T dbk0s1remq ; real_T l4dlxlfpbm ;
real_T gtznxiskp5 ; real_T dsaefs4z4w ; real_T kr1zpyt2z1 ; real_T f01uxdg4ms
; real_T g50donemyn ; real_T otrtthqjbh ; real_T lylfmhz2zp ; real_T
ldiaubocbo ; real_T j5e4ia1omf ; real_T l1zs4kn1e0 ; real_T iw40baw43c ;
real_T p5sji1xs2a ; real_T nie411id2u ; real_T lxsxq5iv4u ; real_T m1okp5sryd
; real_T oa0p335xm3 ; real_T mi0m32bumo ; real_T ke4i10axfa ; real_T
bf2unyv33p ; real_T pq5encbpeb ; real_T hhcqqqa4ii ; real_T hulatpkfam ;
real_T f2alpgpnje ; real_T p44cus5bxp ; real_T obagl5h54t ; real_T lpiniymblm
; real_T a5xcs22qdx ; real_T n0snzmetnp ; real_T lr2p1mvysn ; real_T
gnr0hcqobw ; real_T dvj2iaj3nx ; real_T fhw5trdftx ; real_T itq3zulqh3 ;
real_T ng5qcsey3a ; real_T grjoo4maif ; real_T gk3gsu1f15 ; real_T kfzq00qdrd
; real_T k1pf1pogmt ; real_T ebpw4vo0ws ; real_T plwa2ch2yj ; real_T
aetfzrmsq5 ; real_T iiiwquot2h ; real_T dv0ojjpydp ; real_T djakoepzet ;
real_T p5vxkwsrko ; real_T jwq1iwusgs ; real_T pxm3oeljzy ; real_T j34rvgdxt4
; } B ; typedef struct { real_T lm2k5vvzww ; real_T cncrmenvlq ; real_T
h0u53urr3o ; real_T ntxpmdsnwm ; real_T ckfus31as1 ; real_T h5axjkxc04 ;
real_T nhfwyaiex4 ; real_T pkluuz33p4 ; real_T m021dvz455 ; real_T efu2co53jl
; real_T enbk5dzytw ; real_T fywx24ym3u ; struct { void * LoggedData ; }
clt55ntlf4 ; struct { void * LoggedData ; } ntpe11ncgr ; struct { void *
LoggedData ; } k41nuw5mso ; struct { void * LoggedData ; } fc4ce4krqj ;
struct { void * LoggedData ; } h3nbp0ntjt ; struct { void * LoggedData ; }
ijpcrr42zl ; struct { void * LoggedData ; } hhsjai5vxb ; struct { void *
LoggedData ; } dd3y00neca ; struct { void * LoggedData ; } klr2i4xhz4 ;
struct { void * LoggedData ; } eeyo4elwza ; struct { void * LoggedData ; }
eoolwsxd52 ; struct { void * LoggedData [ 2 ] ; } kqh2viblfq ; struct { void
* LoggedData ; } im32c5khd0 ; struct { void * LoggedData ; } jo4b32ylag ;
struct { void * LoggedData ; } ownb3j5olx ; struct { void * LoggedData ; }
n3de3qxpf1 ; struct { void * LoggedData ; } ef40u2t4ta ; struct { void *
LoggedData [ 2 ] ; } pf4erx0flf ; struct { void * LoggedData ; } mej1hd0hap ;
struct { void * LoggedData [ 2 ] ; } n24ufct0kc ; struct { void * LoggedData
; } dowvytdntk ; struct { void * LoggedData ; } axzpl1remi ; struct { void *
LoggedData ; } pj415aqmly ; struct { void * LoggedData ; } k4mr0c1w1d ;
struct { void * LoggedData ; } l2nhft5zpz ; struct { void * AQHandles ; }
jc10nuakae ; struct { void * AQHandles ; } jnssosikn3 ; struct { void *
AQHandles ; } hfbgxk5sbw ; struct { void * AQHandles ; } e5tycvcjhc ; struct
{ void * AQHandles ; } i4o5lei2sq ; struct { void * AQHandles ; } iuujkfk0v5
; struct { void * LoggedData ; } mny0krzw34 ; struct { void * LoggedData ; }
eah45yxfg2 ; struct { void * LoggedData ; } a0tdlmzhct ; struct { void *
LoggedData ; } cyasojitml ; struct { void * LoggedData ; } pxugueca3h ;
struct { void * LoggedData ; } ndcz1aqr3l ; struct { void * LoggedData ; }
meyhxofdty ; struct { void * LoggedData ; } amij4wgp53 ; struct { void *
LoggedData ; } g5sma1hekm ; } DW ; typedef struct { real_T igd3snjblj ;
real_T etdl4ff1yw ; real_T jlsnkjzuui ; real_T n3v2uj4icr ; real_T c4eahou3a2
; real_T ac51n2sp4j ; real_T prwqhr4vft ; real_T jxm15tdjwh ; real_T
pycdjv1w4x ; real_T hadri33lzr ; real_T p22yvstcpv ; real_T ikgnomxrz4 ;
real_T bqbu1h1loj ; real_T o00gqgtwtr ; real_T ifbx5pzkea ; real_T mdiimyccxs
; real_T oklw5dcacl ; real_T pjpvjkdywv ; real_T foimi0t253 ; real_T
bz00hvk0oc ; real_T ksfp32xfqk ; real_T jwnbcspb14 ; real_T jiwy3snj1v ;
real_T nduqb53jft ; real_T lw3y3pqzun ; real_T aypiwh2tfj ; real_T mmz0ptqw25
; real_T mj3i3jcfzp ; real_T cagl3oaqz1 ; real_T d4l0qxjzyd ; real_T
ixaojduajk ; real_T e1z3nxzg5v ; real_T c2khqwtjvb ; real_T csvste2th3 ;
real_T i01cpb55fo ; real_T bj3i15bcwz ; real_T df0zvglyty ; real_T azlkqw1wi5
; real_T ilihbbiz55 ; real_T lw12bbfguz ; real_T hmnwy1prir ; real_T
e5ch1hbmva ; real_T doschmc4db ; real_T cpiih44gh1 ; real_T kqllenndwo ;
real_T njnxqh2y05 ; real_T olihgqj04q ; real_T krg0jgzlhu ; real_T numodtylcr
; real_T ck4utotuds ; real_T lpihnf1klp ; real_T mawgxlbw22 ; } X ; typedef
struct { real_T igd3snjblj ; real_T etdl4ff1yw ; real_T jlsnkjzuui ; real_T
n3v2uj4icr ; real_T c4eahou3a2 ; real_T ac51n2sp4j ; real_T prwqhr4vft ;
real_T jxm15tdjwh ; real_T pycdjv1w4x ; real_T hadri33lzr ; real_T p22yvstcpv
; real_T ikgnomxrz4 ; real_T bqbu1h1loj ; real_T o00gqgtwtr ; real_T
ifbx5pzkea ; real_T mdiimyccxs ; real_T oklw5dcacl ; real_T pjpvjkdywv ;
real_T foimi0t253 ; real_T bz00hvk0oc ; real_T ksfp32xfqk ; real_T jwnbcspb14
; real_T jiwy3snj1v ; real_T nduqb53jft ; real_T lw3y3pqzun ; real_T
aypiwh2tfj ; real_T mmz0ptqw25 ; real_T mj3i3jcfzp ; real_T cagl3oaqz1 ;
real_T d4l0qxjzyd ; real_T ixaojduajk ; real_T e1z3nxzg5v ; real_T c2khqwtjvb
; real_T csvste2th3 ; real_T i01cpb55fo ; real_T bj3i15bcwz ; real_T
df0zvglyty ; real_T azlkqw1wi5 ; real_T ilihbbiz55 ; real_T lw12bbfguz ;
real_T hmnwy1prir ; real_T e5ch1hbmva ; real_T doschmc4db ; real_T cpiih44gh1
; real_T kqllenndwo ; real_T njnxqh2y05 ; real_T olihgqj04q ; real_T
krg0jgzlhu ; real_T numodtylcr ; real_T ck4utotuds ; real_T lpihnf1klp ;
real_T mawgxlbw22 ; } XDot ; typedef struct { boolean_T igd3snjblj ;
boolean_T etdl4ff1yw ; boolean_T jlsnkjzuui ; boolean_T n3v2uj4icr ;
boolean_T c4eahou3a2 ; boolean_T ac51n2sp4j ; boolean_T prwqhr4vft ;
boolean_T jxm15tdjwh ; boolean_T pycdjv1w4x ; boolean_T hadri33lzr ;
boolean_T p22yvstcpv ; boolean_T ikgnomxrz4 ; boolean_T bqbu1h1loj ;
boolean_T o00gqgtwtr ; boolean_T ifbx5pzkea ; boolean_T mdiimyccxs ;
boolean_T oklw5dcacl ; boolean_T pjpvjkdywv ; boolean_T foimi0t253 ;
boolean_T bz00hvk0oc ; boolean_T ksfp32xfqk ; boolean_T jwnbcspb14 ;
boolean_T jiwy3snj1v ; boolean_T nduqb53jft ; boolean_T lw3y3pqzun ;
boolean_T aypiwh2tfj ; boolean_T mmz0ptqw25 ; boolean_T mj3i3jcfzp ;
boolean_T cagl3oaqz1 ; boolean_T d4l0qxjzyd ; boolean_T ixaojduajk ;
boolean_T e1z3nxzg5v ; boolean_T c2khqwtjvb ; boolean_T csvste2th3 ;
boolean_T i01cpb55fo ; boolean_T bj3i15bcwz ; boolean_T df0zvglyty ;
boolean_T azlkqw1wi5 ; boolean_T ilihbbiz55 ; boolean_T lw12bbfguz ;
boolean_T hmnwy1prir ; boolean_T e5ch1hbmva ; boolean_T doschmc4db ;
boolean_T cpiih44gh1 ; boolean_T kqllenndwo ; boolean_T njnxqh2y05 ;
boolean_T olihgqj04q ; boolean_T krg0jgzlhu ; boolean_T numodtylcr ;
boolean_T ck4utotuds ; boolean_T lpihnf1klp ; boolean_T mawgxlbw22 ; } XDis ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T PIDController_D ; real_T PIDController_D_n0ajifbrzl ; real_T
PIDController1_D ; real_T PIDController1_D_lllqr1ay3g ; real_T
PIDController2_D ; real_T PIDController_D_os4cpveuwu ; real_T
PIDController1_D_gdgmituo3o ; real_T PIDController2_D_dfmo4lhky4 ; real_T
PIDController_D_bnpdwpgf2r ; real_T PIDController1_D_ipmgxlwt3s ; real_T
PIDController2_D_g4w5zspqgm ; real_T PIDController_D_jkhgbbl1en ; real_T
PIDController1_D_ak3x55jqvu ; real_T PIDController2_D_jd4dbxg05c ; real_T
PIDController_I ; real_T PIDController1_I ; real_T PIDController2_I ; real_T
PIDController_I_ctexg1ydk0 ; real_T PIDController1_I_g3r3n5sujh ; real_T
PIDController2_I_k3epcgcoj0 ; real_T PIDController_I_dlmuknchuh ; real_T
PIDController1_I_hetisvzriu ; real_T PIDController2_I_ndlknojsy1 ; real_T
PIDController_I_iun55ks3mq ; real_T PIDController1_I_oc3wzt3pd1 ; real_T
PIDController_I_l4hu2imemx ; real_T PIDController1_I_npnz5gp3zv ; real_T
PIDController2_I_edyryjr1ey ; real_T PIDController_InitialConditionForFilter
; real_T PIDController_InitialConditionForFilter_o14mxov0mo ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter_fwycow5gb3 ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController_InitialConditionForFilter_pi2squh4ih ; real_T
PIDController1_InitialConditionForFilter_kmsdvwdf3m ; real_T
PIDController2_InitialConditionForFilter_g0oftxmj3a ; real_T
PIDController_InitialConditionForFilter_jdtq01u0hx ; real_T
PIDController1_InitialConditionForFilter_e5pnbc3vtr ; real_T
PIDController2_InitialConditionForFilter_dlk0zcvwml ; real_T
PIDController_InitialConditionForFilter_cnipdysl5i ; real_T
PIDController1_InitialConditionForFilter_psmuwl2ggt ; real_T
PIDController2_InitialConditionForFilter_p4g1s3metf ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator_dochlmuieg ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; real_T
PIDController2_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator_ngy0ewyeg5 ; real_T
PIDController1_InitialConditionForIntegrator_g32cn1dkfm ; real_T
PIDController2_InitialConditionForIntegrator_pbsngr4knz ; real_T
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; real_T
PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; real_T
PIDController2_InitialConditionForIntegrator_azyc2l4qmp ; real_T
PIDController_InitialConditionForIntegrator_i0pcwuwujv ; real_T
PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; real_T
PIDController2_InitialConditionForIntegrator_osgdcreqgv ; real_T _Ixx ;
real_T u_Ixx ; real_T Quadrotor1_Ixx ; real_T Quadrotor_Ixx ; real_T _Iyy ;
real_T u_Iyy ; real_T Quadrotor1_Iyy ; real_T Quadrotor_Iyy ; real_T _Izz ;
real_T u_Izz ; real_T Quadrotor1_Izz ; real_T Quadrotor_Izz ; real_T
PIDController_N ; real_T PIDController_N_j1rqxncrvn ; real_T PIDController1_N
; real_T PIDController1_N_kwhnf3hzry ; real_T PIDController2_N ; real_T
PIDController_N_gwi2qcwymh ; real_T PIDController1_N_mhmwfw4hux ; real_T
PIDController2_N_mpslhyucvp ; real_T PIDController_N_nq5smeuvru ; real_T
PIDController1_N_ju5pdg3n40 ; real_T PIDController2_N_gwanukygue ; real_T
PIDController_N_bgper011ra ; real_T PIDController1_N_gfjurlmhit ; real_T
PIDController2_N_lijdwwumlg ; real_T PIDController_P ; real_T
PIDController_P_gglswmusll ; real_T PIDController1_P ; real_T
PIDController1_P_hckpmt5anz ; real_T PIDController2_P ; real_T
PIDController_P_ju5f4j1frg ; real_T PIDController1_P_c4vjhd1ziq ; real_T
PIDController2_P_dlj4ikvxns ; real_T PIDController_P_l3dvp4gzhj ; real_T
PIDController1_P_oaxjkkp4ew ; real_T PIDController2_P_kp1lf3scwu ; real_T
PIDController_P_bdo03lnhov ; real_T PIDController1_P_m1rpi1feq5 ; real_T
PIDController2_P_evzc3v5wmi ; real_T _g ; real_T Quadrotor1_g ; real_T
_g_itsbn0zy4d ; real_T Quadrotor_g ; real_T fantheta1_m ; real_T _m ; real_T
fantheta_m ; real_T _m_acbzxt22m1 ; real_T Integrator1_IC ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Integrator1_IC_njked3y5ka ; real_T Saturation1_UpperSat ; real_T
Saturation1_LowerSat ; real_T Integrator5_IC ; real_T
Integrator1_IC_heq4ih3sop ; real_T Integrator1_IC_ggm3f24kg1 ; real_T
Integrator_IC ; real_T Integrator1_IC_mm1y0ejde0 ; real_T
Saturation2_UpperSat ; real_T Saturation2_LowerSat ; real_T Integrator3_IC ;
real_T Integrator3_IC_nnhhmqfjhs ; real_T Integrator2_IC ; real_T
Integrator4_IC ; real_T Integrator1_IC_hluxpggxgx ; real_T
Saturation_UpperSat_ha4sihnonx ; real_T Saturation_LowerSat_hvr4bzptww ;
real_T Integrator1_IC_lmb1knnxne ; real_T Saturation1_UpperSat_hb4te1hlrm ;
real_T Saturation1_LowerSat_bckpxbzwol ; real_T
Saturation_UpperSat_hwp4xnffla ; real_T Saturation_LowerSat_psalob5khl ;
real_T Saturation1_UpperSat_pb2v3x1tuf ; real_T
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
Integrator_IC_lqzn20lau3 ; real_T Integrator2_IC_onz01dod3h ; real_T
Integrator4_IC_mfxj3ieh1q ; real_T Integrator_IC_gxj5snzs0v ; real_T
Integrator_IC_mwbhsimjtn ; real_T Integrator_IC_mctvldpkh3 ; real_T
Constant5_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
psi_Value ; real_T psi1_Value ; real_T Constant1_Value ; real_T
Constant6_Value_ji4ih5grvx ; real_T Constant1_Value_fgyxvvitry ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern mxArray * mr_QuadrotorPID_GetDWork ( )
; extern void mr_QuadrotorPID_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_QuadrotorPID_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * QuadrotorPID_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
