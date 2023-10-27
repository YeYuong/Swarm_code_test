#include "SwarmSMC2.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "SwarmSMC2_private.h"
#include "rt_logging_mmi.h"
#include "SwarmSMC2_capi.h"
#include "SwarmSMC2_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.7 (R2022a) 13-Nov-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . lmp1jlws1q = rtP .
Integrator1_IC ; rtX . dvsvf5wljn = rtP . Integrator1_IC_njked3y5ka ; rtX .
pjq3y0vbqc = rtP . Integrator5_IC ; rtDW . d1w1ptz3pi = ( rtInf ) ; rtDW .
arilnfbogf = ( rtInf ) ; rtDW . hgj1s3xddi = ( rtInf ) ; rtDW . kdhn3disiv =
( rtInf ) ; rtDW . djd0izxljn = ( rtInf ) ; rtDW . gp4qxs0jny = ( rtInf ) ;
rtX . muultjrzks = rtP . Integrator1_IC_heq4ih3sop ; rtX . l2m5ltsubp = rtP .
Integrator1_IC_ggm3f24kg1 ; rtX . oqbdmgd0ck = rtP . Integrator_IC ; rtX .
nw0blrtueg = rtP . Integrator_IC_lqzn20lau3 ; rtX . b5w4zdghl5 = rtP .
Integrator1_IC_mm1y0ejde0 ; rtDW . fd0y4m0axt = ( rtInf ) ; rtDW . dv0pjwza2t
= ( rtInf ) ; rtDW . azzm52nqwi = ( rtInf ) ; rtDW . oyrlkmn3mo = ( rtInf ) ;
rtX . d1vv0rjnt2 = rtP . Integrator3_IC ; rtX . l3pq51pl0v = rtP .
Integrator3_IC_nnhhmqfjhs ; rtX . derj2qzpjf = rtP . Integrator2_IC ; rtX .
ig1kllb5t1 = rtP . Integrator2_IC_onz01dod3h ; rtX . m33tqgudkc = rtP .
Integrator4_IC ; rtX . ou0e404rmu = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . cxw3eeosyw = rtP .
PIDController2_InitialConditionForFilter ; rtX . ev5tiefchl = rtP .
Integrator1_IC_hluxpggxgx ; rtX . ifchgpw41h = rtP .
Integrator1_IC_lmb1knnxne ; rtX . nwkcijvubd = rtP .
Integrator5_IC_if0dkkc4sn ; rtX . lua2wyjxlz = rtP .
Integrator1_IC_oayqv41ri2 ; rtX . hoe45xg5l1 = rtP .
Integrator1_IC_plyhjc2cip ; rtX . pvts5x1qi0 = rtP .
Integrator1_IC_eq0rr2lar5 ; rtX . dfdozw0qju = rtP .
Integrator5_IC_bljzdd2dwj ; rtDW . orwknhwt4c = ( rtInf ) ; rtDW . ciurdviajr
= ( rtInf ) ; rtX . pwzhugspii = rtP . Integrator1_IC_od5gppxfje ; rtX .
bw5bxl3emz = rtP . Integrator1_IC_ekxpqxuslq ; rtX . la0kq4504w = rtP .
PIDController_InitialConditionForIntegrator ; rtX . al3wmpyaa1 = rtP .
PIDController_InitialConditionForFilter ; rtX . nt03o0lbau = rtP .
Integrator1_IC_ccuwbvxd2m ; rtX . mjgjmcyafa = rtP .
Integrator3_IC_eunscfkrjo ; rtX . ju3cx4z2kg = rtP .
Integrator3_IC_khpwka435t ; rtX . mxt02um1sk = rtP .
PIDController1_InitialConditionForIntegrator ; rtX . h5bds2funr = rtP .
PIDController1_InitialConditionForFilter ; rtX . obu1t4d3fm = rtP .
Integrator5_IC_dkcmnnrtrg ; rtX . dxslzurzcr = rtP .
PIDController2_InitialConditionForIntegrator_c5bt5fi51p ; rtX . cgymruyhg4 =
rtP . PIDController2_InitialConditionForFilter_bihta5lqek ; rtX . mfkdlg3wcn
= rtP . Integrator1_IC_c5keywtevf ; rtX . mhgsfskkwq = rtP .
Integrator1_IC_bk1luecfrf ; rtX . gzcp4vv3sa = rtP . Integrator_IC_kgvonwyhc0
; rtX . h0r5nq1np1 = rtP . Integrator1_IC_hmuy2i0cl2 ; rtX . ozr1b5mdiv = rtP
. Integrator2_IC_cjntt1wjkx ; rtX . k2dc21zk5j = rtP .
Integrator4_IC_hweooieypn ; rtX . czddacw2q5 = rtP .
PIDController_InitialConditionForIntegrator_cjvlfsjldh ; rtX . dkzvp0zlco =
rtP . PIDController_InitialConditionForFilter_lmhtoe3njt ; rtX . j3b1dd4rrz =
rtP . PIDController1_InitialConditionForIntegrator_dveacu2tra ; rtX .
lwywyqed5i = rtP . PIDController1_InitialConditionForFilter_bs1b4aw1p1 ; rtX
. b5odf1vso5 = rtP . PIDController2_InitialConditionForIntegrator_hw4t2ehg5d
; rtX . o1gw4caqxa = rtP .
PIDController2_InitialConditionForFilter_en0izqklf0 ; rtDW . jznxtwrdhr = (
rtInf ) ; rtDW . ns4o4be1dk = ( rtInf ) ; rtDW . jdb2xhicuf = ( rtInf ) ;
rtDW . nfmtckz5ig = ( rtInf ) ; rtX . gzyfptfl3t = rtP .
Integrator1_IC_gi4giafbgs ; rtX . m5y0b1f4ds = rtP .
Integrator1_IC_ief3n0zhlq ; rtX . li3l2cwoj1 = rtP .
Integrator3_IC_fuyeuczoy3 ; rtX . lbblib2jj3 = rtP .
Integrator3_IC_gjlkpxvur3 ; rtX . ixqfbvvrqq = rtP .
Integrator1_IC_pvv3oz1agd ; rtX . irzbjopfdt = rtP .
Integrator1_IC_p1wk5q0cdt ; rtX . e2ng2yt2cq = rtP .
Integrator5_IC_jrqdwzs0tm ; rtDW . hnlz54wdxg = ( rtInf ) ; rtDW . hi3ccp4tdk
= ( rtInf ) ; rtX . ewln0r2fz3 = rtP . Integrator5_IC_dykywbkzns ; rtX .
ngyoiwrxa1 = rtP . Integrator_IC_a4ahepwtbc ; rtX . frk2bafzxw = rtP .
Integrator_IC_mdcyvvmror ; rtDW . px2bsuejyw = ( rtInf ) ; rtDW . mzfqs1evtc
= ( rtInf ) ; rtDW . hfcw5k2d4i = ( rtInf ) ; rtDW . pzqvd5drtk = ( rtInf ) ;
rtX . f3kt0qvhxp = rtP . Integrator1_IC_llubqre4or ; rtX . d1dqkqdeq2 = rtP .
Integrator1_IC_ot5qtskjxx ; rtX . pviwr55jyx = rtP .
Integrator2_IC_bmfscpdt33 ; rtX . ctyxh2raia = rtP .
Integrator2_IC_gbvim2rrir ; rtDW . jh2zw2mkrg = ( rtInf ) ; rtDW . mqewdswekk
= ( rtInf ) ; rtDW . ix3yptllqh = ( rtInf ) ; rtDW . efzvv4xbrg = ( rtInf ) ;
rtX . ipbbbqqcmt = rtP . Integrator4_IC_kdc04fe1mo ; rtX . lu2ujrk2ss = rtP .
PIDController2_InitialConditionForIntegrator_lqya4mqhuz ; rtX . lhu2d3f2ic =
rtP . PIDController2_InitialConditionForFilter_jwfobmpi1c ; rtX . bvjygku5w3
= rtP . Integrator1_IC_fraig3nxla ; rtX . awijrgo5wm = rtP .
Integrator1_IC_nt3ac13l2a ; rtX . huag3gyiah = rtP .
PIDController_InitialConditionForIntegrator_ngy0ewyeg5 ; rtX . l4w55j32bm =
rtP . PIDController_InitialConditionForFilter_pi2squh4ih ; rtX . gywjrxv55s =
rtP . PIDController1_InitialConditionForIntegrator_g32cn1dkfm ; rtX .
etb0rkmw41 = rtP . PIDController1_InitialConditionForFilter_kmsdvwdf3m ; rtX
. j21i42iaxm = rtP . PIDController2_InitialConditionForIntegrator_pbsngr4knz
; rtX . lmhoguyign = rtP .
PIDController2_InitialConditionForFilter_g0oftxmj3a ; rtX . kfxedfgmub = rtP
. Integrator5_IC_kfnpgityuy ; rtX . jdy4bhdf2w = rtP .
Integrator1_IC_p4le5tsnjt ; rtX . ik24wcoua3 = rtP .
PIDController_InitialConditionForIntegrator_avsteu0oht ; rtX . hkz0a2vtcs =
rtP . PIDController_InitialConditionForFilter_hp3eqk4ff5 ; rtX . do2eu3ewib =
rtP . PIDController1_InitialConditionForIntegrator_dvkc14r1w0 ; rtX .
o0mzlxndfd = rtP . PIDController1_InitialConditionForFilter_pajeulinwu ; rtX
. muzcxum1ac = rtP . PIDController2_InitialConditionForIntegrator_dsfjn3toh3
; rtX . lsji1c25s5 = rtP .
PIDController2_InitialConditionForFilter_ajsr1gcclx ; rtDW . fyesrwfyxs = (
rtInf ) ; rtDW . npcngz0wrj = ( rtInf ) ; rtDW . jicbjxqfry = ( rtInf ) ;
rtDW . ixuvrapcqk = ( rtInf ) ; rtDW . nbm4ws3vkn = ( rtInf ) ; rtDW .
imedkbs3vt = ( rtInf ) ; rtDW . e3rgb100pi = ( rtInf ) ; rtDW . im03fvpgjh =
( rtInf ) ; rtX . nwyypn00k3 = rtP .
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; rtX . adlq2c0wq1 =
rtP . PIDController_InitialConditionForFilter_jdtq01u0hx ; rtX . i4cw2jspdx =
rtP . PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; rtX .
of00aunqxu = rtP . PIDController1_InitialConditionForFilter_e5pnbc3vtr ; rtX
. lwagfwnwie = rtP . PIDController2_InitialConditionForIntegrator_azyc2l4qmp
; rtX . pjvklj4szi = rtP .
PIDController2_InitialConditionForFilter_dlk0zcvwml ; rtX . acnidcfmgv = rtP
. PIDController_InitialConditionForIntegrator_i0pcwuwujv ; rtX . lijh2swrpw =
rtP . PIDController_InitialConditionForFilter_cnipdysl5i ; rtX . jppvzfe0an =
rtP . PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; rtX .
g5w4koxf0l = rtP . PIDController1_InitialConditionForFilter_psmuwl2ggt ; rtX
. fow5rkn0z1 = rtP . PIDController2_InitialConditionForIntegrator_osgdcreqgv
; rtX . lgduvgp5n3 = rtP .
PIDController2_InitialConditionForFilter_p4g1s3metf ; rtX . fypx2u0nu4 = rtP
. PIDController_InitialConditionForIntegrator_lcb4fxxjq2 ; rtX . fy55ynfqoc =
rtP . PIDController_InitialConditionForFilter_m4mghgay1j ; rtX . fmatfc2vzb =
rtP . PIDController1_InitialConditionForIntegrator_nz4dig1fgw ; rtX .
ghwaun2q4z = rtP . PIDController1_InitialConditionForFilter_kb2kl5oeqz ; rtX
. grsxmlptlz = rtP . PIDController2_InitialConditionForIntegrator_k1rnok2v3s
; rtX . lhv23sybik = rtP .
PIDController2_InitialConditionForFilter_pd4m1hvilk ; rtX . phxnmexg5m = rtP
. PIDController_InitialConditionForIntegrator_i5kl1tulff ; rtX . eon1excs1b =
rtP . PIDController_InitialConditionForFilter_kgltz54nbv ; rtX . b0h1snyqm3 =
rtP . PIDController1_InitialConditionForIntegrator_iw4k32gvre ; rtX .
dey1qh2tff = rtP . PIDController1_InitialConditionForFilter_axd024yf43 ; rtX
. kctwtdh12v = rtP . PIDController2_InitialConditionForIntegrator_krl2pziuvw
; rtX . kjzjtgp2iz = rtP .
PIDController2_InitialConditionForFilter_eqcztveeov ; rtX . flstcqpmom = rtP
. PIDController_InitialConditionForIntegrator_lcvuquuzji ; rtX . o5c0ah2apc =
rtP . PIDController_InitialConditionForFilter_pahdswfqmx ; rtX . o0rr4etxc1 =
rtP . PIDController1_InitialConditionForIntegrator_ch0immbnrm ; rtX .
jwvpzqa0r5 = rtP . PIDController1_InitialConditionForFilter_hdfns1sxqq ; rtX
. n3lfk4kfkd = rtP . PIDController2_InitialConditionForIntegrator_muqkshfigt
; rtX . kxrzrzcrxq = rtP .
PIDController2_InitialConditionForFilter_gqusy3k4kp ; rtX . kjlmncixpi = rtP
. PIDController_InitialConditionForIntegrator_f3bhxtqksc ; rtX . j3ycbllr1p =
rtP . PIDController_InitialConditionForFilter_cpdt0v4ia1 ; rtX . eqelhjati2 =
rtP . PIDController1_InitialConditionForIntegrator_hlkt1bv1hz ; rtX .
jqtzx31zch = rtP . PIDController1_InitialConditionForFilter_ia5a3zow3c ; rtX
. fhtwvoc0b2 = rtP . PIDController2_InitialConditionForIntegrator_pmy2x4di4c
; rtX . jf4ybj03im = rtP .
PIDController2_InitialConditionForFilter_abjibwbfny ; rtX . la1zyfaj31 = rtP
. PIDController_InitialConditionForIntegrator_oha42fu24c ; rtX . bg2txxrlvm =
rtP . PIDController_InitialConditionForFilter_alfqriok00 ; rtX . gm5iqrsymu =
rtP . PIDController1_InitialConditionForFilter_edcjoi3q45 ; rtX . nwlxtpgtgk
= rtP . PIDController1_InitialConditionForIntegrator_h55owygxwq ; rtX .
gd4laa4feb = rtP . Integrator_IC_dkmzwnjlda ; rtX . nqvlxtcqv3 = rtP .
Integrator_IC_kuhmbxgxyr ; rtX . fndb2brp1l = rtP . Integrator_IC_pea4zoukn2
; rtX . nv44eqthra = rtP . Integrator_IC_hcxtzvq335 ; rtX . nyrhlyopms = rtP
. Integrator_IC_h2ghob1z1z ; rtX . cxtj11s55z = rtP .
Integrator_IC_deafmlkoja ; rtX . ehadcyaees = rtP . Integrator_IC_d14lb2y2xu
; rtX . dgwu2bgatn = rtP . Integrator_IC_da24xtkiht ; rtX . ggjcmhsrmo = rtP
. Integrator_IC_ay1fqjw5cu ; rtX . dw2opfbpq2 = rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg ; rtX . iwolbcbvo0 =
rtP . PIDController_InitialConditionForFilter_o14mxov0mo ; rtX . ix5bvh54da =
rtP . PIDController1_InitialConditionForFilter_fwycow5gb3 ; rtX . da5ubbeqhs
= rtP . PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; rtX .
krepniuh0b = rtP . PIDController_InitialConditionForIntegrator_eeeasmnvlu ;
rtX . kjxmjp3orc = rtP . PIDController_InitialConditionForFilter_h0gegwcbv4 ;
rtX . gledeu45c1 = rtP . PIDController1_InitialConditionForFilter_d52pz1y1uv
; rtX . g1lkjatm4p = rtP .
PIDController1_InitialConditionForIntegrator_mjg4ehekhg ; rtX . cs2mamav0r =
rtP . PIDController2_InitialConditionForIntegrator_hbrtunelxg ; rtX .
lyfoylyp5z = rtP . PIDController2_InitialConditionForFilter_mj1tjascp5 ; rtX
. c31qtbt14e = rtP . PIDController_InitialConditionForIntegrator_g04d5mrrz5 ;
rtX . d0jgzgn4lu = rtP . PIDController_InitialConditionForFilter_j3evzf1gez ;
rtX . ltkpug5sy2 = rtP . PIDController1_InitialConditionForFilter_hl4ak4lbqb
; rtX . mv4nouezpl = rtP .
PIDController1_InitialConditionForIntegrator_c4jhblkgrn ; rtX . l3ukeljw21 =
rtP . Integrator4_IC_mfxj3ieh1q ; rtX . magrozyij1 = rtP .
Integrator_IC_gxj5snzs0v ; rtX . lueloh21s1 = rtP . Integrator_IC_mwbhsimjtn
; rtX . dbyhcjasi5 = rtP . Integrator_IC_mctvldpkh3 ; rtX . cnlosicvyb = rtP
. Integrator_IC_e2hmrfune1 ; rtX . jnl1six2fc = rtP .
Integrator2_IC_efpd0r0wwo ; rtX . lehjmsphyv = rtP .
Integrator4_IC_no4dif4d2y ; rtX . ee4q0hpg5w = rtP . Integrator_IC_aondaic4tn
; rtX . nueeodfbss = rtP . Integrator_IC_drogpohdrj ; rtX . c2ou34j4st = rtP
. Integrator_IC_jw0wt3eqo1 ; rtX . pjv4cmmakb = rtP .
Integrator4_IC_igppojxrmq ; rtX . gn1w3zxddg = rtP . Integrator_IC_pxiemqggyu
; rtX . bkgm0k2m5i = rtP . Integrator_IC_pbr1n1noet ; rtX . hrngp2ds5w = rtP
. Integrator_IC_nmclzfgmgt ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cvepqulsyo . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5bf12412-f682-461d-bbb1-e2c6684c6ab3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cvepqulsyo . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cvepqulsyo . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cvepqulsyo . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . cvepqulsyo .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cvepqulsyo . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
cvepqulsyo . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cvepqulsyo . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . cvepqulsyo . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x" ) ; sdiRegisterWksVariable ( rtDW . cvepqulsyo . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ger1swbgma . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "921e5244-dcbc-403e-91ab-6406d8ab997c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ger1swbgma . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ger1swbgma . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ger1swbgma . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ger1swbgma .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ger1swbgma . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ger1swbgma . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ger1swbgma . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ger1swbgma . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y" ) ; sdiRegisterWksVariable ( rtDW . ger1swbgma . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace10" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ga4t3zelrc . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5dd21478-f4cd-42fd-be91-1fc3744a8522" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ga4t3zelrc . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ga4t3zelrc . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ga4t3zelrc . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ga4t3zelrc .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ga4t3zelrc . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ga4t3zelrc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ga4t3zelrc . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ga4t3zelrc . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y1" ) ; sdiRegisterWksVariable ( rtDW . ga4t3zelrc . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace11" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . d4n3os3ohs . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "93de5b86-9b60-4d1a-a77e-acceea0b4eca" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . d4n3os3ohs . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . d4n3os3ohs . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . d4n3os3ohs . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . d4n3os3ohs .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . d4n3os3ohs . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
d4n3os3ohs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
d4n3os3ohs . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . d4n3os3ohs . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z1" ) ; sdiRegisterWksVariable ( rtDW . d4n3os3ohs . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace12" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . olwfo1ugp5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5502173a-0594-4459-b6fb-5de20790e3a3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . olwfo1ugp5 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . olwfo1ugp5 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . olwfo1ugp5 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . olwfo1ugp5 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . olwfo1ugp5 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
olwfo1ugp5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
olwfo1ugp5 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . olwfo1ugp5 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x2" ) ; sdiRegisterWksVariable ( rtDW . olwfo1ugp5 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace13" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . gtuoyzkuzx . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0232a38f-30c5-49a8-8870-09e8fe75ec72" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . gtuoyzkuzx . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . gtuoyzkuzx . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . gtuoyzkuzx . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . gtuoyzkuzx .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . gtuoyzkuzx . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
gtuoyzkuzx . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
gtuoyzkuzx . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . gtuoyzkuzx . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y2" ) ; sdiRegisterWksVariable ( rtDW . gtuoyzkuzx . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace14" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . d41yioycvk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f2a4375b-723d-4c5d-ac85-7e3077ebadd9" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . d41yioycvk . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . d41yioycvk . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . d41yioycvk . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . d41yioycvk .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . d41yioycvk . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
d41yioycvk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
d41yioycvk . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . d41yioycvk . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z2" ) ; sdiRegisterWksVariable ( rtDW . d41yioycvk . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace15" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . byipnpz0u1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2d3e040d-051b-4734-b3a3-cdeec186b351" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . byipnpz0u1 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . byipnpz0u1 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . byipnpz0u1 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . byipnpz0u1 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . byipnpz0u1 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
byipnpz0u1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
byipnpz0u1 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . byipnpz0u1 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x2" ) ; sdiRegisterWksVariable ( rtDW . byipnpz0u1 . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace16" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . do54evbx0n . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0f5f13e8-33e2-4293-a451-6c9374c4bef7" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . do54evbx0n . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . do54evbx0n . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . do54evbx0n . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . do54evbx0n .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . do54evbx0n . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
do54evbx0n . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
do54evbx0n . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . do54evbx0n . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y2" ) ; sdiRegisterWksVariable ( rtDW . do54evbx0n . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace17" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . a2bbryrbza . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "88ca31c7-1df9-45b6-a0c5-a0f164c98781" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . a2bbryrbza . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . a2bbryrbza . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . a2bbryrbza . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . a2bbryrbza .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . a2bbryrbza . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
a2bbryrbza . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
a2bbryrbza . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . a2bbryrbza . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z2" ) ; sdiRegisterWksVariable ( rtDW . a2bbryrbza . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace2" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . nvefxlsyrk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5a4bc67d-7260-465e-9d33-e599b84f8a19" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . nvefxlsyrk . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . nvefxlsyrk . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . nvefxlsyrk . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . nvefxlsyrk .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . nvefxlsyrk . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
nvefxlsyrk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
nvefxlsyrk . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . nvefxlsyrk . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z" ) ; sdiRegisterWksVariable ( rtDW . nvefxlsyrk . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace3" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ko23np5x5x . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f8ce2b76-1c1a-4fbe-bf39-4f252f1a5d7f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ko23np5x5x . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ko23np5x5x . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ko23np5x5x . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ko23np5x5x .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ko23np5x5x . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ko23np5x5x . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ko23np5x5x . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ko23np5x5x . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x" ) ; sdiRegisterWksVariable ( rtDW . ko23np5x5x . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace4" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . f30xrwjxf1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "eae5725f-fdc2-4c37-be51-ff384d775dd8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . f30xrwjxf1 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . f30xrwjxf1 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . f30xrwjxf1 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . f30xrwjxf1 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . f30xrwjxf1 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
f30xrwjxf1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
f30xrwjxf1 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . f30xrwjxf1 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y" ) ; sdiRegisterWksVariable ( rtDW . f30xrwjxf1 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace5" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . fz1gqd4d4r . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9bbbdade-16f3-4202-b488-2a7e446aa739" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . fz1gqd4d4r . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . fz1gqd4d4r . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . fz1gqd4d4r . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . fz1gqd4d4r .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . fz1gqd4d4r . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
fz1gqd4d4r . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
fz1gqd4d4r . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . fz1gqd4d4r . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z" ) ; sdiRegisterWksVariable ( rtDW . fz1gqd4d4r . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace6" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kqtugum2z4 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "80284ba1-030e-4a1a-92f1-790c4f4cbb10" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . kqtugum2z4 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . kqtugum2z4 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . kqtugum2z4 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kqtugum2z4 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . kqtugum2z4 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
kqtugum2z4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
kqtugum2z4 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . kqtugum2z4 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x1" ) ; sdiRegisterWksVariable ( rtDW . kqtugum2z4 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace7" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . lvqusllkau . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3e8eca69-e0de-45ec-ae3b-876f487ed554" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . lvqusllkau . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . lvqusllkau . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . lvqusllkau . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . lvqusllkau .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . lvqusllkau . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
lvqusllkau . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
lvqusllkau . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . lvqusllkau . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y1" ) ; sdiRegisterWksVariable ( rtDW . lvqusllkau . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace8" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . icta4fc2c5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ae360ff3-25e3-4d78-aac7-f792f2caecef" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . icta4fc2c5 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . icta4fc2c5 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . icta4fc2c5 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . icta4fc2c5 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . icta4fc2c5 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
icta4fc2c5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
icta4fc2c5 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . icta4fc2c5 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z1" ) ; sdiRegisterWksVariable ( rtDW . icta4fc2c5 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC2/To Workspace9" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iyfvfn4ifq . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9ce6c45b-1a00-4332-8564-f0e5efd4db9e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . iyfvfn4ifq . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . iyfvfn4ifq . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . iyfvfn4ifq . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . iyfvfn4ifq .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . iyfvfn4ifq . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
iyfvfn4ifq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
iyfvfn4ifq . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . iyfvfn4ifq . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x1" ) ; sdiRegisterWksVariable ( rtDW . iyfvfn4ifq . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/To Workspace12"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. olwfo1ugp5k . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3040e721-5705-4dbc-8cfb-80b3339c81b3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . olwfo1ugp5k . AQHandles , hDT , & srcInfo ) ; if ( rtDW . olwfo1ugp5k
. AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . olwfo1ugp5k . AQHandles
, "0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
olwfo1ugp5k . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . olwfo1ugp5k .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . olwfo1ugp5k . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( rtDW . olwfo1ugp5k . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . olwfo1ugp5k . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"t1" ) ; sdiRegisterWksVariable ( rtDW . olwfo1ugp5k . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/To Workspace12"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. olwfo1ugp5kj . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1878680b-78db-4436-b02e-cd3576357031" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . olwfo1ugp5kj . AQHandles , hDT , & srcInfo ) ; if ( rtDW .
olwfo1ugp5kj . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
olwfo1ugp5kj . AQHandles , "0.001" , 0.001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . olwfo1ugp5kj . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . olwfo1ugp5kj . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . olwfo1ugp5kj . AQHandles
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . olwfo1ugp5kj . AQHandles
, loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
rtDW . olwfo1ugp5kj . AQHandles ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel
( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "t" ) ; sdiRegisterWksVariable ( rtDW . olwfo1ugp5kj .
AQHandles , varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/To Workspace12"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. olwfo1ugp5kjg . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo
, rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"17c0eccd-d355-4e09-a901-85c02d5b5295" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . olwfo1ugp5kjg . AQHandles , hDT , & srcInfo ) ; if ( rtDW .
olwfo1ugp5kjg . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
olwfo1ugp5kjg . AQHandles , "0.001" , 0.001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . olwfo1ugp5kjg . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . olwfo1ugp5kjg . AQHandles , ssGetTaskTime ( rtS ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . olwfo1ugp5kjg .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . olwfo1ugp5kjg
. AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . olwfo1ugp5kjg . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"t1" ) ; sdiRegisterWksVariable ( rtDW . olwfo1ugp5kjg . AQHandles , varName
, "array" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T abpl12jq3p ; real_T arwumf12r4 ; real_T
atveyssuml ; real_T avf2p33qfm ; real_T behracxtlf ; real_T bme0js3mb1 ;
real_T buad00jdeo ; real_T c1dninelzu ; real_T cok4ejxbej ; real_T cvc3qiiluz
; real_T dex ; real_T dey ; real_T elzrnliqwb ; real_T enncaz0c1q ; real_T
euxsgtxqpn ; real_T fjlcmdci3l ; real_T g4uaoqjo4n ; real_T i1ea3jupzc ;
real_T i1ufpmajyw ; real_T i1ztwsdvd3 ; real_T i5fgahustc ; real_T irlw1idvda
; real_T lsvxvwh3jl ; real_T mfec3oh2ks ; real_T mwovkrpl0u ; real_T
mwqdtzovzw ; real_T oiu0kn45t0 ; real_T okml2cve45 ; real_T paq22jpowi ;
real_T ppkgyy52dz ; real_T prfb444tvb ; real_T * lastU ; if ( rtX .
lmp1jlws1q > rtP . Saturation_UpperSat ) { rtB . nkrg0rp1tj = rtP .
Saturation_UpperSat ; } else if ( rtX . lmp1jlws1q < rtP .
Saturation_LowerSat ) { rtB . nkrg0rp1tj = rtP . Saturation_LowerSat ; } else
{ rtB . nkrg0rp1tj = rtX . lmp1jlws1q ; } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { } if ( rtX . dvsvf5wljn > rtP . Saturation1_UpperSat ) { rtB . fn5ghhd2tl
= rtP . Saturation1_UpperSat ; } else if ( rtX . dvsvf5wljn < rtP .
Saturation1_LowerSat ) { rtB . fn5ghhd2tl = rtP . Saturation1_LowerSat ; }
else { rtB . fn5ghhd2tl = rtX . dvsvf5wljn ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . m4yvyw4wkm = rtX . pjq3y0vbqc ; if ( ( rtDW . d1w1ptz3pi >=
ssGetT ( rtS ) ) && ( rtDW . arilnfbogf >= ssGetT ( rtS ) ) ) { rtB .
gjlgsb5ud2 = 0.0 ; } else { buad00jdeo = rtDW . d1w1ptz3pi ; lastU = & rtDW .
eswhoiqpgv ; if ( rtDW . d1w1ptz3pi < rtDW . arilnfbogf ) { if ( rtDW .
arilnfbogf < ssGetT ( rtS ) ) { buad00jdeo = rtDW . arilnfbogf ; lastU = &
rtDW . kva0zescbq ; } } else if ( rtDW . d1w1ptz3pi >= ssGetT ( rtS ) ) {
buad00jdeo = rtDW . arilnfbogf ; lastU = & rtDW . kva0zescbq ; } rtB .
gjlgsb5ud2 = ( rtB . m4yvyw4wkm - * lastU ) / ( ssGetT ( rtS ) - buad00jdeo )
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ( rtDW . hgj1s3xddi >=
ssGetT ( rtS ) ) && ( rtDW . kdhn3disiv >= ssGetT ( rtS ) ) ) { rtB .
dovkmcjvrg = 0.0 ; } else { buad00jdeo = rtDW . hgj1s3xddi ; lastU = & rtDW .
lzpxk2xcrl ; if ( rtDW . hgj1s3xddi < rtDW . kdhn3disiv ) { if ( rtDW .
kdhn3disiv < ssGetT ( rtS ) ) { buad00jdeo = rtDW . kdhn3disiv ; lastU = &
rtDW . b350d4lkxg ; } } else if ( rtDW . hgj1s3xddi >= ssGetT ( rtS ) ) {
buad00jdeo = rtDW . kdhn3disiv ; lastU = & rtDW . b350d4lkxg ; } rtB .
dovkmcjvrg = ( rtP . Constant6_Value - * lastU ) / ( ssGetT ( rtS ) -
buad00jdeo ) ; } if ( ( rtDW . djd0izxljn >= ssGetT ( rtS ) ) && ( rtDW .
gp4qxs0jny >= ssGetT ( rtS ) ) ) { okml2cve45 = 0.0 ; } else { buad00jdeo =
rtDW . djd0izxljn ; lastU = & rtDW . b1tjfatcvu ; if ( rtDW . djd0izxljn <
rtDW . gp4qxs0jny ) { if ( rtDW . gp4qxs0jny < ssGetT ( rtS ) ) { buad00jdeo
= rtDW . gp4qxs0jny ; lastU = & rtDW . cjugb23rv3 ; } } else if ( rtDW .
djd0izxljn >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . gp4qxs0jny ; lastU = &
rtDW . cjugb23rv3 ; } okml2cve45 = ( rtB . dovkmcjvrg - * lastU ) / ( ssGetT
( rtS ) - buad00jdeo ) ; } rtB . dhaayoyjqs = rtP .
Constant6_Value_ji4ih5grvx + rtX . muultjrzks ; rtB . fqvyzg1ikz = rtP .
Constant1_Value_fgyxvvitry + rtX . l2m5ltsubp ; rtB . my2qvxq4vi = rtB .
dhaayoyjqs - rtB . fqvyzg1ikz ; rtB . gw3i35j4jt = rtX . oqbdmgd0ck ; rtB .
gmm2zbtxb5 = rtX . nw0blrtueg ; dex = ( rtB . gw3i35j4jt - rtB . gmm2zbtxb5 )
- rtB . dovkmcjvrg ; okml2cve45 = ( okml2cve45 - dex ) - muDoubleScalarSign (
( rtB . my2qvxq4vi - rtP . Constant6_Value ) + dex ) * 0.2 ; if ( rtX .
b5w4zdghl5 > rtP . Saturation2_UpperSat ) { rtB . foedhs1o3a = rtP .
Saturation2_UpperSat ; } else if ( rtX . b5w4zdghl5 < rtP .
Saturation2_LowerSat ) { rtB . foedhs1o3a = rtP . Saturation2_LowerSat ; }
else { rtB . foedhs1o3a = rtX . b5w4zdghl5 ; } behracxtlf = muDoubleScalarSin
( rtB . foedhs1o3a ) ; if ( ( rtDW . fd0y4m0axt >= ssGetT ( rtS ) ) && ( rtDW
. dv0pjwza2t >= ssGetT ( rtS ) ) ) { rtB . fl25pm05gl = 0.0 ; } else {
buad00jdeo = rtDW . fd0y4m0axt ; lastU = & rtDW . dtzaql1t41 ; if ( rtDW .
fd0y4m0axt < rtDW . dv0pjwza2t ) { if ( rtDW . dv0pjwza2t < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . dv0pjwza2t ; lastU = & rtDW . hag2tmzxq4 ; } } else if
( rtDW . fd0y4m0axt >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . dv0pjwza2t ;
lastU = & rtDW . hag2tmzxq4 ; } rtB . fl25pm05gl = ( rtP . Constant7_Value -
* lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } if ( ( rtDW . azzm52nqwi >=
ssGetT ( rtS ) ) && ( rtDW . oyrlkmn3mo >= ssGetT ( rtS ) ) ) { dex = 0.0 ; }
else { buad00jdeo = rtDW . azzm52nqwi ; lastU = & rtDW . fkjod2apq5 ; if (
rtDW . azzm52nqwi < rtDW . oyrlkmn3mo ) { if ( rtDW . oyrlkmn3mo < ssGetT (
rtS ) ) { buad00jdeo = rtDW . oyrlkmn3mo ; lastU = & rtDW . gtrm0fav21 ; } }
else if ( rtDW . azzm52nqwi >= ssGetT ( rtS ) ) { buad00jdeo = rtDW .
oyrlkmn3mo ; lastU = & rtDW . gtrm0fav21 ; } dex = ( rtB . fl25pm05gl - *
lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } rtB . dhmwksclha = rtP .
Constant1_Value_anleszyjns + rtX . d1vv0rjnt2 ; rtB . noumlvysto = rtX .
l3pq51pl0v ; rtB . mkdgvwendj = rtB . dhmwksclha - rtB . noumlvysto ; rtB .
h1tqpswb1i = rtX . derj2qzpjf ; rtB . ejvulga4w5 = rtX . ig1kllb5t1 ; dey = (
rtB . h1tqpswb1i - rtB . ejvulga4w5 ) - rtB . fl25pm05gl ; dey = ( dex - dey
) - muDoubleScalarSign ( ( rtB . mkdgvwendj - rtP . Constant7_Value ) + dey )
* 0.2 ; g4uaoqjo4n = muDoubleScalarCos ( rtB . foedhs1o3a ) ; rtB .
hzqxysogc2 = rtX . m33tqgudkc ; dex = rtP . Constant5_Value - rtB .
hzqxysogc2 ; rtB . p5kow5ymrx = ( rtP . PIDController2_D * dex - rtX .
cxw3eeosyw ) * rtP . PIDController2_N ; rtB . hz1yuulqw0 = ( rtP .
PIDController2_P * dex + rtX . ou0e404rmu ) + rtB . p5kow5ymrx ; if ( rtX .
ev5tiefchl > rtP . Saturation_UpperSat_ha4sihnonx ) { rtB . gvk0o2svme = rtP
. Saturation_UpperSat_ha4sihnonx ; } else if ( rtX . ev5tiefchl < rtP .
Saturation_LowerSat_hvr4bzptww ) { rtB . gvk0o2svme = rtP .
Saturation_LowerSat_hvr4bzptww ; } else { rtB . gvk0o2svme = rtX . ev5tiefchl
; } if ( rtX . ifchgpw41h > rtP . Saturation1_UpperSat_hb4te1hlrm ) { rtB .
cgbastyn2k = rtP . Saturation1_UpperSat_hb4te1hlrm ; } else if ( rtX .
ifchgpw41h < rtP . Saturation1_LowerSat_bckpxbzwol ) { rtB . cgbastyn2k = rtP
. Saturation1_LowerSat_bckpxbzwol ; } else { rtB . cgbastyn2k = rtX .
ifchgpw41h ; } bme0js3mb1 = ( rtB . hz1yuulqw0 + rtP . _g_itsbn0zy4d ) * rtP
. _m_ezmi533ezn / ( muDoubleScalarCos ( rtB . gvk0o2svme ) *
muDoubleScalarCos ( rtB . cgbastyn2k ) ) ; mwovkrpl0u = ( okml2cve45 *
behracxtlf - dey * g4uaoqjo4n ) * rtP . fantheta1_m / bme0js3mb1 ; if (
mwovkrpl0u > rtP . Saturation_UpperSat_hwp4xnffla ) { mwovkrpl0u = rtP .
Saturation_UpperSat_hwp4xnffla ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_psalob5khl ) { mwovkrpl0u = rtP .
Saturation_LowerSat_psalob5khl ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u = 1.0
; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB . p13raq01zn
= muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} mwovkrpl0u = ( okml2cve45 * g4uaoqjo4n + dey * behracxtlf ) * rtP .
fantheta1_m / ( bme0js3mb1 * muDoubleScalarCos ( rtB . gvk0o2svme ) ) ; if (
mwovkrpl0u > rtP . Saturation1_UpperSat_pb2v3x1tuf ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_pb2v3x1tuf ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_egd2dbjq3l ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_egd2dbjq3l ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
k2emhbdmfl = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . lmuwp5via1 = rtX . nwkcijvubd ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } if ( rtX . lua2wyjxlz > rtP . Saturation2_UpperSat_eydgfhthvi )
{ rtB . ht4btdihlj = rtP . Saturation2_UpperSat_eydgfhthvi ; } else if ( rtX
. lua2wyjxlz < rtP . Saturation2_LowerSat_pvud2psr4g ) { rtB . ht4btdihlj =
rtP . Saturation2_LowerSat_pvud2psr4g ; } else { rtB . ht4btdihlj = rtX .
lua2wyjxlz ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . m3cwptyuss =
muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( rtX . hoe45xg5l1 > rtP .
Saturation_UpperSat_n5hle3tqlr ) { rtB . aasmc5aubg = rtP .
Saturation_UpperSat_n5hle3tqlr ; } else if ( rtX . hoe45xg5l1 < rtP .
Saturation_LowerSat_a0f33ks5st ) { rtB . aasmc5aubg = rtP .
Saturation_LowerSat_a0f33ks5st ; } else { rtB . aasmc5aubg = rtX . hoe45xg5l1
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( rtX . pvts5x1qi0 > rtP .
Saturation1_UpperSat_jnqdbyjo0h ) { rtB . onwlyvksy1 = rtP .
Saturation1_UpperSat_jnqdbyjo0h ; } else if ( rtX . pvts5x1qi0 < rtP .
Saturation1_LowerSat_nxi22dnqkb ) { rtB . onwlyvksy1 = rtP .
Saturation1_LowerSat_nxi22dnqkb ; } else { rtB . onwlyvksy1 = rtX .
pvts5x1qi0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . hgrck5k2qn =
rtX . dfdozw0qju ; if ( ( rtDW . orwknhwt4c >= ssGetT ( rtS ) ) && ( rtDW .
ciurdviajr >= ssGetT ( rtS ) ) ) { rtB . cvnxsgbslf = 0.0 ; } else {
buad00jdeo = rtDW . orwknhwt4c ; lastU = & rtDW . nxu23jmfq3 ; if ( rtDW .
orwknhwt4c < rtDW . ciurdviajr ) { if ( rtDW . ciurdviajr < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . ciurdviajr ; lastU = & rtDW . lqnqkoaiiq ; } } else if
( rtDW . orwknhwt4c >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . ciurdviajr ;
lastU = & rtDW . lqnqkoaiiq ; } rtB . cvnxsgbslf = ( rtB . hgrck5k2qn - *
lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . akqkcnnrg1 = rtP . Constant6_Value_p3q4n4gg5p + rtX .
pwzhugspii ; rtB . a2bgnwhqmj = rtP . Constant1_Value_h3yw0poswh + rtX .
bw5bxl3emz ; rtB . nsotti14ar = rtB . akqkcnnrg1 - rtB . a2bgnwhqmj ; rtB .
dew2sklnjf = rtP . Constant16_Value - rtB . nsotti14ar ; rtB . mjx4alvhfz = (
rtP . PIDController_D * rtB . dew2sklnjf - rtX . al3wmpyaa1 ) * rtP .
PIDController_N ; rtB . gtsyjuxrau = ( rtP . PIDController_P * rtB .
dew2sklnjf + rtX . la0kq4504w ) + rtB . mjx4alvhfz ; if ( rtX . nt03o0lbau >
rtP . Saturation2_UpperSat_gp5eczxqky ) { rtB . dagpv2viuj = rtP .
Saturation2_UpperSat_gp5eczxqky ; } else if ( rtX . nt03o0lbau < rtP .
Saturation2_LowerSat_hg04d0ium1 ) { rtB . dagpv2viuj = rtP .
Saturation2_LowerSat_hg04d0ium1 ; } else { rtB . dagpv2viuj = rtX .
nt03o0lbau ; } behracxtlf = muDoubleScalarSin ( rtB . dagpv2viuj ) ; rtB .
gf15uxwtsm = rtP . Constant1_Value_oad0ewdkxh + rtX . mjgjmcyafa ; rtB .
olropwoagx = rtX . ju3cx4z2kg ; rtB . fyllvvykfx = rtB . gf15uxwtsm - rtB .
olropwoagx ; g4uaoqjo4n = rtP . Constant17_Value - rtB . fyllvvykfx ; rtB .
adb2qyporg = ( rtP . PIDController1_D * g4uaoqjo4n - rtX . h5bds2funr ) * rtP
. PIDController1_N ; dey = ( rtP . PIDController1_P * g4uaoqjo4n + rtX .
mxt02um1sk ) + rtB . adb2qyporg ; fjlcmdci3l = muDoubleScalarCos ( rtB .
dagpv2viuj ) ; i1ztwsdvd3 = ssGetT ( rtS ) ; okml2cve45 = rtP . Gain2_Gain *
i1ztwsdvd3 ; rtB . eod1xw3jx5 = rtX . obu1t4d3fm ; rtB . inino4sn3n =
okml2cve45 - rtB . eod1xw3jx5 ; rtB . l4cyjj3vsn = ( rtP .
PIDController2_D_kj3bnjvbc0 * rtB . inino4sn3n - rtX . cgymruyhg4 ) * rtP .
PIDController2_N_akbmimslr4 ; rtB . cdjr00kipb = ( rtP .
PIDController2_P_j2giwegaza * rtB . inino4sn3n + rtX . dxslzurzcr ) + rtB .
l4cyjj3vsn ; if ( rtX . mfkdlg3wcn > rtP . Saturation_UpperSat_iukxjbe5ft ) {
rtB . mxf343uhx5 = rtP . Saturation_UpperSat_iukxjbe5ft ; } else if ( rtX .
mfkdlg3wcn < rtP . Saturation_LowerSat_ilaytmc202 ) { rtB . mxf343uhx5 = rtP
. Saturation_LowerSat_ilaytmc202 ; } else { rtB . mxf343uhx5 = rtX .
mfkdlg3wcn ; } if ( rtX . mhgsfskkwq > rtP . Saturation1_UpperSat_pttmxhpea2
) { rtB . hfuamunkkc = rtP . Saturation1_UpperSat_pttmxhpea2 ; } else if (
rtX . mhgsfskkwq < rtP . Saturation1_LowerSat_fobtnnimlk ) { rtB . hfuamunkkc
= rtP . Saturation1_LowerSat_fobtnnimlk ; } else { rtB . hfuamunkkc = rtX .
mhgsfskkwq ; } paq22jpowi = ( rtB . cdjr00kipb + rtP . uPID_g ) * rtP .
uPID_m / ( muDoubleScalarCos ( rtB . mxf343uhx5 ) * muDoubleScalarCos ( rtB .
hfuamunkkc ) ) ; mwovkrpl0u = ( rtB . gtsyjuxrau * behracxtlf - dey *
fjlcmdci3l ) * rtP . fantheta3_m / paq22jpowi ; if ( mwovkrpl0u > rtP .
Saturation_UpperSat_gvwpirmxca ) { mwovkrpl0u = rtP .
Saturation_UpperSat_gvwpirmxca ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_ndrcqwixdd ) { mwovkrpl0u = rtP .
Saturation_LowerSat_ndrcqwixdd ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u = 1.0
; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB . ktg1ni3yrr
= muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} mwovkrpl0u = ( rtB . gtsyjuxrau * fjlcmdci3l + dey * behracxtlf ) * rtP .
fantheta3_m / ( paq22jpowi * muDoubleScalarCos ( rtB . mxf343uhx5 ) ) ; if (
mwovkrpl0u > rtP . Saturation1_UpperSat_kch2yvd5hq ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_kch2yvd5hq ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_g2baopq4vx ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_g2baopq4vx ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
emq054pzbi = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . nzubxg3nw3 = rtX . gzcp4vv3sa ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } if ( rtX . h0r5nq1np1 > rtP . Saturation2_UpperSat_k3zxirjbnn )
{ rtB . bbkw4ewb4z = rtP . Saturation2_UpperSat_k3zxirjbnn ; } else if ( rtX
. h0r5nq1np1 < rtP . Saturation2_LowerSat_n1oahitiww ) { rtB . bbkw4ewb4z =
rtP . Saturation2_LowerSat_n1oahitiww ; } else { rtB . bbkw4ewb4z = rtX .
h0r5nq1np1 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . c4cweg1v0h =
rtX . ozr1b5mdiv ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . gogffxxbnf
= muDoubleScalarSin ( rtP . SineWave1_Freq * ssGetTaskTime ( rtS , 0 ) + rtP
. SineWave1_Phase ) * rtP . SineWave1_Amp + rtP . SineWave1_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . mx2cm2pvr4 = rtX . k2dc21zk5j ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . i4qo4t3inx = muDoubleScalarSin (
rtP . SineWave3_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave3_Phase ) *
rtP . SineWave3_Amp + rtP . SineWave3_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { } rtB . co21hzofmv = muDoubleScalarSin ( rtP . SineWave4_Freq *
ssGetTaskTime ( rtS , 0 ) + rtP . SineWave4_Phase ) * rtP . SineWave4_Amp +
rtP . SineWave4_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } dey = rtP .
Gain3_Gain * i1ztwsdvd3 ; rtB . ifpr5jmyf1 = dey - rtB . a2bgnwhqmj ; rtB .
ohwv2asfpz = ( rtP . PIDController_D_d15uoiwa50 * rtB . ifpr5jmyf1 - rtX .
dkzvp0zlco ) * rtP . PIDController_N_fj1olopwer ; rtB . kllvqw0sro = ( rtP .
PIDController_P_gbmiz0skct * rtB . ifpr5jmyf1 + rtX . czddacw2q5 ) + rtB .
ohwv2asfpz ; behracxtlf = muDoubleScalarSin ( rtB . bbkw4ewb4z ) ; fjlcmdci3l
= ( ( muDoubleScalarSin ( rtP . SineWave5_Freq * ssGetTaskTime ( rtS , 0 ) +
rtP . SineWave5_Phase ) * rtP . SineWave5_Amp + rtP . SineWave5_Bias ) + dey
) - rtB . olropwoagx ; rtB . cb4fxdwmq5 = ( rtP . PIDController1_D_ec5g1qhnwo
* fjlcmdci3l - rtX . lwywyqed5i ) * rtP . PIDController1_N_n0m4mdlpuq ; dey =
( rtP . PIDController1_P_aq34folxbs * fjlcmdci3l + rtX . j3b1dd4rrz ) + rtB .
cb4fxdwmq5 ; i1ztwsdvd3 = muDoubleScalarCos ( rtB . bbkw4ewb4z ) ; rtB .
lpbzqjcprk = okml2cve45 - rtB . hgrck5k2qn ; rtB . nmk23uk2rt = ( rtP .
PIDController2_D_nscrao354l * rtB . lpbzqjcprk - rtX . o1gw4caqxa ) * rtP .
PIDController2_N_fv1xb02dkc ; rtB . h2xdtfiq14 = ( rtP .
PIDController2_P_ol1hffxhtt * rtB . lpbzqjcprk + rtX . b5odf1vso5 ) + rtB .
nmk23uk2rt ; okml2cve45 = ( rtB . h2xdtfiq14 + rtP . u_g ) * rtP . u_m / (
muDoubleScalarCos ( rtB . aasmc5aubg ) * muDoubleScalarCos ( rtB . onwlyvksy1
) ) ; mwovkrpl0u = ( rtB . kllvqw0sro * behracxtlf - dey * i1ztwsdvd3 ) * rtP
. fantheta2_m / okml2cve45 ; if ( mwovkrpl0u > rtP .
Saturation_UpperSat_pub1swf5to ) { rtB . fhgdzl1ux5 = rtP .
Saturation_UpperSat_pub1swf5to ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_f1yfb1tnps ) { rtB . fhgdzl1ux5 = rtP .
Saturation_LowerSat_f1yfb1tnps ; } else { rtB . fhgdzl1ux5 = mwovkrpl0u ; }
if ( rtB . fhgdzl1ux5 > 1.0 ) { avf2p33qfm = 1.0 ; } else if ( rtB .
fhgdzl1ux5 < - 1.0 ) { avf2p33qfm = - 1.0 ; } else { avf2p33qfm = rtB .
fhgdzl1ux5 ; } rtB . dtzbyd4h2j = muDoubleScalarAsin ( avf2p33qfm ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } mwovkrpl0u = ( rtB . kllvqw0sro *
i1ztwsdvd3 + dey * behracxtlf ) * rtP . fantheta2_m / ( okml2cve45 *
muDoubleScalarCos ( rtB . aasmc5aubg ) ) ; if ( mwovkrpl0u > rtP .
Saturation1_UpperSat_a1b0m21fzl ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_a1b0m21fzl ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_oipcr5rbvx ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_oipcr5rbvx ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
b4yzfc1ead = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } if ( ( rtDW . jznxtwrdhr >= ssGetT ( rtS ) ) && ( rtDW .
ns4o4be1dk >= ssGetT ( rtS ) ) ) { rtB . mlfhsuf1dc = 0.0 ; } else {
buad00jdeo = rtDW . jznxtwrdhr ; lastU = & rtDW . plk4jigknp ; if ( rtDW .
jznxtwrdhr < rtDW . ns4o4be1dk ) { if ( rtDW . ns4o4be1dk < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . ns4o4be1dk ; lastU = & rtDW . is4uwefdli ; } } else if
( rtDW . jznxtwrdhr >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . ns4o4be1dk ;
lastU = & rtDW . is4uwefdli ; } rtB . mlfhsuf1dc = ( rtB . a2bgnwhqmj - *
lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( ( rtDW . jdb2xhicuf >= ssGetT ( rtS ) ) && ( rtDW . nfmtckz5ig
>= ssGetT ( rtS ) ) ) { rtB . ecrx5ucekw = 0.0 ; } else { buad00jdeo = rtDW .
jdb2xhicuf ; lastU = & rtDW . eiahtdjei5 ; if ( rtDW . jdb2xhicuf < rtDW .
nfmtckz5ig ) { if ( rtDW . nfmtckz5ig < ssGetT ( rtS ) ) { buad00jdeo = rtDW
. nfmtckz5ig ; lastU = & rtDW . oe5wqb2qpx ; } } else if ( rtDW . jdb2xhicuf
>= ssGetT ( rtS ) ) { buad00jdeo = rtDW . nfmtckz5ig ; lastU = & rtDW .
oe5wqb2qpx ; } rtB . ecrx5ucekw = ( rtB . olropwoagx - * lastU ) / ( ssGetT (
rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB .
jw5qymyu2m = rtP . Constant6_Value_mf2wjkcoe1 + rtX . gzyfptfl3t ; rtB .
fqteuw4yxc = rtP . Constant1_Value_eatui1s5t2 + rtX . m5y0b1f4ds ; rtB .
blzrr2dl3p = rtB . jw5qymyu2m - rtB . fqteuw4yxc ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . kpbyqxbm3j = rtP . Constant1_Value_hif2vfulzb + rtX .
li3l2cwoj1 ; rtB . erks3kjsiv = rtX . lbblib2jj3 ; rtB . kba1gnwoqz = rtB .
kpbyqxbm3j - rtB . erks3kjsiv ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if (
rtX . ixqfbvvrqq > rtP . Saturation_UpperSat_o3tbzyjvoe ) { rtB . lt1w2y2www
= rtP . Saturation_UpperSat_o3tbzyjvoe ; } else if ( rtX . ixqfbvvrqq < rtP .
Saturation_LowerSat_d2hlbm4xvg ) { rtB . lt1w2y2www = rtP .
Saturation_LowerSat_d2hlbm4xvg ; } else { rtB . lt1w2y2www = rtX . ixqfbvvrqq
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( rtX . irzbjopfdt > rtP .
Saturation1_UpperSat_is1gig25ew ) { rtB . pkkav2dgfu = rtP .
Saturation1_UpperSat_is1gig25ew ; } else if ( rtX . irzbjopfdt < rtP .
Saturation1_LowerSat_mk2outamb2 ) { rtB . pkkav2dgfu = rtP .
Saturation1_LowerSat_mk2outamb2 ; } else { rtB . pkkav2dgfu = rtX .
irzbjopfdt ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . a2sufne1el =
rtX . e2ng2yt2cq ; if ( ( rtDW . hnlz54wdxg >= ssGetT ( rtS ) ) && ( rtDW .
hi3ccp4tdk >= ssGetT ( rtS ) ) ) { rtB . ffw4fd21fw = 0.0 ; } else {
buad00jdeo = rtDW . hnlz54wdxg ; lastU = & rtDW . biumseuk2t ; if ( rtDW .
hnlz54wdxg < rtDW . hi3ccp4tdk ) { if ( rtDW . hi3ccp4tdk < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . hi3ccp4tdk ; lastU = & rtDW . djewj0wij2 ; } } else if
( rtDW . hnlz54wdxg >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . hi3ccp4tdk ;
lastU = & rtDW . djewj0wij2 ; } rtB . ffw4fd21fw = ( rtB . a2sufne1el - *
lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . burl4etjnv = rtX . ngyoiwrxa1 ; rtB . coaqjxrgps = rtX .
frk2bafzxw ; if ( ( rtDW . px2bsuejyw >= ssGetT ( rtS ) ) && ( rtDW .
mzfqs1evtc >= ssGetT ( rtS ) ) ) { rtB . c15m2hah5x = 0.0 ; } else {
buad00jdeo = rtDW . px2bsuejyw ; lastU = & rtDW . b4ma5udaih ; if ( rtDW .
px2bsuejyw < rtDW . mzfqs1evtc ) { if ( rtDW . mzfqs1evtc < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . mzfqs1evtc ; lastU = & rtDW . kjc3mzi05m ; } } else if
( rtDW . px2bsuejyw >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . mzfqs1evtc ;
lastU = & rtDW . kjc3mzi05m ; } rtB . c15m2hah5x = ( rtP . Constant24_Value -
* lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } behracxtlf = ( ( rtB .
burl4etjnv - rtB . coaqjxrgps ) - rtB . c15m2hah5x ) * rtP . Gain1_Gain ; dey
= ( rtB . blzrr2dl3p - rtP . Constant24_Value ) * rtP . Gain4_Gain +
behracxtlf ; c1dninelzu = muDoubleScalarSign ( dey ) ; abpl12jq3p =
muDoubleScalarAbs ( dey ) ; if ( ( rtDW . hfcw5k2d4i >= ssGetT ( rtS ) ) && (
rtDW . pzqvd5drtk >= ssGetT ( rtS ) ) ) { dey = 0.0 ; } else { buad00jdeo =
rtDW . hfcw5k2d4i ; lastU = & rtDW . dds1lvrxbl ; if ( rtDW . hfcw5k2d4i <
rtDW . pzqvd5drtk ) { if ( rtDW . pzqvd5drtk < ssGetT ( rtS ) ) { buad00jdeo
= rtDW . pzqvd5drtk ; lastU = & rtDW . bex0xz0uof ; } } else if ( rtDW .
hfcw5k2d4i >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . pzqvd5drtk ; lastU = &
rtDW . bex0xz0uof ; } dey = ( rtB . c15m2hah5x - * lastU ) / ( ssGetT ( rtS )
- buad00jdeo ) ; } behracxtlf = ( ( c1dninelzu * muDoubleScalarPower (
abpl12jq3p , rtB . gx5fpzjouv ) * rtP . _Gain + rtX . ewln0r2fz3 ) + rtP .
u_Gain * behracxtlf ) + dey ; if ( rtX . f3kt0qvhxp > rtP .
Saturation2_UpperSat_ojz25b4xbk ) { rtB . m41hci1djw = rtP .
Saturation2_UpperSat_ojz25b4xbk ; } else if ( rtX . f3kt0qvhxp < rtP .
Saturation2_LowerSat_niv5szdlmh ) { rtB . m41hci1djw = rtP .
Saturation2_LowerSat_niv5szdlmh ; } else { rtB . m41hci1djw = rtX .
f3kt0qvhxp ; } i1ztwsdvd3 = muDoubleScalarSin ( rtB . m41hci1djw ) ; rtB .
mdf4wtsctx = rtX . pviwr55jyx ; rtB . osuw2n2p5c = rtX . ctyxh2raia ; if ( (
rtDW . jh2zw2mkrg >= ssGetT ( rtS ) ) && ( rtDW . mqewdswekk >= ssGetT ( rtS
) ) ) { rtB . okts5kdm5o = 0.0 ; } else { buad00jdeo = rtDW . jh2zw2mkrg ;
lastU = & rtDW . nls23awnpg ; if ( rtDW . jh2zw2mkrg < rtDW . mqewdswekk ) {
if ( rtDW . mqewdswekk < ssGetT ( rtS ) ) { buad00jdeo = rtDW . mqewdswekk ;
lastU = & rtDW . hl3xxenjxg ; } } else if ( rtDW . jh2zw2mkrg >= ssGetT ( rtS
) ) { buad00jdeo = rtDW . mqewdswekk ; lastU = & rtDW . hl3xxenjxg ; } rtB .
okts5kdm5o = ( rtP . Constant25_Value - * lastU ) / ( ssGetT ( rtS ) -
buad00jdeo ) ; } dey = ( ( rtB . mdf4wtsctx - rtB . osuw2n2p5c ) - rtB .
okts5kdm5o ) * rtP . Gain2_Gain_onnoorg0uw ; i1ea3jupzc = ( rtB . kba1gnwoqz
- rtP . Constant25_Value ) * rtP . Gain5_Gain + dey ; irlw1idvda =
muDoubleScalarSign ( i1ea3jupzc ) ; cvc3qiiluz = muDoubleScalarAbs (
i1ea3jupzc ) ; if ( ( rtDW . ix3yptllqh >= ssGetT ( rtS ) ) && ( rtDW .
efzvv4xbrg >= ssGetT ( rtS ) ) ) { i1ea3jupzc = 0.0 ; } else { buad00jdeo =
rtDW . ix3yptllqh ; lastU = & rtDW . mgirnwhnpt ; if ( rtDW . ix3yptllqh <
rtDW . efzvv4xbrg ) { if ( rtDW . efzvv4xbrg < ssGetT ( rtS ) ) { buad00jdeo
= rtDW . efzvv4xbrg ; lastU = & rtDW . nedh5efh1d ; } } else if ( rtDW .
ix3yptllqh >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . efzvv4xbrg ; lastU = &
rtDW . nedh5efh1d ; } i1ea3jupzc = ( rtB . okts5kdm5o - * lastU ) / ( ssGetT
( rtS ) - buad00jdeo ) ; } i1ea3jupzc += ( irlw1idvda * muDoubleScalarPower (
cvc3qiiluz , rtB . kcyjdevu1q ) * rtP . u_Gain_henc4ux5q3 + rtX . d1dqkqdeq2
) + rtP . u_Gain_gdlekwegic * dey ; buad00jdeo = muDoubleScalarCos ( rtB .
m41hci1djw ) ; rtB . mk4pik4iwf = rtX . ipbbbqqcmt ; dey = rtP .
Constant23_Value - rtB . mk4pik4iwf ; rtB . c3brafoy2k = ( rtP .
PIDController2_D_ivk4ytgd1g * dey - rtX . lhu2d3f2ic ) * rtP .
PIDController2_N_b2cjespzjz ; rtB . ouzmvhy1gu = ( rtP .
PIDController2_P_owpotzqpw4 * dey + rtX . lu2ujrk2ss ) + rtB . c3brafoy2k ;
if ( rtX . bvjygku5w3 > rtP . Saturation_UpperSat_dxx3tvtltv ) { rtB .
pq3as3h2ng = rtP . Saturation_UpperSat_dxx3tvtltv ; } else if ( rtX .
bvjygku5w3 < rtP . Saturation_LowerSat_gbjicm5kkx ) { rtB . pq3as3h2ng = rtP
. Saturation_LowerSat_gbjicm5kkx ; } else { rtB . pq3as3h2ng = rtX .
bvjygku5w3 ; } if ( rtX . awijrgo5wm > rtP . Saturation1_UpperSat_grcsac20ke
) { rtB . g4oiivzehy = rtP . Saturation1_UpperSat_grcsac20ke ; } else if (
rtX . awijrgo5wm < rtP . Saturation1_LowerSat_o23ypqxe3f ) { rtB . g4oiivzehy
= rtP . Saturation1_LowerSat_o23ypqxe3f ; } else { rtB . g4oiivzehy = rtX .
awijrgo5wm ; } enncaz0c1q = ( rtB . ouzmvhy1gu + rtP . u_g_mh2axwg4d0 ) * rtP
. u_m_koewvqbti3 / ( muDoubleScalarCos ( rtB . pq3as3h2ng ) *
muDoubleScalarCos ( rtB . g4oiivzehy ) ) ; mwovkrpl0u = ( behracxtlf *
i1ztwsdvd3 - i1ea3jupzc * buad00jdeo ) * rtP . fantheta5_m / enncaz0c1q ; if
( mwovkrpl0u > rtP . Saturation_UpperSat_iko2p2vwq2 ) { mwovkrpl0u = rtP .
Saturation_UpperSat_iko2p2vwq2 ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_ma15asz4j4 ) { mwovkrpl0u = rtP .
Saturation_LowerSat_ma15asz4j4 ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u = 1.0
; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB . l3ijkqzkh1
= muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} mwovkrpl0u = ( behracxtlf * buad00jdeo + i1ea3jupzc * i1ztwsdvd3 ) * rtP .
fantheta5_m / ( enncaz0c1q * muDoubleScalarCos ( rtB . pq3as3h2ng ) ) ; if (
mwovkrpl0u > rtP . Saturation1_UpperSat_mjhh3ki3pa ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_mjhh3ki3pa ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_bzmx0c2jc5 ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_bzmx0c2jc5 ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
d4vwxf2jbr = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } i1ea3jupzc = ssGetT ( rtS ) ; i1ztwsdvd3 = rtP .
Gain1_Gain_an1pdnuefr * i1ea3jupzc ; rtB . a42b4qlkos = i1ztwsdvd3 - rtB .
fqvyzg1ikz ; rtB . p3gscgvcwg = ( rtP . PIDController_D_os4cpveuwu * rtB .
a42b4qlkos - rtX . l4w55j32bm ) * rtP . PIDController_N_gwi2qcwymh ; rtB .
ajzh3ehner = ( rtP . PIDController_P_ju5f4j1frg * rtB . a42b4qlkos + rtX .
huag3gyiah ) + rtB . p3gscgvcwg ; behracxtlf = muDoubleScalarSin ( rtB .
ht4btdihlj ) ; i1ztwsdvd3 = ( ( muDoubleScalarSin ( rtP . SineWave2_Freq *
ssGetTaskTime ( rtS , 0 ) + rtP . SineWave2_Phase ) * rtP . SineWave2_Amp +
rtP . SineWave2_Bias ) + i1ztwsdvd3 ) - rtB . noumlvysto ; rtB . a5pbo201xh =
( rtP . PIDController1_D_gdgmituo3o * i1ztwsdvd3 - rtX . etb0rkmw41 ) * rtP .
PIDController1_N_mhmwfw4hux ; buad00jdeo = ( rtP .
PIDController1_P_c4vjhd1ziq * i1ztwsdvd3 + rtX . gywjrxv55s ) + rtB .
a5pbo201xh ; prfb444tvb = muDoubleScalarCos ( rtB . ht4btdihlj ) ; rtB .
hegyf5vyzy = rtP . Gain_Gain * i1ea3jupzc - rtB . m4yvyw4wkm ; rtB .
e3ouvrfmhd = ( rtP . PIDController2_D_dfmo4lhky4 * rtB . hegyf5vyzy - rtX .
lmhoguyign ) * rtP . PIDController2_N_mpslhyucvp ; rtB . kokm05sank = ( rtP .
PIDController2_P_dlj4ikvxns * rtB . hegyf5vyzy + rtX . j21i42iaxm ) + rtB .
e3ouvrfmhd ; i1ea3jupzc = ( rtB . kokm05sank + rtP . _g ) * rtP .
_m_acbzxt22m1 / ( muDoubleScalarCos ( rtB . nkrg0rp1tj ) * muDoubleScalarCos
( rtB . fn5ghhd2tl ) ) ; mwovkrpl0u = ( rtB . ajzh3ehner * behracxtlf -
buad00jdeo * prfb444tvb ) * rtP . fantheta_m / i1ea3jupzc ; if ( mwovkrpl0u >
rtP . Saturation_UpperSat_ip5m4fy0ed ) { rtB . nedsdxrz0d = rtP .
Saturation_UpperSat_ip5m4fy0ed ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_j5wcuf0dgd ) { rtB . nedsdxrz0d = rtP .
Saturation_LowerSat_j5wcuf0dgd ; } else { rtB . nedsdxrz0d = mwovkrpl0u ; }
if ( rtB . nedsdxrz0d > 1.0 ) { avf2p33qfm = 1.0 ; } else if ( rtB .
nedsdxrz0d < - 1.0 ) { avf2p33qfm = - 1.0 ; } else { avf2p33qfm = rtB .
nedsdxrz0d ; } rtB . grop1jv2fl = muDoubleScalarAsin ( avf2p33qfm ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . a0nxandghd = rtX . kfxedfgmub ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( rtX . jdy4bhdf2w > rtP .
Saturation2_UpperSat_bxhv4xowlg ) { rtB . pvkiijd32j = rtP .
Saturation2_UpperSat_bxhv4xowlg ; } else if ( rtX . jdy4bhdf2w < rtP .
Saturation2_LowerSat_omipxfavcd ) { rtB . pvkiijd32j = rtP .
Saturation2_LowerSat_omipxfavcd ; } else { rtB . pvkiijd32j = rtX .
jdy4bhdf2w ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } mwovkrpl0u = ( rtB .
ajzh3ehner * prfb444tvb + buad00jdeo * behracxtlf ) * rtP . fantheta_m / (
i1ea3jupzc * muDoubleScalarCos ( rtB . nkrg0rp1tj ) ) ; if ( mwovkrpl0u > rtP
. Saturation1_UpperSat_ilexu3zjfy ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_ilexu3zjfy ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_bg51c0dlft ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_bg51c0dlft ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
dhlf45dvej = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . gmiml41ahh = muDoubleScalarSin ( rtP . SineWave6_Freq *
ssGetTaskTime ( rtS , 0 ) + rtP . SineWave6_Phase ) * rtP . SineWave6_Amp +
rtP . SineWave6_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB .
bprns2hfy5 = muDoubleScalarSin ( rtP . SineWave7_Freq * ssGetTaskTime ( rtS ,
0 ) + rtP . SineWave7_Phase ) * rtP . SineWave7_Amp + rtP . SineWave7_Bias ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } behracxtlf = ssGetT ( rtS ) ;
prfb444tvb = rtP . Gain5_Gain_h1imr1fczu * behracxtlf ; rtB . ighjzzaorr =
prfb444tvb - rtB . fqteuw4yxc ; rtB . pifpto3vrs = ( rtP .
PIDController_D_fxccfyhj1s * rtB . ighjzzaorr - rtX . hkz0a2vtcs ) * rtP .
PIDController_N_m5rsvcxufh ; rtB . buzwp2qk0c = ( rtP .
PIDController_P_dusajknfah * rtB . ighjzzaorr + rtX . ik24wcoua3 ) + rtB .
pifpto3vrs ; buad00jdeo = muDoubleScalarSin ( rtB . pvkiijd32j ) ; prfb444tvb
= ( ( muDoubleScalarSin ( rtP . SineWave8_Freq * ssGetTaskTime ( rtS , 0 ) +
rtP . SineWave8_Phase ) * rtP . SineWave8_Amp + rtP . SineWave8_Bias ) +
prfb444tvb ) - rtB . erks3kjsiv ; rtB . fhwcynxoam = ( rtP .
PIDController1_D_lmix2bvziz * prfb444tvb - rtX . o0mzlxndfd ) * rtP .
PIDController1_N_car1jg421l ; euxsgtxqpn = ( rtP .
PIDController1_P_ehab1cvw21 * prfb444tvb + rtX . do2eu3ewib ) + rtB .
fhwcynxoam ; mfec3oh2ks = muDoubleScalarCos ( rtB . pvkiijd32j ) ; rtB .
gagetyfvke = rtP . Gain4_Gain_ggyj03dy1v * behracxtlf - rtB . a2sufne1el ;
rtB . eoxpu4hzbr = ( rtP . PIDController2_D_hutlxbnxkq * rtB . gagetyfvke -
rtX . lsji1c25s5 ) * rtP . PIDController2_N_hk3wqjttfe ; rtB . kjihy01gxn = (
rtP . PIDController2_P_erzbkakobn * rtB . gagetyfvke + rtX . muzcxum1ac ) +
rtB . eoxpu4hzbr ; behracxtlf = ( rtB . kjihy01gxn + rtP . u_g_afxrjuatq2 ) *
rtP . u_m_p214vildz5 / ( muDoubleScalarCos ( rtB . lt1w2y2www ) *
muDoubleScalarCos ( rtB . pkkav2dgfu ) ) ; mwovkrpl0u = ( rtB . buzwp2qk0c *
buad00jdeo - euxsgtxqpn * mfec3oh2ks ) * rtP . fantheta4_m / behracxtlf ; if
( mwovkrpl0u > rtP . Saturation_UpperSat_jviycb3be4 ) { rtB . a2cuz4plc3 =
rtP . Saturation_UpperSat_jviycb3be4 ; } else if ( mwovkrpl0u < rtP .
Saturation_LowerSat_a1fc5tfggf ) { rtB . a2cuz4plc3 = rtP .
Saturation_LowerSat_a1fc5tfggf ; } else { rtB . a2cuz4plc3 = mwovkrpl0u ; }
if ( rtB . a2cuz4plc3 > 1.0 ) { avf2p33qfm = 1.0 ; } else if ( rtB .
a2cuz4plc3 < - 1.0 ) { avf2p33qfm = - 1.0 ; } else { avf2p33qfm = rtB .
a2cuz4plc3 ; } rtB . eemrvpv0ou = muDoubleScalarAsin ( avf2p33qfm ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } mwovkrpl0u = ( rtB . buzwp2qk0c *
mfec3oh2ks + euxsgtxqpn * buad00jdeo ) * rtP . fantheta4_m / ( behracxtlf *
muDoubleScalarCos ( rtB . lt1w2y2www ) ) ; if ( mwovkrpl0u > rtP .
Saturation1_UpperSat_h21ahh0qn3 ) { mwovkrpl0u = rtP .
Saturation1_UpperSat_h21ahh0qn3 ; } else if ( mwovkrpl0u < rtP .
Saturation1_LowerSat_boiycaf11u ) { mwovkrpl0u = rtP .
Saturation1_LowerSat_boiycaf11u ; } if ( mwovkrpl0u > 1.0 ) { mwovkrpl0u =
1.0 ; } else if ( mwovkrpl0u < - 1.0 ) { mwovkrpl0u = - 1.0 ; } rtB .
llsiikbjsb = muDoubleScalarAsin ( mwovkrpl0u ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } if ( ( rtDW . fyesrwfyxs >= ssGetT ( rtS ) ) && ( rtDW .
npcngz0wrj >= ssGetT ( rtS ) ) ) { rtB . ieswaokbbs = 0.0 ; } else {
buad00jdeo = rtDW . fyesrwfyxs ; lastU = & rtDW . okkbu2wqmk ; if ( rtDW .
fyesrwfyxs < rtDW . npcngz0wrj ) { if ( rtDW . npcngz0wrj < ssGetT ( rtS ) )
{ buad00jdeo = rtDW . npcngz0wrj ; lastU = & rtDW . es1ux2mjsf ; } } else if
( rtDW . fyesrwfyxs >= ssGetT ( rtS ) ) { buad00jdeo = rtDW . npcngz0wrj ;
lastU = & rtDW . es1ux2mjsf ; } rtB . ieswaokbbs = ( rtB . fqteuw4yxc - *
lastU ) / ( ssGetT ( rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( ( rtDW . jicbjxqfry >= ssGetT ( rtS ) ) && ( rtDW . ixuvrapcqk
>= ssGetT ( rtS ) ) ) { rtB . ht55zbzfl3 = 0.0 ; } else { buad00jdeo = rtDW .
jicbjxqfry ; lastU = & rtDW . lypptgpmwb ; if ( rtDW . jicbjxqfry < rtDW .
ixuvrapcqk ) { if ( rtDW . ixuvrapcqk < ssGetT ( rtS ) ) { buad00jdeo = rtDW
. ixuvrapcqk ; lastU = & rtDW . pjef5afbxz ; } } else if ( rtDW . jicbjxqfry
>= ssGetT ( rtS ) ) { buad00jdeo = rtDW . ixuvrapcqk ; lastU = & rtDW .
pjef5afbxz ; } rtB . ht55zbzfl3 = ( rtB . fqvyzg1ikz - * lastU ) / ( ssGetT (
rtS ) - buad00jdeo ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ( rtDW
. nbm4ws3vkn >= ssGetT ( rtS ) ) && ( rtDW . imedkbs3vt >= ssGetT ( rtS ) ) )
{ rtB . loxq2gzg5d = 0.0 ; } else { buad00jdeo = rtDW . nbm4ws3vkn ; lastU =
& rtDW . fmlsxd0jl0 ; if ( rtDW . nbm4ws3vkn < rtDW . imedkbs3vt ) { if (
rtDW . imedkbs3vt < ssGetT ( rtS ) ) { buad00jdeo = rtDW . imedkbs3vt ; lastU
= & rtDW . m0gui1x1iv ; } } else if ( rtDW . nbm4ws3vkn >= ssGetT ( rtS ) ) {
buad00jdeo = rtDW . imedkbs3vt ; lastU = & rtDW . m0gui1x1iv ; } rtB .
loxq2gzg5d = ( rtB . erks3kjsiv - * lastU ) / ( ssGetT ( rtS ) - buad00jdeo )
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ( rtDW . e3rgb100pi >=
ssGetT ( rtS ) ) && ( rtDW . im03fvpgjh >= ssGetT ( rtS ) ) ) { rtB .
n0zrk5x0qd = 0.0 ; } else { buad00jdeo = rtDW . e3rgb100pi ; lastU = & rtDW .
ndznpin2w5 ; if ( rtDW . e3rgb100pi < rtDW . im03fvpgjh ) { if ( rtDW .
im03fvpgjh < ssGetT ( rtS ) ) { buad00jdeo = rtDW . im03fvpgjh ; lastU = &
rtDW . g101uqyqvk ; } } else if ( rtDW . e3rgb100pi >= ssGetT ( rtS ) ) {
buad00jdeo = rtDW . im03fvpgjh ; lastU = & rtDW . g101uqyqvk ; } rtB .
n0zrk5x0qd = ( rtB . noumlvysto - * lastU ) / ( ssGetT ( rtS ) - buad00jdeo )
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . cvepqulsyo .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cvepqulsyo .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . fqvyzg1ikz + 0 ) ;
} } { if ( rtDW . ger1swbgma . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . ger1swbgma . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . noumlvysto + 0 ) ; } } { if ( rtDW . ga4t3zelrc .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ga4t3zelrc .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . gf15uxwtsm + 0 ) ;
} } { if ( rtDW . d4n3os3ohs . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . d4n3os3ohs . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . eod1xw3jx5 + 0 ) ; } } { if ( rtDW . olwfo1ugp5 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . olwfo1ugp5 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . fqteuw4yxc + 0 ) ;
} } { if ( rtDW . gtuoyzkuzx . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . gtuoyzkuzx . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . erks3kjsiv + 0 ) ; } } { if ( rtDW . d41yioycvk .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . d41yioycvk .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . a2sufne1el + 0 ) ;
} } { if ( rtDW . byipnpz0u1 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . byipnpz0u1 . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . jw5qymyu2m + 0 ) ; } } { if ( rtDW . do54evbx0n .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . do54evbx0n .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . kpbyqxbm3j + 0 ) ;
} } { if ( rtDW . a2bbryrbza . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . a2bbryrbza . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . a0nxandghd + 0 ) ; } } { if ( rtDW . nvefxlsyrk .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . nvefxlsyrk .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . m4yvyw4wkm + 0 ) ;
} } { if ( rtDW . ko23np5x5x . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . ko23np5x5x . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . dhaayoyjqs + 0 ) ; } } { if ( rtDW . f30xrwjxf1 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . f30xrwjxf1 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dhmwksclha + 0 ) ;
} } { if ( rtDW . fz1gqd4d4r . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . fz1gqd4d4r . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . lmuwp5via1 + 0 ) ; } } { if ( rtDW . kqtugum2z4 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . kqtugum2z4 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . a2bgnwhqmj + 0 ) ;
} } { if ( rtDW . lvqusllkau . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . lvqusllkau . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . olropwoagx + 0 ) ; } } { if ( rtDW . icta4fc2c5 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . icta4fc2c5 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . hgrck5k2qn + 0 ) ;
} } { if ( rtDW . iyfvfn4ifq . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . iyfvfn4ifq . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . akqkcnnrg1 + 0 ) ; } } } rtB . fxkutufqvt = rtP .
PIDController_I * rtB . a42b4qlkos ; rtB . bqmfichlii = rtP .
PIDController1_I * i1ztwsdvd3 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB
. bvqsnkcgtl = rtP . PIDController2_I * rtB . hegyf5vyzy ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { } rtB . p5zejio25u = rtP . PIDController_I_iwejwkej3m *
rtB . ifpr5jmyf1 ; rtB . k1n0tqzloq = rtP . PIDController1_I_ggyoqvdi4k *
fjlcmdci3l ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . elq41p5fyk = rtP
. PIDController2_I_b5qoeiglnj * rtB . lpbzqjcprk ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . iskktr4j12 = rtP . PIDController_I_jo0orsgtwc * rtB .
ighjzzaorr ; rtB . fju0kavd21 = rtP . PIDController1_I_eexygojq0h *
prfb444tvb ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . kgpvjsrcvv = rtP
. PIDController2_I_pm4rorrqog * rtB . gagetyfvke ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . guz0wqnnqa = rtP . PIDController_I_jljb1hxi4k * rtB .
dew2sklnjf ; rtB . lmucwinbfn = rtP . PIDController1_I_kk4n15ernz *
g4uaoqjo4n ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . idi4whozok = rtP
. PIDController2_I_b31xx2z4ae * rtB . inino4sn3n ; mfec3oh2ks = rtB .
grop1jv2fl - rtB . nkrg0rp1tj ; rtB . epn1xunf0k = ( rtP .
PIDController_D_bnpdwpgf2r * mfec3oh2ks - rtX . adlq2c0wq1 ) * rtP .
PIDController_N_nq5smeuvru ; rtB . nyhs3wxqky = rtP .
PIDController_I_ctexg1ydk0 * mfec3oh2ks ; mwovkrpl0u = rtB . dhlf45dvej - rtB
. fn5ghhd2tl ; rtB . cfkwt4rup1 = ( rtP . PIDController1_D_ipmgxlwt3s *
mwovkrpl0u - rtX . of00aunqxu ) * rtP . PIDController1_N_ju5pdg3n40 ; rtB .
p2h10oncgq = rtP . PIDController1_I_g3r3n5sujh * mwovkrpl0u ; i5fgahustc =
rtP . psi_Value - rtB . ht4btdihlj ; rtB . klwi41ft0p = ( rtP .
PIDController2_D_g4w5zspqgm * i5fgahustc - rtX . pjvklj4szi ) * rtP .
PIDController2_N_gwanukygue ; rtB . ixcs0kb5cd = rtP .
PIDController2_I_k3epcgcoj0 * i5fgahustc ; lsvxvwh3jl = rtB . p13raq01zn -
rtB . gvk0o2svme ; rtB . ii4tea1b5f = ( rtP . PIDController_D_jkhgbbl1en *
lsvxvwh3jl - rtX . lijh2swrpw ) * rtP . PIDController_N_bgper011ra ; rtB .
fm4y3ciqlx = rtP . PIDController_I_dlmuknchuh * lsvxvwh3jl ; elzrnliqwb = rtB
. k2emhbdmfl - rtB . cgbastyn2k ; rtB . abbyqwzn2p = ( rtP .
PIDController1_D_ak3x55jqvu * elzrnliqwb - rtX . g5w4koxf0l ) * rtP .
PIDController1_N_gfjurlmhit ; rtB . e3lde0qeyw = rtP .
PIDController1_I_hetisvzriu * elzrnliqwb ; oiu0kn45t0 = rtP . psi1_Value -
rtB . foedhs1o3a ; rtB . ihej1dufhd = ( rtP . PIDController2_D_jd4dbxg05c *
oiu0kn45t0 - rtX . lgduvgp5n3 ) * rtP . PIDController2_N_lijdwwumlg ; rtB .
ld3lnycffc = rtP . PIDController2_I_ndlknojsy1 * oiu0kn45t0 ; buad00jdeo =
rtB . dtzbyd4h2j - rtB . aasmc5aubg ; rtB . pmn2jinf1c = ( rtP .
PIDController_D_nfc3vqrqbv * buad00jdeo - rtX . fy55ynfqoc ) * rtP .
PIDController_N_fbnnaabg4e ; rtB . m23o2msgfd = rtP .
PIDController_I_idhehcr2gu * buad00jdeo ; prfb444tvb = rtB . b4yzfc1ead - rtB
. onwlyvksy1 ; rtB . damv1eafhe = ( rtP . PIDController1_D_bamu5r44om *
prfb444tvb - rtX . ghwaun2q4z ) * rtP . PIDController1_N_la5vcck0qb ; rtB .
no4p0gupxp = rtP . PIDController1_I_ardc14cci2 * prfb444tvb ; euxsgtxqpn =
rtP . psi2_Value - rtB . bbkw4ewb4z ; rtB . ljqvy22dik = ( rtP .
PIDController2_D_j3uc0srlnp * euxsgtxqpn - rtX . lhv23sybik ) * rtP .
PIDController2_N_p1gigoimhs ; rtB . npu5vs3ku4 = rtP .
PIDController2_I_njw5wvp51l * euxsgtxqpn ; ppkgyy52dz = rtB . ktg1ni3yrr -
rtB . mxf343uhx5 ; rtB . agh1kwbpao = ( rtP . PIDController_D_j25iff5xf3 *
ppkgyy52dz - rtX . eon1excs1b ) * rtP . PIDController_N_f1gx0hhzn2 ; rtB .
l45te5hz52 = rtP . PIDController_I_ke1xzatdh3 * ppkgyy52dz ; i1ufpmajyw = rtB
. emq054pzbi - rtB . hfuamunkkc ; rtB . digls4x4pq = ( rtP .
PIDController1_D_f4uld0erm5 * i1ufpmajyw - rtX . dey1qh2tff ) * rtP .
PIDController1_N_alytnhrrnb ; rtB . eclcbu2vsx = rtP .
PIDController1_I_jtbtiij5aw * i1ufpmajyw ; cok4ejxbej = rtP . psi3_Value -
rtB . dagpv2viuj ; rtB . hgu05vg5ey = ( rtP . PIDController2_D_gdgwgqzkmc *
cok4ejxbej - rtX . kjzjtgp2iz ) * rtP . PIDController2_N_kspzcbkt2u ; rtB .
b2ndeegab5 = rtP . PIDController2_I_by2qqgl4bd * cok4ejxbej ; g4uaoqjo4n =
rtB . eemrvpv0ou - rtB . lt1w2y2www ; rtB . gzexghqqmo = ( rtP .
PIDController_D_a55inr2dcg * g4uaoqjo4n - rtX . o5c0ah2apc ) * rtP .
PIDController_N_n1mma2zzum ; rtB . av5yyqtlqj = rtP .
PIDController_I_ipvz3he1ra * g4uaoqjo4n ; fjlcmdci3l = rtB . llsiikbjsb - rtB
. pkkav2dgfu ; rtB . noefdhhzfu = ( rtP . PIDController1_D_mqahdjnni4 *
fjlcmdci3l - rtX . jwvpzqa0r5 ) * rtP . PIDController1_N_fadqx0c2zi ; rtB .
kzsg1fqtyq = rtP . PIDController1_I_fjas3a3wnf * fjlcmdci3l ; i1ztwsdvd3 =
rtP . psi4_Value - rtB . pvkiijd32j ; rtB . kwmuy04gkx = ( rtP .
PIDController2_D_mmcjie0otp * i1ztwsdvd3 - rtX . kxrzrzcrxq ) * rtP .
PIDController2_N_jtg1f1vkx4 ; rtB . gd5vxikjkr = rtP .
PIDController2_I_ipt1mcpolc * i1ztwsdvd3 ; atveyssuml = rtB . l3ijkqzkh1 -
rtB . pq3as3h2ng ; rtB . frzlwgxrx5 = ( rtP . PIDController_D_en2uccolf0 *
atveyssuml - rtX . j3ycbllr1p ) * rtP . PIDController_N_d4mtfv0ek2 ; rtB .
hvsg45qqtb = rtP . PIDController_I_alqsqkfago * atveyssuml ; mwqdtzovzw = rtB
. d4vwxf2jbr - rtB . g4oiivzehy ; rtB . ipvxqb0no1 = ( rtP .
PIDController1_D_mndun3qwqh * mwqdtzovzw - rtX . jqtzx31zch ) * rtP .
PIDController1_N_it2rbpjfrk ; rtB . drxzhltnzx = rtP .
PIDController1_I_ausr5ezv4y * mwqdtzovzw ; arwumf12r4 = rtP . psi5_Value -
rtB . m41hci1djw ; rtB . pzj42wytaw = ( rtP . PIDController2_D_hnorqfxruw *
arwumf12r4 - rtX . jf4ybj03im ) * rtP . PIDController2_N_i4bf0y2l3i ; rtB .
gotvrd1vif = rtP . PIDController2_I_d2jywvs4bf * arwumf12r4 ; rtB .
isgzklolke = ( rtB . jahc5xdouv - rtX . bg2txxrlvm ) * rtP .
PIDController_N_pdt2hohbcl ; rtB . ff5mcoixhb = ( rtB . ewudaddp3p + rtX .
la1zyfaj31 ) + rtB . isgzklolke ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { }
rtB . kkydadivym = ( 0.0 - rtB . fyllvvykfx ) * rtP .
PIDController1_I_juvnexjmae ; rtB . namigiwbdi = ( ( 0.0 - rtB . fyllvvykfx )
* rtP . PIDController1_D_f0yhnp32nq - rtX . gm5iqrsymu ) * rtP .
PIDController1_N_ceq3duwmmd ; if ( ( rtB . bv4n4wscc2 < 0.0 ) && ( abpl12jq3p
> muDoubleScalarFloor ( abpl12jq3p ) ) ) { avf2p33qfm = - muDoubleScalarPower
( - rtB . bv4n4wscc2 , abpl12jq3p ) ; } else { avf2p33qfm =
muDoubleScalarPower ( rtB . bv4n4wscc2 , abpl12jq3p ) ; } rtB . mracf5jvtq =
avf2p33qfm * c1dninelzu * rtP . u_Gain_fpadnqkfdx ; if ( ( rtB . gz0h3zz2zn <
0.0 ) && ( cvc3qiiluz > muDoubleScalarFloor ( cvc3qiiluz ) ) ) { avf2p33qfm =
- muDoubleScalarPower ( - rtB . gz0h3zz2zn , cvc3qiiluz ) ; } else {
avf2p33qfm = muDoubleScalarPower ( rtB . gz0h3zz2zn , cvc3qiiluz ) ; } rtB .
med3sdiiqq = avf2p33qfm * irlw1idvda * rtP . u_Gain_ljraxbqoqb ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ox1enmqque = ssGetT ( rtS ) ; if (
rtB . ox1enmqque > rtP . Switch4_Threshold ) { c1dninelzu = rtP .
Constant19_Value ; } else if ( rtB . ox1enmqque > rtP . Switch3_Threshold ) {
c1dninelzu = muDoubleScalarSin ( rtP . SineWave6_Freq_mp3q4xahd0 *
ssGetTaskTime ( rtS , 0 ) + rtP . SineWave6_Phase_lspwxraw1u ) * rtP .
SineWave6_Amp_henxm5i1gd + rtP . SineWave6_Bias_cnbbxkgu2e ; } else {
c1dninelzu = rtP . Constant18_Value ; } rtB . l5ytux2wku = ( c1dninelzu - rtP
. Constant20_Value ) * rtP . Gain4_Gain_imrt3sps2q ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { { if ( rtDW . olwfo1ugp5k . AQHandles && ssGetLogOutput ( rtS )
) { sdiWriteSignal ( rtDW . olwfo1ugp5k . AQHandles , ssGetTaskTime ( rtS , 1
) , ( char * ) & rtB . ox1enmqque + 0 ) ; } } } c1dninelzu =
muDoubleScalarCos ( rtB . gvk0o2svme ) ; abpl12jq3p = muDoubleScalarCos ( rtB
. foedhs1o3a ) ; bme0js3mb1 *= rtP . Gain_Gain_ebhlmk5t4x ; irlw1idvda =
muDoubleScalarSin ( rtB . gvk0o2svme ) ; cvc3qiiluz = muDoubleScalarSin ( rtB
. foedhs1o3a ) ; avf2p33qfm = muDoubleScalarSin ( rtB . cgbastyn2k ) ; rtB .
nfpwdpoxim = ( c1dninelzu * avf2p33qfm * cvc3qiiluz - irlw1idvda * abpl12jq3p
) * bme0js3mb1 ; rtB . hjojlg0ri5 = muDoubleScalarCos ( rtB . cgbastyn2k ) *
c1dninelzu * bme0js3mb1 - rtP . Quadrotor1_g ; rtB . iypnm5k2l0 = (
c1dninelzu * avf2p33qfm * abpl12jq3p + irlw1idvda * cvc3qiiluz ) * bme0js3mb1
+ rtB . l5ytux2wku ; rtB . pcnfbwkpz5 = rtX . gd4laa4feb ; rtB . gjtd0nf3yk =
rtX . nqvlxtcqv3 ; rtB . m0xb24biyp = rtX . fndb2brp1l ; rtB . nbabvypszj = (
( rtP . PIDController_P_bdo03lnhov * lsvxvwh3jl + rtX . acnidcfmgv ) + rtB .
ii4tea1b5f ) * rtP . u_Ixx * ( 1.0 / rtP . Quadrotor1_Ixx ) + ( rtP .
Quadrotor1_Iyy - rtP . Quadrotor1_Izz ) / rtP . Quadrotor1_Ixx * ( rtB .
pcnfbwkpz5 * rtB . gjtd0nf3yk ) ; rtB . ch4uam4zhi = ( ( rtP .
PIDController2_P_evzc3v5wmi * oiu0kn45t0 + rtX . fow5rkn0z1 ) + rtB .
ihej1dufhd ) * rtP . u_Izz * ( 1.0 / rtP . Quadrotor1_Izz ) + ( rtP .
Quadrotor1_Ixx - rtP . Quadrotor1_Iyy ) / rtP . Quadrotor1_Izz * ( rtB .
m0xb24biyp * rtB . pcnfbwkpz5 ) ; rtB . bhvrcdxqst = ( ( rtP .
PIDController1_P_m1rpi1feq5 * elzrnliqwb + rtX . jppvzfe0an ) + rtB .
abbyqwzn2p ) * rtP . u_Iyy * ( 1.0 / rtP . Quadrotor1_Iyy ) + ( rtP .
Quadrotor1_Izz - rtP . Quadrotor1_Ixx ) / rtP . Quadrotor1_Iyy * ( rtB .
m0xb24biyp * rtB . gjtd0nf3yk ) ; rtB . kxxwyujbhf = ssGetT ( rtS ) ; if (
rtB . kxxwyujbhf > rtP . Switch4_Threshold_pct3ktcsxi ) { bme0js3mb1 = rtP .
Constant19_Value_khky1eltum ; } else if ( rtB . kxxwyujbhf > rtP .
Switch3_Threshold_oorgqpvcvo ) { bme0js3mb1 = muDoubleScalarSin ( rtP .
SineWave6_Freq_lsyxwbjnmq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave6_Phase_lxlmjcj12n ) * rtP . SineWave6_Amp_dodybln1ra + rtP .
SineWave6_Bias_h3x4k5vgis ; } else { bme0js3mb1 = rtP .
Constant18_Value_jl4j00is31 ; } rtB . ib50hx4r55 = ( bme0js3mb1 - rtP .
Constant20_Value_bifugeoxsi ) * rtP . Gain4_Gain_hvthrgs2u3 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } paq22jpowi *= rtP . Gain_Gain_n4w5ypbc00
; bme0js3mb1 = muDoubleScalarSin ( rtB . mxf343uhx5 ) ; c1dninelzu =
muDoubleScalarSin ( rtB . dagpv2viuj ) ; abpl12jq3p = muDoubleScalarCos ( rtB
. mxf343uhx5 ) ; irlw1idvda = muDoubleScalarSin ( rtB . hfuamunkkc ) ;
cvc3qiiluz = muDoubleScalarCos ( rtB . dagpv2viuj ) ; rtB . d3zfzrw4bi = (
abpl12jq3p * irlw1idvda * cvc3qiiluz + bme0js3mb1 * c1dninelzu ) * paq22jpowi
+ rtB . ib50hx4r55 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW .
olwfo1ugp5kj . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW
. olwfo1ugp5kj . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
kxxwyujbhf + 0 ) ; } } } rtB . jfdgkrfi4h = ( abpl12jq3p * irlw1idvda *
c1dninelzu - bme0js3mb1 * cvc3qiiluz ) * paq22jpowi ; rtB . n1je2tac3l =
muDoubleScalarCos ( rtB . hfuamunkkc ) * abpl12jq3p * paq22jpowi - rtP .
Quadrotor2_g ; rtB . p5bhm1alpr = rtX . nv44eqthra ; rtB . igvbfe0ygp = rtX .
nyrhlyopms ; rtB . hhlbdzptb2 = rtX . cxtj11s55z ; rtB . g3mbejedbn = ( ( rtP
. PIDController_P_gyvdwyvumv * ppkgyy52dz + rtX . phxnmexg5m ) + rtB .
agh1kwbpao ) * rtP . u_Ixx_pihstiyd01 * ( 1.0 / rtP . Quadrotor2_Ixx ) + (
rtP . Quadrotor2_Iyy - rtP . Quadrotor2_Izz ) / rtP . Quadrotor2_Ixx * ( rtB
. p5bhm1alpr * rtB . igvbfe0ygp ) ; rtB . pyr2tnvc0u = ( ( rtP .
PIDController2_P_pxk5annt0u * cok4ejxbej + rtX . kctwtdh12v ) + rtB .
hgu05vg5ey ) * rtP . u_Izz_kun2sqo1kd * ( 1.0 / rtP . Quadrotor2_Izz ) + (
rtP . Quadrotor2_Ixx - rtP . Quadrotor2_Iyy ) / rtP . Quadrotor2_Izz * ( rtB
. hhlbdzptb2 * rtB . p5bhm1alpr ) ; rtB . fiqq3mnurr = ( ( rtP .
PIDController1_P_dcdjyqoctb * i1ufpmajyw + rtX . b0h1snyqm3 ) + rtB .
digls4x4pq ) * rtP . u_Iyy_c1lnfcrzch * ( 1.0 / rtP . Quadrotor2_Iyy ) + (
rtP . Quadrotor2_Izz - rtP . Quadrotor2_Ixx ) / rtP . Quadrotor2_Iyy * ( rtB
. hhlbdzptb2 * rtB . igvbfe0ygp ) ; rtB . muautdnlvc = ssGetT ( rtS ) ; if (
rtB . muautdnlvc > rtP . Switch4_Threshold_mi0yodiqiu ) { paq22jpowi = rtP .
Constant19_Value_nnupnukofe ; } else if ( rtB . muautdnlvc > rtP .
Switch3_Threshold_nk3dncxebe ) { paq22jpowi = muDoubleScalarSin ( rtP .
SineWave6_Freq_csvujkpg3v * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave6_Phase_o44bvzhliy ) * rtP . SineWave6_Amp_jsec3i1shb + rtP .
SineWave6_Bias_gnb10sgoal ; } else { paq22jpowi = rtP .
Constant18_Value_jy1wqu120y ; } rtB . fd0ifozzzi = ( paq22jpowi - rtP .
Constant20_Value_ieecxe0tzh ) * rtP . Gain4_Gain_nn0z0a2s0s ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . olwfo1ugp5kjg . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . olwfo1ugp5kjg . AQHandles
, ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . muautdnlvc + 0 ) ; } } }
paq22jpowi = muDoubleScalarCos ( rtB . pq3as3h2ng ) ; bme0js3mb1 =
muDoubleScalarCos ( rtB . m41hci1djw ) ; enncaz0c1q *= rtP .
Gain_Gain_jqz2vch25q ; c1dninelzu = muDoubleScalarSin ( rtB . pq3as3h2ng ) ;
abpl12jq3p = muDoubleScalarSin ( rtB . m41hci1djw ) ; irlw1idvda =
muDoubleScalarSin ( rtB . g4oiivzehy ) ; rtB . gc4vdbdowg = ( paq22jpowi *
irlw1idvda * abpl12jq3p - c1dninelzu * bme0js3mb1 ) * enncaz0c1q ; rtB .
pe1rpjuvjl = muDoubleScalarCos ( rtB . g4oiivzehy ) * paq22jpowi * enncaz0c1q
- rtP . Quadrotor3_g ; rtB . nfcrfmczg0 = ( paq22jpowi * irlw1idvda *
bme0js3mb1 + c1dninelzu * abpl12jq3p ) * enncaz0c1q + rtB . fd0ifozzzi ; rtB
. co5el4lvj3 = rtX . ehadcyaees ; rtB . obgc5k0p33 = rtX . dgwu2bgatn ; rtB .
dqmjmxx1rh = rtX . ggjcmhsrmo ; rtB . jxuw3gofsa = ( ( rtP .
PIDController_P_lbmuewtbrb * atveyssuml + rtX . kjlmncixpi ) + rtB .
frzlwgxrx5 ) * rtP . u_Ixx_joq3szosob * ( 1.0 / rtP . Quadrotor3_Ixx ) + (
rtP . Quadrotor3_Iyy - rtP . Quadrotor3_Izz ) / rtP . Quadrotor3_Ixx * ( rtB
. co5el4lvj3 * rtB . obgc5k0p33 ) ; rtB . cjqsc2yb0r = ( ( rtP .
PIDController2_P_chxrbh4rsl * arwumf12r4 + rtX . fhtwvoc0b2 ) + rtB .
pzj42wytaw ) * rtP . u_Izz_nd4b3hpkmx * ( 1.0 / rtP . Quadrotor3_Izz ) + (
rtP . Quadrotor3_Ixx - rtP . Quadrotor3_Iyy ) / rtP . Quadrotor3_Izz * ( rtB
. dqmjmxx1rh * rtB . co5el4lvj3 ) ; rtB . lhnyhfj4ax = ( ( rtP .
PIDController1_P_kwxf55bpha * mwqdtzovzw + rtX . eqelhjati2 ) + rtB .
ipvxqb0no1 ) * rtP . u_Iyy_avtouev4uw * ( 1.0 / rtP . Quadrotor3_Iyy ) + (
rtP . Quadrotor3_Izz - rtP . Quadrotor3_Ixx ) / rtP . Quadrotor3_Iyy * ( rtB
. dqmjmxx1rh * rtB . obgc5k0p33 ) ; rtB . odpucuep24 = ( ( 0.0 - rtB .
gw3i35j4jt ) * rtP . PIDController_D_n0ajifbrzl - rtX . iwolbcbvo0 ) * rtP .
PIDController_N_j1rqxncrvn ; rtB . e3qoxdem5b = ( ( 0.0 - rtB . gw3i35j4jt )
* rtP . PIDController_P_gglswmusll + rtX . dw2opfbpq2 ) + rtB . odpucuep24 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ksoaeoigyx = ( 0.0 - rtB .
gw3i35j4jt ) * rtP . PIDController_I_l4hu2imemx ; rtB . oispyu5oso = ( 0.0 -
rtB . h1tqpswb1i ) * rtP . PIDController1_I_npnz5gp3zv ; rtB . jsto1jr5xg = (
( 0.0 - rtB . h1tqpswb1i ) * rtP . PIDController1_D_lllqr1ay3g - rtX .
ix5bvh54da ) * rtP . PIDController1_N_kwhnf3hzry ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . kt5xgzm5wk = rtP . PIDController2_I_edyryjr1ey * dex ;
dex = rtB . ff5mcoixhb - rtB . nzubxg3nw3 ; rtB . khk5ku0koj = ( rtP .
PIDController_D_n1dlg551nt * dex - rtX . kjxmjp3orc ) * rtP .
PIDController_N_ktqb1csp5j ; rtB . k1puzszxy5 = ( rtP .
PIDController_P_lyogmo2kkp * dex + rtX . krepniuh0b ) + rtB . khk5ku0koj ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . jvr4p53sde = rtP .
PIDController_I_p4emzoziav * dex ; dex = ( ( ( 0.0 - rtB . fyllvvykfx ) * rtP
. PIDController1_P_dwv3e2afl1 + rtX . nwlxtpgtgk ) + rtB . namigiwbdi ) - rtB
. c4cweg1v0h ; rtB . j1xjnt2uqz = rtP . PIDController1_I_kn5hf4wlm1 * dex ;
rtB . jn5pbppnc1 = ( rtP . PIDController1_D_cclgetqhq2 * dex - rtX .
gledeu45c1 ) * rtP . PIDController1_N_kjcbsdgiu4 ; dex = rtP .
Constant13_Value - rtB . mx2cm2pvr4 ; rtB . cgmyxly24o = ( rtP .
PIDController2_D_n2borjb1u3 * dex - rtX . lyfoylyp5z ) * rtP .
PIDController2_N_oqf2t3gvk0 ; rtB . fy4gmkc2r2 = ( rtP .
PIDController2_P_g3eqpktwgi * dex + rtX . cs2mamav0r ) + rtB . cgmyxly24o ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . kn0q25hdzu = rtP .
PIDController2_I_eda3w3pnmo * dex ; rtB . k53z01ef4w = ( ( 0.0 - rtB .
burl4etjnv ) * rtP . PIDController_D_iafklpacew - rtX . d0jgzgn4lu ) * rtP .
PIDController_N_lpv1bmh4cb ; rtB . beyiwh2ufn = ( ( 0.0 - rtB . burl4etjnv )
* rtP . PIDController_P_bkixrkfemw + rtX . c31qtbt14e ) + rtB . k53z01ef4w ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . m4khsgkfuv = ( 0.0 - rtB .
burl4etjnv ) * rtP . PIDController_I_ka53buzhsv ; rtB . bh5zn5qbok = ( 0.0 -
rtB . burl4etjnv ) * rtP . PIDController1_I_dhlda2mmxa ; rtB . brlxhg14if = (
( 0.0 - rtB . burl4etjnv ) * rtP . PIDController1_D_m0zns5ehtd - rtX .
ltkpug5sy2 ) * rtP . PIDController1_N_gcwx5scc5y ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . nu1cnqvuqs = rtP . PIDController2_I_bl0dg5wd5d * dey ;
dex = muDoubleScalarCos ( rtB . nkrg0rp1tj ) ; dey = muDoubleScalarCos ( rtB
. ht4btdihlj ) ; i1ea3jupzc *= rtP . Gain_Gain_awestftebg ; rtB . broln0hw2t
= rtX . l3ukeljw21 ; paq22jpowi = muDoubleScalarSin ( rtB . nkrg0rp1tj ) ;
bme0js3mb1 = muDoubleScalarSin ( rtB . ht4btdihlj ) ; enncaz0c1q =
muDoubleScalarSin ( rtB . fn5ghhd2tl ) ; rtB . dtg5wvfw12 = ( dex *
enncaz0c1q * dey + paq22jpowi * bme0js3mb1 ) * i1ea3jupzc ; rtB . ikvsnzuqkx
= ( dex * enncaz0c1q * bme0js3mb1 - paq22jpowi * dey ) * i1ea3jupzc ; rtB .
mehc4ezk5i = muDoubleScalarCos ( rtB . fn5ghhd2tl ) * dex * i1ea3jupzc - rtP
. Quadrotor_g ; rtB . fvuuli3ztl = rtX . magrozyij1 ; rtB . ct0ubq0p0f = rtX
. lueloh21s1 ; rtB . n2t2mlsekr = rtX . dbyhcjasi5 ; rtB . hozjtrrg3w = ( (
rtP . PIDController_P_l3dvp4gzhj * mfec3oh2ks + rtX . nwyypn00k3 ) + rtB .
epn1xunf0k ) * rtP . _Ixx * ( 1.0 / rtP . Quadrotor_Ixx ) + ( rtP .
Quadrotor_Iyy - rtP . Quadrotor_Izz ) / rtP . Quadrotor_Ixx * ( rtB .
fvuuli3ztl * rtB . ct0ubq0p0f ) ; rtB . hcpmnd4tvl = ( ( rtP .
PIDController2_P_kp1lf3scwu * i5fgahustc + rtX . lwagfwnwie ) + rtB .
klwi41ft0p ) * rtP . _Izz * ( 1.0 / rtP . Quadrotor_Izz ) + ( rtP .
Quadrotor_Ixx - rtP . Quadrotor_Iyy ) / rtP . Quadrotor_Izz * ( rtB .
n2t2mlsekr * rtB . fvuuli3ztl ) ; rtB . dly0u2si3d = ( ( rtP .
PIDController1_P_oaxjkkp4ew * mwovkrpl0u + rtX . i4cw2jspdx ) + rtB .
cfkwt4rup1 ) * rtP . _Iyy * ( 1.0 / rtP . Quadrotor_Iyy ) + ( rtP .
Quadrotor_Izz - rtP . Quadrotor_Ixx ) / rtP . Quadrotor_Iyy * ( rtB .
n2t2mlsekr * rtB . ct0ubq0p0f ) ; dex = muDoubleScalarCos ( rtB . aasmc5aubg
) ; dey = muDoubleScalarCos ( rtB . bbkw4ewb4z ) ; okml2cve45 *= rtP .
Gain_Gain_lv0lbvfry2 ; rtB . grifkcmi1k = rtX . cnlosicvyb ; rtB . l4chavwt1y
= rtX . jnl1six2fc ; rtB . pidyrnfhb3 = rtX . lehjmsphyv ; i1ea3jupzc =
muDoubleScalarSin ( rtB . aasmc5aubg ) ; paq22jpowi = muDoubleScalarSin ( rtB
. bbkw4ewb4z ) ; bme0js3mb1 = muDoubleScalarSin ( rtB . onwlyvksy1 ) ; rtB .
n0btpczb4e = ( dex * bme0js3mb1 * dey + i1ea3jupzc * paq22jpowi ) *
okml2cve45 ; rtB . icn3tc3wmy = ( dex * bme0js3mb1 * paq22jpowi - i1ea3jupzc
* dey ) * okml2cve45 ; rtB . e1mg3zha3r = muDoubleScalarCos ( rtB .
onwlyvksy1 ) * dex * okml2cve45 - rtP . Quadrotor1_g_ddytjpfru3 ; rtB .
gqiev5b33f = rtX . ee4q0hpg5w ; rtB . k1js0bv5xd = rtX . nueeodfbss ; rtB .
eoisisc0h1 = rtX . c2ou34j4st ; rtB . m550tb0xb0 = ( ( rtP .
PIDController_P_kxl1kqc3oq * buad00jdeo + rtX . fypx2u0nu4 ) + rtB .
pmn2jinf1c ) * rtP . u_Ixx_kmwcqzgly3 * ( 1.0 / rtP .
Quadrotor1_Ixx_gja45mis01 ) + ( rtP . Quadrotor1_Iyy_go5t3hyvk4 - rtP .
Quadrotor1_Izz_g5r1ijlx4u ) / rtP . Quadrotor1_Ixx_gja45mis01 * ( rtB .
gqiev5b33f * rtB . k1js0bv5xd ) ; rtB . aa3he3tbbh = ( ( rtP .
PIDController2_P_co0pzormut * euxsgtxqpn + rtX . grsxmlptlz ) + rtB .
ljqvy22dik ) * rtP . u_Izz_apevdj43i0 * ( 1.0 / rtP .
Quadrotor1_Izz_g5r1ijlx4u ) + ( rtP . Quadrotor1_Ixx_gja45mis01 - rtP .
Quadrotor1_Iyy_go5t3hyvk4 ) / rtP . Quadrotor1_Izz_g5r1ijlx4u * ( rtB .
eoisisc0h1 * rtB . gqiev5b33f ) ; rtB . p1bin1tn4s = ( ( rtP .
PIDController1_P_jpyfdfnh5b * prfb444tvb + rtX . fmatfc2vzb ) + rtB .
damv1eafhe ) * rtP . u_Iyy_hbpkv0uula * ( 1.0 / rtP .
Quadrotor1_Iyy_go5t3hyvk4 ) + ( rtP . Quadrotor1_Izz_g5r1ijlx4u - rtP .
Quadrotor1_Ixx_gja45mis01 ) / rtP . Quadrotor1_Iyy_go5t3hyvk4 * ( rtB .
eoisisc0h1 * rtB . k1js0bv5xd ) ; okml2cve45 = muDoubleScalarCos ( rtB .
lt1w2y2www ) ; dex = muDoubleScalarCos ( rtB . pvkiijd32j ) ; behracxtlf *=
rtP . Gain_Gain_jfxqopldfw ; rtB . azguj351yz = rtX . pjv4cmmakb ; dey =
muDoubleScalarSin ( rtB . lt1w2y2www ) ; i1ea3jupzc = muDoubleScalarSin ( rtB
. pvkiijd32j ) ; paq22jpowi = muDoubleScalarSin ( rtB . pkkav2dgfu ) ; rtB .
psd0qi2uaw = ( okml2cve45 * paq22jpowi * dex + dey * i1ea3jupzc ) *
behracxtlf ; rtB . jkr1aqos5k = ( okml2cve45 * paq22jpowi * i1ea3jupzc - dey
* dex ) * behracxtlf ; rtB . kgsz3eq5q3 = muDoubleScalarCos ( rtB .
pkkav2dgfu ) * okml2cve45 * behracxtlf - rtP . Quadrotor2_g_eqcrrzybmj ; rtB
. fsigdbugsv = rtX . gn1w3zxddg ; rtB . miesiu5v0m = rtX . bkgm0k2m5i ; rtB .
mehi2jgtqv = rtX . hrngp2ds5w ; rtB . l24o5drtvc = ( ( rtP .
PIDController_P_og1ahp3bam * g4uaoqjo4n + rtX . flstcqpmom ) + rtB .
gzexghqqmo ) * rtP . u_Ixx_dvy1soow50 * ( 1.0 / rtP .
Quadrotor2_Ixx_aoohkqt1h3 ) + ( rtP . Quadrotor2_Iyy_n3rhz1tmo1 - rtP .
Quadrotor2_Izz_g5qpxysxej ) / rtP . Quadrotor2_Ixx_aoohkqt1h3 * ( rtB .
fsigdbugsv * rtB . miesiu5v0m ) ; rtB . myc5fy31uv = ( ( rtP .
PIDController2_P_fj0sy20p12 * i1ztwsdvd3 + rtX . n3lfk4kfkd ) + rtB .
kwmuy04gkx ) * rtP . u_Izz_ebnkzvnqgi * ( 1.0 / rtP .
Quadrotor2_Izz_g5qpxysxej ) + ( rtP . Quadrotor2_Ixx_aoohkqt1h3 - rtP .
Quadrotor2_Iyy_n3rhz1tmo1 ) / rtP . Quadrotor2_Izz_g5qpxysxej * ( rtB .
mehi2jgtqv * rtB . fsigdbugsv ) ; rtB . ct235dqmgw = ( ( rtP .
PIDController1_P_fxqhy440cw * fjlcmdci3l + rtX . o0rr4etxc1 ) + rtB .
noefdhhzfu ) * rtP . u_Iyy_gcgfjsioj0 * ( 1.0 / rtP .
Quadrotor2_Iyy_n3rhz1tmo1 ) + ( rtP . Quadrotor2_Izz_g5qpxysxej - rtP .
Quadrotor2_Ixx_aoohkqt1h3 ) / rtP . Quadrotor2_Iyy_n3rhz1tmo1 * ( rtB .
mehi2jgtqv * rtB . miesiu5v0m ) ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { rtB . cflmg0gnmi = 0.0 ; rtB . jahc5xdouv =
rtP . PIDController_D_nue2ikh2gu * rtB . cflmg0gnmi ; rtB . ass5152o0p = rtP
. PIDController_I_fb0qkr15vv * rtB . cflmg0gnmi ; rtB . ewudaddp3p = rtP .
PIDController_P_jiphsdjxxr * rtB . cflmg0gnmi ; rtB . bv4n4wscc2 = rtP .
Constant1_Value - rtP . Gain17_Gain * rtP . Constant2_Value ; rtB .
gx5fpzjouv = rtP . Constant37_Value - rtP . Constant38_Value ; rtB .
gz0h3zz2zn = rtP . Constant3_Value - rtP . Gain3_Gain_dpwsijto2s * rtP .
Constant4_Value ; rtB . kcyjdevu1q = rtP . Constant5_Value_cb4afoixpx - rtP .
Constant6_Value_pb14rkkk1o ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T * lastU ; if ( rtDW . d1w1ptz3pi == ( rtInf ) ) { rtDW .
d1w1ptz3pi = ssGetT ( rtS ) ; lastU = & rtDW . eswhoiqpgv ; } else if ( rtDW
. arilnfbogf == ( rtInf ) ) { rtDW . arilnfbogf = ssGetT ( rtS ) ; lastU = &
rtDW . kva0zescbq ; } else if ( rtDW . d1w1ptz3pi < rtDW . arilnfbogf ) {
rtDW . d1w1ptz3pi = ssGetT ( rtS ) ; lastU = & rtDW . eswhoiqpgv ; } else {
rtDW . arilnfbogf = ssGetT ( rtS ) ; lastU = & rtDW . kva0zescbq ; } * lastU
= rtB . m4yvyw4wkm ; if ( rtDW . hgj1s3xddi == ( rtInf ) ) { rtDW .
hgj1s3xddi = ssGetT ( rtS ) ; lastU = & rtDW . lzpxk2xcrl ; } else if ( rtDW
. kdhn3disiv == ( rtInf ) ) { rtDW . kdhn3disiv = ssGetT ( rtS ) ; lastU = &
rtDW . b350d4lkxg ; } else if ( rtDW . hgj1s3xddi < rtDW . kdhn3disiv ) {
rtDW . hgj1s3xddi = ssGetT ( rtS ) ; lastU = & rtDW . lzpxk2xcrl ; } else {
rtDW . kdhn3disiv = ssGetT ( rtS ) ; lastU = & rtDW . b350d4lkxg ; } * lastU
= rtP . Constant6_Value ; if ( rtDW . djd0izxljn == ( rtInf ) ) { rtDW .
djd0izxljn = ssGetT ( rtS ) ; lastU = & rtDW . b1tjfatcvu ; } else if ( rtDW
. gp4qxs0jny == ( rtInf ) ) { rtDW . gp4qxs0jny = ssGetT ( rtS ) ; lastU = &
rtDW . cjugb23rv3 ; } else if ( rtDW . djd0izxljn < rtDW . gp4qxs0jny ) {
rtDW . djd0izxljn = ssGetT ( rtS ) ; lastU = & rtDW . b1tjfatcvu ; } else {
rtDW . gp4qxs0jny = ssGetT ( rtS ) ; lastU = & rtDW . cjugb23rv3 ; } * lastU
= rtB . dovkmcjvrg ; if ( rtDW . fd0y4m0axt == ( rtInf ) ) { rtDW .
fd0y4m0axt = ssGetT ( rtS ) ; lastU = & rtDW . dtzaql1t41 ; } else if ( rtDW
. dv0pjwza2t == ( rtInf ) ) { rtDW . dv0pjwza2t = ssGetT ( rtS ) ; lastU = &
rtDW . hag2tmzxq4 ; } else if ( rtDW . fd0y4m0axt < rtDW . dv0pjwza2t ) {
rtDW . fd0y4m0axt = ssGetT ( rtS ) ; lastU = & rtDW . dtzaql1t41 ; } else {
rtDW . dv0pjwza2t = ssGetT ( rtS ) ; lastU = & rtDW . hag2tmzxq4 ; } * lastU
= rtP . Constant7_Value ; if ( rtDW . azzm52nqwi == ( rtInf ) ) { rtDW .
azzm52nqwi = ssGetT ( rtS ) ; lastU = & rtDW . fkjod2apq5 ; } else if ( rtDW
. oyrlkmn3mo == ( rtInf ) ) { rtDW . oyrlkmn3mo = ssGetT ( rtS ) ; lastU = &
rtDW . gtrm0fav21 ; } else if ( rtDW . azzm52nqwi < rtDW . oyrlkmn3mo ) {
rtDW . azzm52nqwi = ssGetT ( rtS ) ; lastU = & rtDW . fkjod2apq5 ; } else {
rtDW . oyrlkmn3mo = ssGetT ( rtS ) ; lastU = & rtDW . gtrm0fav21 ; } * lastU
= rtB . fl25pm05gl ; if ( rtDW . orwknhwt4c == ( rtInf ) ) { rtDW .
orwknhwt4c = ssGetT ( rtS ) ; lastU = & rtDW . nxu23jmfq3 ; } else if ( rtDW
. ciurdviajr == ( rtInf ) ) { rtDW . ciurdviajr = ssGetT ( rtS ) ; lastU = &
rtDW . lqnqkoaiiq ; } else if ( rtDW . orwknhwt4c < rtDW . ciurdviajr ) {
rtDW . orwknhwt4c = ssGetT ( rtS ) ; lastU = & rtDW . nxu23jmfq3 ; } else {
rtDW . ciurdviajr = ssGetT ( rtS ) ; lastU = & rtDW . lqnqkoaiiq ; } * lastU
= rtB . hgrck5k2qn ; if ( rtDW . jznxtwrdhr == ( rtInf ) ) { rtDW .
jznxtwrdhr = ssGetT ( rtS ) ; lastU = & rtDW . plk4jigknp ; } else if ( rtDW
. ns4o4be1dk == ( rtInf ) ) { rtDW . ns4o4be1dk = ssGetT ( rtS ) ; lastU = &
rtDW . is4uwefdli ; } else if ( rtDW . jznxtwrdhr < rtDW . ns4o4be1dk ) {
rtDW . jznxtwrdhr = ssGetT ( rtS ) ; lastU = & rtDW . plk4jigknp ; } else {
rtDW . ns4o4be1dk = ssGetT ( rtS ) ; lastU = & rtDW . is4uwefdli ; } * lastU
= rtB . a2bgnwhqmj ; if ( rtDW . jdb2xhicuf == ( rtInf ) ) { rtDW .
jdb2xhicuf = ssGetT ( rtS ) ; lastU = & rtDW . eiahtdjei5 ; } else if ( rtDW
. nfmtckz5ig == ( rtInf ) ) { rtDW . nfmtckz5ig = ssGetT ( rtS ) ; lastU = &
rtDW . oe5wqb2qpx ; } else if ( rtDW . jdb2xhicuf < rtDW . nfmtckz5ig ) {
rtDW . jdb2xhicuf = ssGetT ( rtS ) ; lastU = & rtDW . eiahtdjei5 ; } else {
rtDW . nfmtckz5ig = ssGetT ( rtS ) ; lastU = & rtDW . oe5wqb2qpx ; } * lastU
= rtB . olropwoagx ; if ( rtDW . hnlz54wdxg == ( rtInf ) ) { rtDW .
hnlz54wdxg = ssGetT ( rtS ) ; lastU = & rtDW . biumseuk2t ; } else if ( rtDW
. hi3ccp4tdk == ( rtInf ) ) { rtDW . hi3ccp4tdk = ssGetT ( rtS ) ; lastU = &
rtDW . djewj0wij2 ; } else if ( rtDW . hnlz54wdxg < rtDW . hi3ccp4tdk ) {
rtDW . hnlz54wdxg = ssGetT ( rtS ) ; lastU = & rtDW . biumseuk2t ; } else {
rtDW . hi3ccp4tdk = ssGetT ( rtS ) ; lastU = & rtDW . djewj0wij2 ; } * lastU
= rtB . a2sufne1el ; if ( rtDW . px2bsuejyw == ( rtInf ) ) { rtDW .
px2bsuejyw = ssGetT ( rtS ) ; lastU = & rtDW . b4ma5udaih ; } else if ( rtDW
. mzfqs1evtc == ( rtInf ) ) { rtDW . mzfqs1evtc = ssGetT ( rtS ) ; lastU = &
rtDW . kjc3mzi05m ; } else if ( rtDW . px2bsuejyw < rtDW . mzfqs1evtc ) {
rtDW . px2bsuejyw = ssGetT ( rtS ) ; lastU = & rtDW . b4ma5udaih ; } else {
rtDW . mzfqs1evtc = ssGetT ( rtS ) ; lastU = & rtDW . kjc3mzi05m ; } * lastU
= rtP . Constant24_Value ; if ( rtDW . hfcw5k2d4i == ( rtInf ) ) { rtDW .
hfcw5k2d4i = ssGetT ( rtS ) ; lastU = & rtDW . dds1lvrxbl ; } else if ( rtDW
. pzqvd5drtk == ( rtInf ) ) { rtDW . pzqvd5drtk = ssGetT ( rtS ) ; lastU = &
rtDW . bex0xz0uof ; } else if ( rtDW . hfcw5k2d4i < rtDW . pzqvd5drtk ) {
rtDW . hfcw5k2d4i = ssGetT ( rtS ) ; lastU = & rtDW . dds1lvrxbl ; } else {
rtDW . pzqvd5drtk = ssGetT ( rtS ) ; lastU = & rtDW . bex0xz0uof ; } * lastU
= rtB . c15m2hah5x ; if ( rtDW . jh2zw2mkrg == ( rtInf ) ) { rtDW .
jh2zw2mkrg = ssGetT ( rtS ) ; lastU = & rtDW . nls23awnpg ; } else if ( rtDW
. mqewdswekk == ( rtInf ) ) { rtDW . mqewdswekk = ssGetT ( rtS ) ; lastU = &
rtDW . hl3xxenjxg ; } else if ( rtDW . jh2zw2mkrg < rtDW . mqewdswekk ) {
rtDW . jh2zw2mkrg = ssGetT ( rtS ) ; lastU = & rtDW . nls23awnpg ; } else {
rtDW . mqewdswekk = ssGetT ( rtS ) ; lastU = & rtDW . hl3xxenjxg ; } * lastU
= rtP . Constant25_Value ; if ( rtDW . ix3yptllqh == ( rtInf ) ) { rtDW .
ix3yptllqh = ssGetT ( rtS ) ; lastU = & rtDW . mgirnwhnpt ; } else if ( rtDW
. efzvv4xbrg == ( rtInf ) ) { rtDW . efzvv4xbrg = ssGetT ( rtS ) ; lastU = &
rtDW . nedh5efh1d ; } else if ( rtDW . ix3yptllqh < rtDW . efzvv4xbrg ) {
rtDW . ix3yptllqh = ssGetT ( rtS ) ; lastU = & rtDW . mgirnwhnpt ; } else {
rtDW . efzvv4xbrg = ssGetT ( rtS ) ; lastU = & rtDW . nedh5efh1d ; } * lastU
= rtB . okts5kdm5o ; if ( rtDW . fyesrwfyxs == ( rtInf ) ) { rtDW .
fyesrwfyxs = ssGetT ( rtS ) ; lastU = & rtDW . okkbu2wqmk ; } else if ( rtDW
. npcngz0wrj == ( rtInf ) ) { rtDW . npcngz0wrj = ssGetT ( rtS ) ; lastU = &
rtDW . es1ux2mjsf ; } else if ( rtDW . fyesrwfyxs < rtDW . npcngz0wrj ) {
rtDW . fyesrwfyxs = ssGetT ( rtS ) ; lastU = & rtDW . okkbu2wqmk ; } else {
rtDW . npcngz0wrj = ssGetT ( rtS ) ; lastU = & rtDW . es1ux2mjsf ; } * lastU
= rtB . fqteuw4yxc ; if ( rtDW . jicbjxqfry == ( rtInf ) ) { rtDW .
jicbjxqfry = ssGetT ( rtS ) ; lastU = & rtDW . lypptgpmwb ; } else if ( rtDW
. ixuvrapcqk == ( rtInf ) ) { rtDW . ixuvrapcqk = ssGetT ( rtS ) ; lastU = &
rtDW . pjef5afbxz ; } else if ( rtDW . jicbjxqfry < rtDW . ixuvrapcqk ) {
rtDW . jicbjxqfry = ssGetT ( rtS ) ; lastU = & rtDW . lypptgpmwb ; } else {
rtDW . ixuvrapcqk = ssGetT ( rtS ) ; lastU = & rtDW . pjef5afbxz ; } * lastU
= rtB . fqvyzg1ikz ; if ( rtDW . nbm4ws3vkn == ( rtInf ) ) { rtDW .
nbm4ws3vkn = ssGetT ( rtS ) ; lastU = & rtDW . fmlsxd0jl0 ; } else if ( rtDW
. imedkbs3vt == ( rtInf ) ) { rtDW . imedkbs3vt = ssGetT ( rtS ) ; lastU = &
rtDW . m0gui1x1iv ; } else if ( rtDW . nbm4ws3vkn < rtDW . imedkbs3vt ) {
rtDW . nbm4ws3vkn = ssGetT ( rtS ) ; lastU = & rtDW . fmlsxd0jl0 ; } else {
rtDW . imedkbs3vt = ssGetT ( rtS ) ; lastU = & rtDW . m0gui1x1iv ; } * lastU
= rtB . erks3kjsiv ; if ( rtDW . e3rgb100pi == ( rtInf ) ) { rtDW .
e3rgb100pi = ssGetT ( rtS ) ; lastU = & rtDW . ndznpin2w5 ; } else if ( rtDW
. im03fvpgjh == ( rtInf ) ) { rtDW . im03fvpgjh = ssGetT ( rtS ) ; lastU = &
rtDW . g101uqyqvk ; } else if ( rtDW . e3rgb100pi < rtDW . im03fvpgjh ) {
rtDW . e3rgb100pi = ssGetT ( rtS ) ; lastU = & rtDW . ndznpin2w5 ; } else {
rtDW . im03fvpgjh = ssGetT ( rtS ) ; lastU = & rtDW . g101uqyqvk ; } * lastU
= rtB . noumlvysto ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> lmp1jlws1q =
rtB . n2t2mlsekr ; _rtXdot -> dvsvf5wljn = rtB . fvuuli3ztl ; _rtXdot ->
pjq3y0vbqc = rtB . broln0hw2t ; _rtXdot -> muultjrzks = rtB . gw3i35j4jt ;
_rtXdot -> l2m5ltsubp = rtB . gmm2zbtxb5 ; _rtXdot -> oqbdmgd0ck = rtB .
iypnm5k2l0 ; _rtXdot -> nw0blrtueg = rtB . dtg5wvfw12 ; _rtXdot -> b5w4zdghl5
= rtB . gjtd0nf3yk ; _rtXdot -> d1vv0rjnt2 = rtB . h1tqpswb1i ; _rtXdot ->
l3pq51pl0v = rtB . ejvulga4w5 ; _rtXdot -> derj2qzpjf = rtB . nfpwdpoxim ;
_rtXdot -> ig1kllb5t1 = rtB . ikvsnzuqkx ; _rtXdot -> m33tqgudkc = rtB .
hjojlg0ri5 ; _rtXdot -> ou0e404rmu = rtB . kt5xgzm5wk ; _rtXdot -> cxw3eeosyw
= rtB . p5kow5ymrx ; _rtXdot -> ev5tiefchl = rtB . m0xb24biyp ; _rtXdot ->
ifchgpw41h = rtB . pcnfbwkpz5 ; _rtXdot -> nwkcijvubd = rtB . hzqxysogc2 ;
_rtXdot -> lua2wyjxlz = rtB . ct0ubq0p0f ; _rtXdot -> hoe45xg5l1 = rtB .
eoisisc0h1 ; _rtXdot -> pvts5x1qi0 = rtB . gqiev5b33f ; _rtXdot -> dfdozw0qju
= rtB . pidyrnfhb3 ; _rtXdot -> pwzhugspii = rtB . nzubxg3nw3 ; _rtXdot ->
bw5bxl3emz = rtB . grifkcmi1k ; _rtXdot -> la0kq4504w = rtB . guz0wqnnqa ;
_rtXdot -> al3wmpyaa1 = rtB . mjx4alvhfz ; _rtXdot -> nt03o0lbau = rtB .
igvbfe0ygp ; _rtXdot -> mjgjmcyafa = rtB . c4cweg1v0h ; _rtXdot -> ju3cx4z2kg
= rtB . l4chavwt1y ; _rtXdot -> mxt02um1sk = rtB . lmucwinbfn ; _rtXdot ->
h5bds2funr = rtB . adb2qyporg ; _rtXdot -> obu1t4d3fm = rtB . mx2cm2pvr4 ;
_rtXdot -> dxslzurzcr = rtB . idi4whozok ; _rtXdot -> cgymruyhg4 = rtB .
l4cyjj3vsn ; _rtXdot -> mfkdlg3wcn = rtB . hhlbdzptb2 ; _rtXdot -> mhgsfskkwq
= rtB . p5bhm1alpr ; _rtXdot -> gzcp4vv3sa = rtB . d3zfzrw4bi ; _rtXdot ->
h0r5nq1np1 = rtB . k1js0bv5xd ; _rtXdot -> ozr1b5mdiv = rtB . jfdgkrfi4h ;
_rtXdot -> k2dc21zk5j = rtB . n1je2tac3l ; _rtXdot -> czddacw2q5 = rtB .
p5zejio25u ; _rtXdot -> dkzvp0zlco = rtB . ohwv2asfpz ; _rtXdot -> j3b1dd4rrz
= rtB . k1n0tqzloq ; _rtXdot -> lwywyqed5i = rtB . cb4fxdwmq5 ; _rtXdot ->
b5odf1vso5 = rtB . elq41p5fyk ; _rtXdot -> o1gw4caqxa = rtB . nmk23uk2rt ;
_rtXdot -> gzyfptfl3t = rtB . burl4etjnv ; _rtXdot -> m5y0b1f4ds = rtB .
coaqjxrgps ; _rtXdot -> li3l2cwoj1 = rtB . mdf4wtsctx ; _rtXdot -> lbblib2jj3
= rtB . osuw2n2p5c ; _rtXdot -> ixqfbvvrqq = rtB . mehi2jgtqv ; _rtXdot ->
irzbjopfdt = rtB . fsigdbugsv ; _rtXdot -> e2ng2yt2cq = rtB . azguj351yz ;
_rtXdot -> ewln0r2fz3 = rtB . mracf5jvtq ; _rtXdot -> ngyoiwrxa1 = rtB .
nfcrfmczg0 ; _rtXdot -> frk2bafzxw = rtB . psd0qi2uaw ; _rtXdot -> f3kt0qvhxp
= rtB . obgc5k0p33 ; _rtXdot -> d1dqkqdeq2 = rtB . med3sdiiqq ; _rtXdot ->
pviwr55jyx = rtB . gc4vdbdowg ; _rtXdot -> ctyxh2raia = rtB . jkr1aqos5k ;
_rtXdot -> ipbbbqqcmt = rtB . pe1rpjuvjl ; _rtXdot -> lu2ujrk2ss = rtB .
nu1cnqvuqs ; _rtXdot -> lhu2d3f2ic = rtB . c3brafoy2k ; _rtXdot -> bvjygku5w3
= rtB . dqmjmxx1rh ; _rtXdot -> awijrgo5wm = rtB . co5el4lvj3 ; _rtXdot ->
huag3gyiah = rtB . fxkutufqvt ; _rtXdot -> l4w55j32bm = rtB . p3gscgvcwg ;
_rtXdot -> gywjrxv55s = rtB . bqmfichlii ; _rtXdot -> etb0rkmw41 = rtB .
a5pbo201xh ; _rtXdot -> j21i42iaxm = rtB . bvqsnkcgtl ; _rtXdot -> lmhoguyign
= rtB . e3ouvrfmhd ; _rtXdot -> kfxedfgmub = rtB . mk4pik4iwf ; _rtXdot ->
jdy4bhdf2w = rtB . miesiu5v0m ; _rtXdot -> ik24wcoua3 = rtB . iskktr4j12 ;
_rtXdot -> hkz0a2vtcs = rtB . pifpto3vrs ; _rtXdot -> do2eu3ewib = rtB .
fju0kavd21 ; _rtXdot -> o0mzlxndfd = rtB . fhwcynxoam ; _rtXdot -> muzcxum1ac
= rtB . kgpvjsrcvv ; _rtXdot -> lsji1c25s5 = rtB . eoxpu4hzbr ; _rtXdot ->
nwyypn00k3 = rtB . nyhs3wxqky ; _rtXdot -> adlq2c0wq1 = rtB . epn1xunf0k ;
_rtXdot -> i4cw2jspdx = rtB . p2h10oncgq ; _rtXdot -> of00aunqxu = rtB .
cfkwt4rup1 ; _rtXdot -> lwagfwnwie = rtB . ixcs0kb5cd ; _rtXdot -> pjvklj4szi
= rtB . klwi41ft0p ; _rtXdot -> acnidcfmgv = rtB . fm4y3ciqlx ; _rtXdot ->
lijh2swrpw = rtB . ii4tea1b5f ; _rtXdot -> jppvzfe0an = rtB . e3lde0qeyw ;
_rtXdot -> g5w4koxf0l = rtB . abbyqwzn2p ; _rtXdot -> fow5rkn0z1 = rtB .
ld3lnycffc ; _rtXdot -> lgduvgp5n3 = rtB . ihej1dufhd ; _rtXdot -> fypx2u0nu4
= rtB . m23o2msgfd ; _rtXdot -> fy55ynfqoc = rtB . pmn2jinf1c ; _rtXdot ->
fmatfc2vzb = rtB . no4p0gupxp ; _rtXdot -> ghwaun2q4z = rtB . damv1eafhe ;
_rtXdot -> grsxmlptlz = rtB . npu5vs3ku4 ; _rtXdot -> lhv23sybik = rtB .
ljqvy22dik ; _rtXdot -> phxnmexg5m = rtB . l45te5hz52 ; _rtXdot -> eon1excs1b
= rtB . agh1kwbpao ; _rtXdot -> b0h1snyqm3 = rtB . eclcbu2vsx ; _rtXdot ->
dey1qh2tff = rtB . digls4x4pq ; _rtXdot -> kctwtdh12v = rtB . b2ndeegab5 ;
_rtXdot -> kjzjtgp2iz = rtB . hgu05vg5ey ; _rtXdot -> flstcqpmom = rtB .
av5yyqtlqj ; _rtXdot -> o5c0ah2apc = rtB . gzexghqqmo ; _rtXdot -> o0rr4etxc1
= rtB . kzsg1fqtyq ; _rtXdot -> jwvpzqa0r5 = rtB . noefdhhzfu ; _rtXdot ->
n3lfk4kfkd = rtB . gd5vxikjkr ; _rtXdot -> kxrzrzcrxq = rtB . kwmuy04gkx ;
_rtXdot -> kjlmncixpi = rtB . hvsg45qqtb ; _rtXdot -> j3ycbllr1p = rtB .
frzlwgxrx5 ; _rtXdot -> eqelhjati2 = rtB . drxzhltnzx ; _rtXdot -> jqtzx31zch
= rtB . ipvxqb0no1 ; _rtXdot -> fhtwvoc0b2 = rtB . gotvrd1vif ; _rtXdot ->
jf4ybj03im = rtB . pzj42wytaw ; _rtXdot -> la1zyfaj31 = rtB . ass5152o0p ;
_rtXdot -> bg2txxrlvm = rtB . isgzklolke ; _rtXdot -> gm5iqrsymu = rtB .
namigiwbdi ; _rtXdot -> nwlxtpgtgk = rtB . kkydadivym ; _rtXdot -> gd4laa4feb
= rtB . bhvrcdxqst ; _rtXdot -> nqvlxtcqv3 = rtB . ch4uam4zhi ; _rtXdot ->
fndb2brp1l = rtB . nbabvypszj ; _rtXdot -> nv44eqthra = rtB . fiqq3mnurr ;
_rtXdot -> nyrhlyopms = rtB . pyr2tnvc0u ; _rtXdot -> cxtj11s55z = rtB .
g3mbejedbn ; _rtXdot -> ehadcyaees = rtB . lhnyhfj4ax ; _rtXdot -> dgwu2bgatn
= rtB . cjqsc2yb0r ; _rtXdot -> ggjcmhsrmo = rtB . jxuw3gofsa ; _rtXdot ->
dw2opfbpq2 = rtB . ksoaeoigyx ; _rtXdot -> iwolbcbvo0 = rtB . odpucuep24 ;
_rtXdot -> ix5bvh54da = rtB . jsto1jr5xg ; _rtXdot -> da5ubbeqhs = rtB .
oispyu5oso ; _rtXdot -> krepniuh0b = rtB . jvr4p53sde ; _rtXdot -> kjxmjp3orc
= rtB . khk5ku0koj ; _rtXdot -> gledeu45c1 = rtB . jn5pbppnc1 ; _rtXdot ->
g1lkjatm4p = rtB . j1xjnt2uqz ; _rtXdot -> cs2mamav0r = rtB . kn0q25hdzu ;
_rtXdot -> lyfoylyp5z = rtB . cgmyxly24o ; _rtXdot -> c31qtbt14e = rtB .
m4khsgkfuv ; _rtXdot -> d0jgzgn4lu = rtB . k53z01ef4w ; _rtXdot -> ltkpug5sy2
= rtB . brlxhg14if ; _rtXdot -> mv4nouezpl = rtB . bh5zn5qbok ; _rtXdot ->
l3ukeljw21 = rtB . mehc4ezk5i ; _rtXdot -> magrozyij1 = rtB . dly0u2si3d ;
_rtXdot -> lueloh21s1 = rtB . hcpmnd4tvl ; _rtXdot -> dbyhcjasi5 = rtB .
hozjtrrg3w ; _rtXdot -> cnlosicvyb = rtB . n0btpczb4e ; _rtXdot -> jnl1six2fc
= rtB . icn3tc3wmy ; _rtXdot -> lehjmsphyv = rtB . e1mg3zha3r ; _rtXdot ->
ee4q0hpg5w = rtB . p1bin1tn4s ; _rtXdot -> nueeodfbss = rtB . aa3he3tbbh ;
_rtXdot -> c2ou34j4st = rtB . m550tb0xb0 ; _rtXdot -> pjv4cmmakb = rtB .
kgsz3eq5q3 ; _rtXdot -> gn1w3zxddg = rtB . ct235dqmgw ; _rtXdot -> bkgm0k2m5i
= rtB . myc5fy31uv ; _rtXdot -> hrngp2ds5w = rtB . l24o5drtvc ; } void
MdlProjection ( void ) { } void MdlTerminate ( void ) { { if ( rtDW .
cvepqulsyo . AQHandles ) { sdiTerminateStreaming ( & rtDW . cvepqulsyo .
AQHandles ) ; } } { if ( rtDW . ger1swbgma . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ger1swbgma . AQHandles ) ; } } { if ( rtDW .
ga4t3zelrc . AQHandles ) { sdiTerminateStreaming ( & rtDW . ga4t3zelrc .
AQHandles ) ; } } { if ( rtDW . d4n3os3ohs . AQHandles ) {
sdiTerminateStreaming ( & rtDW . d4n3os3ohs . AQHandles ) ; } } { if ( rtDW .
olwfo1ugp5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . olwfo1ugp5 .
AQHandles ) ; } } { if ( rtDW . gtuoyzkuzx . AQHandles ) {
sdiTerminateStreaming ( & rtDW . gtuoyzkuzx . AQHandles ) ; } } { if ( rtDW .
d41yioycvk . AQHandles ) { sdiTerminateStreaming ( & rtDW . d41yioycvk .
AQHandles ) ; } } { if ( rtDW . byipnpz0u1 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . byipnpz0u1 . AQHandles ) ; } } { if ( rtDW .
do54evbx0n . AQHandles ) { sdiTerminateStreaming ( & rtDW . do54evbx0n .
AQHandles ) ; } } { if ( rtDW . a2bbryrbza . AQHandles ) {
sdiTerminateStreaming ( & rtDW . a2bbryrbza . AQHandles ) ; } } { if ( rtDW .
nvefxlsyrk . AQHandles ) { sdiTerminateStreaming ( & rtDW . nvefxlsyrk .
AQHandles ) ; } } { if ( rtDW . ko23np5x5x . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ko23np5x5x . AQHandles ) ; } } { if ( rtDW .
f30xrwjxf1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . f30xrwjxf1 .
AQHandles ) ; } } { if ( rtDW . fz1gqd4d4r . AQHandles ) {
sdiTerminateStreaming ( & rtDW . fz1gqd4d4r . AQHandles ) ; } } { if ( rtDW .
kqtugum2z4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . kqtugum2z4 .
AQHandles ) ; } } { if ( rtDW . lvqusllkau . AQHandles ) {
sdiTerminateStreaming ( & rtDW . lvqusllkau . AQHandles ) ; } } { if ( rtDW .
icta4fc2c5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . icta4fc2c5 .
AQHandles ) ; } } { if ( rtDW . iyfvfn4ifq . AQHandles ) {
sdiTerminateStreaming ( & rtDW . iyfvfn4ifq . AQHandles ) ; } } { if ( rtDW .
olwfo1ugp5k . AQHandles ) { sdiTerminateStreaming ( & rtDW . olwfo1ugp5k .
AQHandles ) ; } } { if ( rtDW . olwfo1ugp5kj . AQHandles ) {
sdiTerminateStreaming ( & rtDW . olwfo1ugp5kj . AQHandles ) ; } } { if ( rtDW
. olwfo1ugp5kjg . AQHandles ) { sdiTerminateStreaming ( & rtDW .
olwfo1ugp5kjg . AQHandles ) ; } } } static void
mr_SwarmSMC2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_SwarmSMC2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SwarmSMC2_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_SwarmSMC2_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SwarmSMC2_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SwarmSMC2_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SwarmSMC2_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_SwarmSMC2_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_SwarmSMC2_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_SwarmSMC2_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SwarmSMC2_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SwarmSMC2_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SwarmSMC2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SwarmSMC2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SwarmSMC2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SwarmSMC2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_SwarmSMC2_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 68 ] = {
"rtDW.d1w1ptz3pi" , "rtDW.eswhoiqpgv" , "rtDW.arilnfbogf" , "rtDW.kva0zescbq"
, "rtDW.hgj1s3xddi" , "rtDW.lzpxk2xcrl" , "rtDW.kdhn3disiv" ,
"rtDW.b350d4lkxg" , "rtDW.djd0izxljn" , "rtDW.b1tjfatcvu" , "rtDW.gp4qxs0jny"
, "rtDW.cjugb23rv3" , "rtDW.fd0y4m0axt" , "rtDW.dtzaql1t41" ,
"rtDW.dv0pjwza2t" , "rtDW.hag2tmzxq4" , "rtDW.azzm52nqwi" , "rtDW.fkjod2apq5"
, "rtDW.oyrlkmn3mo" , "rtDW.gtrm0fav21" , "rtDW.orwknhwt4c" ,
"rtDW.nxu23jmfq3" , "rtDW.ciurdviajr" , "rtDW.lqnqkoaiiq" , "rtDW.jznxtwrdhr"
, "rtDW.plk4jigknp" , "rtDW.ns4o4be1dk" , "rtDW.is4uwefdli" ,
"rtDW.jdb2xhicuf" , "rtDW.eiahtdjei5" , "rtDW.nfmtckz5ig" , "rtDW.oe5wqb2qpx"
, "rtDW.hnlz54wdxg" , "rtDW.biumseuk2t" , "rtDW.hi3ccp4tdk" ,
"rtDW.djewj0wij2" , "rtDW.px2bsuejyw" , "rtDW.b4ma5udaih" , "rtDW.mzfqs1evtc"
, "rtDW.kjc3mzi05m" , "rtDW.hfcw5k2d4i" , "rtDW.dds1lvrxbl" ,
"rtDW.pzqvd5drtk" , "rtDW.bex0xz0uof" , "rtDW.jh2zw2mkrg" , "rtDW.nls23awnpg"
, "rtDW.mqewdswekk" , "rtDW.hl3xxenjxg" , "rtDW.ix3yptllqh" ,
"rtDW.mgirnwhnpt" , "rtDW.efzvv4xbrg" , "rtDW.nedh5efh1d" , "rtDW.fyesrwfyxs"
, "rtDW.okkbu2wqmk" , "rtDW.npcngz0wrj" , "rtDW.es1ux2mjsf" ,
"rtDW.jicbjxqfry" , "rtDW.lypptgpmwb" , "rtDW.ixuvrapcqk" , "rtDW.pjef5afbxz"
, "rtDW.nbm4ws3vkn" , "rtDW.fmlsxd0jl0" , "rtDW.imedkbs3vt" ,
"rtDW.m0gui1x1iv" , "rtDW.e3rgb100pi" , "rtDW.ndznpin2w5" , "rtDW.im03fvpgjh"
, "rtDW.g101uqyqvk" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
68 , rtdwDataFieldNames ) ; mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 ,
0 , ( const void * ) & ( rtDW . d1w1ptz3pi ) , sizeof ( rtDW . d1w1ptz3pi ) )
; mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . eswhoiqpgv ) , sizeof ( rtDW . eswhoiqpgv ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . arilnfbogf ) , sizeof ( rtDW . arilnfbogf ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . kva0zescbq ) , sizeof ( rtDW . kva0zescbq ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . hgj1s3xddi ) , sizeof ( rtDW . hgj1s3xddi ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . lzpxk2xcrl ) , sizeof ( rtDW . lzpxk2xcrl ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . kdhn3disiv ) , sizeof ( rtDW . kdhn3disiv ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . b350d4lkxg ) , sizeof ( rtDW . b350d4lkxg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . djd0izxljn ) , sizeof ( rtDW . djd0izxljn ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . b1tjfatcvu ) , sizeof ( rtDW . b1tjfatcvu ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . gp4qxs0jny ) , sizeof ( rtDW . gp4qxs0jny ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . cjugb23rv3 ) , sizeof ( rtDW . cjugb23rv3 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . fd0y4m0axt ) , sizeof ( rtDW . fd0y4m0axt ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . dtzaql1t41 ) , sizeof ( rtDW . dtzaql1t41 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . dv0pjwza2t ) , sizeof ( rtDW . dv0pjwza2t ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . hag2tmzxq4 ) , sizeof ( rtDW . hag2tmzxq4 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . azzm52nqwi ) , sizeof ( rtDW . azzm52nqwi ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . fkjod2apq5 ) , sizeof ( rtDW . fkjod2apq5 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . oyrlkmn3mo ) , sizeof ( rtDW . oyrlkmn3mo ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . gtrm0fav21 ) , sizeof ( rtDW . gtrm0fav21 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . orwknhwt4c ) , sizeof ( rtDW . orwknhwt4c ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . nxu23jmfq3 ) , sizeof ( rtDW . nxu23jmfq3 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . ciurdviajr ) , sizeof ( rtDW . ciurdviajr ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . lqnqkoaiiq ) , sizeof ( rtDW . lqnqkoaiiq ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . jznxtwrdhr ) , sizeof ( rtDW . jznxtwrdhr ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . plk4jigknp ) , sizeof ( rtDW . plk4jigknp ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
rtDW . ns4o4be1dk ) , sizeof ( rtDW . ns4o4be1dk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
rtDW . is4uwefdli ) , sizeof ( rtDW . is4uwefdli ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
rtDW . jdb2xhicuf ) , sizeof ( rtDW . jdb2xhicuf ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
rtDW . eiahtdjei5 ) , sizeof ( rtDW . eiahtdjei5 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
rtDW . nfmtckz5ig ) , sizeof ( rtDW . nfmtckz5ig ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
rtDW . oe5wqb2qpx ) , sizeof ( rtDW . oe5wqb2qpx ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
rtDW . hnlz54wdxg ) , sizeof ( rtDW . hnlz54wdxg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
rtDW . biumseuk2t ) , sizeof ( rtDW . biumseuk2t ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
rtDW . hi3ccp4tdk ) , sizeof ( rtDW . hi3ccp4tdk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
rtDW . djewj0wij2 ) , sizeof ( rtDW . djewj0wij2 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
rtDW . px2bsuejyw ) , sizeof ( rtDW . px2bsuejyw ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
rtDW . b4ma5udaih ) , sizeof ( rtDW . b4ma5udaih ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
rtDW . mzfqs1evtc ) , sizeof ( rtDW . mzfqs1evtc ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
rtDW . kjc3mzi05m ) , sizeof ( rtDW . kjc3mzi05m ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
rtDW . hfcw5k2d4i ) , sizeof ( rtDW . hfcw5k2d4i ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
rtDW . dds1lvrxbl ) , sizeof ( rtDW . dds1lvrxbl ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
rtDW . pzqvd5drtk ) , sizeof ( rtDW . pzqvd5drtk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
rtDW . bex0xz0uof ) , sizeof ( rtDW . bex0xz0uof ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
rtDW . jh2zw2mkrg ) , sizeof ( rtDW . jh2zw2mkrg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
rtDW . nls23awnpg ) , sizeof ( rtDW . nls23awnpg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
rtDW . mqewdswekk ) , sizeof ( rtDW . mqewdswekk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
rtDW . hl3xxenjxg ) , sizeof ( rtDW . hl3xxenjxg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
rtDW . ix3yptllqh ) , sizeof ( rtDW . ix3yptllqh ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
rtDW . mgirnwhnpt ) , sizeof ( rtDW . mgirnwhnpt ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
rtDW . efzvv4xbrg ) , sizeof ( rtDW . efzvv4xbrg ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
rtDW . nedh5efh1d ) , sizeof ( rtDW . nedh5efh1d ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
rtDW . fyesrwfyxs ) , sizeof ( rtDW . fyesrwfyxs ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
rtDW . okkbu2wqmk ) , sizeof ( rtDW . okkbu2wqmk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
rtDW . npcngz0wrj ) , sizeof ( rtDW . npcngz0wrj ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
rtDW . es1ux2mjsf ) , sizeof ( rtDW . es1ux2mjsf ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
rtDW . jicbjxqfry ) , sizeof ( rtDW . jicbjxqfry ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
rtDW . lypptgpmwb ) , sizeof ( rtDW . lypptgpmwb ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
rtDW . ixuvrapcqk ) , sizeof ( rtDW . ixuvrapcqk ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
rtDW . pjef5afbxz ) , sizeof ( rtDW . pjef5afbxz ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
rtDW . nbm4ws3vkn ) , sizeof ( rtDW . nbm4ws3vkn ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
rtDW . fmlsxd0jl0 ) , sizeof ( rtDW . fmlsxd0jl0 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
rtDW . imedkbs3vt ) , sizeof ( rtDW . imedkbs3vt ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
rtDW . m0gui1x1iv ) , sizeof ( rtDW . m0gui1x1iv ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
rtDW . e3rgb100pi ) , sizeof ( rtDW . e3rgb100pi ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
rtDW . ndznpin2w5 ) , sizeof ( rtDW . ndznpin2w5 ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
rtDW . im03fvpgjh ) , sizeof ( rtDW . im03fvpgjh ) ) ;
mr_SwarmSMC2_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
rtDW . g101uqyqvk ) , sizeof ( rtDW . g101uqyqvk ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_SwarmSMC2_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ; mr_SwarmSMC2_restoreDataFromMxArray
( ( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . d1w1ptz3pi ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . d1w1ptz3pi ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . eswhoiqpgv ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . eswhoiqpgv ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . arilnfbogf ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . arilnfbogf ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . kva0zescbq ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . kva0zescbq ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hgj1s3xddi ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . hgj1s3xddi ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lzpxk2xcrl ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . lzpxk2xcrl ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . kdhn3disiv ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . kdhn3disiv ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . b350d4lkxg ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . b350d4lkxg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . djd0izxljn ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . djd0izxljn ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . b1tjfatcvu ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . b1tjfatcvu ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gp4qxs0jny ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . gp4qxs0jny ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . cjugb23rv3 ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . cjugb23rv3 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fd0y4m0axt ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . fd0y4m0axt ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dtzaql1t41 ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . dtzaql1t41 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dv0pjwza2t ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . dv0pjwza2t ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hag2tmzxq4 ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . hag2tmzxq4 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . azzm52nqwi ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . azzm52nqwi ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fkjod2apq5 ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . fkjod2apq5 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . oyrlkmn3mo ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . oyrlkmn3mo ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gtrm0fav21 ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . gtrm0fav21 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . orwknhwt4c ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . orwknhwt4c ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nxu23jmfq3 ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . nxu23jmfq3 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ciurdviajr ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . ciurdviajr ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lqnqkoaiiq ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . lqnqkoaiiq ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jznxtwrdhr ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . jznxtwrdhr ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . plk4jigknp ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . plk4jigknp ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ns4o4be1dk ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . ns4o4be1dk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . is4uwefdli ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . is4uwefdli ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jdb2xhicuf ) ,
rtdwData , 0 , 28 , sizeof ( rtDW . jdb2xhicuf ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . eiahtdjei5 ) ,
rtdwData , 0 , 29 , sizeof ( rtDW . eiahtdjei5 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nfmtckz5ig ) ,
rtdwData , 0 , 30 , sizeof ( rtDW . nfmtckz5ig ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . oe5wqb2qpx ) ,
rtdwData , 0 , 31 , sizeof ( rtDW . oe5wqb2qpx ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hnlz54wdxg ) ,
rtdwData , 0 , 32 , sizeof ( rtDW . hnlz54wdxg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . biumseuk2t ) ,
rtdwData , 0 , 33 , sizeof ( rtDW . biumseuk2t ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hi3ccp4tdk ) ,
rtdwData , 0 , 34 , sizeof ( rtDW . hi3ccp4tdk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . djewj0wij2 ) ,
rtdwData , 0 , 35 , sizeof ( rtDW . djewj0wij2 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . px2bsuejyw ) ,
rtdwData , 0 , 36 , sizeof ( rtDW . px2bsuejyw ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . b4ma5udaih ) ,
rtdwData , 0 , 37 , sizeof ( rtDW . b4ma5udaih ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . mzfqs1evtc ) ,
rtdwData , 0 , 38 , sizeof ( rtDW . mzfqs1evtc ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . kjc3mzi05m ) ,
rtdwData , 0 , 39 , sizeof ( rtDW . kjc3mzi05m ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hfcw5k2d4i ) ,
rtdwData , 0 , 40 , sizeof ( rtDW . hfcw5k2d4i ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dds1lvrxbl ) ,
rtdwData , 0 , 41 , sizeof ( rtDW . dds1lvrxbl ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pzqvd5drtk ) ,
rtdwData , 0 , 42 , sizeof ( rtDW . pzqvd5drtk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . bex0xz0uof ) ,
rtdwData , 0 , 43 , sizeof ( rtDW . bex0xz0uof ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jh2zw2mkrg ) ,
rtdwData , 0 , 44 , sizeof ( rtDW . jh2zw2mkrg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nls23awnpg ) ,
rtdwData , 0 , 45 , sizeof ( rtDW . nls23awnpg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . mqewdswekk ) ,
rtdwData , 0 , 46 , sizeof ( rtDW . mqewdswekk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hl3xxenjxg ) ,
rtdwData , 0 , 47 , sizeof ( rtDW . hl3xxenjxg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ix3yptllqh ) ,
rtdwData , 0 , 48 , sizeof ( rtDW . ix3yptllqh ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . mgirnwhnpt ) ,
rtdwData , 0 , 49 , sizeof ( rtDW . mgirnwhnpt ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . efzvv4xbrg ) ,
rtdwData , 0 , 50 , sizeof ( rtDW . efzvv4xbrg ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nedh5efh1d ) ,
rtdwData , 0 , 51 , sizeof ( rtDW . nedh5efh1d ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fyesrwfyxs ) ,
rtdwData , 0 , 52 , sizeof ( rtDW . fyesrwfyxs ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . okkbu2wqmk ) ,
rtdwData , 0 , 53 , sizeof ( rtDW . okkbu2wqmk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . npcngz0wrj ) ,
rtdwData , 0 , 54 , sizeof ( rtDW . npcngz0wrj ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . es1ux2mjsf ) ,
rtdwData , 0 , 55 , sizeof ( rtDW . es1ux2mjsf ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jicbjxqfry ) ,
rtdwData , 0 , 56 , sizeof ( rtDW . jicbjxqfry ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lypptgpmwb ) ,
rtdwData , 0 , 57 , sizeof ( rtDW . lypptgpmwb ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ixuvrapcqk ) ,
rtdwData , 0 , 58 , sizeof ( rtDW . ixuvrapcqk ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pjef5afbxz ) ,
rtdwData , 0 , 59 , sizeof ( rtDW . pjef5afbxz ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nbm4ws3vkn ) ,
rtdwData , 0 , 60 , sizeof ( rtDW . nbm4ws3vkn ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fmlsxd0jl0 ) ,
rtdwData , 0 , 61 , sizeof ( rtDW . fmlsxd0jl0 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . imedkbs3vt ) ,
rtdwData , 0 , 62 , sizeof ( rtDW . imedkbs3vt ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . m0gui1x1iv ) ,
rtdwData , 0 , 63 , sizeof ( rtDW . m0gui1x1iv ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . e3rgb100pi ) ,
rtdwData , 0 , 64 , sizeof ( rtDW . e3rgb100pi ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ndznpin2w5 ) ,
rtdwData , 0 , 65 , sizeof ( rtDW . ndznpin2w5 ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . im03fvpgjh ) ,
rtdwData , 0 , 66 , sizeof ( rtDW . im03fvpgjh ) ) ;
mr_SwarmSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . g101uqyqvk ) ,
rtdwData , 0 , 67 , sizeof ( rtDW . g101uqyqvk ) ) ; } } mxArray *
mr_SwarmSMC2_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char *
blockPath [ 10 ] = { "SwarmSMC2/Scope" , "SwarmSMC2/Scope1" ,
"SwarmSMC2/Scope10" , "SwarmSMC2/Scope11" , "SwarmSMC2/Scope12" ,
"SwarmSMC2/Scope13" , "SwarmSMC2/Scope14" , "SwarmSMC2/Scope15" ,
"SwarmSMC2/Scope16" , "SwarmSMC2/Scope17" , } ; static const int reason [ 10
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs
[ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 156 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 1104 ) ; ssSetNumBlockIO ( rtS , 268 ) ;
ssSetNumBlockParams ( rtS , 560 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2421417652U ) ;
ssSetChecksumVal ( rtS , 1 , 3265537388U ) ; ssSetChecksumVal ( rtS , 2 ,
2410610641U ) ; ssSetChecksumVal ( rtS , 3 , 1787971325U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 22 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
SwarmSMC2_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "SwarmSMC2" ) ; ssSetPath
( rtS , "SwarmSMC2" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 240.0
) ; ssSetStepSize ( rtS , 0.001 ) ; ssSetFixedStepSize ( rtS , 0.001 ) ; {
static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval =
( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static
int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator"
,
"SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller2/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2&#x9636;PID/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator3"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2/Integrator5"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;2/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_fan/Integrator1"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_theta/Integrator1"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/Sub_xyz/Integrator5"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_psi/Integrator1"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x4F4D;&#x7F6E;&#x73AF;2/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;2/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;3/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;4/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x59FF;&#x6001;&#x73AF;5/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;1/PID Controller/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;1/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_theta/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_psi/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_fan/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_theta/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_psi/Integrator"
,
 "SwarmSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;3/sub_fan/Integrator"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller/Filter/Cont. Filter/Filter"
,
"SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC2/&#x901F;&#x5EA6;&#x73AF;2/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator"
,
"SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator"
,
"SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator2"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/Sub_xyz/Integrator4"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_theta/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_psi/Integrator"
,
 "SwarmSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;2/sub_fan/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 ,
22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37
, 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 ,
53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68
, 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 ,
84 , 85 , 86 , 87 , 88 , 89 , 90 , 91 , 92 , 93 , 94 , 95 , 96 , 97 , 98 , 99
, 100 , 101 , 102 , 103 , 104 , 105 , 106 , 107 , 108 , 109 , 110 , 111 , 112
, 113 , 114 , 115 , 116 , 117 , 118 , 119 , 120 , 121 , 122 , 123 , 124 , 125
, 126 , 127 , 128 , 129 , 130 , 131 , 132 , 133 , 134 , 135 , 136 , 137 , 138
, 139 , 140 , 141 , 142 , 143 , 144 , 145 , 146 , 147 , 148 , 149 , 150 , 151
, 152 , 153 , 154 , 155 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo
= { 156 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 156 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . lmp1jlws1q ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dvsvf5wljn ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . pjq3y0vbqc ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . muultjrzks ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . l2m5ltsubp ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . oqbdmgd0ck ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . nw0blrtueg ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . b5w4zdghl5 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . d1vv0rjnt2 ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . l3pq51pl0v ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . derj2qzpjf ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . ig1kllb5t1 ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . m33tqgudkc ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . ou0e404rmu ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . cxw3eeosyw ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . ev5tiefchl ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . ifchgpw41h ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . nwkcijvubd ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . lua2wyjxlz ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . hoe45xg5l1 ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . pvts5x1qi0 ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . dfdozw0qju ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . pwzhugspii ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . bw5bxl3emz ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . la0kq4504w ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . al3wmpyaa1 ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . nt03o0lbau ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . mjgjmcyafa ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . ju3cx4z2kg ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . mxt02um1sk ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . h5bds2funr ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . obu1t4d3fm ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . dxslzurzcr ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . cgymruyhg4 ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . mfkdlg3wcn ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . mhgsfskkwq ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . gzcp4vv3sa ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . h0r5nq1np1 ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . ozr1b5mdiv ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . k2dc21zk5j ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . czddacw2q5 ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . dkzvp0zlco ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . j3b1dd4rrz ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . lwywyqed5i ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . b5odf1vso5 ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . o1gw4caqxa ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . gzyfptfl3t ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . m5y0b1f4ds ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . li3l2cwoj1 ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . lbblib2jj3 ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . ixqfbvvrqq ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . irzbjopfdt ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . e2ng2yt2cq ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . ewln0r2fz3 ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . ngyoiwrxa1 ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . frk2bafzxw ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . f3kt0qvhxp ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . d1dqkqdeq2 ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . pviwr55jyx ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . ctyxh2raia ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . ipbbbqqcmt ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . lu2ujrk2ss ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . lhu2d3f2ic ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . bvjygku5w3 ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . awijrgo5wm ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . huag3gyiah ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . l4w55j32bm ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . gywjrxv55s ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . etb0rkmw41 ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . j21i42iaxm ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . lmhoguyign ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . kfxedfgmub ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . jdy4bhdf2w ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . ik24wcoua3 ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . hkz0a2vtcs ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . do2eu3ewib ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . o0mzlxndfd ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtX . muzcxum1ac ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtX . lsji1c25s5 ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtX . nwyypn00k3 ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtX . adlq2c0wq1 ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtX . i4cw2jspdx ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtX . of00aunqxu ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . lwagfwnwie ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtX . pjvklj4szi ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtX . acnidcfmgv ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtX . lijh2swrpw ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtX . jppvzfe0an ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtX . g5w4koxf0l ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtX . fow5rkn0z1 ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtX . lgduvgp5n3 ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtX . fypx2u0nu4 ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtX . fy55ynfqoc ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtX . fmatfc2vzb ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtX . ghwaun2q4z ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtX . grsxmlptlz ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtX . lhv23sybik ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtX . phxnmexg5m ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtX . eon1excs1b ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtX . b0h1snyqm3 ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtX . dey1qh2tff ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtX . kctwtdh12v ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtX . kjzjtgp2iz ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtX . flstcqpmom ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtX . o5c0ah2apc ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtX . o0rr4etxc1 ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtX . jwvpzqa0r5 ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtX . n3lfk4kfkd ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtX . kxrzrzcrxq ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtX . kjlmncixpi ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtX . j3ycbllr1p ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtX . eqelhjati2 ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtX . jqtzx31zch ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtX . fhtwvoc0b2 ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtX . jf4ybj03im ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtX . la1zyfaj31 ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtX . bg2txxrlvm ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtX . gm5iqrsymu ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtX . nwlxtpgtgk ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtX . gd4laa4feb ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtX . nqvlxtcqv3 ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtX . fndb2brp1l ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtX . nv44eqthra ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtX . nyrhlyopms ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtX . cxtj11s55z ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtX . ehadcyaees ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtX . dgwu2bgatn ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtX . ggjcmhsrmo ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) & rtX . dw2opfbpq2 ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) & rtX . iwolbcbvo0 ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) & rtX . ix5bvh54da ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) & rtX . da5ubbeqhs ;
rt_LoggedStateSignalPtrs [ 132 ] = ( void * ) & rtX . krepniuh0b ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) & rtX . kjxmjp3orc ;
rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) & rtX . gledeu45c1 ;
rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) & rtX . g1lkjatm4p ;
rt_LoggedStateSignalPtrs [ 136 ] = ( void * ) & rtX . cs2mamav0r ;
rt_LoggedStateSignalPtrs [ 137 ] = ( void * ) & rtX . lyfoylyp5z ;
rt_LoggedStateSignalPtrs [ 138 ] = ( void * ) & rtX . c31qtbt14e ;
rt_LoggedStateSignalPtrs [ 139 ] = ( void * ) & rtX . d0jgzgn4lu ;
rt_LoggedStateSignalPtrs [ 140 ] = ( void * ) & rtX . ltkpug5sy2 ;
rt_LoggedStateSignalPtrs [ 141 ] = ( void * ) & rtX . mv4nouezpl ;
rt_LoggedStateSignalPtrs [ 142 ] = ( void * ) & rtX . l3ukeljw21 ;
rt_LoggedStateSignalPtrs [ 143 ] = ( void * ) & rtX . magrozyij1 ;
rt_LoggedStateSignalPtrs [ 144 ] = ( void * ) & rtX . lueloh21s1 ;
rt_LoggedStateSignalPtrs [ 145 ] = ( void * ) & rtX . dbyhcjasi5 ;
rt_LoggedStateSignalPtrs [ 146 ] = ( void * ) & rtX . cnlosicvyb ;
rt_LoggedStateSignalPtrs [ 147 ] = ( void * ) & rtX . jnl1six2fc ;
rt_LoggedStateSignalPtrs [ 148 ] = ( void * ) & rtX . lehjmsphyv ;
rt_LoggedStateSignalPtrs [ 149 ] = ( void * ) & rtX . ee4q0hpg5w ;
rt_LoggedStateSignalPtrs [ 150 ] = ( void * ) & rtX . nueeodfbss ;
rt_LoggedStateSignalPtrs [ 151 ] = ( void * ) & rtX . c2ou34j4st ;
rt_LoggedStateSignalPtrs [ 152 ] = ( void * ) & rtX . pjv4cmmakb ;
rt_LoggedStateSignalPtrs [ 153 ] = ( void * ) & rtX . gn1w3zxddg ;
rt_LoggedStateSignalPtrs [ 154 ] = ( void * ) & rtX . bkgm0k2m5i ;
rt_LoggedStateSignalPtrs [ 155 ] = ( void * ) & rtX . hrngp2ds5w ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 156 ] ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode3" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; ssSetContStateDisabled ( rtS , contStatesDisabled ) ; }
ssSetChecksumVal ( rtS , 0 , 2421417652U ) ; ssSetChecksumVal ( rtS , 1 ,
3265537388U ) ; ssSetChecksumVal ( rtS , 2 , 2410610641U ) ; ssSetChecksumVal
( rtS , 3 , 1787971325U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 6 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_SwarmSMC2_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_SwarmSMC2_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_SwarmSMC2_SetDWork ) ; rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . Saturation_UpperSat_ha4sihnonx =
rtInf ; rtP . Saturation_LowerSat_hvr4bzptww = rtMinusInf ; rtP .
Saturation_UpperSat_n5hle3tqlr = rtInf ; rtP . Saturation_LowerSat_a0f33ks5st
= rtMinusInf ; rtP . Saturation_UpperSat_iukxjbe5ft = rtInf ; rtP .
Saturation_LowerSat_ilaytmc202 = rtMinusInf ; rtP .
Saturation_UpperSat_o3tbzyjvoe = rtInf ; rtP . Saturation_LowerSat_d2hlbm4xvg
= rtMinusInf ; rtP . Saturation_UpperSat_dxx3tvtltv = rtInf ; rtP .
Saturation_LowerSat_gbjicm5kkx = rtMinusInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
