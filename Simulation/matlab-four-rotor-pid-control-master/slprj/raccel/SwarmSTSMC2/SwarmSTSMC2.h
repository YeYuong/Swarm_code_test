#ifndef RTW_HEADER_SwarmSTSMC2_h_
#define RTW_HEADER_SwarmSTSMC2_h_
#ifndef SwarmSTSMC2_COMMON_INCLUDES_
#define SwarmSTSMC2_COMMON_INCLUDES_
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
#include "SwarmSTSMC2_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME SwarmSTSMC2
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (88) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (50)   
#elif NCSTATES != 50
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
typedef struct { real_T ab333bgofo ; real_T bs10qga5ab ; real_T cbu4idg12y ;
real_T gm0ddic0uf ; real_T heojtynpgt ; real_T mvczrpqvic ; real_T pgdoe5qbhl
; real_T kjuszjdzc2 ; real_T oxlz1roha4 ; real_T mfqo0htbck ; real_T
ippmfqft3q ; real_T fgciqbj50i ; real_T nltftrz3zp ; real_T izkdj25k1b ;
real_T lelvvdhupm ; real_T hhmzrxqssa ; real_T nx2psp0vkj ; real_T g14kw4hn4a
; real_T mswtfd202w ; real_T exg5ewvko2 ; real_T h3v4lxfb1f ; real_T
lmz1fmsj4f ; real_T nb24wswwab ; real_T kzyydvk4dh ; real_T ke542j0nyz ;
real_T oqvwq5cqni ; real_T ki202l2lqj ; real_T ghafckseb5 ; real_T bvrzs0ko4p
; real_T llfvbzt5kv ; real_T mi0axd3vzm ; real_T iqp5s5jqdj ; real_T
irjdylgfyd ; real_T js4lycsxtc ; real_T auavdeei20 ; real_T i00equ0whj ;
real_T mqzgyob3ww ; real_T bh4c0b1515 ; real_T ofkzgj4m1k ; real_T lrgxtstads
; real_T cabobmzza1 ; real_T akucc0fmnu ; real_T djtzd3nqfr ; real_T
g3ygqokvad ; real_T pm1k1vpao3 ; real_T lizpqhkdqd ; real_T dhpx0i0zqw ;
real_T gi0ydjsvag ; real_T kup05il15v ; real_T arl0w053wq ; real_T gnbrkrjeaf
; real_T gmgeuu4aud ; real_T ptj4jqtbiw ; real_T denh3c14d3 ; real_T
koeitfs3qs ; real_T erbxmtixnn ; real_T ifqdq0dvlo ; real_T o4g1hs3prq ;
real_T nr0h333x3t ; real_T k4tdeqes5w ; real_T eg1tsljdkk ; real_T ozeuxnz4s2
; real_T faptzmeebh ; real_T d0v0un3w2w ; real_T dg2dcyrat3 ; real_T
orfwokhk5z ; real_T lpczuv1wwn ; real_T psclu1x4sp ; real_T dft5tbo5wq ;
real_T esazz0r5z5 ; real_T l5ym1yzrio ; real_T c3szn2agjq ; real_T j0aq0ulk0a
; real_T kjeq2e1wm5 ; real_T hxhxj2shl2 ; real_T pqwabbxcij ; real_T
pjr4p5hmjj ; real_T eno2o5z3yp ; real_T n0kfsoom34 ; real_T djg2kt1x1r ;
real_T pvhd4r3d4o ; real_T noelpg3bo3 ; real_T nbqizlyjkn ; real_T hxdpyc4vbu
; real_T mhn1a21rba ; real_T luqcnzg44g ; real_T ifmju2saai ; real_T
lnkfljj42y ; } B ; typedef struct { real_T oqhzpe3pwd ; real_T pjb5x2p5pz ;
real_T ilfrz5gyiz ; real_T bpqrflndws ; real_T ahssk0tttr ; real_T potcnercix
; real_T gyhz20plud ; real_T dn5sswd0jp ; real_T itrolvxcy2 ; real_T
lkhjrmdr25 ; real_T oo555w2jgf ; real_T jlnf1hhwet ; real_T jpcgn345yv ;
real_T hs2y5swgfz ; real_T ibvwech01e ; real_T aeudxaauhc ; real_T ipewzgngqr
; real_T cwwo4khs0i ; real_T mbmzp2aurk ; real_T e1kblvoky1 ; real_T
jabfec0wwp ; real_T l1cu0hzuu3 ; real_T bv2hzsnytg ; real_T e2wis3wb3i ;
real_T orpsvqiaoa ; real_T o4ckmxfkac ; real_T lutbqduf2r ; real_T norshvxqtw
; struct { void * LoggedData ; } niiptouwo3 ; struct { void * LoggedData ; }
knpxbubaie ; struct { void * LoggedData ; } ia3kpf3kqc ; struct { void *
LoggedData ; } db4n0mtkbp ; struct { void * LoggedData ; } bkgo4vdl1w ;
struct { void * LoggedData ; } eqs31izxzn ; struct { void * LoggedData ; }
ihyfdy2alx ; struct { void * LoggedData ; } kbj0bllezk ; struct { void *
LoggedData ; } iyq0pnj4vf ; struct { void * LoggedData ; } mx1lu4exsa ;
struct { void * LoggedData ; } p1uft5x04w ; struct { void * LoggedData [ 2 ]
; } h3u1cbvbdk ; struct { void * LoggedData ; } gl4mo0frnf ; struct { void *
LoggedData ; } gbrx4uohiy ; struct { void * LoggedData ; } bedtuvztcl ;
struct { void * LoggedData ; } l5pk5ikrvk ; struct { void * LoggedData ; }
ajbe0gsi4b ; struct { void * LoggedData [ 2 ] ; } e5zts3jep4 ; struct { void
* LoggedData [ 2 ] ; } nubaljw22h ; struct { void * LoggedData ; } ebppbptkhv
; struct { void * LoggedData [ 2 ] ; } ijokzal450 ; struct { void *
LoggedData ; } px5syrk2dq ; struct { void * LoggedData [ 2 ] ; } nkoa5eyqtd ;
struct { void * LoggedData [ 2 ] ; } mnbhwejufk ; struct { void * LoggedData
; } g2r3wpsuge ; struct { void * LoggedData ; } beijyooecy ; struct { void *
LoggedData ; } fogljshk5h ; struct { void * LoggedData ; } jx4uuxl3la ;
struct { void * AQHandles ; } jdekw1bnrj ; struct { void * AQHandles ; }
k15z1rwbvt ; struct { void * AQHandles ; } j0ibqsazqx ; struct { void *
AQHandles ; } dnt4uaun3e ; struct { void * AQHandles ; } mxgow43j1c ; struct
{ void * AQHandles ; } eq1ypafliz ; struct { void * LoggedData ; } fftaqiamf1
; struct { void * LoggedData ; } pnze0ldxru ; struct { void * LoggedData ; }
jfk2zjypg4 ; struct { void * LoggedData ; } khuw0dibev ; struct { void *
LoggedData ; } ngb2nc0adz ; struct { void * LoggedData ; } oesmqweh0r ;
struct { void * AQHandles ; } pksgawvkdt ; struct { void * LoggedData ; }
odowp0fz3e ; struct { void * LoggedData ; } aflbs5ltsb ; } DW ; typedef
struct { real_T k4ej2iactf ; real_T osdmew3thc ; real_T aif2vgddk0 ; real_T
g03la3p021 ; real_T avbuupshgm ; real_T l31r5m0dnw ; real_T ijq23yd5pt ;
real_T ko1mt40rca ; real_T maqvl2cfg0 ; real_T kr0mtdabbi ; real_T mqwrgffld1
; real_T gmks24cnll ; real_T ja0wmx20on ; real_T cgaiylvesm ; real_T
e5bw3nnryi ; real_T i3ne1ua4rj ; real_T oljewfzy43 ; real_T np2f1nemmj ;
real_T nfl2fjrgpx ; real_T l1mufvbv4u ; real_T iercuixttf ; real_T ejvpmsysss
; real_T e3f4t4lxzl ; real_T dovskkvz2v ; real_T dxtvctmrdy ; real_T
gy3fln0muh ; real_T ghvqhpu4fs ; real_T plju05ygdr ; real_T n0hufts5nu ;
real_T f0rf0xa55w ; real_T iip5izs45l ; real_T emlfvwiikj ; real_T mhanejbd23
; real_T ewxbzsgpfb ; real_T bs2ar2kcc5 ; real_T as1ewi2dli ; real_T
kfhoarbrhc ; real_T e4nizbtx1o ; real_T mjcae30hbb ; real_T peguzjy5mn ;
real_T me0bh4hm5s ; real_T hbz2ulhakj ; real_T keylqchqmm ; real_T epzmv50cz2
; real_T cfu225phqd ; real_T du0ialtbbo ; real_T fgn1y5vita ; real_T
aqn3psnulx ; real_T pgxafaf2gr ; real_T otgebcs22n ; } X ; typedef struct {
real_T k4ej2iactf ; real_T osdmew3thc ; real_T aif2vgddk0 ; real_T g03la3p021
; real_T avbuupshgm ; real_T l31r5m0dnw ; real_T ijq23yd5pt ; real_T
ko1mt40rca ; real_T maqvl2cfg0 ; real_T kr0mtdabbi ; real_T mqwrgffld1 ;
real_T gmks24cnll ; real_T ja0wmx20on ; real_T cgaiylvesm ; real_T e5bw3nnryi
; real_T i3ne1ua4rj ; real_T oljewfzy43 ; real_T np2f1nemmj ; real_T
nfl2fjrgpx ; real_T l1mufvbv4u ; real_T iercuixttf ; real_T ejvpmsysss ;
real_T e3f4t4lxzl ; real_T dovskkvz2v ; real_T dxtvctmrdy ; real_T gy3fln0muh
; real_T ghvqhpu4fs ; real_T plju05ygdr ; real_T n0hufts5nu ; real_T
f0rf0xa55w ; real_T iip5izs45l ; real_T emlfvwiikj ; real_T mhanejbd23 ;
real_T ewxbzsgpfb ; real_T bs2ar2kcc5 ; real_T as1ewi2dli ; real_T kfhoarbrhc
; real_T e4nizbtx1o ; real_T mjcae30hbb ; real_T peguzjy5mn ; real_T
me0bh4hm5s ; real_T hbz2ulhakj ; real_T keylqchqmm ; real_T epzmv50cz2 ;
real_T cfu225phqd ; real_T du0ialtbbo ; real_T fgn1y5vita ; real_T aqn3psnulx
; real_T pgxafaf2gr ; real_T otgebcs22n ; } XDot ; typedef struct { boolean_T
k4ej2iactf ; boolean_T osdmew3thc ; boolean_T aif2vgddk0 ; boolean_T
g03la3p021 ; boolean_T avbuupshgm ; boolean_T l31r5m0dnw ; boolean_T
ijq23yd5pt ; boolean_T ko1mt40rca ; boolean_T maqvl2cfg0 ; boolean_T
kr0mtdabbi ; boolean_T mqwrgffld1 ; boolean_T gmks24cnll ; boolean_T
ja0wmx20on ; boolean_T cgaiylvesm ; boolean_T e5bw3nnryi ; boolean_T
i3ne1ua4rj ; boolean_T oljewfzy43 ; boolean_T np2f1nemmj ; boolean_T
nfl2fjrgpx ; boolean_T l1mufvbv4u ; boolean_T iercuixttf ; boolean_T
ejvpmsysss ; boolean_T e3f4t4lxzl ; boolean_T dovskkvz2v ; boolean_T
dxtvctmrdy ; boolean_T gy3fln0muh ; boolean_T ghvqhpu4fs ; boolean_T
plju05ygdr ; boolean_T n0hufts5nu ; boolean_T f0rf0xa55w ; boolean_T
iip5izs45l ; boolean_T emlfvwiikj ; boolean_T mhanejbd23 ; boolean_T
ewxbzsgpfb ; boolean_T bs2ar2kcc5 ; boolean_T as1ewi2dli ; boolean_T
kfhoarbrhc ; boolean_T e4nizbtx1o ; boolean_T mjcae30hbb ; boolean_T
peguzjy5mn ; boolean_T me0bh4hm5s ; boolean_T hbz2ulhakj ; boolean_T
keylqchqmm ; boolean_T epzmv50cz2 ; boolean_T cfu225phqd ; boolean_T
du0ialtbbo ; boolean_T fgn1y5vita ; boolean_T aqn3psnulx ; boolean_T
pgxafaf2gr ; boolean_T otgebcs22n ; } XDis ; typedef struct {
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
real_T Quadrotor1_g ; real_T _g_itsbn0zy4d ; real_T Quadrotor_g ; real_T
fantheta1_m ; real_T _m ; real_T fantheta_m ; real_T _m_acbzxt22m1 ; real_T
Switch3_Threshold ; real_T Integrator1_IC ; real_T Saturation_UpperSat ;
real_T Saturation_LowerSat ; real_T Integrator1_IC_njked3y5ka ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T Integrator5_IC ;
real_T Integrator5_IC_f1f5dsuuw2 ; real_T Integrator1_IC_heq4ih3sop ; real_T
Integrator1_IC_ggm3f24kg1 ; real_T Gain4_Gain ; real_T Integrator_IC ; real_T
Integrator_IC_lqzn20lau3 ; real_T Gain1_Gain ; real_T _Gain ; real_T u_Gain ;
real_T Integrator1_IC_mm1y0ejde0 ; real_T Saturation2_UpperSat ; real_T
Saturation2_LowerSat ; real_T Integrator1_IC_fvi5gvi3z2 ; real_T
Integrator3_IC ; real_T Integrator3_IC_nnhhmqfjhs ; real_T Gain5_Gain ;
real_T Integrator2_IC ; real_T Integrator2_IC_onz01dod3h ; real_T Gain2_Gain
; real_T u_Gain_p1u4qwnswq ; real_T u_Gain_oeh5i53seq ; real_T Integrator4_IC
; real_T Integrator1_IC_hluxpggxgx ; real_T Saturation_UpperSat_ha4sihnonx ;
real_T Saturation_LowerSat_hvr4bzptww ; real_T Integrator1_IC_lmb1knnxne ;
real_T Saturation1_UpperSat_hb4te1hlrm ; real_T
Saturation1_LowerSat_bckpxbzwol ; real_T Saturation_UpperSat_hwp4xnffla ;
real_T Saturation_LowerSat_psalob5khl ; real_T
Saturation1_UpperSat_pb2v3x1tuf ; real_T Saturation1_LowerSat_egd2dbjq3l ;
real_T Integrator5_IC_if0dkkc4sn ; real_T Integrator1_IC_oayqv41ri2 ; real_T
Saturation2_UpperSat_eydgfhthvi ; real_T Saturation2_LowerSat_pvud2psr4g ;
real_T SineWave_Amp ; real_T SineWave_Bias ; real_T SineWave_Freq ; real_T
SineWave_Phase ; real_T SineWave1_Amp ; real_T SineWave1_Bias ; real_T
SineWave1_Freq ; real_T SineWave1_Phase ; real_T Gain1_Gain_an1pdnuefr ;
real_T SineWave2_Amp ; real_T SineWave2_Bias ; real_T SineWave2_Freq ; real_T
SineWave2_Phase ; real_T Gain_Gain ; real_T Saturation_UpperSat_ip5m4fy0ed ;
real_T Saturation_LowerSat_j5wcuf0dgd ; real_T
Saturation1_UpperSat_ilexu3zjfy ; real_T Saturation1_LowerSat_bg51c0dlft ;
real_T u_Gain_du2kb2gtqg ; real_T u_Gain_ofer0skcuw ; real_T
Gain_Gain_ebhlmk5t4x ; real_T SineWave6_Amp ; real_T SineWave6_Bias ; real_T
SineWave6_Freq ; real_T SineWave6_Phase ; real_T Switch4_Threshold ; real_T
Gain4_Gain_imrt3sps2q ; real_T Integrator_IC_dkmzwnjlda ; real_T
Integrator_IC_kuhmbxgxyr ; real_T Integrator_IC_pea4zoukn2 ; real_T
Gain_Gain_awestftebg ; real_T Integrator4_IC_mfxj3ieh1q ; real_T
Integrator_IC_gxj5snzs0v ; real_T Integrator_IC_mwbhsimjtn ; real_T
Integrator_IC_mctvldpkh3 ; real_T Constant5_Value ; real_T Constant6_Value ;
real_T Constant7_Value ; real_T psi_Value ; real_T psi1_Value ; real_T
Constant1_Value ; real_T Constant2_Value ; real_T Gain17_Gain ; real_T
Constant37_Value ; real_T Constant38_Value ; real_T Constant3_Value ; real_T
Constant4_Value ; real_T Gain3_Gain ; real_T Constant5_Value_i2io2i2gcf ;
real_T Constant6_Value_gooirbdlmo ; real_T Constant1_Value_anleszyjns ;
real_T Constant6_Value_ji4ih5grvx ; real_T Constant18_Value ; real_T
Constant19_Value ; real_T Constant20_Value ; real_T
Constant1_Value_fgyxvvitry ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_SwarmSTSMC2_GetDWork ( ) ; extern void
mr_SwarmSTSMC2_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_SwarmSTSMC2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SwarmSTSMC2_GetCAPIStaticMap ( void ) ;
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
