#include "SwarmSTSMC2.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "SwarmSTSMC2_private.h"
#include "rt_logging_mmi.h"
#include "SwarmSTSMC2_capi.h"
#include "SwarmSTSMC2_dt.h"
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
& model_S ; void MdlInitialize ( void ) { rtX . k4ej2iactf = rtP .
Integrator1_IC ; rtX . osdmew3thc = rtP . Integrator1_IC_njked3y5ka ; rtX .
aif2vgddk0 = rtP . Integrator5_IC ; rtDW . oqhzpe3pwd = ( rtInf ) ; rtDW .
ilfrz5gyiz = ( rtInf ) ; rtX . g03la3p021 = rtP . Integrator5_IC_f1f5dsuuw2 ;
rtX . avbuupshgm = rtP . Integrator1_IC_heq4ih3sop ; rtX . l31r5m0dnw = rtP .
Integrator1_IC_ggm3f24kg1 ; rtX . ijq23yd5pt = rtP . Integrator_IC ; rtX .
ko1mt40rca = rtP . Integrator_IC_lqzn20lau3 ; rtDW . ahssk0tttr = ( rtInf ) ;
rtDW . gyhz20plud = ( rtInf ) ; rtDW . itrolvxcy2 = ( rtInf ) ; rtDW .
oo555w2jgf = ( rtInf ) ; rtX . maqvl2cfg0 = rtP . Integrator1_IC_mm1y0ejde0 ;
rtX . kr0mtdabbi = rtP . Integrator1_IC_fvi5gvi3z2 ; rtX . mqwrgffld1 = rtP .
Integrator3_IC ; rtX . gmks24cnll = rtP . Integrator3_IC_nnhhmqfjhs ; rtX .
ja0wmx20on = rtP . Integrator2_IC ; rtX . cgaiylvesm = rtP .
Integrator2_IC_onz01dod3h ; rtDW . jpcgn345yv = ( rtInf ) ; rtDW . ibvwech01e
= ( rtInf ) ; rtDW . ipewzgngqr = ( rtInf ) ; rtDW . mbmzp2aurk = ( rtInf ) ;
rtX . e5bw3nnryi = rtP . Integrator4_IC ; rtX . i3ne1ua4rj = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . oljewfzy43 = rtP .
PIDController2_InitialConditionForFilter ; rtX . np2f1nemmj = rtP .
Integrator1_IC_hluxpggxgx ; rtX . nfl2fjrgpx = rtP .
Integrator1_IC_lmb1knnxne ; rtX . l1mufvbv4u = rtP .
Integrator5_IC_if0dkkc4sn ; rtX . iercuixttf = rtP .
Integrator1_IC_oayqv41ri2 ; rtX . ejvpmsysss = rtP .
PIDController_InitialConditionForIntegrator ; rtX . e3f4t4lxzl = rtP .
PIDController_InitialConditionForFilter ; rtX . dovskkvz2v = rtP .
PIDController1_InitialConditionForIntegrator ; rtX . dxtvctmrdy = rtP .
PIDController1_InitialConditionForFilter ; rtX . gy3fln0muh = rtP .
PIDController2_InitialConditionForIntegrator_pbsngr4knz ; rtX . ghvqhpu4fs =
rtP . PIDController2_InitialConditionForFilter_g0oftxmj3a ; rtDW . jabfec0wwp
= ( rtInf ) ; rtDW . bv2hzsnytg = ( rtInf ) ; rtDW . orpsvqiaoa = ( rtInf ) ;
rtDW . lutbqduf2r = ( rtInf ) ; rtX . plju05ygdr = rtP .
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; rtX . n0hufts5nu =
rtP . PIDController_InitialConditionForFilter_jdtq01u0hx ; rtX . f0rf0xa55w =
rtP . PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; rtX .
iip5izs45l = rtP . PIDController1_InitialConditionForFilter_e5pnbc3vtr ; rtX
. emlfvwiikj = rtP . PIDController2_InitialConditionForIntegrator_azyc2l4qmp
; rtX . mhanejbd23 = rtP .
PIDController2_InitialConditionForFilter_dlk0zcvwml ; rtX . ewxbzsgpfb = rtP
. PIDController_InitialConditionForIntegrator_i0pcwuwujv ; rtX . bs2ar2kcc5 =
rtP . PIDController_InitialConditionForFilter_cnipdysl5i ; rtX . as1ewi2dli =
rtP . PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; rtX .
kfhoarbrhc = rtP . PIDController1_InitialConditionForFilter_psmuwl2ggt ; rtX
. e4nizbtx1o = rtP . PIDController2_InitialConditionForIntegrator_osgdcreqgv
; rtX . mjcae30hbb = rtP .
PIDController2_InitialConditionForFilter_p4g1s3metf ; rtX . peguzjy5mn = rtP
. Integrator_IC_dkmzwnjlda ; rtX . me0bh4hm5s = rtP .
Integrator_IC_kuhmbxgxyr ; rtX . hbz2ulhakj = rtP . Integrator_IC_pea4zoukn2
; rtX . keylqchqmm = rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg ; rtX . epzmv50cz2 =
rtP . PIDController_InitialConditionForFilter_o14mxov0mo ; rtX . cfu225phqd =
rtP . PIDController1_InitialConditionForFilter_fwycow5gb3 ; rtX . du0ialtbbo
= rtP . PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; rtX .
fgn1y5vita = rtP . Integrator4_IC_mfxj3ieh1q ; rtX . aqn3psnulx = rtP .
Integrator_IC_gxj5snzs0v ; rtX . pgxafaf2gr = rtP . Integrator_IC_mwbhsimjtn
; rtX . otgebcs22n = rtP . Integrator_IC_mctvldpkh3 ; } void MdlStart ( void
) { { bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager
= rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jdekw1bnrj . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2977b080-3352-4d50-ad12-b217293746f1" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . jdekw1bnrj . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . jdekw1bnrj . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . jdekw1bnrj . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . jdekw1bnrj .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jdekw1bnrj . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
jdekw1bnrj . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
jdekw1bnrj . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jdekw1bnrj . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x" ) ; sdiRegisterWksVariable ( rtDW . jdekw1bnrj . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace1"
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . k15z1rwbvt . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "af9145f4-b5d6-45ea-8103-1b82b3233a04" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . k15z1rwbvt . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . k15z1rwbvt . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . k15z1rwbvt . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . k15z1rwbvt .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . k15z1rwbvt . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
k15z1rwbvt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
k15z1rwbvt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . k15z1rwbvt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y" ) ; sdiRegisterWksVariable ( rtDW . k15z1rwbvt . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace2"
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . j0ibqsazqx . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3d67f0e9-a02e-4094-884e-7d66cbdd55e1" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . j0ibqsazqx . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . j0ibqsazqx . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . j0ibqsazqx . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . j0ibqsazqx .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . j0ibqsazqx . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
j0ibqsazqx . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
j0ibqsazqx . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . j0ibqsazqx . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z" ) ; sdiRegisterWksVariable ( rtDW . j0ibqsazqx . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace3"
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dnt4uaun3e . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d9d4bd8b-60d7-43c1-b559-cfcd4fd47375" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . dnt4uaun3e . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . dnt4uaun3e . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . dnt4uaun3e . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . dnt4uaun3e .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . dnt4uaun3e . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
dnt4uaun3e . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
dnt4uaun3e . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . dnt4uaun3e . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x" ) ; sdiRegisterWksVariable ( rtDW . dnt4uaun3e . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace4"
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mxgow43j1c . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "334973e7-5ee5-48ec-af0c-7c0b378b5066" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . mxgow43j1c . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . mxgow43j1c . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . mxgow43j1c . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . mxgow43j1c .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mxgow43j1c . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
mxgow43j1c . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
mxgow43j1c . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . mxgow43j1c . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y" ) ; sdiRegisterWksVariable ( rtDW . mxgow43j1c . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSTSMC2/To Workspace5"
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . eq1ypafliz . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1b8d73c9-b44d-4224-84f3-2c0babceed0f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . eq1ypafliz . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . eq1ypafliz . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . eq1ypafliz . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . eq1ypafliz .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . eq1ypafliz . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
eq1ypafliz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
eq1ypafliz . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . eq1ypafliz . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z" ) ; sdiRegisterWksVariable ( rtDW . eq1ypafliz . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Clock1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/To Workspace12"
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
. pksgawvkdt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c6e66c55-3d55-4a7b-8745-8d324e069d77" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . pksgawvkdt . AQHandles , hDT , & srcInfo ) ; if ( rtDW . pksgawvkdt .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pksgawvkdt . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
pksgawvkdt . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . pksgawvkdt .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . pksgawvkdt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . pksgawvkdt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . pksgawvkdt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"t1" ) ; sdiRegisterWksVariable ( rtDW . pksgawvkdt . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T a1vjbci1pk ; real_T avf2p33qfm ; real_T
behracxtlf ; real_T bme0js3mb1 ; real_T dubmiafis4 ; real_T elzrnliqwb ;
real_T fl3xxiyoi5 ; real_T g4uaoqjo4n ; real_T hyjjh43hwz ; real_T ie5vgnbghz
; real_T j0dry5zbri ; real_T oiu0kn45t0 ; real_T okd5pvgkb1 ; real_T
prfb444tvb ; real_T * lastU ; if ( rtX . k4ej2iactf > rtP .
Saturation_UpperSat ) { rtB . ab333bgofo = rtP . Saturation_UpperSat ; } else
if ( rtX . k4ej2iactf < rtP . Saturation_LowerSat ) { rtB . ab333bgofo = rtP
. Saturation_LowerSat ; } else { rtB . ab333bgofo = rtX . k4ej2iactf ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( rtX . osdmew3thc > rtP .
Saturation1_UpperSat ) { rtB . bs10qga5ab = rtP . Saturation1_UpperSat ; }
else if ( rtX . osdmew3thc < rtP . Saturation1_LowerSat ) { rtB . bs10qga5ab
= rtP . Saturation1_LowerSat ; } else { rtB . bs10qga5ab = rtX . osdmew3thc ;
} if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . cbu4idg12y = rtX .
aif2vgddk0 ; if ( ( rtDW . oqhzpe3pwd >= ssGetT ( rtS ) ) && ( rtDW .
ilfrz5gyiz >= ssGetT ( rtS ) ) ) { rtB . gm0ddic0uf = 0.0 ; } else {
j0dry5zbri = rtDW . oqhzpe3pwd ; lastU = & rtDW . pjb5x2p5pz ; if ( rtDW .
oqhzpe3pwd < rtDW . ilfrz5gyiz ) { if ( rtDW . ilfrz5gyiz < ssGetT ( rtS ) )
{ j0dry5zbri = rtDW . ilfrz5gyiz ; lastU = & rtDW . bpqrflndws ; } } else if
( rtDW . oqhzpe3pwd >= ssGetT ( rtS ) ) { j0dry5zbri = rtDW . ilfrz5gyiz ;
lastU = & rtDW . bpqrflndws ; } rtB . gm0ddic0uf = ( rtB . cbu4idg12y - *
lastU ) / ( ssGetT ( rtS ) - j0dry5zbri ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . heojtynpgt = rtP . Constant6_Value_ji4ih5grvx + rtX .
avbuupshgm ; rtB . mvczrpqvic = rtP . Constant1_Value_fgyxvvitry + rtX .
l31r5m0dnw ; rtB . pgdoe5qbhl = rtB . heojtynpgt - rtB . mvczrpqvic ; rtB .
kjuszjdzc2 = rtX . ijq23yd5pt ; rtB . oxlz1roha4 = rtX . ko1mt40rca ; if ( (
rtDW . ahssk0tttr >= ssGetT ( rtS ) ) && ( rtDW . gyhz20plud >= ssGetT ( rtS
) ) ) { rtB . mfqo0htbck = 0.0 ; } else { j0dry5zbri = rtDW . ahssk0tttr ;
lastU = & rtDW . potcnercix ; if ( rtDW . ahssk0tttr < rtDW . gyhz20plud ) {
if ( rtDW . gyhz20plud < ssGetT ( rtS ) ) { j0dry5zbri = rtDW . gyhz20plud ;
lastU = & rtDW . dn5sswd0jp ; } } else if ( rtDW . ahssk0tttr >= ssGetT ( rtS
) ) { j0dry5zbri = rtDW . gyhz20plud ; lastU = & rtDW . dn5sswd0jp ; } rtB .
mfqo0htbck = ( rtP . Constant6_Value - * lastU ) / ( ssGetT ( rtS ) -
j0dry5zbri ) ; } dubmiafis4 = ( ( rtB . kjuszjdzc2 - rtB . oxlz1roha4 ) - rtB
. mfqo0htbck ) * rtP . Gain1_Gain ; a1vjbci1pk = ( rtB . pgdoe5qbhl - rtP .
Constant6_Value ) * rtP . Gain4_Gain + dubmiafis4 ; okd5pvgkb1 =
muDoubleScalarSign ( a1vjbci1pk ) ; a1vjbci1pk = muDoubleScalarAbs (
a1vjbci1pk ) ; if ( ( rtDW . itrolvxcy2 >= ssGetT ( rtS ) ) && ( rtDW .
oo555w2jgf >= ssGetT ( rtS ) ) ) { fl3xxiyoi5 = 0.0 ; } else { j0dry5zbri =
rtDW . itrolvxcy2 ; lastU = & rtDW . lkhjrmdr25 ; if ( rtDW . itrolvxcy2 <
rtDW . oo555w2jgf ) { if ( rtDW . oo555w2jgf < ssGetT ( rtS ) ) { j0dry5zbri
= rtDW . oo555w2jgf ; lastU = & rtDW . jlnf1hhwet ; } } else if ( rtDW .
itrolvxcy2 >= ssGetT ( rtS ) ) { j0dry5zbri = rtDW . oo555w2jgf ; lastU = &
rtDW . jlnf1hhwet ; } fl3xxiyoi5 = ( rtB . mfqo0htbck - * lastU ) / ( ssGetT
( rtS ) - j0dry5zbri ) ; } fl3xxiyoi5 += ( okd5pvgkb1 * muDoubleScalarPower (
a1vjbci1pk , rtB . luqcnzg44g ) * rtP . _Gain + rtX . g03la3p021 ) + rtP .
u_Gain * dubmiafis4 ; if ( rtX . maqvl2cfg0 > rtP . Saturation2_UpperSat ) {
rtB . ippmfqft3q = rtP . Saturation2_UpperSat ; } else if ( rtX . maqvl2cfg0
< rtP . Saturation2_LowerSat ) { rtB . ippmfqft3q = rtP .
Saturation2_LowerSat ; } else { rtB . ippmfqft3q = rtX . maqvl2cfg0 ; }
behracxtlf = muDoubleScalarSin ( rtB . ippmfqft3q ) ; rtB . fgciqbj50i = rtP
. Constant1_Value_anleszyjns + rtX . mqwrgffld1 ; rtB . nltftrz3zp = rtX .
gmks24cnll ; rtB . izkdj25k1b = rtB . fgciqbj50i - rtB . nltftrz3zp ; rtB .
lelvvdhupm = rtX . ja0wmx20on ; rtB . hhmzrxqssa = rtX . cgaiylvesm ; if ( (
rtDW . jpcgn345yv >= ssGetT ( rtS ) ) && ( rtDW . ibvwech01e >= ssGetT ( rtS
) ) ) { rtB . nx2psp0vkj = 0.0 ; } else { j0dry5zbri = rtDW . jpcgn345yv ;
lastU = & rtDW . hs2y5swgfz ; if ( rtDW . jpcgn345yv < rtDW . ibvwech01e ) {
if ( rtDW . ibvwech01e < ssGetT ( rtS ) ) { j0dry5zbri = rtDW . ibvwech01e ;
lastU = & rtDW . aeudxaauhc ; } } else if ( rtDW . jpcgn345yv >= ssGetT ( rtS
) ) { j0dry5zbri = rtDW . ibvwech01e ; lastU = & rtDW . aeudxaauhc ; } rtB .
nx2psp0vkj = ( rtP . Constant7_Value - * lastU ) / ( ssGetT ( rtS ) -
j0dry5zbri ) ; } dubmiafis4 = ( ( rtB . lelvvdhupm - rtB . hhmzrxqssa ) - rtB
. nx2psp0vkj ) * rtP . Gain2_Gain ; j0dry5zbri = ( rtB . izkdj25k1b - rtP .
Constant7_Value ) * rtP . Gain5_Gain + dubmiafis4 ; hyjjh43hwz =
muDoubleScalarSign ( j0dry5zbri ) ; ie5vgnbghz = muDoubleScalarAbs (
j0dry5zbri ) ; if ( ( rtDW . ipewzgngqr >= ssGetT ( rtS ) ) && ( rtDW .
mbmzp2aurk >= ssGetT ( rtS ) ) ) { j0dry5zbri = 0.0 ; } else { j0dry5zbri =
rtDW . ipewzgngqr ; lastU = & rtDW . cwwo4khs0i ; if ( rtDW . ipewzgngqr <
rtDW . mbmzp2aurk ) { if ( rtDW . mbmzp2aurk < ssGetT ( rtS ) ) { j0dry5zbri
= rtDW . mbmzp2aurk ; lastU = & rtDW . e1kblvoky1 ; } } else if ( rtDW .
ipewzgngqr >= ssGetT ( rtS ) ) { j0dry5zbri = rtDW . mbmzp2aurk ; lastU = &
rtDW . e1kblvoky1 ; } j0dry5zbri = ( rtB . nx2psp0vkj - * lastU ) / ( ssGetT
( rtS ) - j0dry5zbri ) ; } j0dry5zbri += ( hyjjh43hwz * muDoubleScalarPower (
ie5vgnbghz , rtB . lnkfljj42y ) * rtP . u_Gain_p1u4qwnswq + rtX . kr0mtdabbi
) + rtP . u_Gain_oeh5i53seq * dubmiafis4 ; g4uaoqjo4n = muDoubleScalarCos (
rtB . ippmfqft3q ) ; rtB . g14kw4hn4a = rtX . e5bw3nnryi ; dubmiafis4 = rtP .
Constant5_Value - rtB . g14kw4hn4a ; rtB . mswtfd202w = ( rtP .
PIDController2_D * dubmiafis4 - rtX . oljewfzy43 ) * rtP . PIDController2_N ;
rtB . exg5ewvko2 = ( rtP . PIDController2_P * dubmiafis4 + rtX . i3ne1ua4rj )
+ rtB . mswtfd202w ; if ( rtX . np2f1nemmj > rtP .
Saturation_UpperSat_ha4sihnonx ) { rtB . h3v4lxfb1f = rtP .
Saturation_UpperSat_ha4sihnonx ; } else if ( rtX . np2f1nemmj < rtP .
Saturation_LowerSat_hvr4bzptww ) { rtB . h3v4lxfb1f = rtP .
Saturation_LowerSat_hvr4bzptww ; } else { rtB . h3v4lxfb1f = rtX . np2f1nemmj
; } if ( rtX . nfl2fjrgpx > rtP . Saturation1_UpperSat_hb4te1hlrm ) { rtB .
lmz1fmsj4f = rtP . Saturation1_UpperSat_hb4te1hlrm ; } else if ( rtX .
nfl2fjrgpx < rtP . Saturation1_LowerSat_bckpxbzwol ) { rtB . lmz1fmsj4f = rtP
. Saturation1_LowerSat_bckpxbzwol ; } else { rtB . lmz1fmsj4f = rtX .
nfl2fjrgpx ; } bme0js3mb1 = ( rtB . exg5ewvko2 + rtP . _g_itsbn0zy4d ) * rtP
. _m / ( muDoubleScalarCos ( rtB . h3v4lxfb1f ) * muDoubleScalarCos ( rtB .
lmz1fmsj4f ) ) ; elzrnliqwb = ( fl3xxiyoi5 * behracxtlf - j0dry5zbri *
g4uaoqjo4n ) * rtP . fantheta1_m / bme0js3mb1 ; if ( elzrnliqwb > rtP .
Saturation_UpperSat_hwp4xnffla ) { elzrnliqwb = rtP .
Saturation_UpperSat_hwp4xnffla ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_psalob5khl ) { elzrnliqwb = rtP .
Saturation_LowerSat_psalob5khl ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb = 1.0
; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB . nb24wswwab
= muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} elzrnliqwb = ( fl3xxiyoi5 * g4uaoqjo4n + j0dry5zbri * behracxtlf ) * rtP .
fantheta1_m / ( bme0js3mb1 * muDoubleScalarCos ( rtB . h3v4lxfb1f ) ) ; if (
elzrnliqwb > rtP . Saturation1_UpperSat_pb2v3x1tuf ) { elzrnliqwb = rtP .
Saturation1_UpperSat_pb2v3x1tuf ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_egd2dbjq3l ) { elzrnliqwb = rtP .
Saturation1_LowerSat_egd2dbjq3l ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
kzyydvk4dh = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . ke542j0nyz = rtX . l1mufvbv4u ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } if ( rtX . iercuixttf > rtP . Saturation2_UpperSat_eydgfhthvi )
{ rtB . oqvwq5cqni = rtP . Saturation2_UpperSat_eydgfhthvi ; } else if ( rtX
. iercuixttf < rtP . Saturation2_LowerSat_pvud2psr4g ) { rtB . oqvwq5cqni =
rtP . Saturation2_LowerSat_pvud2psr4g ; } else { rtB . oqvwq5cqni = rtX .
iercuixttf ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ki202l2lqj =
muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ghafckseb5 = muDoubleScalarSin (
rtP . SineWave1_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave1_Phase ) *
rtP . SineWave1_Amp + rtP . SineWave1_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { } fl3xxiyoi5 = ssGetT ( rtS ) ; j0dry5zbri = rtP .
Gain1_Gain_an1pdnuefr * fl3xxiyoi5 ; rtB . bvrzs0ko4p = j0dry5zbri - rtB .
mvczrpqvic ; rtB . llfvbzt5kv = ( rtP . PIDController_D * rtB . bvrzs0ko4p -
rtX . e3f4t4lxzl ) * rtP . PIDController_N ; rtB . mi0axd3vzm = ( rtP .
PIDController_P * rtB . bvrzs0ko4p + rtX . ejvpmsysss ) + rtB . llfvbzt5kv ;
behracxtlf = muDoubleScalarSin ( rtB . oqvwq5cqni ) ; g4uaoqjo4n = ( (
muDoubleScalarSin ( rtP . SineWave2_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave2_Phase ) * rtP . SineWave2_Amp + rtP . SineWave2_Bias ) + j0dry5zbri
) - rtB . nltftrz3zp ; rtB . iqp5s5jqdj = ( rtP . PIDController1_D *
g4uaoqjo4n - rtX . dxtvctmrdy ) * rtP . PIDController1_N ; j0dry5zbri = ( rtP
. PIDController1_P * g4uaoqjo4n + rtX . dovskkvz2v ) + rtB . iqp5s5jqdj ;
prfb444tvb = muDoubleScalarCos ( rtB . oqvwq5cqni ) ; rtB . irjdylgfyd = rtP
. Gain_Gain * fl3xxiyoi5 - rtB . cbu4idg12y ; rtB . js4lycsxtc = ( rtP .
PIDController2_D_dfmo4lhky4 * rtB . irjdylgfyd - rtX . ghvqhpu4fs ) * rtP .
PIDController2_N_mpslhyucvp ; rtB . auavdeei20 = ( rtP .
PIDController2_P_dlj4ikvxns * rtB . irjdylgfyd + rtX . gy3fln0muh ) + rtB .
js4lycsxtc ; fl3xxiyoi5 = ( rtB . auavdeei20 + rtP . _g ) * rtP .
_m_acbzxt22m1 / ( muDoubleScalarCos ( rtB . ab333bgofo ) * muDoubleScalarCos
( rtB . bs10qga5ab ) ) ; elzrnliqwb = ( rtB . mi0axd3vzm * behracxtlf -
j0dry5zbri * prfb444tvb ) * rtP . fantheta_m / fl3xxiyoi5 ; if ( elzrnliqwb >
rtP . Saturation_UpperSat_ip5m4fy0ed ) { rtB . i00equ0whj = rtP .
Saturation_UpperSat_ip5m4fy0ed ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_j5wcuf0dgd ) { rtB . i00equ0whj = rtP .
Saturation_LowerSat_j5wcuf0dgd ; } else { rtB . i00equ0whj = elzrnliqwb ; }
if ( rtB . i00equ0whj > 1.0 ) { avf2p33qfm = 1.0 ; } else if ( rtB .
i00equ0whj < - 1.0 ) { avf2p33qfm = - 1.0 ; } else { avf2p33qfm = rtB .
i00equ0whj ; } rtB . mqzgyob3ww = muDoubleScalarAsin ( avf2p33qfm ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } elzrnliqwb = ( rtB . mi0axd3vzm *
prfb444tvb + j0dry5zbri * behracxtlf ) * rtP . fantheta_m / ( fl3xxiyoi5 *
muDoubleScalarCos ( rtB . ab333bgofo ) ) ; if ( elzrnliqwb > rtP .
Saturation1_UpperSat_ilexu3zjfy ) { elzrnliqwb = rtP .
Saturation1_UpperSat_ilexu3zjfy ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_bg51c0dlft ) { elzrnliqwb = rtP .
Saturation1_LowerSat_bg51c0dlft ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
bh4c0b1515 = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } if ( ( rtDW . jabfec0wwp >= ssGetT ( rtS ) ) && ( rtDW .
bv2hzsnytg >= ssGetT ( rtS ) ) ) { rtB . ofkzgj4m1k = 0.0 ; } else {
j0dry5zbri = rtDW . jabfec0wwp ; lastU = & rtDW . l1cu0hzuu3 ; if ( rtDW .
jabfec0wwp < rtDW . bv2hzsnytg ) { if ( rtDW . bv2hzsnytg < ssGetT ( rtS ) )
{ j0dry5zbri = rtDW . bv2hzsnytg ; lastU = & rtDW . e2wis3wb3i ; } } else if
( rtDW . jabfec0wwp >= ssGetT ( rtS ) ) { j0dry5zbri = rtDW . bv2hzsnytg ;
lastU = & rtDW . e2wis3wb3i ; } rtB . ofkzgj4m1k = ( rtB . mvczrpqvic - *
lastU ) / ( ssGetT ( rtS ) - j0dry5zbri ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( ( rtDW . orpsvqiaoa >= ssGetT ( rtS ) ) && ( rtDW . lutbqduf2r
>= ssGetT ( rtS ) ) ) { rtB . lrgxtstads = 0.0 ; } else { j0dry5zbri = rtDW .
orpsvqiaoa ; lastU = & rtDW . o4ckmxfkac ; if ( rtDW . orpsvqiaoa < rtDW .
lutbqduf2r ) { if ( rtDW . lutbqduf2r < ssGetT ( rtS ) ) { j0dry5zbri = rtDW
. lutbqduf2r ; lastU = & rtDW . norshvxqtw ; } } else if ( rtDW . orpsvqiaoa
>= ssGetT ( rtS ) ) { j0dry5zbri = rtDW . lutbqduf2r ; lastU = & rtDW .
norshvxqtw ; } rtB . lrgxtstads = ( rtB . nltftrz3zp - * lastU ) / ( ssGetT (
rtS ) - j0dry5zbri ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW .
jdekw1bnrj . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
jdekw1bnrj . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
mvczrpqvic + 0 ) ; } } { if ( rtDW . k15z1rwbvt . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . k15z1rwbvt . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . nltftrz3zp + 0 ) ; } } { if ( rtDW .
j0ibqsazqx . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
j0ibqsazqx . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
cbu4idg12y + 0 ) ; } } { if ( rtDW . dnt4uaun3e . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . dnt4uaun3e . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . heojtynpgt + 0 ) ; } } { if ( rtDW .
mxgow43j1c . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
mxgow43j1c . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
fgciqbj50i + 0 ) ; } } { if ( rtDW . eq1ypafliz . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . eq1ypafliz . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . ke542j0nyz + 0 ) ; } } } rtB . cabobmzza1 =
rtP . PIDController_I * rtB . bvrzs0ko4p ; rtB . akucc0fmnu = rtP .
PIDController1_I * g4uaoqjo4n ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB
. djtzd3nqfr = rtP . PIDController2_I * rtB . irjdylgfyd ; behracxtlf = rtB .
mqzgyob3ww - rtB . ab333bgofo ; rtB . g3ygqokvad = ( rtP .
PIDController_D_bnpdwpgf2r * behracxtlf - rtX . n0hufts5nu ) * rtP .
PIDController_N_nq5smeuvru ; rtB . pm1k1vpao3 = rtP .
PIDController_I_ctexg1ydk0 * behracxtlf ; j0dry5zbri = rtB . bh4c0b1515 - rtB
. bs10qga5ab ; rtB . lizpqhkdqd = ( rtP . PIDController1_D_ipmgxlwt3s *
j0dry5zbri - rtX . iip5izs45l ) * rtP . PIDController1_N_ju5pdg3n40 ; rtB .
dhpx0i0zqw = rtP . PIDController1_I_g3r3n5sujh * j0dry5zbri ; g4uaoqjo4n =
rtP . psi_Value - rtB . oqvwq5cqni ; rtB . gi0ydjsvag = ( rtP .
PIDController2_D_g4w5zspqgm * g4uaoqjo4n - rtX . mhanejbd23 ) * rtP .
PIDController2_N_gwanukygue ; rtB . kup05il15v = rtP .
PIDController2_I_k3epcgcoj0 * g4uaoqjo4n ; prfb444tvb = rtB . nb24wswwab -
rtB . h3v4lxfb1f ; rtB . arl0w053wq = ( rtP . PIDController_D_jkhgbbl1en *
prfb444tvb - rtX . bs2ar2kcc5 ) * rtP . PIDController_N_bgper011ra ; rtB .
gnbrkrjeaf = rtP . PIDController_I_dlmuknchuh * prfb444tvb ; elzrnliqwb = rtB
. kzyydvk4dh - rtB . lmz1fmsj4f ; rtB . gmgeuu4aud = ( rtP .
PIDController1_D_ak3x55jqvu * elzrnliqwb - rtX . kfhoarbrhc ) * rtP .
PIDController1_N_gfjurlmhit ; rtB . ptj4jqtbiw = rtP .
PIDController1_I_hetisvzriu * elzrnliqwb ; oiu0kn45t0 = rtP . psi1_Value -
rtB . ippmfqft3q ; rtB . denh3c14d3 = ( rtP . PIDController2_D_jd4dbxg05c *
oiu0kn45t0 - rtX . mjcae30hbb ) * rtP . PIDController2_N_lijdwwumlg ; rtB .
koeitfs3qs = rtP . PIDController2_I_ndlknojsy1 * oiu0kn45t0 ; if ( ( rtB .
mhn1a21rba < 0.0 ) && ( a1vjbci1pk > muDoubleScalarFloor ( a1vjbci1pk ) ) ) {
avf2p33qfm = - muDoubleScalarPower ( - rtB . mhn1a21rba , a1vjbci1pk ) ; }
else { avf2p33qfm = muDoubleScalarPower ( rtB . mhn1a21rba , a1vjbci1pk ) ; }
rtB . erbxmtixnn = avf2p33qfm * okd5pvgkb1 * rtP . u_Gain_du2kb2gtqg ; if ( (
rtB . ifmju2saai < 0.0 ) && ( ie5vgnbghz > muDoubleScalarFloor ( ie5vgnbghz )
) ) { avf2p33qfm = - muDoubleScalarPower ( - rtB . ifmju2saai , ie5vgnbghz )
; } else { avf2p33qfm = muDoubleScalarPower ( rtB . ifmju2saai , ie5vgnbghz )
; } rtB . ifqdq0dvlo = avf2p33qfm * hyjjh43hwz * rtP . u_Gain_ofer0skcuw ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { } okd5pvgkb1 = muDoubleScalarCos ( rtB .
h3v4lxfb1f ) ; a1vjbci1pk = muDoubleScalarCos ( rtB . ippmfqft3q ) ;
hyjjh43hwz = rtP . Gain_Gain_ebhlmk5t4x * bme0js3mb1 ; ie5vgnbghz =
muDoubleScalarSin ( rtB . h3v4lxfb1f ) ; bme0js3mb1 = muDoubleScalarSin ( rtB
. ippmfqft3q ) ; avf2p33qfm = muDoubleScalarSin ( rtB . lmz1fmsj4f ) ; rtB .
o4g1hs3prq = ( okd5pvgkb1 * avf2p33qfm * bme0js3mb1 - ie5vgnbghz * a1vjbci1pk
) * hyjjh43hwz ; rtB . nr0h333x3t = muDoubleScalarCos ( rtB . lmz1fmsj4f ) *
okd5pvgkb1 * hyjjh43hwz - rtP . Quadrotor1_g ; rtB . k4tdeqes5w = (
okd5pvgkb1 * avf2p33qfm * a1vjbci1pk + ie5vgnbghz * bme0js3mb1 ) * hyjjh43hwz
; rtB . eg1tsljdkk = ssGetT ( rtS ) ; if ( rtB . eg1tsljdkk > rtP .
Switch4_Threshold ) { okd5pvgkb1 = rtP . Constant19_Value ; } else if ( rtB .
eg1tsljdkk > rtP . Switch3_Threshold ) { okd5pvgkb1 = muDoubleScalarSin ( rtP
. SineWave6_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave6_Phase ) * rtP
. SineWave6_Amp + rtP . SineWave6_Bias ; } else { okd5pvgkb1 = rtP .
Constant18_Value ; } rtB . ozeuxnz4s2 = ( okd5pvgkb1 - rtP . Constant20_Value
) * rtP . Gain4_Gain_imrt3sps2q ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( rtDW . pksgawvkdt . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . pksgawvkdt . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) &
rtB . eg1tsljdkk + 0 ) ; } } } rtB . faptzmeebh = rtX . peguzjy5mn ; rtB .
d0v0un3w2w = rtX . me0bh4hm5s ; rtB . dg2dcyrat3 = rtX . hbz2ulhakj ; rtB .
orfwokhk5z = ( ( rtP . PIDController_P_bdo03lnhov * prfb444tvb + rtX .
ewxbzsgpfb ) + rtB . arl0w053wq ) * rtP . u_Ixx * ( 1.0 / rtP .
Quadrotor1_Ixx ) + ( rtP . Quadrotor1_Iyy - rtP . Quadrotor1_Izz ) / rtP .
Quadrotor1_Ixx * ( rtB . faptzmeebh * rtB . d0v0un3w2w ) ; rtB . lpczuv1wwn =
( ( rtP . PIDController2_P_evzc3v5wmi * oiu0kn45t0 + rtX . e4nizbtx1o ) + rtB
. denh3c14d3 ) * rtP . u_Izz * ( 1.0 / rtP . Quadrotor1_Izz ) + ( rtP .
Quadrotor1_Ixx - rtP . Quadrotor1_Iyy ) / rtP . Quadrotor1_Izz * ( rtB .
dg2dcyrat3 * rtB . faptzmeebh ) ; rtB . psclu1x4sp = ( ( rtP .
PIDController1_P_m1rpi1feq5 * elzrnliqwb + rtX . as1ewi2dli ) + rtB .
gmgeuu4aud ) * rtP . u_Iyy * ( 1.0 / rtP . Quadrotor1_Iyy ) + ( rtP .
Quadrotor1_Izz - rtP . Quadrotor1_Ixx ) / rtP . Quadrotor1_Iyy * ( rtB .
dg2dcyrat3 * rtB . d0v0un3w2w ) ; rtB . dft5tbo5wq = ( ( 0.0 - rtB .
kjuszjdzc2 ) * rtP . PIDController_D_n0ajifbrzl - rtX . epzmv50cz2 ) * rtP .
PIDController_N_j1rqxncrvn ; rtB . esazz0r5z5 = ( ( 0.0 - rtB . kjuszjdzc2 )
* rtP . PIDController_P_gglswmusll + rtX . keylqchqmm ) + rtB . dft5tbo5wq ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . l5ym1yzrio = ( 0.0 - rtB .
kjuszjdzc2 ) * rtP . PIDController_I_l4hu2imemx ; rtB . c3szn2agjq = ( 0.0 -
rtB . lelvvdhupm ) * rtP . PIDController1_I_npnz5gp3zv ; rtB . j0aq0ulk0a = (
( 0.0 - rtB . lelvvdhupm ) * rtP . PIDController1_D_lllqr1ay3g - rtX .
cfu225phqd ) * rtP . PIDController1_N_kwhnf3hzry ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . kjeq2e1wm5 = rtP . PIDController2_I_edyryjr1ey *
dubmiafis4 ; dubmiafis4 = muDoubleScalarCos ( rtB . ab333bgofo ) ; okd5pvgkb1
= muDoubleScalarCos ( rtB . oqvwq5cqni ) ; a1vjbci1pk = rtP .
Gain_Gain_awestftebg * fl3xxiyoi5 ; rtB . hxhxj2shl2 = rtX . fgn1y5vita ;
fl3xxiyoi5 = muDoubleScalarSin ( rtB . ab333bgofo ) ; hyjjh43hwz =
muDoubleScalarSin ( rtB . oqvwq5cqni ) ; ie5vgnbghz = muDoubleScalarSin ( rtB
. bs10qga5ab ) ; rtB . pqwabbxcij = ( dubmiafis4 * ie5vgnbghz * okd5pvgkb1 +
fl3xxiyoi5 * hyjjh43hwz ) * a1vjbci1pk ; rtB . pjr4p5hmjj = ( dubmiafis4 *
ie5vgnbghz * hyjjh43hwz - fl3xxiyoi5 * okd5pvgkb1 ) * a1vjbci1pk ; rtB .
eno2o5z3yp = muDoubleScalarCos ( rtB . bs10qga5ab ) * dubmiafis4 * a1vjbci1pk
- rtP . Quadrotor_g ; rtB . n0kfsoom34 = rtX . aqn3psnulx ; rtB . djg2kt1x1r
= rtX . pgxafaf2gr ; rtB . pvhd4r3d4o = rtX . otgebcs22n ; rtB . noelpg3bo3 =
( ( rtP . PIDController_P_l3dvp4gzhj * behracxtlf + rtX . plju05ygdr ) + rtB
. g3ygqokvad ) * rtP . _Ixx * ( 1.0 / rtP . Quadrotor_Ixx ) + ( rtP .
Quadrotor_Iyy - rtP . Quadrotor_Izz ) / rtP . Quadrotor_Ixx * ( rtB .
n0kfsoom34 * rtB . djg2kt1x1r ) ; rtB . nbqizlyjkn = ( ( rtP .
PIDController2_P_kp1lf3scwu * g4uaoqjo4n + rtX . emlfvwiikj ) + rtB .
gi0ydjsvag ) * rtP . _Izz * ( 1.0 / rtP . Quadrotor_Izz ) + ( rtP .
Quadrotor_Ixx - rtP . Quadrotor_Iyy ) / rtP . Quadrotor_Izz * ( rtB .
pvhd4r3d4o * rtB . n0kfsoom34 ) ; rtB . hxdpyc4vbu = ( ( rtP .
PIDController1_P_oaxjkkp4ew * j0dry5zbri + rtX . f0rf0xa55w ) + rtB .
lizpqhkdqd ) * rtP . _Iyy * ( 1.0 / rtP . Quadrotor_Iyy ) + ( rtP .
Quadrotor_Izz - rtP . Quadrotor_Ixx ) / rtP . Quadrotor_Iyy * ( rtB .
pvhd4r3d4o * rtB . djg2kt1x1r ) ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { rtB . mhn1a21rba = rtP . Constant1_Value - rtP
. Gain17_Gain * rtP . Constant2_Value ; rtB . luqcnzg44g = rtP .
Constant37_Value - rtP . Constant38_Value ; rtB . ifmju2saai = rtP .
Constant3_Value - rtP . Gain3_Gain * rtP . Constant4_Value ; rtB . lnkfljj42y
= rtP . Constant5_Value_i2io2i2gcf - rtP . Constant6_Value_gooirbdlmo ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T * lastU ;
if ( rtDW . oqhzpe3pwd == ( rtInf ) ) { rtDW . oqhzpe3pwd = ssGetT ( rtS ) ;
lastU = & rtDW . pjb5x2p5pz ; } else if ( rtDW . ilfrz5gyiz == ( rtInf ) ) {
rtDW . ilfrz5gyiz = ssGetT ( rtS ) ; lastU = & rtDW . bpqrflndws ; } else if
( rtDW . oqhzpe3pwd < rtDW . ilfrz5gyiz ) { rtDW . oqhzpe3pwd = ssGetT ( rtS
) ; lastU = & rtDW . pjb5x2p5pz ; } else { rtDW . ilfrz5gyiz = ssGetT ( rtS )
; lastU = & rtDW . bpqrflndws ; } * lastU = rtB . cbu4idg12y ; if ( rtDW .
ahssk0tttr == ( rtInf ) ) { rtDW . ahssk0tttr = ssGetT ( rtS ) ; lastU = &
rtDW . potcnercix ; } else if ( rtDW . gyhz20plud == ( rtInf ) ) { rtDW .
gyhz20plud = ssGetT ( rtS ) ; lastU = & rtDW . dn5sswd0jp ; } else if ( rtDW
. ahssk0tttr < rtDW . gyhz20plud ) { rtDW . ahssk0tttr = ssGetT ( rtS ) ;
lastU = & rtDW . potcnercix ; } else { rtDW . gyhz20plud = ssGetT ( rtS ) ;
lastU = & rtDW . dn5sswd0jp ; } * lastU = rtP . Constant6_Value ; if ( rtDW .
itrolvxcy2 == ( rtInf ) ) { rtDW . itrolvxcy2 = ssGetT ( rtS ) ; lastU = &
rtDW . lkhjrmdr25 ; } else if ( rtDW . oo555w2jgf == ( rtInf ) ) { rtDW .
oo555w2jgf = ssGetT ( rtS ) ; lastU = & rtDW . jlnf1hhwet ; } else if ( rtDW
. itrolvxcy2 < rtDW . oo555w2jgf ) { rtDW . itrolvxcy2 = ssGetT ( rtS ) ;
lastU = & rtDW . lkhjrmdr25 ; } else { rtDW . oo555w2jgf = ssGetT ( rtS ) ;
lastU = & rtDW . jlnf1hhwet ; } * lastU = rtB . mfqo0htbck ; if ( rtDW .
jpcgn345yv == ( rtInf ) ) { rtDW . jpcgn345yv = ssGetT ( rtS ) ; lastU = &
rtDW . hs2y5swgfz ; } else if ( rtDW . ibvwech01e == ( rtInf ) ) { rtDW .
ibvwech01e = ssGetT ( rtS ) ; lastU = & rtDW . aeudxaauhc ; } else if ( rtDW
. jpcgn345yv < rtDW . ibvwech01e ) { rtDW . jpcgn345yv = ssGetT ( rtS ) ;
lastU = & rtDW . hs2y5swgfz ; } else { rtDW . ibvwech01e = ssGetT ( rtS ) ;
lastU = & rtDW . aeudxaauhc ; } * lastU = rtP . Constant7_Value ; if ( rtDW .
ipewzgngqr == ( rtInf ) ) { rtDW . ipewzgngqr = ssGetT ( rtS ) ; lastU = &
rtDW . cwwo4khs0i ; } else if ( rtDW . mbmzp2aurk == ( rtInf ) ) { rtDW .
mbmzp2aurk = ssGetT ( rtS ) ; lastU = & rtDW . e1kblvoky1 ; } else if ( rtDW
. ipewzgngqr < rtDW . mbmzp2aurk ) { rtDW . ipewzgngqr = ssGetT ( rtS ) ;
lastU = & rtDW . cwwo4khs0i ; } else { rtDW . mbmzp2aurk = ssGetT ( rtS ) ;
lastU = & rtDW . e1kblvoky1 ; } * lastU = rtB . nx2psp0vkj ; if ( rtDW .
jabfec0wwp == ( rtInf ) ) { rtDW . jabfec0wwp = ssGetT ( rtS ) ; lastU = &
rtDW . l1cu0hzuu3 ; } else if ( rtDW . bv2hzsnytg == ( rtInf ) ) { rtDW .
bv2hzsnytg = ssGetT ( rtS ) ; lastU = & rtDW . e2wis3wb3i ; } else if ( rtDW
. jabfec0wwp < rtDW . bv2hzsnytg ) { rtDW . jabfec0wwp = ssGetT ( rtS ) ;
lastU = & rtDW . l1cu0hzuu3 ; } else { rtDW . bv2hzsnytg = ssGetT ( rtS ) ;
lastU = & rtDW . e2wis3wb3i ; } * lastU = rtB . mvczrpqvic ; if ( rtDW .
orpsvqiaoa == ( rtInf ) ) { rtDW . orpsvqiaoa = ssGetT ( rtS ) ; lastU = &
rtDW . o4ckmxfkac ; } else if ( rtDW . lutbqduf2r == ( rtInf ) ) { rtDW .
lutbqduf2r = ssGetT ( rtS ) ; lastU = & rtDW . norshvxqtw ; } else if ( rtDW
. orpsvqiaoa < rtDW . lutbqduf2r ) { rtDW . orpsvqiaoa = ssGetT ( rtS ) ;
lastU = & rtDW . o4ckmxfkac ; } else { rtDW . lutbqduf2r = ssGetT ( rtS ) ;
lastU = & rtDW . norshvxqtw ; } * lastU = rtB . nltftrz3zp ; UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; _rtXdot -> k4ej2iactf = rtB . pvhd4r3d4o ; _rtXdot ->
osdmew3thc = rtB . n0kfsoom34 ; _rtXdot -> aif2vgddk0 = rtB . hxhxj2shl2 ;
_rtXdot -> g03la3p021 = rtB . erbxmtixnn ; _rtXdot -> avbuupshgm = rtB .
kjuszjdzc2 ; _rtXdot -> l31r5m0dnw = rtB . oxlz1roha4 ; _rtXdot -> ijq23yd5pt
= rtB . k4tdeqes5w ; _rtXdot -> ko1mt40rca = rtB . pqwabbxcij ; _rtXdot ->
maqvl2cfg0 = rtB . d0v0un3w2w ; _rtXdot -> kr0mtdabbi = rtB . ifqdq0dvlo ;
_rtXdot -> mqwrgffld1 = rtB . lelvvdhupm ; _rtXdot -> gmks24cnll = rtB .
hhmzrxqssa ; _rtXdot -> ja0wmx20on = rtB . o4g1hs3prq ; _rtXdot -> cgaiylvesm
= rtB . pjr4p5hmjj ; _rtXdot -> e5bw3nnryi = rtB . nr0h333x3t ; _rtXdot ->
i3ne1ua4rj = rtB . kjeq2e1wm5 ; _rtXdot -> oljewfzy43 = rtB . mswtfd202w ;
_rtXdot -> np2f1nemmj = rtB . dg2dcyrat3 ; _rtXdot -> nfl2fjrgpx = rtB .
faptzmeebh ; _rtXdot -> l1mufvbv4u = rtB . g14kw4hn4a ; _rtXdot -> iercuixttf
= rtB . djg2kt1x1r ; _rtXdot -> ejvpmsysss = rtB . cabobmzza1 ; _rtXdot ->
e3f4t4lxzl = rtB . llfvbzt5kv ; _rtXdot -> dovskkvz2v = rtB . akucc0fmnu ;
_rtXdot -> dxtvctmrdy = rtB . iqp5s5jqdj ; _rtXdot -> gy3fln0muh = rtB .
djtzd3nqfr ; _rtXdot -> ghvqhpu4fs = rtB . js4lycsxtc ; _rtXdot -> plju05ygdr
= rtB . pm1k1vpao3 ; _rtXdot -> n0hufts5nu = rtB . g3ygqokvad ; _rtXdot ->
f0rf0xa55w = rtB . dhpx0i0zqw ; _rtXdot -> iip5izs45l = rtB . lizpqhkdqd ;
_rtXdot -> emlfvwiikj = rtB . kup05il15v ; _rtXdot -> mhanejbd23 = rtB .
gi0ydjsvag ; _rtXdot -> ewxbzsgpfb = rtB . gnbrkrjeaf ; _rtXdot -> bs2ar2kcc5
= rtB . arl0w053wq ; _rtXdot -> as1ewi2dli = rtB . ptj4jqtbiw ; _rtXdot ->
kfhoarbrhc = rtB . gmgeuu4aud ; _rtXdot -> e4nizbtx1o = rtB . koeitfs3qs ;
_rtXdot -> mjcae30hbb = rtB . denh3c14d3 ; _rtXdot -> peguzjy5mn = rtB .
psclu1x4sp ; _rtXdot -> me0bh4hm5s = rtB . lpczuv1wwn ; _rtXdot -> hbz2ulhakj
= rtB . orfwokhk5z ; _rtXdot -> keylqchqmm = rtB . l5ym1yzrio ; _rtXdot ->
epzmv50cz2 = rtB . dft5tbo5wq ; _rtXdot -> cfu225phqd = rtB . j0aq0ulk0a ;
_rtXdot -> du0ialtbbo = rtB . c3szn2agjq ; _rtXdot -> fgn1y5vita = rtB .
eno2o5z3yp ; _rtXdot -> aqn3psnulx = rtB . hxdpyc4vbu ; _rtXdot -> pgxafaf2gr
= rtB . nbqizlyjkn ; _rtXdot -> otgebcs22n = rtB . noelpg3bo3 ; } void
MdlProjection ( void ) { } void MdlTerminate ( void ) { { if ( rtDW .
jdekw1bnrj . AQHandles ) { sdiTerminateStreaming ( & rtDW . jdekw1bnrj .
AQHandles ) ; } } { if ( rtDW . k15z1rwbvt . AQHandles ) {
sdiTerminateStreaming ( & rtDW . k15z1rwbvt . AQHandles ) ; } } { if ( rtDW .
j0ibqsazqx . AQHandles ) { sdiTerminateStreaming ( & rtDW . j0ibqsazqx .
AQHandles ) ; } } { if ( rtDW . dnt4uaun3e . AQHandles ) {
sdiTerminateStreaming ( & rtDW . dnt4uaun3e . AQHandles ) ; } } { if ( rtDW .
mxgow43j1c . AQHandles ) { sdiTerminateStreaming ( & rtDW . mxgow43j1c .
AQHandles ) ; } } { if ( rtDW . eq1ypafliz . AQHandles ) {
sdiTerminateStreaming ( & rtDW . eq1ypafliz . AQHandles ) ; } } { if ( rtDW .
pksgawvkdt . AQHandles ) { sdiTerminateStreaming ( & rtDW . pksgawvkdt .
AQHandles ) ; } } } static void mr_SwarmSTSMC2_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_SwarmSTSMC2_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SwarmSTSMC2_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SwarmSTSMC2_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SwarmSTSMC2_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SwarmSTSMC2_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SwarmSTSMC2_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SwarmSTSMC2_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SwarmSTSMC2_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_SwarmSTSMC2_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_SwarmSTSMC2_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SwarmSTSMC2_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SwarmSTSMC2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SwarmSTSMC2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SwarmSTSMC2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SwarmSTSMC2_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_SwarmSTSMC2_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB )
, sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 28 ] = {
"rtDW.oqhzpe3pwd" , "rtDW.pjb5x2p5pz" , "rtDW.ilfrz5gyiz" , "rtDW.bpqrflndws"
, "rtDW.ahssk0tttr" , "rtDW.potcnercix" , "rtDW.gyhz20plud" ,
"rtDW.dn5sswd0jp" , "rtDW.itrolvxcy2" , "rtDW.lkhjrmdr25" , "rtDW.oo555w2jgf"
, "rtDW.jlnf1hhwet" , "rtDW.jpcgn345yv" , "rtDW.hs2y5swgfz" ,
"rtDW.ibvwech01e" , "rtDW.aeudxaauhc" , "rtDW.ipewzgngqr" , "rtDW.cwwo4khs0i"
, "rtDW.mbmzp2aurk" , "rtDW.e1kblvoky1" , "rtDW.jabfec0wwp" ,
"rtDW.l1cu0hzuu3" , "rtDW.bv2hzsnytg" , "rtDW.e2wis3wb3i" , "rtDW.orpsvqiaoa"
, "rtDW.o4ckmxfkac" , "rtDW.lutbqduf2r" , "rtDW.norshvxqtw" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 28 , rtdwDataFieldNames ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . oqhzpe3pwd ) , sizeof ( rtDW . oqhzpe3pwd ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . pjb5x2p5pz ) , sizeof ( rtDW . pjb5x2p5pz ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . ilfrz5gyiz ) , sizeof ( rtDW . ilfrz5gyiz ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . bpqrflndws ) , sizeof ( rtDW . bpqrflndws ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . ahssk0tttr ) , sizeof ( rtDW . ahssk0tttr ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . potcnercix ) , sizeof ( rtDW . potcnercix ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . gyhz20plud ) , sizeof ( rtDW . gyhz20plud ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . dn5sswd0jp ) , sizeof ( rtDW . dn5sswd0jp ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . itrolvxcy2 ) , sizeof ( rtDW . itrolvxcy2 ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . lkhjrmdr25 ) , sizeof ( rtDW . lkhjrmdr25 ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . oo555w2jgf ) , sizeof ( rtDW . oo555w2jgf ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . jlnf1hhwet ) , sizeof ( rtDW . jlnf1hhwet ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . jpcgn345yv ) , sizeof ( rtDW . jpcgn345yv ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . hs2y5swgfz ) , sizeof ( rtDW . hs2y5swgfz ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . ibvwech01e ) , sizeof ( rtDW . ibvwech01e ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . aeudxaauhc ) , sizeof ( rtDW . aeudxaauhc ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . ipewzgngqr ) , sizeof ( rtDW . ipewzgngqr ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . cwwo4khs0i ) , sizeof ( rtDW . cwwo4khs0i ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . mbmzp2aurk ) , sizeof ( rtDW . mbmzp2aurk ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . e1kblvoky1 ) , sizeof ( rtDW . e1kblvoky1 ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . jabfec0wwp ) , sizeof ( rtDW . jabfec0wwp ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . l1cu0hzuu3 ) , sizeof ( rtDW . l1cu0hzuu3 ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . bv2hzsnytg ) , sizeof ( rtDW . bv2hzsnytg ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . e2wis3wb3i ) , sizeof ( rtDW . e2wis3wb3i ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . orpsvqiaoa ) , sizeof ( rtDW . orpsvqiaoa ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . o4ckmxfkac ) , sizeof ( rtDW . o4ckmxfkac ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
rtDW . lutbqduf2r ) , sizeof ( rtDW . lutbqduf2r ) ) ;
mr_SwarmSTSMC2_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
rtDW . norshvxqtw ) , sizeof ( rtDW . norshvxqtw ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_SwarmSTSMC2_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oqhzpe3pwd ) , rtdwData , 0 , 0 , sizeof ( rtDW . oqhzpe3pwd ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pjb5x2p5pz ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . pjb5x2p5pz ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ilfrz5gyiz ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . ilfrz5gyiz ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . bpqrflndws ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . bpqrflndws ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ahssk0tttr ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . ahssk0tttr ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . potcnercix ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . potcnercix ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gyhz20plud ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . gyhz20plud ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dn5sswd0jp ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . dn5sswd0jp ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . itrolvxcy2 ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . itrolvxcy2 ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lkhjrmdr25 ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . lkhjrmdr25 ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . oo555w2jgf ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . oo555w2jgf ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jlnf1hhwet ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . jlnf1hhwet ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jpcgn345yv ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . jpcgn345yv ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hs2y5swgfz ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . hs2y5swgfz ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ibvwech01e ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . ibvwech01e ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . aeudxaauhc ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . aeudxaauhc ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ipewzgngqr ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . ipewzgngqr ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . cwwo4khs0i ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . cwwo4khs0i ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . mbmzp2aurk ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . mbmzp2aurk ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . e1kblvoky1 ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . e1kblvoky1 ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jabfec0wwp ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . jabfec0wwp ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . l1cu0hzuu3 ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . l1cu0hzuu3 ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . bv2hzsnytg ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . bv2hzsnytg ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . e2wis3wb3i ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . e2wis3wb3i ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . orpsvqiaoa ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . orpsvqiaoa ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . o4ckmxfkac ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . o4ckmxfkac ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lutbqduf2r ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . lutbqduf2r ) ) ;
mr_SwarmSTSMC2_restoreDataFromMxArray ( ( void * ) & ( rtDW . norshvxqtw ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . norshvxqtw ) ) ; } } mxArray *
mr_SwarmSTSMC2_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char *
blockPath [ 10 ] = { "SwarmSTSMC2/Scope" , "SwarmSTSMC2/Scope1" ,
"SwarmSTSMC2/Scope10" , "SwarmSTSMC2/Scope11" , "SwarmSTSMC2/Scope12" ,
"SwarmSTSMC2/Scope13" , "SwarmSTSMC2/Scope14" , "SwarmSTSMC2/Scope15" ,
"SwarmSTSMC2/Scope16" , "SwarmSTSMC2/Scope17" , } ; static const int reason [
10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ;
subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 50 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 383 ) ; ssSetNumBlockIO ( rtS , 88 ) ;
ssSetNumBlockParams ( rtS , 191 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 3311069831U ) ;
ssSetChecksumVal ( rtS , 1 , 429242585U ) ; ssSetChecksumVal ( rtS , 2 ,
1931278995U ) ; ssSetChecksumVal ( rtS , 3 , 2222183107U ) ; }
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
SwarmSTSMC2_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "SwarmSTSMC2" ) ;
ssSetPath ( rtS , "SwarmSTSMC2" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 240.0 ) ; ssSetStepSize ( rtS , 0.001 ) ; ssSetFixedStepSize ( rtS ,
0.001 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] =
{ 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator1"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator1"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator5"
,
 "SwarmSTSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/Integrator5"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator1"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator1"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator1"
,
 "SwarmSTSMC2/&#x7F16;&#x961F;&#x534F;&#x540C;&#x63A7;&#x5236;&#x5668;/Integrator1"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator3"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator3"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator2"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator2"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator4"
,
 "SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator1"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator1"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator5"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator1"
,
 "SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator"
,
 "SwarmSTSMC2/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator"
,
 "SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSTSMC2/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator4"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator"
,
 "SwarmSTSMC2/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ]
= { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
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
, 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 50 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 50 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . k4ej2iactf ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . osdmew3thc ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . aif2vgddk0 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . g03la3p021 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . avbuupshgm ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . l31r5m0dnw ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . ijq23yd5pt ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ko1mt40rca ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . maqvl2cfg0 ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . kr0mtdabbi ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . mqwrgffld1 ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . gmks24cnll ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . ja0wmx20on ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . cgaiylvesm ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . e5bw3nnryi ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . i3ne1ua4rj ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . oljewfzy43 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . np2f1nemmj ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . nfl2fjrgpx ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . l1mufvbv4u ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . iercuixttf ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . ejvpmsysss ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . e3f4t4lxzl ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . dovskkvz2v ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . dxtvctmrdy ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . gy3fln0muh ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . ghvqhpu4fs ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . plju05ygdr ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . n0hufts5nu ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . f0rf0xa55w ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . iip5izs45l ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . emlfvwiikj ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . mhanejbd23 ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . ewxbzsgpfb ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . bs2ar2kcc5 ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . as1ewi2dli ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . kfhoarbrhc ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . e4nizbtx1o ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . mjcae30hbb ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . peguzjy5mn ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . me0bh4hm5s ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . hbz2ulhakj ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . keylqchqmm ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . epzmv50cz2 ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . cfu225phqd ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . du0ialtbbo ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . fgn1y5vita ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . aqn3psnulx ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . pgxafaf2gr ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . otgebcs22n ; }
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
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 50 ] ;
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
ssSetChecksumVal ( rtS , 0 , 3311069831U ) ; ssSetChecksumVal ( rtS , 1 ,
429242585U ) ; ssSetChecksumVal ( rtS , 2 , 1931278995U ) ; ssSetChecksumVal
( rtS , 3 , 2222183107U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 2 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_SwarmSTSMC2_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_SwarmSTSMC2_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_SwarmSTSMC2_SetDWork ) ; rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . Saturation_UpperSat_ha4sihnonx =
rtInf ; rtP . Saturation_LowerSat_hvr4bzptww = rtMinusInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
