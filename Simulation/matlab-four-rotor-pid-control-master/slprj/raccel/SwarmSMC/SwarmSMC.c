#include "SwarmSMC.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "SwarmSMC_private.h"
#include "rt_logging_mmi.h"
#include "SwarmSMC_capi.h"
#include "SwarmSMC_dt.h"
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
& model_S ; void MdlInitialize ( void ) { rtX . ierzrid0hd = rtP .
Integrator1_IC ; rtX . m1lmrkxl4o = rtP . Integrator1_IC_njked3y5ka ; rtX .
o5qayw1v0r = rtP . Integrator5_IC ; rtDW . ggis1oipis = ( rtInf ) ; rtDW .
frwczzk2ln = ( rtInf ) ; rtDW . pudhmmlp12 = ( rtInf ) ; rtDW . lbub0fpx0q =
( rtInf ) ; rtDW . lvela2u0nd = ( rtInf ) ; rtDW . csqyxtw2oa = ( rtInf ) ;
rtX . hcsoiluenw = rtP . Integrator1_IC_heq4ih3sop ; rtX . nhkqphdmoh = rtP .
Integrator1_IC_ggm3f24kg1 ; rtX . pcx3j5bpdr = rtP . Integrator_IC ; rtX .
f0uybwpi4z = rtP . Integrator_IC_lqzn20lau3 ; rtX . ofeqodlg3q = rtP .
Integrator1_IC_mm1y0ejde0 ; rtDW . ohvp0kdshz = ( rtInf ) ; rtDW . ath115vb4u
= ( rtInf ) ; rtDW . op4e4b1azw = ( rtInf ) ; rtDW . dtq3oazg3f = ( rtInf ) ;
rtX . hs52zzikfk = rtP . Integrator3_IC ; rtX . fpltxrwuy5 = rtP .
Integrator3_IC_nnhhmqfjhs ; rtX . euoucac3b5 = rtP . Integrator2_IC ; rtX .
bxtgkwb23f = rtP . Integrator2_IC_onz01dod3h ; rtX . fh0br42w3m = rtP .
Integrator4_IC ; rtX . izhgzfb2ax = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . j5amdzdzwz = rtP .
PIDController2_InitialConditionForFilter ; rtX . njsvdofmej = rtP .
Integrator1_IC_hluxpggxgx ; rtX . buctz3bw14 = rtP .
Integrator1_IC_lmb1knnxne ; rtX . azggg3kys4 = rtP .
Integrator5_IC_if0dkkc4sn ; rtX . fu4zz1wrfy = rtP .
Integrator1_IC_oayqv41ri2 ; rtX . l0zrm3yqun = rtP .
PIDController_InitialConditionForIntegrator ; rtX . j35xnotddg = rtP .
PIDController_InitialConditionForFilter ; rtX . hwso1a4mao = rtP .
PIDController1_InitialConditionForIntegrator ; rtX . errtzp5qsv = rtP .
PIDController1_InitialConditionForFilter ; rtX . chgtsiahuq = rtP .
PIDController2_InitialConditionForIntegrator_pbsngr4knz ; rtX . cscgyskqop =
rtP . PIDController2_InitialConditionForFilter_g0oftxmj3a ; rtDW . pgcprip31o
= ( rtInf ) ; rtDW . luhpswrkwb = ( rtInf ) ; rtDW . aolblubzps = ( rtInf ) ;
rtDW . myqiq4kkg2 = ( rtInf ) ; rtX . abbmyk4jok = rtP .
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; rtX . pi4frgxyol =
rtP . PIDController_InitialConditionForFilter_jdtq01u0hx ; rtX . goy0bw45vx =
rtP . PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; rtX .
d2dy5wkkx4 = rtP . PIDController1_InitialConditionForFilter_e5pnbc3vtr ; rtX
. a1lipaxdbz = rtP . PIDController2_InitialConditionForIntegrator_azyc2l4qmp
; rtX . hrhvia2p0k = rtP .
PIDController2_InitialConditionForFilter_dlk0zcvwml ; rtX . od4vibyeo2 = rtP
. PIDController_InitialConditionForIntegrator_i0pcwuwujv ; rtX . pbsvidhvjd =
rtP . PIDController_InitialConditionForFilter_cnipdysl5i ; rtX . giqn3h4hck =
rtP . PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; rtX .
dbokyzj2ag = rtP . PIDController1_InitialConditionForFilter_psmuwl2ggt ; rtX
. kmj3ah53md = rtP . PIDController2_InitialConditionForIntegrator_osgdcreqgv
; rtX . awmazfpnot = rtP .
PIDController2_InitialConditionForFilter_p4g1s3metf ; rtX . enudel20zi = rtP
. Integrator_IC_dkmzwnjlda ; rtX . a014sfrrqb = rtP .
Integrator_IC_kuhmbxgxyr ; rtX . nc5ml2iypz = rtP . Integrator_IC_pea4zoukn2
; rtX . i4tv4sp0jq = rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg ; rtX . exdf2roges =
rtP . PIDController_InitialConditionForFilter_o14mxov0mo ; rtX . pjifvmn0l1 =
rtP . PIDController1_InitialConditionForFilter_fwycow5gb3 ; rtX . ni1j2c1mbc
= rtP . PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; rtX .
drbsqv3c5a = rtP . Integrator4_IC_mfxj3ieh1q ; rtX . p5duqtatiq = rtP .
Integrator_IC_gxj5snzs0v ; rtX . lyoxyhmuzp = rtP . Integrator_IC_mwbhsimjtn
; rtX . egwuie0lij = rtP . Integrator_IC_mctvldpkh3 ; } void MdlStart ( void
) { { bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager
= rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace" ) ;
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
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dlwbwmerme . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2fc4f9e8-68af-40d6-bde4-85cef9cd4eb0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . dlwbwmerme . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . dlwbwmerme . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . dlwbwmerme . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . dlwbwmerme .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . dlwbwmerme . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
dlwbwmerme . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
dlwbwmerme . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . dlwbwmerme . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_x" ) ; sdiRegisterWksVariable ( rtDW . dlwbwmerme . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . alvifwtdlo . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1fcc2182-b004-4624-9ce1-cb6991a86df7" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . alvifwtdlo . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . alvifwtdlo . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . alvifwtdlo . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . alvifwtdlo .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . alvifwtdlo . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
alvifwtdlo . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
alvifwtdlo . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . alvifwtdlo . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_y" ) ; sdiRegisterWksVariable ( rtDW . alvifwtdlo . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bomnway3fc . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f3bc45a3-9a7c-4ca8-bdc6-f8335a3da862" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . bomnway3fc . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . bomnway3fc . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . bomnway3fc . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . bomnway3fc .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . bomnway3fc . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
bomnway3fc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
bomnway3fc . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . bomnway3fc . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"L_z" ) ; sdiRegisterWksVariable ( rtDW . bomnway3fc . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . khndcgupma . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5ebee608-8d05-4267-a8c9-8d514f0b9f0d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . khndcgupma . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . khndcgupma . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . khndcgupma . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . khndcgupma .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . khndcgupma . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
khndcgupma . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
khndcgupma . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . khndcgupma . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_x" ) ; sdiRegisterWksVariable ( rtDW . khndcgupma . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . lsn03zlptn . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "968c4ff1-7112-46b3-8d0e-45c862bcce43" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . lsn03zlptn . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . lsn03zlptn . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . lsn03zlptn . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . lsn03zlptn .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . lsn03zlptn . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
lsn03zlptn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
lsn03zlptn . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . lsn03zlptn . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_y" ) ; sdiRegisterWksVariable ( rtDW . lsn03zlptn . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars (
"&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "SwarmSMC/To Workspace5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1:3"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jrllfibwlq . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "58271486-e52e-46d6-9208-ca2e48d32bee" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . jrllfibwlq . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . jrllfibwlq . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . jrllfibwlq . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . jrllfibwlq .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jrllfibwlq . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
jrllfibwlq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
jrllfibwlq . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jrllfibwlq . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"F1_z" ) ; sdiRegisterWksVariable ( rtDW . jrllfibwlq . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { real_T avf2p33qfm ; real_T behracxtlf ;
real_T bme0js3mb1 ; real_T by3jzvahpt ; real_T dex ; real_T dey ; real_T
e5widbazon ; real_T elzrnliqwb ; real_T g4uaoqjo4n ; real_T kwbkcvianh ;
real_T oiu0kn45t0 ; real_T okml2cve45 ; real_T p1ouuhw0ck ; real_T prfb444tvb
; real_T * lastU ; if ( rtX . ierzrid0hd > rtP . Saturation_UpperSat ) { rtB
. nijaehkk5y = rtP . Saturation_UpperSat ; } else if ( rtX . ierzrid0hd < rtP
. Saturation_LowerSat ) { rtB . nijaehkk5y = rtP . Saturation_LowerSat ; }
else { rtB . nijaehkk5y = rtX . ierzrid0hd ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( rtX . m1lmrkxl4o > rtP . Saturation1_UpperSat ) { rtB .
lkykg4vpin = rtP . Saturation1_UpperSat ; } else if ( rtX . m1lmrkxl4o < rtP
. Saturation1_LowerSat ) { rtB . lkykg4vpin = rtP . Saturation1_LowerSat ; }
else { rtB . lkykg4vpin = rtX . m1lmrkxl4o ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } rtB . gqaka0zbqz = rtX . o5qayw1v0r ; if ( ( rtDW . ggis1oipis >=
ssGetT ( rtS ) ) && ( rtDW . frwczzk2ln >= ssGetT ( rtS ) ) ) { rtB .
n2bqd5s3r5 = 0.0 ; } else { g4uaoqjo4n = rtDW . ggis1oipis ; lastU = & rtDW .
hubalrhh01 ; if ( rtDW . ggis1oipis < rtDW . frwczzk2ln ) { if ( rtDW .
frwczzk2ln < ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . frwczzk2ln ; lastU = &
rtDW . jgof1guati ; } } else if ( rtDW . ggis1oipis >= ssGetT ( rtS ) ) {
g4uaoqjo4n = rtDW . frwczzk2ln ; lastU = & rtDW . jgof1guati ; } rtB .
n2bqd5s3r5 = ( rtB . gqaka0zbqz - * lastU ) / ( ssGetT ( rtS ) - g4uaoqjo4n )
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ( rtDW . pudhmmlp12 >=
ssGetT ( rtS ) ) && ( rtDW . lbub0fpx0q >= ssGetT ( rtS ) ) ) { rtB .
d3n1bq2bsd = 0.0 ; } else { g4uaoqjo4n = rtDW . pudhmmlp12 ; lastU = & rtDW .
bldz3dvpqv ; if ( rtDW . pudhmmlp12 < rtDW . lbub0fpx0q ) { if ( rtDW .
lbub0fpx0q < ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . lbub0fpx0q ; lastU = &
rtDW . alfpa1ng1j ; } } else if ( rtDW . pudhmmlp12 >= ssGetT ( rtS ) ) {
g4uaoqjo4n = rtDW . lbub0fpx0q ; lastU = & rtDW . alfpa1ng1j ; } rtB .
d3n1bq2bsd = ( rtP . Constant6_Value - * lastU ) / ( ssGetT ( rtS ) -
g4uaoqjo4n ) ; } if ( ( rtDW . lvela2u0nd >= ssGetT ( rtS ) ) && ( rtDW .
csqyxtw2oa >= ssGetT ( rtS ) ) ) { okml2cve45 = 0.0 ; } else { g4uaoqjo4n =
rtDW . lvela2u0nd ; lastU = & rtDW . mjxuc44ca2 ; if ( rtDW . lvela2u0nd <
rtDW . csqyxtw2oa ) { if ( rtDW . csqyxtw2oa < ssGetT ( rtS ) ) { g4uaoqjo4n
= rtDW . csqyxtw2oa ; lastU = & rtDW . owuu23bo0m ; } } else if ( rtDW .
lvela2u0nd >= ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . csqyxtw2oa ; lastU = &
rtDW . owuu23bo0m ; } okml2cve45 = ( rtB . d3n1bq2bsd - * lastU ) / ( ssGetT
( rtS ) - g4uaoqjo4n ) ; } rtB . o3s0yj5gax = rtP .
Constant6_Value_ji4ih5grvx + rtX . hcsoiluenw ; rtB . m3v3rravbj = rtP .
Constant1_Value_fgyxvvitry + rtX . nhkqphdmoh ; rtB . dyeejkxwzu = rtB .
o3s0yj5gax - rtB . m3v3rravbj ; rtB . b11uqayebr = rtX . pcx3j5bpdr ; rtB .
huzuvha3a1 = rtX . f0uybwpi4z ; dex = ( rtB . b11uqayebr - rtB . huzuvha3a1 )
- rtB . d3n1bq2bsd ; dex = ( okml2cve45 - dex ) - muDoubleScalarSign ( ( rtB
. dyeejkxwzu - rtP . Constant6_Value ) + dex ) ; if ( rtX . ofeqodlg3q > rtP
. Saturation2_UpperSat ) { rtB . b2zh23uv2c = rtP . Saturation2_UpperSat ; }
else if ( rtX . ofeqodlg3q < rtP . Saturation2_LowerSat ) { rtB . b2zh23uv2c
= rtP . Saturation2_LowerSat ; } else { rtB . b2zh23uv2c = rtX . ofeqodlg3q ;
} behracxtlf = muDoubleScalarSin ( rtB . b2zh23uv2c ) ; if ( ( rtDW .
ohvp0kdshz >= ssGetT ( rtS ) ) && ( rtDW . ath115vb4u >= ssGetT ( rtS ) ) ) {
rtB . lgh4e2lkcu = 0.0 ; } else { g4uaoqjo4n = rtDW . ohvp0kdshz ; lastU = &
rtDW . egvkxav0b4 ; if ( rtDW . ohvp0kdshz < rtDW . ath115vb4u ) { if ( rtDW
. ath115vb4u < ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . ath115vb4u ; lastU = &
rtDW . ezhqenn2bw ; } } else if ( rtDW . ohvp0kdshz >= ssGetT ( rtS ) ) {
g4uaoqjo4n = rtDW . ath115vb4u ; lastU = & rtDW . ezhqenn2bw ; } rtB .
lgh4e2lkcu = ( rtP . Constant7_Value - * lastU ) / ( ssGetT ( rtS ) -
g4uaoqjo4n ) ; } if ( ( rtDW . op4e4b1azw >= ssGetT ( rtS ) ) && ( rtDW .
dtq3oazg3f >= ssGetT ( rtS ) ) ) { okml2cve45 = 0.0 ; } else { g4uaoqjo4n =
rtDW . op4e4b1azw ; lastU = & rtDW . hf4keotknk ; if ( rtDW . op4e4b1azw <
rtDW . dtq3oazg3f ) { if ( rtDW . dtq3oazg3f < ssGetT ( rtS ) ) { g4uaoqjo4n
= rtDW . dtq3oazg3f ; lastU = & rtDW . en41udlirg ; } } else if ( rtDW .
op4e4b1azw >= ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . dtq3oazg3f ; lastU = &
rtDW . en41udlirg ; } okml2cve45 = ( rtB . lgh4e2lkcu - * lastU ) / ( ssGetT
( rtS ) - g4uaoqjo4n ) ; } rtB . k1vittk2uq = rtP . Constant1_Value + rtX .
hs52zzikfk ; rtB . b4xjixs5fg = rtX . fpltxrwuy5 ; rtB . ja3f0fgj3m = rtB .
k1vittk2uq - rtB . b4xjixs5fg ; rtB . kcubbifgom = rtX . euoucac3b5 ; rtB .
gkmzudpozm = rtX . bxtgkwb23f ; dey = ( rtB . kcubbifgom - rtB . gkmzudpozm )
- rtB . lgh4e2lkcu ; dey = ( okml2cve45 - dey ) - muDoubleScalarSign ( ( rtB
. ja3f0fgj3m - rtP . Constant7_Value ) + dey ) ; g4uaoqjo4n =
muDoubleScalarCos ( rtB . b2zh23uv2c ) ; rtB . jbcm5vqd5h = rtX . fh0br42w3m
; okml2cve45 = rtP . Constant5_Value - rtB . jbcm5vqd5h ; rtB . niyqay0qte =
( rtP . PIDController2_D * okml2cve45 - rtX . j5amdzdzwz ) * rtP .
PIDController2_N ; rtB . nhtgbclv1h = ( rtP . PIDController2_P * okml2cve45 +
rtX . izhgzfb2ax ) + rtB . niyqay0qte ; if ( rtX . njsvdofmej > rtP .
Saturation_UpperSat_ha4sihnonx ) { rtB . k3znbdx45a = rtP .
Saturation_UpperSat_ha4sihnonx ; } else if ( rtX . njsvdofmej < rtP .
Saturation_LowerSat_hvr4bzptww ) { rtB . k3znbdx45a = rtP .
Saturation_LowerSat_hvr4bzptww ; } else { rtB . k3znbdx45a = rtX . njsvdofmej
; } if ( rtX . buctz3bw14 > rtP . Saturation1_UpperSat_hb4te1hlrm ) { rtB .
bsg1oz4zao = rtP . Saturation1_UpperSat_hb4te1hlrm ; } else if ( rtX .
buctz3bw14 < rtP . Saturation1_LowerSat_bckpxbzwol ) { rtB . bsg1oz4zao = rtP
. Saturation1_LowerSat_bckpxbzwol ; } else { rtB . bsg1oz4zao = rtX .
buctz3bw14 ; } bme0js3mb1 = ( rtB . nhtgbclv1h + rtP . _g_itsbn0zy4d ) * rtP
. _m_ezmi533ezn / ( muDoubleScalarCos ( rtB . k3znbdx45a ) *
muDoubleScalarCos ( rtB . bsg1oz4zao ) ) ; elzrnliqwb = ( dex * behracxtlf -
dey * g4uaoqjo4n ) * rtP . fantheta1_m / bme0js3mb1 ; if ( elzrnliqwb > rtP .
Saturation_UpperSat_hwp4xnffla ) { elzrnliqwb = rtP .
Saturation_UpperSat_hwp4xnffla ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_psalob5khl ) { elzrnliqwb = rtP .
Saturation_LowerSat_psalob5khl ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb = 1.0
; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB . ctyx0y5ry4
= muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
} elzrnliqwb = ( dex * g4uaoqjo4n + dey * behracxtlf ) * rtP . fantheta1_m /
( bme0js3mb1 * muDoubleScalarCos ( rtB . k3znbdx45a ) ) ; if ( elzrnliqwb >
rtP . Saturation1_UpperSat_pb2v3x1tuf ) { elzrnliqwb = rtP .
Saturation1_UpperSat_pb2v3x1tuf ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_egd2dbjq3l ) { elzrnliqwb = rtP .
Saturation1_LowerSat_egd2dbjq3l ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
pp3zaopnp0 = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } rtB . enoevjnv1e = rtX . azggg3kys4 ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } if ( rtX . fu4zz1wrfy > rtP . Saturation2_UpperSat_eydgfhthvi )
{ rtB . gt3e3xlo5h = rtP . Saturation2_UpperSat_eydgfhthvi ; } else if ( rtX
. fu4zz1wrfy < rtP . Saturation2_LowerSat_pvud2psr4g ) { rtB . gt3e3xlo5h =
rtP . Saturation2_LowerSat_pvud2psr4g ; } else { rtB . gt3e3xlo5h = rtX .
fu4zz1wrfy ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . p3gegtratp =
muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ippmxr5ckc = muDoubleScalarSin (
rtP . SineWave1_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave1_Phase ) *
rtP . SineWave1_Amp + rtP . SineWave1_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { } dex = ssGetT ( rtS ) ; dey = rtP . Gain1_Gain * dex ; rtB .
fq5mh51dfu = dey - rtB . m3v3rravbj ; rtB . cqv31ub2p2 = ( rtP .
PIDController_D * rtB . fq5mh51dfu - rtX . j35xnotddg ) * rtP .
PIDController_N ; rtB . czc3piqflb = ( rtP . PIDController_P * rtB .
fq5mh51dfu + rtX . l0zrm3yqun ) + rtB . cqv31ub2p2 ; behracxtlf =
muDoubleScalarSin ( rtB . gt3e3xlo5h ) ; dey = ( ( muDoubleScalarSin ( rtP .
SineWave2_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave2_Phase ) * rtP .
SineWave2_Amp + rtP . SineWave2_Bias ) + dey ) - rtB . b4xjixs5fg ; rtB .
cfd022pdop = ( rtP . PIDController1_D * dey - rtX . errtzp5qsv ) * rtP .
PIDController1_N ; g4uaoqjo4n = ( rtP . PIDController1_P * dey + rtX .
hwso1a4mao ) + rtB . cfd022pdop ; prfb444tvb = muDoubleScalarCos ( rtB .
gt3e3xlo5h ) ; rtB . d5as0a2g43 = rtP . Gain_Gain * dex - rtB . gqaka0zbqz ;
rtB . c2bk2ghfvw = ( rtP . PIDController2_D_dfmo4lhky4 * rtB . d5as0a2g43 -
rtX . cscgyskqop ) * rtP . PIDController2_N_mpslhyucvp ; rtB . b1bp2gknyd = (
rtP . PIDController2_P_dlj4ikvxns * rtB . d5as0a2g43 + rtX . chgtsiahuq ) +
rtB . c2bk2ghfvw ; dex = ( rtB . b1bp2gknyd + rtP . _g ) * rtP .
_m_acbzxt22m1 / ( muDoubleScalarCos ( rtB . nijaehkk5y ) * muDoubleScalarCos
( rtB . lkykg4vpin ) ) ; elzrnliqwb = ( rtB . czc3piqflb * behracxtlf -
g4uaoqjo4n * prfb444tvb ) * rtP . fantheta_m / dex ; if ( elzrnliqwb > rtP .
Saturation_UpperSat_ip5m4fy0ed ) { rtB . nn1ie4rsr3 = rtP .
Saturation_UpperSat_ip5m4fy0ed ; } else if ( elzrnliqwb < rtP .
Saturation_LowerSat_j5wcuf0dgd ) { rtB . nn1ie4rsr3 = rtP .
Saturation_LowerSat_j5wcuf0dgd ; } else { rtB . nn1ie4rsr3 = elzrnliqwb ; }
if ( rtB . nn1ie4rsr3 > 1.0 ) { elzrnliqwb = 1.0 ; } else if ( rtB .
nn1ie4rsr3 < - 1.0 ) { elzrnliqwb = - 1.0 ; } else { elzrnliqwb = rtB .
nn1ie4rsr3 ; } rtB . g2ht0iyolo = muDoubleScalarAsin ( elzrnliqwb ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } elzrnliqwb = ( rtB . czc3piqflb *
prfb444tvb + g4uaoqjo4n * behracxtlf ) * rtP . fantheta_m / ( dex *
muDoubleScalarCos ( rtB . nijaehkk5y ) ) ; if ( elzrnliqwb > rtP .
Saturation1_UpperSat_ilexu3zjfy ) { elzrnliqwb = rtP .
Saturation1_UpperSat_ilexu3zjfy ; } else if ( elzrnliqwb < rtP .
Saturation1_LowerSat_bg51c0dlft ) { elzrnliqwb = rtP .
Saturation1_LowerSat_bg51c0dlft ; } if ( elzrnliqwb > 1.0 ) { elzrnliqwb =
1.0 ; } else if ( elzrnliqwb < - 1.0 ) { elzrnliqwb = - 1.0 ; } rtB .
ctgcfcimda = muDoubleScalarAsin ( elzrnliqwb ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { } if ( ( rtDW . pgcprip31o >= ssGetT ( rtS ) ) && ( rtDW .
luhpswrkwb >= ssGetT ( rtS ) ) ) { rtB . ojclt4lxsx = 0.0 ; } else {
g4uaoqjo4n = rtDW . pgcprip31o ; lastU = & rtDW . njnzxugshn ; if ( rtDW .
pgcprip31o < rtDW . luhpswrkwb ) { if ( rtDW . luhpswrkwb < ssGetT ( rtS ) )
{ g4uaoqjo4n = rtDW . luhpswrkwb ; lastU = & rtDW . cop5mbhoom ; } } else if
( rtDW . pgcprip31o >= ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . luhpswrkwb ;
lastU = & rtDW . cop5mbhoom ; } rtB . ojclt4lxsx = ( rtB . m3v3rravbj - *
lastU ) / ( ssGetT ( rtS ) - g4uaoqjo4n ) ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { } if ( ( rtDW . aolblubzps >= ssGetT ( rtS ) ) && ( rtDW . myqiq4kkg2
>= ssGetT ( rtS ) ) ) { rtB . j4pozpl4t4 = 0.0 ; } else { g4uaoqjo4n = rtDW .
aolblubzps ; lastU = & rtDW . em4zy3f4e0 ; if ( rtDW . aolblubzps < rtDW .
myqiq4kkg2 ) { if ( rtDW . myqiq4kkg2 < ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW
. myqiq4kkg2 ; lastU = & rtDW . g3hb4szo4p ; } } else if ( rtDW . aolblubzps
>= ssGetT ( rtS ) ) { g4uaoqjo4n = rtDW . myqiq4kkg2 ; lastU = & rtDW .
g3hb4szo4p ; } rtB . j4pozpl4t4 = ( rtB . b4xjixs5fg - * lastU ) / ( ssGetT (
rtS ) - g4uaoqjo4n ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW .
dlwbwmerme . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
dlwbwmerme . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
m3v3rravbj + 0 ) ; } } { if ( rtDW . alvifwtdlo . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . alvifwtdlo . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . b4xjixs5fg + 0 ) ; } } { if ( rtDW .
bomnway3fc . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
bomnway3fc . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
gqaka0zbqz + 0 ) ; } } { if ( rtDW . khndcgupma . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . khndcgupma . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . o3s0yj5gax + 0 ) ; } } { if ( rtDW .
lsn03zlptn . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
lsn03zlptn . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
k1vittk2uq + 0 ) ; } } { if ( rtDW . jrllfibwlq . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . jrllfibwlq . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . enoevjnv1e + 0 ) ; } } } rtB . hqqlk5o3dg =
rtP . PIDController_I * rtB . fq5mh51dfu ; rtB . chlzcsr5wp = rtP .
PIDController1_I * dey ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB .
cjnzoud2pu = rtP . PIDController2_I * rtB . d5as0a2g43 ; behracxtlf = rtB .
g2ht0iyolo - rtB . nijaehkk5y ; rtB . bxv13iqy1p = ( rtP .
PIDController_D_bnpdwpgf2r * behracxtlf - rtX . pi4frgxyol ) * rtP .
PIDController_N_nq5smeuvru ; rtB . o2lnbkkatl = rtP .
PIDController_I_ctexg1ydk0 * behracxtlf ; dey = rtB . ctgcfcimda - rtB .
lkykg4vpin ; rtB . eyxfl2tvio = ( rtP . PIDController1_D_ipmgxlwt3s * dey -
rtX . d2dy5wkkx4 ) * rtP . PIDController1_N_ju5pdg3n40 ; rtB . cmojsmzo0w =
rtP . PIDController1_I_g3r3n5sujh * dey ; g4uaoqjo4n = rtP . psi_Value - rtB
. gt3e3xlo5h ; rtB . h3f0jpl1bh = ( rtP . PIDController2_D_g4w5zspqgm *
g4uaoqjo4n - rtX . hrhvia2p0k ) * rtP . PIDController2_N_gwanukygue ; rtB .
ijmvtycyip = rtP . PIDController2_I_k3epcgcoj0 * g4uaoqjo4n ; prfb444tvb =
rtB . ctyx0y5ry4 - rtB . k3znbdx45a ; rtB . ejhqhly2oq = ( rtP .
PIDController_D_jkhgbbl1en * prfb444tvb - rtX . pbsvidhvjd ) * rtP .
PIDController_N_bgper011ra ; rtB . awqerpv0sd = rtP .
PIDController_I_dlmuknchuh * prfb444tvb ; elzrnliqwb = rtB . pp3zaopnp0 - rtB
. bsg1oz4zao ; rtB . mxtnstwk0a = ( rtP . PIDController1_D_ak3x55jqvu *
elzrnliqwb - rtX . dbokyzj2ag ) * rtP . PIDController1_N_gfjurlmhit ; rtB .
iyyl3tvpfx = rtP . PIDController1_I_hetisvzriu * elzrnliqwb ; oiu0kn45t0 =
rtP . psi1_Value - rtB . b2zh23uv2c ; rtB . nqyk4emlzq = ( rtP .
PIDController2_D_jd4dbxg05c * oiu0kn45t0 - rtX . awmazfpnot ) * rtP .
PIDController2_N_lijdwwumlg ; rtB . ecdem3sw01 = rtP .
PIDController2_I_ndlknojsy1 * oiu0kn45t0 ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { } kwbkcvianh = muDoubleScalarCos ( rtB . k3znbdx45a ) ; e5widbazon =
muDoubleScalarCos ( rtB . b2zh23uv2c ) ; bme0js3mb1 *= rtP .
Gain_Gain_ebhlmk5t4x ; by3jzvahpt = muDoubleScalarSin ( rtB . k3znbdx45a ) ;
p1ouuhw0ck = muDoubleScalarSin ( rtB . b2zh23uv2c ) ; avf2p33qfm =
muDoubleScalarSin ( rtB . bsg1oz4zao ) ; rtB . czrl5rwqem = ( kwbkcvianh *
avf2p33qfm * e5widbazon + by3jzvahpt * p1ouuhw0ck ) * bme0js3mb1 ; rtB .
kzmb3zizp3 = ( kwbkcvianh * avf2p33qfm * p1ouuhw0ck - by3jzvahpt * e5widbazon
) * bme0js3mb1 ; rtB . fsn45jdetv = muDoubleScalarCos ( rtB . bsg1oz4zao ) *
kwbkcvianh * bme0js3mb1 - rtP . Quadrotor1_g ; rtB . klcywjqtkc = rtX .
enudel20zi ; rtB . ajbpx3kvnb = rtX . a014sfrrqb ; rtB . iyv4ln3f3a = rtX .
nc5ml2iypz ; rtB . bbh02spk5k = ( ( rtP . PIDController_P_bdo03lnhov *
prfb444tvb + rtX . od4vibyeo2 ) + rtB . ejhqhly2oq ) * rtP . u_Ixx * ( 1.0 /
rtP . Quadrotor1_Ixx ) + ( rtP . Quadrotor1_Iyy - rtP . Quadrotor1_Izz ) /
rtP . Quadrotor1_Ixx * ( rtB . klcywjqtkc * rtB . ajbpx3kvnb ) ; rtB .
l45q3xvr3p = ( ( rtP . PIDController2_P_evzc3v5wmi * oiu0kn45t0 + rtX .
kmj3ah53md ) + rtB . nqyk4emlzq ) * rtP . u_Izz * ( 1.0 / rtP .
Quadrotor1_Izz ) + ( rtP . Quadrotor1_Ixx - rtP . Quadrotor1_Iyy ) / rtP .
Quadrotor1_Izz * ( rtB . iyv4ln3f3a * rtB . klcywjqtkc ) ; rtB . nqceurawtv =
( ( rtP . PIDController1_P_m1rpi1feq5 * elzrnliqwb + rtX . giqn3h4hck ) + rtB
. mxtnstwk0a ) * rtP . u_Iyy * ( 1.0 / rtP . Quadrotor1_Iyy ) + ( rtP .
Quadrotor1_Izz - rtP . Quadrotor1_Ixx ) / rtP . Quadrotor1_Iyy * ( rtB .
iyv4ln3f3a * rtB . ajbpx3kvnb ) ; rtB . k1hkyybkdi = ( ( 0.0 - rtB .
b11uqayebr ) * rtP . PIDController_D_n0ajifbrzl - rtX . exdf2roges ) * rtP .
PIDController_N_j1rqxncrvn ; rtB . p0hghhrscv = ( ( 0.0 - rtB . b11uqayebr )
* rtP . PIDController_P_gglswmusll + rtX . i4tv4sp0jq ) + rtB . k1hkyybkdi ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . hlakq0pjds = ( 0.0 - rtB .
b11uqayebr ) * rtP . PIDController_I_l4hu2imemx ; rtB . bsscyz3ape = ( 0.0 -
rtB . kcubbifgom ) * rtP . PIDController1_I_npnz5gp3zv ; rtB . jtfoulirts = (
( 0.0 - rtB . kcubbifgom ) * rtP . PIDController1_D_lllqr1ay3g - rtX .
pjifvmn0l1 ) * rtP . PIDController1_N_kwhnf3hzry ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { } rtB . fuk2vdeng1 = rtP . PIDController2_I_edyryjr1ey *
okml2cve45 ; okml2cve45 = muDoubleScalarCos ( rtB . nijaehkk5y ) ; bme0js3mb1
= muDoubleScalarCos ( rtB . gt3e3xlo5h ) ; dex *= rtP . Gain_Gain_awestftebg
; rtB . nma3hnslh2 = rtX . drbsqv3c5a ; prfb444tvb = muDoubleScalarSin ( rtB
. nijaehkk5y ) ; elzrnliqwb = muDoubleScalarSin ( rtB . gt3e3xlo5h ) ;
oiu0kn45t0 = muDoubleScalarSin ( rtB . lkykg4vpin ) ; rtB . kj0h3f414v = (
okml2cve45 * oiu0kn45t0 * bme0js3mb1 + prfb444tvb * elzrnliqwb ) * dex ; rtB
. crq4svhi5a = ( okml2cve45 * oiu0kn45t0 * elzrnliqwb - prfb444tvb *
bme0js3mb1 ) * dex ; rtB . f0zns2surv = muDoubleScalarCos ( rtB . lkykg4vpin
) * okml2cve45 * dex - rtP . Quadrotor_g ; rtB . nmglfjrqhn = rtX .
p5duqtatiq ; rtB . covqhj51g0 = rtX . lyoxyhmuzp ; rtB . mxqeg5xjzk = rtX .
egwuie0lij ; rtB . auamzom4d2 = ( ( rtP . PIDController_P_l3dvp4gzhj *
behracxtlf + rtX . abbmyk4jok ) + rtB . bxv13iqy1p ) * rtP . _Ixx * ( 1.0 /
rtP . Quadrotor_Ixx ) + ( rtP . Quadrotor_Iyy - rtP . Quadrotor_Izz ) / rtP .
Quadrotor_Ixx * ( rtB . nmglfjrqhn * rtB . covqhj51g0 ) ; rtB . ju30daz21p =
( ( rtP . PIDController2_P_kp1lf3scwu * g4uaoqjo4n + rtX . a1lipaxdbz ) + rtB
. h3f0jpl1bh ) * rtP . _Izz * ( 1.0 / rtP . Quadrotor_Izz ) + ( rtP .
Quadrotor_Ixx - rtP . Quadrotor_Iyy ) / rtP . Quadrotor_Izz * ( rtB .
mxqeg5xjzk * rtB . nmglfjrqhn ) ; rtB . haauknmlqq = ( ( rtP .
PIDController1_P_oaxjkkp4ew * dey + rtX . goy0bw45vx ) + rtB . eyxfl2tvio ) *
rtP . _Iyy * ( 1.0 / rtP . Quadrotor_Iyy ) + ( rtP . Quadrotor_Izz - rtP .
Quadrotor_Ixx ) / rtP . Quadrotor_Iyy * ( rtB . mxqeg5xjzk * rtB . covqhj51g0
) ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T * lastU ;
if ( rtDW . ggis1oipis == ( rtInf ) ) { rtDW . ggis1oipis = ssGetT ( rtS ) ;
lastU = & rtDW . hubalrhh01 ; } else if ( rtDW . frwczzk2ln == ( rtInf ) ) {
rtDW . frwczzk2ln = ssGetT ( rtS ) ; lastU = & rtDW . jgof1guati ; } else if
( rtDW . ggis1oipis < rtDW . frwczzk2ln ) { rtDW . ggis1oipis = ssGetT ( rtS
) ; lastU = & rtDW . hubalrhh01 ; } else { rtDW . frwczzk2ln = ssGetT ( rtS )
; lastU = & rtDW . jgof1guati ; } * lastU = rtB . gqaka0zbqz ; if ( rtDW .
pudhmmlp12 == ( rtInf ) ) { rtDW . pudhmmlp12 = ssGetT ( rtS ) ; lastU = &
rtDW . bldz3dvpqv ; } else if ( rtDW . lbub0fpx0q == ( rtInf ) ) { rtDW .
lbub0fpx0q = ssGetT ( rtS ) ; lastU = & rtDW . alfpa1ng1j ; } else if ( rtDW
. pudhmmlp12 < rtDW . lbub0fpx0q ) { rtDW . pudhmmlp12 = ssGetT ( rtS ) ;
lastU = & rtDW . bldz3dvpqv ; } else { rtDW . lbub0fpx0q = ssGetT ( rtS ) ;
lastU = & rtDW . alfpa1ng1j ; } * lastU = rtP . Constant6_Value ; if ( rtDW .
lvela2u0nd == ( rtInf ) ) { rtDW . lvela2u0nd = ssGetT ( rtS ) ; lastU = &
rtDW . mjxuc44ca2 ; } else if ( rtDW . csqyxtw2oa == ( rtInf ) ) { rtDW .
csqyxtw2oa = ssGetT ( rtS ) ; lastU = & rtDW . owuu23bo0m ; } else if ( rtDW
. lvela2u0nd < rtDW . csqyxtw2oa ) { rtDW . lvela2u0nd = ssGetT ( rtS ) ;
lastU = & rtDW . mjxuc44ca2 ; } else { rtDW . csqyxtw2oa = ssGetT ( rtS ) ;
lastU = & rtDW . owuu23bo0m ; } * lastU = rtB . d3n1bq2bsd ; if ( rtDW .
ohvp0kdshz == ( rtInf ) ) { rtDW . ohvp0kdshz = ssGetT ( rtS ) ; lastU = &
rtDW . egvkxav0b4 ; } else if ( rtDW . ath115vb4u == ( rtInf ) ) { rtDW .
ath115vb4u = ssGetT ( rtS ) ; lastU = & rtDW . ezhqenn2bw ; } else if ( rtDW
. ohvp0kdshz < rtDW . ath115vb4u ) { rtDW . ohvp0kdshz = ssGetT ( rtS ) ;
lastU = & rtDW . egvkxav0b4 ; } else { rtDW . ath115vb4u = ssGetT ( rtS ) ;
lastU = & rtDW . ezhqenn2bw ; } * lastU = rtP . Constant7_Value ; if ( rtDW .
op4e4b1azw == ( rtInf ) ) { rtDW . op4e4b1azw = ssGetT ( rtS ) ; lastU = &
rtDW . hf4keotknk ; } else if ( rtDW . dtq3oazg3f == ( rtInf ) ) { rtDW .
dtq3oazg3f = ssGetT ( rtS ) ; lastU = & rtDW . en41udlirg ; } else if ( rtDW
. op4e4b1azw < rtDW . dtq3oazg3f ) { rtDW . op4e4b1azw = ssGetT ( rtS ) ;
lastU = & rtDW . hf4keotknk ; } else { rtDW . dtq3oazg3f = ssGetT ( rtS ) ;
lastU = & rtDW . en41udlirg ; } * lastU = rtB . lgh4e2lkcu ; if ( rtDW .
pgcprip31o == ( rtInf ) ) { rtDW . pgcprip31o = ssGetT ( rtS ) ; lastU = &
rtDW . njnzxugshn ; } else if ( rtDW . luhpswrkwb == ( rtInf ) ) { rtDW .
luhpswrkwb = ssGetT ( rtS ) ; lastU = & rtDW . cop5mbhoom ; } else if ( rtDW
. pgcprip31o < rtDW . luhpswrkwb ) { rtDW . pgcprip31o = ssGetT ( rtS ) ;
lastU = & rtDW . njnzxugshn ; } else { rtDW . luhpswrkwb = ssGetT ( rtS ) ;
lastU = & rtDW . cop5mbhoom ; } * lastU = rtB . m3v3rravbj ; if ( rtDW .
aolblubzps == ( rtInf ) ) { rtDW . aolblubzps = ssGetT ( rtS ) ; lastU = &
rtDW . em4zy3f4e0 ; } else if ( rtDW . myqiq4kkg2 == ( rtInf ) ) { rtDW .
myqiq4kkg2 = ssGetT ( rtS ) ; lastU = & rtDW . g3hb4szo4p ; } else if ( rtDW
. aolblubzps < rtDW . myqiq4kkg2 ) { rtDW . aolblubzps = ssGetT ( rtS ) ;
lastU = & rtDW . em4zy3f4e0 ; } else { rtDW . myqiq4kkg2 = ssGetT ( rtS ) ;
lastU = & rtDW . g3hb4szo4p ; } * lastU = rtB . b4xjixs5fg ; UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; _rtXdot -> ierzrid0hd = rtB . mxqeg5xjzk ; _rtXdot ->
m1lmrkxl4o = rtB . nmglfjrqhn ; _rtXdot -> o5qayw1v0r = rtB . nma3hnslh2 ;
_rtXdot -> hcsoiluenw = rtB . b11uqayebr ; _rtXdot -> nhkqphdmoh = rtB .
huzuvha3a1 ; _rtXdot -> pcx3j5bpdr = rtB . czrl5rwqem ; _rtXdot -> f0uybwpi4z
= rtB . kj0h3f414v ; _rtXdot -> ofeqodlg3q = rtB . ajbpx3kvnb ; _rtXdot ->
hs52zzikfk = rtB . kcubbifgom ; _rtXdot -> fpltxrwuy5 = rtB . gkmzudpozm ;
_rtXdot -> euoucac3b5 = rtB . kzmb3zizp3 ; _rtXdot -> bxtgkwb23f = rtB .
crq4svhi5a ; _rtXdot -> fh0br42w3m = rtB . fsn45jdetv ; _rtXdot -> izhgzfb2ax
= rtB . fuk2vdeng1 ; _rtXdot -> j5amdzdzwz = rtB . niyqay0qte ; _rtXdot ->
njsvdofmej = rtB . iyv4ln3f3a ; _rtXdot -> buctz3bw14 = rtB . klcywjqtkc ;
_rtXdot -> azggg3kys4 = rtB . jbcm5vqd5h ; _rtXdot -> fu4zz1wrfy = rtB .
covqhj51g0 ; _rtXdot -> l0zrm3yqun = rtB . hqqlk5o3dg ; _rtXdot -> j35xnotddg
= rtB . cqv31ub2p2 ; _rtXdot -> hwso1a4mao = rtB . chlzcsr5wp ; _rtXdot ->
errtzp5qsv = rtB . cfd022pdop ; _rtXdot -> chgtsiahuq = rtB . cjnzoud2pu ;
_rtXdot -> cscgyskqop = rtB . c2bk2ghfvw ; _rtXdot -> abbmyk4jok = rtB .
o2lnbkkatl ; _rtXdot -> pi4frgxyol = rtB . bxv13iqy1p ; _rtXdot -> goy0bw45vx
= rtB . cmojsmzo0w ; _rtXdot -> d2dy5wkkx4 = rtB . eyxfl2tvio ; _rtXdot ->
a1lipaxdbz = rtB . ijmvtycyip ; _rtXdot -> hrhvia2p0k = rtB . h3f0jpl1bh ;
_rtXdot -> od4vibyeo2 = rtB . awqerpv0sd ; _rtXdot -> pbsvidhvjd = rtB .
ejhqhly2oq ; _rtXdot -> giqn3h4hck = rtB . iyyl3tvpfx ; _rtXdot -> dbokyzj2ag
= rtB . mxtnstwk0a ; _rtXdot -> kmj3ah53md = rtB . ecdem3sw01 ; _rtXdot ->
awmazfpnot = rtB . nqyk4emlzq ; _rtXdot -> enudel20zi = rtB . nqceurawtv ;
_rtXdot -> a014sfrrqb = rtB . l45q3xvr3p ; _rtXdot -> nc5ml2iypz = rtB .
bbh02spk5k ; _rtXdot -> i4tv4sp0jq = rtB . hlakq0pjds ; _rtXdot -> exdf2roges
= rtB . k1hkyybkdi ; _rtXdot -> pjifvmn0l1 = rtB . jtfoulirts ; _rtXdot ->
ni1j2c1mbc = rtB . bsscyz3ape ; _rtXdot -> drbsqv3c5a = rtB . f0zns2surv ;
_rtXdot -> p5duqtatiq = rtB . haauknmlqq ; _rtXdot -> lyoxyhmuzp = rtB .
ju30daz21p ; _rtXdot -> egwuie0lij = rtB . auamzom4d2 ; } void MdlProjection
( void ) { } void MdlTerminate ( void ) { { if ( rtDW . dlwbwmerme .
AQHandles ) { sdiTerminateStreaming ( & rtDW . dlwbwmerme . AQHandles ) ; } }
{ if ( rtDW . alvifwtdlo . AQHandles ) { sdiTerminateStreaming ( & rtDW .
alvifwtdlo . AQHandles ) ; } } { if ( rtDW . bomnway3fc . AQHandles ) {
sdiTerminateStreaming ( & rtDW . bomnway3fc . AQHandles ) ; } } { if ( rtDW .
khndcgupma . AQHandles ) { sdiTerminateStreaming ( & rtDW . khndcgupma .
AQHandles ) ; } } { if ( rtDW . lsn03zlptn . AQHandles ) {
sdiTerminateStreaming ( & rtDW . lsn03zlptn . AQHandles ) ; } } { if ( rtDW .
jrllfibwlq . AQHandles ) { sdiTerminateStreaming ( & rtDW . jrllfibwlq .
AQHandles ) ; } } } static void mr_SwarmSMC_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_SwarmSMC_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SwarmSMC_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_SwarmSMC_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SwarmSMC_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SwarmSMC_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SwarmSMC_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_SwarmSMC_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_SwarmSMC_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_SwarmSMC_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SwarmSMC_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SwarmSMC_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SwarmSMC_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SwarmSMC_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SwarmSMC_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_SwarmSMC_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_SwarmSMC_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_SwarmSMC_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 28 ] = {
"rtDW.ggis1oipis" , "rtDW.hubalrhh01" , "rtDW.frwczzk2ln" , "rtDW.jgof1guati"
, "rtDW.pudhmmlp12" , "rtDW.bldz3dvpqv" , "rtDW.lbub0fpx0q" ,
"rtDW.alfpa1ng1j" , "rtDW.lvela2u0nd" , "rtDW.mjxuc44ca2" , "rtDW.csqyxtw2oa"
, "rtDW.owuu23bo0m" , "rtDW.ohvp0kdshz" , "rtDW.egvkxav0b4" ,
"rtDW.ath115vb4u" , "rtDW.ezhqenn2bw" , "rtDW.op4e4b1azw" , "rtDW.hf4keotknk"
, "rtDW.dtq3oazg3f" , "rtDW.en41udlirg" , "rtDW.pgcprip31o" ,
"rtDW.njnzxugshn" , "rtDW.luhpswrkwb" , "rtDW.cop5mbhoom" , "rtDW.aolblubzps"
, "rtDW.em4zy3f4e0" , "rtDW.myqiq4kkg2" , "rtDW.g3hb4szo4p" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 28 , rtdwDataFieldNames ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW
. ggis1oipis ) , sizeof ( rtDW . ggis1oipis ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. hubalrhh01 ) , sizeof ( rtDW . hubalrhh01 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. frwczzk2ln ) , sizeof ( rtDW . frwczzk2ln ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. jgof1guati ) , sizeof ( rtDW . jgof1guati ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. pudhmmlp12 ) , sizeof ( rtDW . pudhmmlp12 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. bldz3dvpqv ) , sizeof ( rtDW . bldz3dvpqv ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. lbub0fpx0q ) , sizeof ( rtDW . lbub0fpx0q ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. alfpa1ng1j ) , sizeof ( rtDW . alfpa1ng1j ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. lvela2u0nd ) , sizeof ( rtDW . lvela2u0nd ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. mjxuc44ca2 ) , sizeof ( rtDW . mjxuc44ca2 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . csqyxtw2oa ) , sizeof ( rtDW . csqyxtw2oa ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . owuu23bo0m ) , sizeof ( rtDW . owuu23bo0m ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . ohvp0kdshz ) , sizeof ( rtDW . ohvp0kdshz ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . egvkxav0b4 ) , sizeof ( rtDW . egvkxav0b4 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . ath115vb4u ) , sizeof ( rtDW . ath115vb4u ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . ezhqenn2bw ) , sizeof ( rtDW . ezhqenn2bw ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . op4e4b1azw ) , sizeof ( rtDW . op4e4b1azw ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . hf4keotknk ) , sizeof ( rtDW . hf4keotknk ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . dtq3oazg3f ) , sizeof ( rtDW . dtq3oazg3f ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . en41udlirg ) , sizeof ( rtDW . en41udlirg ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . pgcprip31o ) , sizeof ( rtDW . pgcprip31o ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . njnzxugshn ) , sizeof ( rtDW . njnzxugshn ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . luhpswrkwb ) , sizeof ( rtDW . luhpswrkwb ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . cop5mbhoom ) , sizeof ( rtDW . cop5mbhoom ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . aolblubzps ) , sizeof ( rtDW . aolblubzps ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . em4zy3f4e0 ) , sizeof ( rtDW . em4zy3f4e0 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
rtDW . myqiq4kkg2 ) , sizeof ( rtDW . myqiq4kkg2 ) ) ;
mr_SwarmSMC_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
rtDW . g3hb4szo4p ) , sizeof ( rtDW . g3hb4szo4p ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_SwarmSMC_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ; mr_SwarmSMC_restoreDataFromMxArray (
( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . ggis1oipis ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . ggis1oipis ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . hubalrhh01 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . hubalrhh01 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . frwczzk2ln ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . frwczzk2ln ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . jgof1guati ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . jgof1guati ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . pudhmmlp12 ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . pudhmmlp12 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . bldz3dvpqv ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . bldz3dvpqv ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . lbub0fpx0q ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . lbub0fpx0q ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . alfpa1ng1j ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . alfpa1ng1j ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . lvela2u0nd ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . lvela2u0nd ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . mjxuc44ca2 ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . mjxuc44ca2 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . csqyxtw2oa ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . csqyxtw2oa ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . owuu23bo0m ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . owuu23bo0m ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . ohvp0kdshz ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . ohvp0kdshz ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . egvkxav0b4 ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . egvkxav0b4 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . ath115vb4u ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . ath115vb4u ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . ezhqenn2bw ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . ezhqenn2bw ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . op4e4b1azw ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . op4e4b1azw ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . hf4keotknk ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . hf4keotknk ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . dtq3oazg3f ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . dtq3oazg3f ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . en41udlirg ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . en41udlirg ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . pgcprip31o ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . pgcprip31o ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . njnzxugshn ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . njnzxugshn ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . luhpswrkwb ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . luhpswrkwb ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . cop5mbhoom ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . cop5mbhoom ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . aolblubzps ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . aolblubzps ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . em4zy3f4e0 ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . em4zy3f4e0 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . myqiq4kkg2 ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . myqiq4kkg2 ) ) ;
mr_SwarmSMC_restoreDataFromMxArray ( ( void * ) & ( rtDW . g3hb4szo4p ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . g3hb4szo4p ) ) ; } } mxArray *
mr_SwarmSMC_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char *
blockPath [ 10 ] = { "SwarmSMC/Scope" , "SwarmSMC/Scope1" ,
"SwarmSMC/Scope10" , "SwarmSMC/Scope11" , "SwarmSMC/Scope12" ,
"SwarmSMC/Scope13" , "SwarmSMC/Scope14" , "SwarmSMC/Scope15" ,
"SwarmSMC/Scope16" , "SwarmSMC/Scope17" , } ; static const int reason [ 10 ]
= { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [
0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 48 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 325 ) ; ssSetNumBlockIO ( rtS , 80 ) ;
ssSetNumBlockParams ( rtS , 160 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1876264349U ) ;
ssSetChecksumVal ( rtS , 1 , 1772620581U ) ; ssSetChecksumVal ( rtS , 2 ,
4033012887U ) ; ssSetChecksumVal ( rtS , 3 , 3406206154U ) ; }
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
SwarmSMC_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "SwarmSMC" ) ; ssSetPath
( rtS , "SwarmSMC" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 240.0
) ; ssSetStepSize ( rtS , 0.001 ) ; ssSetFixedStepSize ( rtS , 0.001 ) ; {
static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval =
( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static
int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ]
= { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
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
0 , 0 } ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator1"
,
 "SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator1"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator5"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator1"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator1"
,
"SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator1"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator3"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator3"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator2"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator2"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator4"
,
 "SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator1"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator1"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/Sub_xyz/Integrator5"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator1"
,
 "SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x4F4D;&#x7F6E;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x59FF;&#x6001;&#x73AF;1/PID Controller2/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_theta/Integrator"
,
"SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_psi/Integrator"
,
"SwarmSMC/&#x8DDF;&#x968F;&#x8005;Quadrotor&#x6A21;&#x578B;1/sub_fan/Integrator"
,
 "SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller/Filter/Cont. Filter/Filter"
,
"SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Filter/Cont. Filter/Filter"
,
 "SwarmSMC/&#x901F;&#x5EA6;&#x73AF;/PID Controller1/Integrator/Continuous/Integrator"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/Sub_xyz/Integrator4"
,
 "SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_theta/Integrator"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_psi/Integrator"
,
"SwarmSMC/&#x9886;&#x822A;&#x8005;Quadrotor&#x6A21;&#x578B;/sub_fan/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
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
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34
, 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 48 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 48 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ierzrid0hd ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . m1lmrkxl4o ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . o5qayw1v0r ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . hcsoiluenw ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . nhkqphdmoh ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . pcx3j5bpdr ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . f0uybwpi4z ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ofeqodlg3q ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . hs52zzikfk ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . fpltxrwuy5 ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . euoucac3b5 ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . bxtgkwb23f ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . fh0br42w3m ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . izhgzfb2ax ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . j5amdzdzwz ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . njsvdofmej ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . buctz3bw14 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . azggg3kys4 ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . fu4zz1wrfy ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . l0zrm3yqun ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . j35xnotddg ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . hwso1a4mao ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . errtzp5qsv ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . chgtsiahuq ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . cscgyskqop ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . abbmyk4jok ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . pi4frgxyol ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . goy0bw45vx ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . d2dy5wkkx4 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . a1lipaxdbz ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . hrhvia2p0k ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . od4vibyeo2 ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . pbsvidhvjd ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . giqn3h4hck ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . dbokyzj2ag ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . kmj3ah53md ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . awmazfpnot ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . enudel20zi ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . a014sfrrqb ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . nc5ml2iypz ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . i4tv4sp0jq ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . exdf2roges ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . pjifvmn0l1 ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . ni1j2c1mbc ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . drbsqv3c5a ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . p5duqtatiq ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . lyoxyhmuzp ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . egwuie0lij ; }
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
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 48 ] ;
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
ssSetChecksumVal ( rtS , 0 , 1876264349U ) ; ssSetChecksumVal ( rtS , 1 ,
1772620581U ) ; ssSetChecksumVal ( rtS , 2 , 4033012887U ) ; ssSetChecksumVal
( rtS , 3 , 3406206154U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 3 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_SwarmSMC_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_SwarmSMC_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_SwarmSMC_SetDWork ) ; rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . Saturation_UpperSat_ha4sihnonx =
rtInf ; rtP . Saturation_LowerSat_hvr4bzptww = rtMinusInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
