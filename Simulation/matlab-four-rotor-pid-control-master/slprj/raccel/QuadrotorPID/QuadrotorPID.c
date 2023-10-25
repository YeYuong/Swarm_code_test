#include "QuadrotorPID.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "QuadrotorPID_private.h"
#include "rt_logging_mmi.h"
#include "QuadrotorPID_capi.h"
#include "QuadrotorPID_dt.h"
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
& model_S ; void MdlInitialize ( void ) { rtX . igd3snjblj = rtP .
Integrator1_IC ; rtX . etdl4ff1yw = rtP . Integrator1_IC_njked3y5ka ; rtX .
jlsnkjzuui = rtP . Integrator5_IC ; rtDW . lm2k5vvzww = ( rtInf ) ; rtDW .
h0u53urr3o = ( rtInf ) ; rtX . n3v2uj4icr = rtP . Integrator1_IC_heq4ih3sop ;
rtX . c4eahou3a2 = rtP . Integrator1_IC_ggm3f24kg1 ; rtX . ac51n2sp4j = rtP .
PIDController_InitialConditionForIntegrator ; rtX . prwqhr4vft = rtP .
PIDController_InitialConditionForFilter ; rtX . jxm15tdjwh = rtP .
Integrator_IC ; rtX . pycdjv1w4x = rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg ; rtX . hadri33lzr =
rtP . PIDController_InitialConditionForFilter_o14mxov0mo ; rtX . p22yvstcpv =
rtP . Integrator1_IC_mm1y0ejde0 ; rtX . ikgnomxrz4 = rtP . Integrator3_IC ;
rtX . bqbu1h1loj = rtP . Integrator3_IC_nnhhmqfjhs ; rtX . o00gqgtwtr = rtP .
PIDController1_InitialConditionForIntegrator ; rtX . ifbx5pzkea = rtP .
PIDController1_InitialConditionForFilter ; rtX . mdiimyccxs = rtP .
Integrator2_IC ; rtX . oklw5dcacl = rtP .
PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; rtX . pjpvjkdywv =
rtP . PIDController1_InitialConditionForFilter_fwycow5gb3 ; rtX . foimi0t253
= rtP . Integrator4_IC ; rtX . bz00hvk0oc = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . ksfp32xfqk = rtP .
PIDController2_InitialConditionForFilter ; rtX . jwnbcspb14 = rtP .
Integrator1_IC_hluxpggxgx ; rtX . jiwy3snj1v = rtP .
Integrator1_IC_lmb1knnxne ; rtX . nduqb53jft = rtP .
Integrator5_IC_if0dkkc4sn ; rtX . lw3y3pqzun = rtP .
Integrator1_IC_oayqv41ri2 ; rtX . aypiwh2tfj = rtP .
PIDController_InitialConditionForIntegrator_ngy0ewyeg5 ; rtX . mmz0ptqw25 =
rtP . PIDController_InitialConditionForFilter_pi2squh4ih ; rtX . mj3i3jcfzp =
rtP . PIDController1_InitialConditionForIntegrator_g32cn1dkfm ; rtX .
cagl3oaqz1 = rtP . PIDController1_InitialConditionForFilter_kmsdvwdf3m ; rtX
. d4l0qxjzyd = rtP . PIDController2_InitialConditionForIntegrator_pbsngr4knz
; rtX . ixaojduajk = rtP .
PIDController2_InitialConditionForFilter_g0oftxmj3a ; rtDW . ckfus31as1 = (
rtInf ) ; rtDW . nhfwyaiex4 = ( rtInf ) ; rtDW . m021dvz455 = ( rtInf ) ;
rtDW . enbk5dzytw = ( rtInf ) ; rtX . e1z3nxzg5v = rtP .
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; rtX . c2khqwtjvb =
rtP . PIDController_InitialConditionForFilter_jdtq01u0hx ; rtX . csvste2th3 =
rtP . PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; rtX .
i01cpb55fo = rtP . PIDController1_InitialConditionForFilter_e5pnbc3vtr ; rtX
. bj3i15bcwz = rtP . PIDController2_InitialConditionForIntegrator_azyc2l4qmp
; rtX . df0zvglyty = rtP .
PIDController2_InitialConditionForFilter_dlk0zcvwml ; rtX . azlkqw1wi5 = rtP
. PIDController_InitialConditionForIntegrator_i0pcwuwujv ; rtX . ilihbbiz55 =
rtP . PIDController_InitialConditionForFilter_cnipdysl5i ; rtX . lw12bbfguz =
rtP . PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; rtX .
hmnwy1prir = rtP . PIDController1_InitialConditionForFilter_psmuwl2ggt ; rtX
. e5ch1hbmva = rtP . PIDController2_InitialConditionForIntegrator_osgdcreqgv
; rtX . doschmc4db = rtP .
PIDController2_InitialConditionForFilter_p4g1s3metf ; rtX . cpiih44gh1 = rtP
. Integrator_IC_dkmzwnjlda ; rtX . kqllenndwo = rtP .
Integrator_IC_kuhmbxgxyr ; rtX . njnxqh2y05 = rtP . Integrator_IC_pea4zoukn2
; rtX . olihgqj04q = rtP . Integrator_IC_lqzn20lau3 ; rtX . krg0jgzlhu = rtP
. Integrator2_IC_onz01dod3h ; rtX . numodtylcr = rtP .
Integrator4_IC_mfxj3ieh1q ; rtX . ck4utotuds = rtP . Integrator_IC_gxj5snzs0v
; rtX . lpihnf1klp = rtP . Integrator_IC_mwbhsimjtn ; rtX . mawgxlbw22 = rtP
. Integrator_IC_mctvldpkh3 ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jc10nuakae . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a9104397-7132-49d2-ae34-b6dbadcf7b31" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . jc10nuakae . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . jc10nuakae . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . jc10nuakae . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . jc10nuakae .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jc10nuakae . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
jc10nuakae . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
jc10nuakae . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jc10nuakae . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x" ) ; sdiRegisterWksVariable ( rtDW . jc10nuakae . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jnssosikn3 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "0feaefb8-370c-45b8-8ce2-63f76a4b1d31" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . jnssosikn3 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . jnssosikn3 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . jnssosikn3 . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . jnssosikn3 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jnssosikn3 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
jnssosikn3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
jnssosikn3 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jnssosikn3 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y" ) ; sdiRegisterWksVariable ( rtDW . jnssosikn3 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . hfbgxk5sbw . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9495ac6c-18ba-40a2-a51d-76f97ee08597" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . hfbgxk5sbw . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . hfbgxk5sbw . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . hfbgxk5sbw . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . hfbgxk5sbw .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . hfbgxk5sbw . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
hfbgxk5sbw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
hfbgxk5sbw . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . hfbgxk5sbw . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z" ) ; sdiRegisterWksVariable ( rtDW . hfbgxk5sbw . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . e5tycvcjhc . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "11be66e8-e181-4388-945c-dd5f45cdda8c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . e5tycvcjhc . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . e5tycvcjhc . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . e5tycvcjhc . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . e5tycvcjhc .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . e5tycvcjhc . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
e5tycvcjhc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
e5tycvcjhc . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . e5tycvcjhc . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x" ) ; sdiRegisterWksVariable ( rtDW . e5tycvcjhc . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . i4o5lei2sq . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "81ea4707-49e2-4022-95fb-93e39cb21383" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . i4o5lei2sq . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . i4o5lei2sq . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . i4o5lei2sq . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . i4o5lei2sq .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . i4o5lei2sq . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
i4o5lei2sq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
i4o5lei2sq . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . i4o5lei2sq . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y" ) ; sdiRegisterWksVariable ( rtDW . i4o5lei2sq . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "QuadrotorPID/To Workspace5"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . iuujkfk0v5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cccb1447-8c80-4718-a685-17540f03d6f8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . iuujkfk0v5 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . iuujkfk0v5 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . iuujkfk0v5 . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . iuujkfk0v5 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . iuujkfk0v5 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
iuujkfk0v5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
iuujkfk0v5 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . iuujkfk0v5 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z" ) ; sdiRegisterWksVariable ( rtDW . iuujkfk0v5 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { real_T avf2p33qfm ; real_T behracxtlf ;
real_T bme0js3mb1 ; real_T by3jzvahpt ; real_T cg14pmje0y ; real_T e5widbazon
; real_T elzrnliqwb ; real_T g2r5aygpcx ; real_T g4uaoqjo4n ; real_T
ljoleeoftk ; real_T mlthgbuzvl ; real_T ndpdxny11k ; real_T oiu0kn45t0 ;
real_T p1ouuhw0ck ; real_T prfb444tvb ; real_T ptexpunbp0 ; real_T * lastU ;
if ( rtX . igd3snjblj > rtP . Saturation_UpperSat ) { rtB . cbhluqcqju = rtP
. Saturation_UpperSat ; } else if ( rtX . igd3snjblj < rtP .
Saturation_LowerSat ) { rtB . cbhluqcqju = rtP . Saturation_LowerSat ; } else
{ rtB . cbhluqcqju = rtX . igd3snjblj ; } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { } if ( rtX . etdl4ff1yw > rtP . Saturation1_UpperSat ) { rtB . crhr35iead
= rtP . Saturation1_UpperSat ; } else if ( rtX . etdl4ff1yw < rtP .
Saturation1_LowerSat ) { rtB . crhr35iead = rtP . Saturation1_LowerSat ; }
else { rtB . crhr35iead = rtX . etdl4ff1yw ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . iguir2gsge = rtX . jlsnkjzuui ; if ( ( rtDW . lm2k5vvzww >=
ssGetT ( rtS ) ) && ( rtDW . h0u53urr3o >= ssGetT ( rtS ) ) ) { rtB .
lhfzd3onxp = 0.0 ; } else { ndpdxny11k = rtDW . lm2k5vvzww ; lastU = & rtDW .
cncrmenvlq ; if ( rtDW . lm2k5vvzww < rtDW . h0u53urr3o ) { if ( rtDW .
h0u53urr3o < ssGetT ( rtS ) ) { ndpdxny11k = rtDW . h0u53urr3o ; lastU = &
rtDW . ntxpmdsnwm ; } } else if ( rtDW . lm2k5vvzww >= ssGetT ( rtS ) ) {
ndpdxny11k = rtDW . h0u53urr3o ; lastU = & rtDW . ntxpmdsnwm ; } rtB .
lhfzd3onxp = ( rtB . iguir2gsge - * lastU ) / ( ssGetT ( rtS ) - ndpdxny11k )
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . pezzeovqv4 = rtP .
Constant6_Value_ji4ih5grvx + rtX . n3v2uj4icr ; rtB . pi54dzxfx5 = rtP .
Constant1_Value_fgyxvvitry + rtX . c4eahou3a2 ; rtB . itarhbwpjr = rtB .
pezzeovqv4 - rtB . pi54dzxfx5 ; rtB . lq2lccsyip = rtP . Constant6_Value -
rtB . itarhbwpjr ; rtB . erhfmhyu13 = ( rtP . PIDController_D * rtB .
lq2lccsyip - rtX . prwqhr4vft ) * rtP . PIDController_N ; rtB . nveoii5a01 =
( rtP . PIDController_P * rtB . lq2lccsyip + rtX . ac51n2sp4j ) + rtB .
erhfmhyu13 ; rtB . eqmo5gtkm1 = rtX . jxm15tdjwh ; cg14pmje0y = rtB .
nveoii5a01 - rtB . eqmo5gtkm1 ; rtB . psn0xuxziz = ( rtP .
PIDController_D_n0ajifbrzl * cg14pmje0y - rtX . hadri33lzr ) * rtP .
PIDController_N_j1rqxncrvn ; rtB . h0xqiicsxy = ( rtP .
PIDController_P_gglswmusll * cg14pmje0y + rtX . pycdjv1w4x ) + rtB .
psn0xuxziz ; if ( rtX . p22yvstcpv > rtP . Saturation2_UpperSat ) { rtB .
lgfs4ja5gv = rtP . Saturation2_UpperSat ; } else if ( rtX . p22yvstcpv < rtP
. Saturation2_LowerSat ) { rtB . lgfs4ja5gv = rtP . Saturation2_LowerSat ; }
else { rtB . lgfs4ja5gv = rtX . p22yvstcpv ; } behracxtlf = muDoubleScalarSin
( rtB . lgfs4ja5gv ) ; rtB . bhlvszt131 = rtP . Constant1_Value + rtX .
ikgnomxrz4 ; rtB . ltuxbetanp = rtX . bqbu1h1loj ; rtB . mhqccbbvsq = rtB .
bhlvszt131 - rtB . ltuxbetanp ; mlthgbuzvl = rtP . Constant7_Value - rtB .
mhqccbbvsq ; rtB . hwznfoja4u = ( rtP . PIDController1_D * mlthgbuzvl - rtX .
ifbx5pzkea ) * rtP . PIDController1_N ; rtB . pempqddxwi = rtX . mdiimyccxs ;
ljoleeoftk = ( ( rtP . PIDController1_P * mlthgbuzvl + rtX . o00gqgtwtr ) +
rtB . hwznfoja4u ) - rtB . pempqddxwi ; rtB . anxjju0ubx = ( rtP .
PIDController1_D_lllqr1ay3g * ljoleeoftk - rtX . pjpvjkdywv ) * rtP .
PIDController1_N_kwhnf3hzry ; ndpdxny11k = ( rtP .
PIDController1_P_hckpmt5anz * ljoleeoftk + rtX . oklw5dcacl ) + rtB .
anxjju0ubx ; g4uaoqjo4n = muDoubleScalarCos ( rtB . lgfs4ja5gv ) ; rtB .
hz3jsp2lkt = rtX . foimi0t253 ; g2r5aygpcx = rtP . Constant5_Value - rtB .
hz3jsp2lkt ; rtB . fdtuqmbm4w = ( rtP . PIDController2_D * g2r5aygpcx - rtX .
ksfp32xfqk ) * rtP . PIDController2_N ; rtB . i54utn5heg = ( rtP .
PIDController2_P * g2r5aygpcx + rtX . bz00hvk0oc ) + rtB . fdtuqmbm4w ; if (
rtX . jwnbcspb14 > rtP . Saturation_UpperSat_ha4sihnonx ) { rtB . jy0ejo0e4c
= rtP . Saturation_UpperSat_ha4sihnonx ; } else if ( rtX . jwnbcspb14 < rtP .
Saturation_LowerSat_hvr4bzptww ) { rtB . jy0ejo0e4c = rtP .
Saturation_LowerSat_hvr4bzptww ; } else { rtB . jy0ejo0e4c = rtX . jwnbcspb14
; } if ( rtX . jiwy3snj1v > rtP . Saturation1_UpperSat_hb4te1hlrm ) { rtB .
dveit4wdbi = rtP . Saturation1_UpperSat_hb4te1hlrm ; } else if ( rtX .
jiwy3snj1v < rtP . Saturation1_LowerSat_bckpxbzwol ) { rtB . dveit4wdbi = rtP
. Saturation1_LowerSat_bckpxbzwol ; } else { rtB . dveit4wdbi = rtX .
jiwy3snj1v ; } bme0js3mb1 = ( rtB . i54utn5heg + rtP . _g_itsbn0zy4d ) * rtP
. _m / ( muDoubleScalarCos ( rtB . jy0ejo0e4c ) * muDoubleScalarCos ( rtB .
dveit4wdbi ) ) ; elzrnliqwb = ( rtB . h0xqiicsxy * behracxtlf - ndpdxny11k *
g4uaoqjo4n ) * rtP . fantheta1_m / bme0js3mb1 ; if ( elzrnliqwb > rtP .
Saturation_UpperSat_hwp4xnffla ) { elzrnliqwb = rtP .
Saturation_UpperSat_hwp4xnffla ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_psalob5khl ) { elzrnliqwb = rtP .
Saturation_LowerSat_psalob5khl ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb = 1.0
; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB . gqbpenn0hb
= muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} elzrnliqwb = ( rtB . h0xqiicsxy * g4uaoqjo4n + ndpdxny11k * behracxtlf ) *
rtP . fantheta1_m / ( bme0js3mb1 * muDoubleScalarCos ( rtB . jy0ejo0e4c ) ) ;
if ( elzrnliqwb > rtP . Saturation1_UpperSat_pb2v3x1tuf ) { elzrnliqwb = rtP
. Saturation1_UpperSat_pb2v3x1tuf ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_egd2dbjq3l ) { elzrnliqwb = rtP .
Saturation1_LowerSat_egd2dbjq3l ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
kispuopekk = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . nygsupejah = rtX . nduqb53jft ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } if ( rtX . lw3y3pqzun > rtP . Saturation2_UpperSat_eydgfhthvi )
{ rtB . nab1xoheob = rtP . Saturation2_UpperSat_eydgfhthvi ; } else if ( rtX
. lw3y3pqzun < rtP . Saturation2_LowerSat_pvud2psr4g ) { rtB . nab1xoheob =
rtP . Saturation2_LowerSat_pvud2psr4g ; } else { rtB . nab1xoheob = rtX .
lw3y3pqzun ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . glazkeq1pu =
muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . owxswyztav = muDoubleScalarSin (
rtP . SineWave1_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave1_Phase ) *
rtP . SineWave1_Amp + rtP . SineWave1_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { } behracxtlf = ssGetT ( rtS ) ; g4uaoqjo4n = rtP . Gain1_Gain *
behracxtlf ; rtB . ck0d30amao = g4uaoqjo4n - rtB . pi54dzxfx5 ; rtB .
byxioey3rs = ( rtP . PIDController_D_os4cpveuwu * rtB . ck0d30amao - rtX .
mmz0ptqw25 ) * rtP . PIDController_N_gwi2qcwymh ; rtB . pvzjspdrrf = ( rtP .
PIDController_P_ju5f4j1frg * rtB . ck0d30amao + rtX . aypiwh2tfj ) + rtB .
byxioey3rs ; ndpdxny11k = muDoubleScalarSin ( rtB . nab1xoheob ) ; g4uaoqjo4n
= ( ( muDoubleScalarSin ( rtP . SineWave2_Freq * ssGetTaskTime ( rtS , 0 ) +
rtP . SineWave2_Phase ) * rtP . SineWave2_Amp + rtP . SineWave2_Bias ) +
g4uaoqjo4n ) - rtB . ltuxbetanp ; rtB . dbk0s1remq = ( rtP .
PIDController1_D_gdgmituo3o * g4uaoqjo4n - rtX . cagl3oaqz1 ) * rtP .
PIDController1_N_mhmwfw4hux ; ptexpunbp0 = ( rtP .
PIDController1_P_c4vjhd1ziq * g4uaoqjo4n + rtX . mj3i3jcfzp ) + rtB .
dbk0s1remq ; prfb444tvb = muDoubleScalarCos ( rtB . nab1xoheob ) ; rtB .
l4dlxlfpbm = rtP . Gain_Gain * behracxtlf - rtB . iguir2gsge ; rtB .
gtznxiskp5 = ( rtP . PIDController2_D_dfmo4lhky4 * rtB . l4dlxlfpbm - rtX .
ixaojduajk ) * rtP . PIDController2_N_mpslhyucvp ; rtB . dsaefs4z4w = ( rtP .
PIDController2_P_dlj4ikvxns * rtB . l4dlxlfpbm + rtX . d4l0qxjzyd ) + rtB .
gtznxiskp5 ; behracxtlf = ( rtB . dsaefs4z4w + rtP . _g ) * rtP .
_m_acbzxt22m1 / ( muDoubleScalarCos ( rtB . cbhluqcqju ) * muDoubleScalarCos
( rtB . crhr35iead ) ) ; elzrnliqwb = ( rtB . pvzjspdrrf * ndpdxny11k -
ptexpunbp0 * prfb444tvb ) * rtP . fantheta_m / behracxtlf ; if ( elzrnliqwb >
rtP . Saturation_UpperSat_ip5m4fy0ed ) { rtB . kr1zpyt2z1 = rtP .
Saturation_UpperSat_ip5m4fy0ed ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_j5wcuf0dgd ) { rtB . kr1zpyt2z1 = rtP .
Saturation_LowerSat_j5wcuf0dgd ; } else { rtB . kr1zpyt2z1 = elzrnliqwb ; }
if ( rtB . kr1zpyt2z1 > 1.0 ) { elzrnliqwb = 1.0 ; } else if ( rtB .
kr1zpyt2z1 < - 1.0 ) { elzrnliqwb = - 1.0 ; } else { elzrnliqwb = rtB .
kr1zpyt2z1 ; } rtB . f01uxdg4ms = muDoubleScalarAsin ( elzrnliqwb ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } elzrnliqwb = ( rtB . pvzjspdrrf *
prfb444tvb + ptexpunbp0 * ndpdxny11k ) * rtP . fantheta_m / ( behracxtlf *
muDoubleScalarCos ( rtB . cbhluqcqju ) ) ; if ( elzrnliqwb > rtP .
Saturation1_UpperSat_ilexu3zjfy ) { elzrnliqwb = rtP .
Saturation1_UpperSat_ilexu3zjfy ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_bg51c0dlft ) { elzrnliqwb = rtP .
Saturation1_LowerSat_bg51c0dlft ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
g50donemyn = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } if ( ( rtDW . ckfus31as1 >= ssGetT ( rtS ) ) && ( rtDW .
nhfwyaiex4 >= ssGetT ( rtS ) ) ) { rtB . otrtthqjbh = 0.0 ; } else {
ndpdxny11k = rtDW . ckfus31as1 ; lastU = & rtDW . h5axjkxc04 ; if ( rtDW .
ckfus31as1 < rtDW . nhfwyaiex4 ) { if ( rtDW . nhfwyaiex4 < ssGetT ( rtS ) )
{ ndpdxny11k = rtDW . nhfwyaiex4 ; lastU = & rtDW . pkluuz33p4 ; } } else if
( rtDW . ckfus31as1 >= ssGetT ( rtS ) ) { ndpdxny11k = rtDW . nhfwyaiex4 ;
lastU = & rtDW . pkluuz33p4 ; } rtB . otrtthqjbh = ( rtB . pi54dzxfx5 - *
lastU ) / ( ssGetT ( rtS ) - ndpdxny11k ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( ( rtDW . m021dvz455 >= ssGetT ( rtS ) ) && ( rtDW . enbk5dzytw
>= ssGetT ( rtS ) ) ) { rtB . lylfmhz2zp = 0.0 ; } else { ndpdxny11k = rtDW .
m021dvz455 ; lastU = & rtDW . efu2co53jl ; if ( rtDW . m021dvz455 < rtDW .
enbk5dzytw ) { if ( rtDW . enbk5dzytw < ssGetT ( rtS ) ) { ndpdxny11k = rtDW
. enbk5dzytw ; lastU = & rtDW . fywx24ym3u ; } } else if ( rtDW . m021dvz455
>= ssGetT ( rtS ) ) { ndpdxny11k = rtDW . enbk5dzytw ; lastU = & rtDW .
fywx24ym3u ; } rtB . lylfmhz2zp = ( rtB . ltuxbetanp - * lastU ) / ( ssGetT (
rtS ) - ndpdxny11k ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW .
jc10nuakae . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
jc10nuakae . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
pi54dzxfx5 + 0 ) ; } } { if ( rtDW . jnssosikn3 . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . jnssosikn3 . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . ltuxbetanp + 0 ) ; } } { if ( rtDW .
hfbgxk5sbw . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
hfbgxk5sbw . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
iguir2gsge + 0 ) ; } } { if ( rtDW . e5tycvcjhc . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . e5tycvcjhc . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . pezzeovqv4 + 0 ) ; } } { if ( rtDW .
i4o5lei2sq . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
i4o5lei2sq . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
bhlvszt131 + 0 ) ; } } { if ( rtDW . iuujkfk0v5 . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . iuujkfk0v5 . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . nygsupejah + 0 ) ; } } } rtB . ldiaubocbo =
rtP . PIDController_I * rtB . ck0d30amao ; rtB . j5e4ia1omf = rtP .
PIDController1_I * g4uaoqjo4n ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB
. l1zs4kn1e0 = rtP . PIDController2_I * rtB . l4dlxlfpbm ; ndpdxny11k = rtB .
f01uxdg4ms - rtB . cbhluqcqju ; rtB . iw40baw43c = ( rtP .
PIDController_D_bnpdwpgf2r * ndpdxny11k - rtX . c2khqwtjvb ) * rtP .
PIDController_N_nq5smeuvru ; rtB . p5sji1xs2a = rtP .
PIDController_I_ctexg1ydk0 * ndpdxny11k ; g4uaoqjo4n = rtB . g50donemyn - rtB
. crhr35iead ; rtB . nie411id2u = ( rtP . PIDController1_D_ipmgxlwt3s *
g4uaoqjo4n - rtX . i01cpb55fo ) * rtP . PIDController1_N_ju5pdg3n40 ; rtB .
lxsxq5iv4u = rtP . PIDController1_I_g3r3n5sujh * g4uaoqjo4n ; ptexpunbp0 =
rtP . psi_Value - rtB . nab1xoheob ; rtB . m1okp5sryd = ( rtP .
PIDController2_D_g4w5zspqgm * ptexpunbp0 - rtX . df0zvglyty ) * rtP .
PIDController2_N_gwanukygue ; rtB . oa0p335xm3 = rtP .
PIDController2_I_k3epcgcoj0 * ptexpunbp0 ; prfb444tvb = rtB . gqbpenn0hb -
rtB . jy0ejo0e4c ; rtB . mi0m32bumo = ( rtP . PIDController_D_jkhgbbl1en *
prfb444tvb - rtX . ilihbbiz55 ) * rtP . PIDController_N_bgper011ra ; rtB .
ke4i10axfa = rtP . PIDController_I_dlmuknchuh * prfb444tvb ; elzrnliqwb = rtB
. kispuopekk - rtB . dveit4wdbi ; rtB . bf2unyv33p = ( rtP .
PIDController1_D_ak3x55jqvu * elzrnliqwb - rtX . hmnwy1prir ) * rtP .
PIDController1_N_gfjurlmhit ; rtB . pq5encbpeb = rtP .
PIDController1_I_hetisvzriu * elzrnliqwb ; oiu0kn45t0 = rtP . psi1_Value -
rtB . lgfs4ja5gv ; rtB . hhcqqqa4ii = ( rtP . PIDController2_D_jd4dbxg05c *
oiu0kn45t0 - rtX . doschmc4db ) * rtP . PIDController2_N_lijdwwumlg ; rtB .
hulatpkfam = rtP . PIDController2_I_ndlknojsy1 * oiu0kn45t0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . f2alpgpnje = rtP .
PIDController_I_iun55ks3mq * rtB . lq2lccsyip ; rtB . p44cus5bxp = rtP .
PIDController1_I_oc3wzt3pd1 * mlthgbuzvl ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { } mlthgbuzvl = muDoubleScalarCos ( rtB . jy0ejo0e4c ) ; e5widbazon =
muDoubleScalarCos ( rtB . lgfs4ja5gv ) ; bme0js3mb1 *= rtP .
Gain_Gain_ebhlmk5t4x ; by3jzvahpt = muDoubleScalarSin ( rtB . jy0ejo0e4c ) ;
p1ouuhw0ck = muDoubleScalarSin ( rtB . lgfs4ja5gv ) ; avf2p33qfm =
muDoubleScalarSin ( rtB . dveit4wdbi ) ; rtB . obagl5h54t = ( mlthgbuzvl *
avf2p33qfm * e5widbazon + by3jzvahpt * p1ouuhw0ck ) * bme0js3mb1 ; rtB .
lpiniymblm = ( mlthgbuzvl * avf2p33qfm * p1ouuhw0ck - by3jzvahpt * e5widbazon
) * bme0js3mb1 ; rtB . a5xcs22qdx = muDoubleScalarCos ( rtB . dveit4wdbi ) *
mlthgbuzvl * bme0js3mb1 - rtP . Quadrotor1_g ; rtB . n0snzmetnp = rtX .
cpiih44gh1 ; rtB . lr2p1mvysn = rtX . kqllenndwo ; rtB . gnr0hcqobw = rtX .
njnxqh2y05 ; rtB . dvj2iaj3nx = ( ( rtP . PIDController_P_bdo03lnhov *
prfb444tvb + rtX . azlkqw1wi5 ) + rtB . mi0m32bumo ) * rtP . u_Ixx * ( 1.0 /
rtP . Quadrotor1_Ixx ) + ( rtP . Quadrotor1_Iyy - rtP . Quadrotor1_Izz ) /
rtP . Quadrotor1_Ixx * ( rtB . n0snzmetnp * rtB . lr2p1mvysn ) ; rtB .
fhw5trdftx = ( ( rtP . PIDController2_P_evzc3v5wmi * oiu0kn45t0 + rtX .
e5ch1hbmva ) + rtB . hhcqqqa4ii ) * rtP . u_Izz * ( 1.0 / rtP .
Quadrotor1_Izz ) + ( rtP . Quadrotor1_Ixx - rtP . Quadrotor1_Iyy ) / rtP .
Quadrotor1_Izz * ( rtB . gnr0hcqobw * rtB . n0snzmetnp ) ; rtB . itq3zulqh3 =
( ( rtP . PIDController1_P_m1rpi1feq5 * elzrnliqwb + rtX . lw12bbfguz ) + rtB
. bf2unyv33p ) * rtP . u_Iyy * ( 1.0 / rtP . Quadrotor1_Iyy ) + ( rtP .
Quadrotor1_Izz - rtP . Quadrotor1_Ixx ) / rtP . Quadrotor1_Iyy * ( rtB .
gnr0hcqobw * rtB . lr2p1mvysn ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { }
rtB . ng5qcsey3a = rtP . PIDController_I_l4hu2imemx * cg14pmje0y ; rtB .
grjoo4maif = rtP . PIDController1_I_npnz5gp3zv * ljoleeoftk ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . gk3gsu1f15 = rtP .
PIDController2_I_edyryjr1ey * g2r5aygpcx ; cg14pmje0y = muDoubleScalarCos (
rtB . cbhluqcqju ) ; ljoleeoftk = muDoubleScalarCos ( rtB . nab1xoheob ) ;
g2r5aygpcx = rtP . Gain_Gain_awestftebg * behracxtlf ; rtB . kfzq00qdrd = rtX
. olihgqj04q ; rtB . k1pf1pogmt = rtX . krg0jgzlhu ; rtB . ebpw4vo0ws = rtX .
numodtylcr ; behracxtlf = muDoubleScalarSin ( rtB . cbhluqcqju ) ; bme0js3mb1
= muDoubleScalarSin ( rtB . nab1xoheob ) ; mlthgbuzvl = muDoubleScalarSin (
rtB . crhr35iead ) ; rtB . plwa2ch2yj = ( cg14pmje0y * mlthgbuzvl *
ljoleeoftk + behracxtlf * bme0js3mb1 ) * g2r5aygpcx ; rtB . aetfzrmsq5 = (
cg14pmje0y * mlthgbuzvl * bme0js3mb1 - behracxtlf * ljoleeoftk ) * g2r5aygpcx
; rtB . iiiwquot2h = muDoubleScalarCos ( rtB . crhr35iead ) * cg14pmje0y *
g2r5aygpcx - rtP . Quadrotor_g ; rtB . dv0ojjpydp = rtX . ck4utotuds ; rtB .
djakoepzet = rtX . lpihnf1klp ; rtB . p5vxkwsrko = rtX . mawgxlbw22 ; rtB .
jwq1iwusgs = ( ( rtP . PIDController_P_l3dvp4gzhj * ndpdxny11k + rtX .
e1z3nxzg5v ) + rtB . iw40baw43c ) * rtP . _Ixx * ( 1.0 / rtP . Quadrotor_Ixx
) + ( rtP . Quadrotor_Iyy - rtP . Quadrotor_Izz ) / rtP . Quadrotor_Ixx * (
rtB . dv0ojjpydp * rtB . djakoepzet ) ; rtB . pxm3oeljzy = ( ( rtP .
PIDController2_P_kp1lf3scwu * ptexpunbp0 + rtX . bj3i15bcwz ) + rtB .
m1okp5sryd ) * rtP . _Izz * ( 1.0 / rtP . Quadrotor_Izz ) + ( rtP .
Quadrotor_Ixx - rtP . Quadrotor_Iyy ) / rtP . Quadrotor_Izz * ( rtB .
p5vxkwsrko * rtB . dv0ojjpydp ) ; rtB . j34rvgdxt4 = ( ( rtP .
PIDController1_P_oaxjkkp4ew * g4uaoqjo4n + rtX . csvste2th3 ) + rtB .
nie411id2u ) * rtP . _Iyy * ( 1.0 / rtP . Quadrotor_Iyy ) + ( rtP .
Quadrotor_Izz - rtP . Quadrotor_Ixx ) / rtP . Quadrotor_Iyy * ( rtB .
p5vxkwsrko * rtB . djakoepzet ) ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T * lastU ; if ( rtDW . lm2k5vvzww == ( rtInf ) ) { rtDW .
lm2k5vvzww = ssGetT ( rtS ) ; lastU = & rtDW . cncrmenvlq ; } else if ( rtDW
. h0u53urr3o == ( rtInf ) ) { rtDW . h0u53urr3o = ssGetT ( rtS ) ; lastU = &
rtDW . ntxpmdsnwm ; } else if ( rtDW . lm2k5vvzww < rtDW . h0u53urr3o ) {
rtDW . lm2k5vvzww = ssGetT ( rtS ) ; lastU = & rtDW . cncrmenvlq ; } else {
rtDW . h0u53urr3o = ssGetT ( rtS ) ; lastU = & rtDW . ntxpmdsnwm ; } * lastU
= rtB . iguir2gsge ; if ( rtDW . ckfus31as1 == ( rtInf ) ) { rtDW .
ckfus31as1 = ssGetT ( rtS ) ; lastU = & rtDW . h5axjkxc04 ; } else if ( rtDW
. nhfwyaiex4 == ( rtInf ) ) { rtDW . nhfwyaiex4 = ssGetT ( rtS ) ; lastU = &
rtDW . pkluuz33p4 ; } else if ( rtDW . ckfus31as1 < rtDW . nhfwyaiex4 ) {
rtDW . ckfus31as1 = ssGetT ( rtS ) ; lastU = & rtDW . h5axjkxc04 ; } else {
rtDW . nhfwyaiex4 = ssGetT ( rtS ) ; lastU = & rtDW . pkluuz33p4 ; } * lastU
= rtB . pi54dzxfx5 ; if ( rtDW . m021dvz455 == ( rtInf ) ) { rtDW .
m021dvz455 = ssGetT ( rtS ) ; lastU = & rtDW . efu2co53jl ; } else if ( rtDW
. enbk5dzytw == ( rtInf ) ) { rtDW . enbk5dzytw = ssGetT ( rtS ) ; lastU = &
rtDW . fywx24ym3u ; } else if ( rtDW . m021dvz455 < rtDW . enbk5dzytw ) {
rtDW . m021dvz455 = ssGetT ( rtS ) ; lastU = & rtDW . efu2co53jl ; } else {
rtDW . enbk5dzytw = ssGetT ( rtS ) ; lastU = & rtDW . fywx24ym3u ; } * lastU
= rtB . ltuxbetanp ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> igd3snjblj =
rtB . p5vxkwsrko ; _rtXdot -> etdl4ff1yw = rtB . dv0ojjpydp ; _rtXdot ->
jlsnkjzuui = rtB . ebpw4vo0ws ; _rtXdot -> n3v2uj4icr = rtB . eqmo5gtkm1 ;
_rtXdot -> c4eahou3a2 = rtB . kfzq00qdrd ; _rtXdot -> ac51n2sp4j = rtB .
f2alpgpnje ; _rtXdot -> prwqhr4vft = rtB . erhfmhyu13 ; _rtXdot -> jxm15tdjwh
= rtB . obagl5h54t ; _rtXdot -> pycdjv1w4x = rtB . ng5qcsey3a ; _rtXdot ->
hadri33lzr = rtB . psn0xuxziz ; _rtXdot -> p22yvstcpv = rtB . lr2p1mvysn ;
_rtXdot -> ikgnomxrz4 = rtB . pempqddxwi ; _rtXdot -> bqbu1h1loj = rtB .
k1pf1pogmt ; _rtXdot -> o00gqgtwtr = rtB . p44cus5bxp ; _rtXdot -> ifbx5pzkea
= rtB . hwznfoja4u ; _rtXdot -> mdiimyccxs = rtB . lpiniymblm ; _rtXdot ->
oklw5dcacl = rtB . grjoo4maif ; _rtXdot -> pjpvjkdywv = rtB . anxjju0ubx ;
_rtXdot -> foimi0t253 = rtB . a5xcs22qdx ; _rtXdot -> bz00hvk0oc = rtB .
gk3gsu1f15 ; _rtXdot -> ksfp32xfqk = rtB . fdtuqmbm4w ; _rtXdot -> jwnbcspb14
= rtB . gnr0hcqobw ; _rtXdot -> jiwy3snj1v = rtB . n0snzmetnp ; _rtXdot ->
nduqb53jft = rtB . hz3jsp2lkt ; _rtXdot -> lw3y3pqzun = rtB . djakoepzet ;
_rtXdot -> aypiwh2tfj = rtB . ldiaubocbo ; _rtXdot -> mmz0ptqw25 = rtB .
byxioey3rs ; _rtXdot -> mj3i3jcfzp = rtB . j5e4ia1omf ; _rtXdot -> cagl3oaqz1
= rtB . dbk0s1remq ; _rtXdot -> d4l0qxjzyd = rtB . l1zs4kn1e0 ; _rtXdot ->
ixaojduajk = rtB . gtznxiskp5 ; _rtXdot -> e1z3nxzg5v = rtB . p5sji1xs2a ;
_rtXdot -> c2khqwtjvb = rtB . iw40baw43c ; _rtXdot -> csvste2th3 = rtB .
lxsxq5iv4u ; _rtXdot -> i01cpb55fo = rtB . nie411id2u ; _rtXdot -> bj3i15bcwz
= rtB . oa0p335xm3 ; _rtXdot -> df0zvglyty = rtB . m1okp5sryd ; _rtXdot ->
azlkqw1wi5 = rtB . ke4i10axfa ; _rtXdot -> ilihbbiz55 = rtB . mi0m32bumo ;
_rtXdot -> lw12bbfguz = rtB . pq5encbpeb ; _rtXdot -> hmnwy1prir = rtB .
bf2unyv33p ; _rtXdot -> e5ch1hbmva = rtB . hulatpkfam ; _rtXdot -> doschmc4db
= rtB . hhcqqqa4ii ; _rtXdot -> cpiih44gh1 = rtB . itq3zulqh3 ; _rtXdot ->
kqllenndwo = rtB . fhw5trdftx ; _rtXdot -> njnxqh2y05 = rtB . dvj2iaj3nx ;
_rtXdot -> olihgqj04q = rtB . plwa2ch2yj ; _rtXdot -> krg0jgzlhu = rtB .
aetfzrmsq5 ; _rtXdot -> numodtylcr = rtB . iiiwquot2h ; _rtXdot -> ck4utotuds
= rtB . j34rvgdxt4 ; _rtXdot -> lpihnf1klp = rtB . pxm3oeljzy ; _rtXdot ->
mawgxlbw22 = rtB . jwq1iwusgs ; } void MdlProjection ( void ) { } void
MdlTerminate ( void ) { { if ( rtDW . jc10nuakae . AQHandles ) {
sdiTerminateStreaming ( & rtDW . jc10nuakae . AQHandles ) ; } } { if ( rtDW .
jnssosikn3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . jnssosikn3 .
AQHandles ) ; } } { if ( rtDW . hfbgxk5sbw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . hfbgxk5sbw . AQHandles ) ; } } { if ( rtDW .
e5tycvcjhc . AQHandles ) { sdiTerminateStreaming ( & rtDW . e5tycvcjhc .
AQHandles ) ; } } { if ( rtDW . i4o5lei2sq . AQHandles ) {
sdiTerminateStreaming ( & rtDW . i4o5lei2sq . AQHandles ) ; } } { if ( rtDW .
iuujkfk0v5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . iuujkfk0v5 .
AQHandles ) ; } } } static void mr_QuadrotorPID_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_QuadrotorPID_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_QuadrotorPID_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
; static void mr_QuadrotorPID_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_QuadrotorPID_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_QuadrotorPID_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( double )
bitVal ) ) ; } static uint_T mr_QuadrotorPID_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_QuadrotorPID_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_QuadrotorPID_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_QuadrotorPID_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_QuadrotorPID_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_QuadrotorPID_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_QuadrotorPID_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_QuadrotorPID_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_QuadrotorPID_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_QuadrotorPID_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_QuadrotorPID_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB
) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 12 ] = {
"rtDW.lm2k5vvzww" , "rtDW.cncrmenvlq" , "rtDW.h0u53urr3o" , "rtDW.ntxpmdsnwm"
, "rtDW.ckfus31as1" , "rtDW.h5axjkxc04" , "rtDW.nhfwyaiex4" ,
"rtDW.pkluuz33p4" , "rtDW.m021dvz455" , "rtDW.efu2co53jl" , "rtDW.enbk5dzytw"
, "rtDW.fywx24ym3u" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
12 , rtdwDataFieldNames ) ; mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0
, 0 , ( const void * ) & ( rtDW . lm2k5vvzww ) , sizeof ( rtDW . lm2k5vvzww )
) ; mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . cncrmenvlq ) , sizeof ( rtDW . cncrmenvlq ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . h0u53urr3o ) , sizeof ( rtDW . h0u53urr3o ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . ntxpmdsnwm ) , sizeof ( rtDW . ntxpmdsnwm ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . ckfus31as1 ) , sizeof ( rtDW . ckfus31as1 ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . h5axjkxc04 ) , sizeof ( rtDW . h5axjkxc04 ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . nhfwyaiex4 ) , sizeof ( rtDW . nhfwyaiex4 ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . pkluuz33p4 ) , sizeof ( rtDW . pkluuz33p4 ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . m021dvz455 ) , sizeof ( rtDW . m021dvz455 ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . efu2co53jl ) , sizeof ( rtDW . efu2co53jl ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . enbk5dzytw ) , sizeof ( rtDW . enbk5dzytw ) ) ;
mr_QuadrotorPID_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . fywx24ym3u ) , sizeof ( rtDW . fywx24ym3u ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_QuadrotorPID_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0
, sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW ,
0 , 1 ) ; mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lm2k5vvzww ) , rtdwData , 0 , 0 , sizeof ( rtDW . lm2k5vvzww ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . cncrmenvlq ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . cncrmenvlq ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . h0u53urr3o ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . h0u53urr3o ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . ntxpmdsnwm ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . ntxpmdsnwm ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . ckfus31as1 ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . ckfus31as1 ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . h5axjkxc04 ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . h5axjkxc04 ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . nhfwyaiex4 ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . nhfwyaiex4 ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . pkluuz33p4 ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . pkluuz33p4 ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . m021dvz455 ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . m021dvz455 ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . efu2co53jl ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . efu2co53jl ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . enbk5dzytw ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . enbk5dzytw ) ) ;
mr_QuadrotorPID_restoreDataFromMxArray ( ( void * ) & ( rtDW . fywx24ym3u ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . fywx24ym3u ) ) ; } } mxArray *
mr_QuadrotorPID_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char *
blockPath [ 10 ] = { "QuadrotorPID/Scope" , "QuadrotorPID/Scope1" ,
"QuadrotorPID/Scope10" , "QuadrotorPID/Scope11" , "QuadrotorPID/Scope12" ,
"QuadrotorPID/Scope13" , "QuadrotorPID/Scope14" , "QuadrotorPID/Scope15" ,
"QuadrotorPID/Scope16" , "QuadrotorPID/Scope17" , } ; static const int reason
[ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ;
subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 52 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 337 ) ; ssSetNumBlockIO ( rtS , 84 ) ;
ssSetNumBlockParams ( rtS , 172 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 3175136837U ) ;
ssSetChecksumVal ( rtS , 1 , 1002873553U ) ; ssSetChecksumVal ( rtS , 2 ,
2707596838U ) ; ssSetChecksumVal ( rtS , 3 , 1567132528U ) ; }
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
QuadrotorPID_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "QuadrotorPID" ) ;
ssSetPath ( rtS , "QuadrotorPID" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 120.0 ) ; ssSetStepSize ( rtS , 0.0001 ) ; ssSetFixedStepSize ( rtS ,
0.0001 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
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
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) }
; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator1"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator1"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator5"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator1"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator1"
,
 "QuadrotorPID/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/PID Controller/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/PID Controller/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator1"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator3"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator3"
,
 "QuadrotorPID/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/PID Controller1/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator2"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator4"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator1"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator1"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator5"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator1"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
 "QuadrotorPID/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator"
,
 "QuadrotorPID/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator2"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator4"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator"
,
 "QuadrotorPID/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
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
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,
10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25
, 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 ,
41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 52 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 52 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . igd3snjblj ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . etdl4ff1yw ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jlsnkjzuui ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . n3v2uj4icr ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . c4eahou3a2 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . ac51n2sp4j ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . prwqhr4vft ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . jxm15tdjwh ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . pycdjv1w4x ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . hadri33lzr ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . p22yvstcpv ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . ikgnomxrz4 ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . bqbu1h1loj ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . o00gqgtwtr ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . ifbx5pzkea ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . mdiimyccxs ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . oklw5dcacl ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . pjpvjkdywv ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . foimi0t253 ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . bz00hvk0oc ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . ksfp32xfqk ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . jwnbcspb14 ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . jiwy3snj1v ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . nduqb53jft ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . lw3y3pqzun ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . aypiwh2tfj ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . mmz0ptqw25 ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . mj3i3jcfzp ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . cagl3oaqz1 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . d4l0qxjzyd ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . ixaojduajk ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . e1z3nxzg5v ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . c2khqwtjvb ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . csvste2th3 ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . i01cpb55fo ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . bj3i15bcwz ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . df0zvglyty ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . azlkqw1wi5 ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . ilihbbiz55 ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . lw12bbfguz ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . hmnwy1prir ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . e5ch1hbmva ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . doschmc4db ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . cpiih44gh1 ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . kqllenndwo ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . njnxqh2y05 ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . olihgqj04q ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . krg0jgzlhu ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . numodtylcr ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . ck4utotuds ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . lpihnf1klp ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . mawgxlbw22 ; }
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
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 52 ] ;
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
ssSetChecksumVal ( rtS , 0 , 3175136837U ) ; ssSetChecksumVal ( rtS , 1 ,
1002873553U ) ; ssSetChecksumVal ( rtS , 2 , 2707596838U ) ; ssSetChecksumVal
( rtS , 3 , 1567132528U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_QuadrotorPID_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP
( rtS , mr_QuadrotorPID_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_QuadrotorPID_SetDWork ) ; rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . Saturation_UpperSat_ha4sihnonx =
rtInf ; rtP . Saturation_LowerSat_hvr4bzptww = rtMinusInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
