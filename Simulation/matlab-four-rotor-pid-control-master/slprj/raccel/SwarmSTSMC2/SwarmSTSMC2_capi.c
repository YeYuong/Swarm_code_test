#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SwarmSTSMC2_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "SwarmSTSMC2.h"
#include "SwarmSTSMC2_capi.h"
#include "SwarmSTSMC2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"SwarmSTSMC2/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 0 , TARGET_STRING ( "SwarmSTSMC2/Derivative1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "SwarmSTSMC2/Derivative2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"SwarmSTSMC2/Sine Wave" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4
, 0 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING ( "SwarmSTSMC2/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"SwarmSTSMC2/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 ,
TARGET_STRING ( "SwarmSTSMC2/位置环/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "SwarmSTSMC2/位置环/Sum3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Derivative5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 10 , 0 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Derivative7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 11 , 0 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/  1" ) ,
TARGET_STRING ( "stlf1" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/  4" ) , TARGET_STRING ( "stlf1" ) , 0 , 0 , 0 ,
0 , 0 } , { 13 , 0 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Add2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 15 , 0 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Add25" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 17 , 0 , TARGET_STRING ( "SwarmSTSMC2/计算期望fan与theta/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta/Asin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 19 , 0 , TARGET_STRING ( "SwarmSTSMC2/计算期望fan与theta/Asin1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta1/Asin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 21 , 0 , TARGET_STRING ( "SwarmSTSMC2/计算期望fan与theta1/Asin1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Clock1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain4" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING (
"dx" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING (
"dy" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING (
"dz" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy"
) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) ,
0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum3" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum5" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" )
, 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" )
, 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_theta/Sum" ) , TARGET_STRING (
"ddtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator2" ) , TARGET_STRING (
"dy" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator4" ) , TARGET_STRING (
"dz" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator5" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Product5" ) , TARGET_STRING ( "ddx"
) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy"
) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) ,
0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "SwarmSTSMC2/位置环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "SwarmSTSMC2/位置环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "SwarmSTSMC2/位置环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环1/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "SwarmSTSMC2/姿态环1/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "SwarmSTSMC2/速度环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "SwarmSTSMC2/速度环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "SwarmSTSMC2/速度环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } }
; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 88 ,
TARGET_STRING ( "SwarmSTSMC2/位置环" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 }
, { 89 , TARGET_STRING ( "SwarmSTSMC2/位置环" ) , TARGET_STRING ( "g" ) , 0 ,
0 , 0 } , { 90 , TARGET_STRING ( "SwarmSTSMC2/姿态环" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING ( "SwarmSTSMC2/姿态环" ) ,
TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"SwarmSTSMC2/姿态环" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 93 ,
TARGET_STRING ( "SwarmSTSMC2/姿态环1" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0
} , { 94 , TARGET_STRING ( "SwarmSTSMC2/姿态环1" ) , TARGET_STRING ( "Iyy" )
, 0 , 0 , 0 } , { 95 , TARGET_STRING ( "SwarmSTSMC2/姿态环1" ) ,
TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , {
97 , TARGET_STRING ( "SwarmSTSMC2/计算期望fan与theta1" ) , TARGET_STRING (
"m" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } ,
{ 99 , TARGET_STRING ( "SwarmSTSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 }
, { 101 , TARGET_STRING ( "SwarmSTSMC2/跟随者Quadrotor模型1" ) ,
TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"SwarmSTSMC2/速度环" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 103 ,
TARGET_STRING ( "SwarmSTSMC2/速度环" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 }
, { 104 , TARGET_STRING ( "SwarmSTSMC2/领航者Quadrotor模型" ) , TARGET_STRING
( "g" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } ,
{ 106 , TARGET_STRING ( "SwarmSTSMC2/领航者Quadrotor模型" ) , TARGET_STRING (
"Iyy" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } ,
{ 108 , TARGET_STRING ( "SwarmSTSMC2/Constant5" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 109 , TARGET_STRING ( "SwarmSTSMC2/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
"SwarmSTSMC2/Constant7" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 111 ,
TARGET_STRING ( "SwarmSTSMC2/期望psi" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 112 , TARGET_STRING ( "SwarmSTSMC2/期望psi1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING ( "SwarmSTSMC2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
"SwarmSTSMC2/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 115 ,
TARGET_STRING ( "SwarmSTSMC2/Sine Wave" ) , TARGET_STRING ( "Amplitude" ) , 0
, 0 , 0 } , { 116 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave" ) , TARGET_STRING
( "Bias" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave" )
, TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"SwarmSTSMC2/Sine Wave" ) , TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 119 ,
TARGET_STRING ( "SwarmSTSMC2/Sine Wave1" ) , TARGET_STRING ( "Amplitude" ) ,
0 , 0 , 0 } , { 120 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave1" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
"SwarmSTSMC2/Sine Wave1" ) , TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , {
122 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave1" ) , TARGET_STRING ( "Phase" )
, 0 , 0 , 0 } , { 123 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave2" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
"SwarmSTSMC2/Sine Wave2" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 125 ,
TARGET_STRING ( "SwarmSTSMC2/Sine Wave2" ) , TARGET_STRING ( "Frequency" ) ,
0 , 0 , 0 } , { 126 , TARGET_STRING ( "SwarmSTSMC2/Sine Wave2" ) ,
TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 128 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 130 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 134 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller1" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 136 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller1" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 140 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller2" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 142 , TARGET_STRING ( "SwarmSTSMC2/位置环/PID Controller2" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 143 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING (
"SwarmSTSMC2/位置环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 145 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 146 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 148 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 152 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller1" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 154 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller1" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 155 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 158 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller2" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 160 , TARGET_STRING ( "SwarmSTSMC2/姿态环/PID Controller2" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
"SwarmSTSMC2/姿态环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 164 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 166 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 170 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller1" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 172 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller1" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 174 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 176 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller2" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 178 , TARGET_STRING ( "SwarmSTSMC2/姿态环1/PID Controller2" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 179 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 180 , TARGET_STRING (
"SwarmSTSMC2/姿态环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 181 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 182 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 184 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Constant37" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 185 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Constant38" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 186 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Constant5" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 188 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/  " ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 190 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/  1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/  2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 192 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/  3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/  4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 194 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/  5" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 196 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Gain17" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 198 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 200 , TARGET_STRING ( "SwarmSTSMC2/编队协同控制器/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"SwarmSTSMC2/编队协同控制器/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 207 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta1/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 208 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta1/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 209 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta1/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 210 , TARGET_STRING (
"SwarmSTSMC2/计算期望fan与theta1/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 211 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 212 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 213 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 214 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 215 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 216 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 217 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 218 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 220 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 222 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 223 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 }
, { 224 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller1" ) ,
TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 225 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 }
, { 226 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller1" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 227 ,
TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 228 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 229 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller2" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 230 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 231 , TARGET_STRING ( "SwarmSTSMC2/速度环/PID Controller2" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 232 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 233 , TARGET_STRING (
"SwarmSTSMC2/速度环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 234 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 235 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 236 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 237 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 238 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 239 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 240 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 241 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant18" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 242 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant19" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 243 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant20" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 244 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant6" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 245 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 246 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain4" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 247 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 248 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 249 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 250 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 251 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 252 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 253 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 254 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 255 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 256 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Phase" ) , 0 , 0 , 0 } , { 257 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Switch3" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 258 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/Sub_xyz/Switch4" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 259 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 260 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 261 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 262 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 263 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 264 , TARGET_STRING (
"SwarmSTSMC2/跟随者Quadrotor模型1/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 265 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 266 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 267 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 268 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 269 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 270 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 271 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 272 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 273 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 274 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 275 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 276 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 277 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 278 , TARGET_STRING (
"SwarmSTSMC2/领航者Quadrotor模型/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ofkzgj4m1k , & rtB . lrgxtstads ,
& rtB . gm0ddic0uf , & rtB . ki202l2lqj , & rtB . ghafckseb5 , & rtB .
pgdoe5qbhl , & rtB . izkdj25k1b , & rtB . bvrzs0ko4p , & rtB . irjdylgfyd , &
rtB . mfqo0htbck , & rtB . nx2psp0vkj , & rtB . erbxmtixnn , & rtB .
ifqdq0dvlo , & rtB . mhn1a21rba , & rtB . ifmju2saai , & rtB . luqcnzg44g , &
rtB . lnkfljj42y , & rtB . i00equ0whj , & rtB . mqzgyob3ww , & rtB .
bh4c0b1515 , & rtB . nb24wswwab , & rtB . kzyydvk4dh , & rtB . h3v4lxfb1f , &
rtB . lmz1fmsj4f , & rtB . ippmfqft3q , & rtB . ab333bgofo , & rtB .
bs10qga5ab , & rtB . oqvwq5cqni , & rtB . eg1tsljdkk , & rtB . ozeuxnz4s2 , &
rtB . kjuszjdzc2 , & rtB . lelvvdhupm , & rtB . g14kw4hn4a , & rtB .
ke542j0nyz , & rtB . o4g1hs3prq , & rtB . nr0h333x3t , & rtB . fgciqbj50i , &
rtB . heojtynpgt , & rtB . k4tdeqes5w , & rtB . dg2dcyrat3 , & rtB .
orfwokhk5z , & rtB . d0v0un3w2w , & rtB . lpczuv1wwn , & rtB . faptzmeebh , &
rtB . psclu1x4sp , & rtB . oxlz1roha4 , & rtB . hhmzrxqssa , & rtB .
nltftrz3zp , & rtB . hxhxj2shl2 , & rtB . cbu4idg12y , & rtB . pqwabbxcij , &
rtB . pjr4p5hmjj , & rtB . eno2o5z3yp , & rtB . mvczrpqvic , & rtB .
pvhd4r3d4o , & rtB . noelpg3bo3 , & rtB . djg2kt1x1r , & rtB . nbqizlyjkn , &
rtB . n0kfsoom34 , & rtB . hxdpyc4vbu , & rtB . cabobmzza1 , & rtB .
llfvbzt5kv , & rtB . mi0axd3vzm , & rtB . akucc0fmnu , & rtB . iqp5s5jqdj , &
rtB . djtzd3nqfr , & rtB . js4lycsxtc , & rtB . auavdeei20 , & rtB .
pm1k1vpao3 , & rtB . g3ygqokvad , & rtB . dhpx0i0zqw , & rtB . lizpqhkdqd , &
rtB . kup05il15v , & rtB . gi0ydjsvag , & rtB . gnbrkrjeaf , & rtB .
arl0w053wq , & rtB . ptj4jqtbiw , & rtB . gmgeuu4aud , & rtB . koeitfs3qs , &
rtB . denh3c14d3 , & rtB . l5ym1yzrio , & rtB . dft5tbo5wq , & rtB .
esazz0r5z5 , & rtB . c3szn2agjq , & rtB . j0aq0ulk0a , & rtB . kjeq2e1wm5 , &
rtB . mswtfd202w , & rtB . exg5ewvko2 , & rtP . _m_acbzxt22m1 , & rtP . _g ,
& rtP . _Ixx , & rtP . _Iyy , & rtP . _Izz , & rtP . u_Ixx , & rtP . u_Iyy ,
& rtP . u_Izz , & rtP . fantheta_m , & rtP . fantheta1_m , & rtP .
Quadrotor1_g , & rtP . Quadrotor1_Ixx , & rtP . Quadrotor1_Iyy , & rtP .
Quadrotor1_Izz , & rtP . _m , & rtP . _g_itsbn0zy4d , & rtP . Quadrotor_g , &
rtP . Quadrotor_Ixx , & rtP . Quadrotor_Iyy , & rtP . Quadrotor_Izz , & rtP .
Constant5_Value , & rtP . Constant6_Value , & rtP . Constant7_Value , & rtP .
psi_Value , & rtP . psi1_Value , & rtP . Gain_Gain , & rtP .
Gain1_Gain_an1pdnuefr , & rtP . SineWave_Amp , & rtP . SineWave_Bias , & rtP
. SineWave_Freq , & rtP . SineWave_Phase , & rtP . SineWave1_Amp , & rtP .
SineWave1_Bias , & rtP . SineWave1_Freq , & rtP . SineWave1_Phase , & rtP .
SineWave2_Amp , & rtP . SineWave2_Bias , & rtP . SineWave2_Freq , & rtP .
SineWave2_Phase , & rtP . PIDController_P , & rtP . PIDController_I , & rtP .
PIDController_D , & rtP . PIDController_N , & rtP .
PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP . PIDController1_P , & rtP .
PIDController1_I , & rtP . PIDController1_D , & rtP . PIDController1_N , &
rtP . PIDController1_InitialConditionForIntegrator , & rtP .
PIDController1_InitialConditionForFilter , & rtP .
PIDController2_P_dlj4ikvxns , & rtP . PIDController2_I , & rtP .
PIDController2_D_dfmo4lhky4 , & rtP . PIDController2_N_mpslhyucvp , & rtP .
PIDController2_InitialConditionForIntegrator_pbsngr4knz , & rtP .
PIDController2_InitialConditionForFilter_g0oftxmj3a , & rtP .
PIDController_P_l3dvp4gzhj , & rtP . PIDController_I_ctexg1ydk0 , & rtP .
PIDController_D_bnpdwpgf2r , & rtP . PIDController_N_nq5smeuvru , & rtP .
PIDController_InitialConditionForIntegrator_ahqtbrbvjw , & rtP .
PIDController_InitialConditionForFilter_jdtq01u0hx , & rtP .
PIDController1_P_oaxjkkp4ew , & rtP . PIDController1_I_g3r3n5sujh , & rtP .
PIDController1_D_ipmgxlwt3s , & rtP . PIDController1_N_ju5pdg3n40 , & rtP .
PIDController1_InitialConditionForIntegrator_o5oicxyhtt , & rtP .
PIDController1_InitialConditionForFilter_e5pnbc3vtr , & rtP .
PIDController2_P_kp1lf3scwu , & rtP . PIDController2_I_k3epcgcoj0 , & rtP .
PIDController2_D_g4w5zspqgm , & rtP . PIDController2_N_gwanukygue , & rtP .
PIDController2_InitialConditionForIntegrator_azyc2l4qmp , & rtP .
PIDController2_InitialConditionForFilter_dlk0zcvwml , & rtP .
PIDController_P_bdo03lnhov , & rtP . PIDController_I_dlmuknchuh , & rtP .
PIDController_D_jkhgbbl1en , & rtP . PIDController_N_bgper011ra , & rtP .
PIDController_InitialConditionForIntegrator_i0pcwuwujv , & rtP .
PIDController_InitialConditionForFilter_cnipdysl5i , & rtP .
PIDController1_P_m1rpi1feq5 , & rtP . PIDController1_I_hetisvzriu , & rtP .
PIDController1_D_ak3x55jqvu , & rtP . PIDController1_N_gfjurlmhit , & rtP .
PIDController1_InitialConditionForIntegrator_pn3q4lemuu , & rtP .
PIDController1_InitialConditionForFilter_psmuwl2ggt , & rtP .
PIDController2_P_evzc3v5wmi , & rtP . PIDController2_I_ndlknojsy1 , & rtP .
PIDController2_D_jd4dbxg05c , & rtP . PIDController2_N_lijdwwumlg , & rtP .
PIDController2_InitialConditionForIntegrator_osgdcreqgv , & rtP .
PIDController2_InitialConditionForFilter_p4g1s3metf , & rtP . Constant1_Value
, & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP .
Constant37_Value , & rtP . Constant38_Value , & rtP . Constant4_Value , & rtP
. Constant5_Value_i2io2i2gcf , & rtP . Constant6_Value_gooirbdlmo , & rtP .
_Gain , & rtP . u_Gain_du2kb2gtqg , & rtP . u_Gain , & rtP .
u_Gain_p1u4qwnswq , & rtP . u_Gain_ofer0skcuw , & rtP . u_Gain_oeh5i53seq , &
rtP . Gain1_Gain , & rtP . Gain17_Gain , & rtP . Gain2_Gain , & rtP .
Gain3_Gain , & rtP . Gain4_Gain , & rtP . Gain5_Gain , & rtP .
Integrator1_IC_fvi5gvi3z2 , & rtP . Integrator5_IC_f1f5dsuuw2 , & rtP .
Saturation_UpperSat_ip5m4fy0ed , & rtP . Saturation_LowerSat_j5wcuf0dgd , &
rtP . Saturation1_UpperSat_ilexu3zjfy , & rtP .
Saturation1_LowerSat_bg51c0dlft , & rtP . Saturation_UpperSat_hwp4xnffla , &
rtP . Saturation_LowerSat_psalob5khl , & rtP .
Saturation1_UpperSat_pb2v3x1tuf , & rtP . Saturation1_LowerSat_egd2dbjq3l , &
rtP . Saturation_UpperSat_ha4sihnonx , & rtP . Saturation_LowerSat_hvr4bzptww
, & rtP . Saturation1_UpperSat_hb4te1hlrm , & rtP .
Saturation1_LowerSat_bckpxbzwol , & rtP . Saturation2_UpperSat , & rtP .
Saturation2_LowerSat , & rtP . PIDController_P_gglswmusll , & rtP .
PIDController_I_l4hu2imemx , & rtP . PIDController_D_n0ajifbrzl , & rtP .
PIDController_N_j1rqxncrvn , & rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg , & rtP .
PIDController_InitialConditionForFilter_o14mxov0mo , & rtP .
PIDController1_I_npnz5gp3zv , & rtP . PIDController1_D_lllqr1ay3g , & rtP .
PIDController1_N_kwhnf3hzry , & rtP .
PIDController1_InitialConditionForIntegrator_mfds2g0sdm , & rtP .
PIDController1_InitialConditionForFilter_fwycow5gb3 , & rtP .
PIDController2_P , & rtP . PIDController2_I_edyryjr1ey , & rtP .
PIDController2_D , & rtP . PIDController2_N , & rtP .
PIDController2_InitialConditionForIntegrator , & rtP .
PIDController2_InitialConditionForFilter , & rtP . Saturation_UpperSat , &
rtP . Saturation_LowerSat , & rtP . Saturation1_UpperSat , & rtP .
Saturation1_LowerSat , & rtP . Saturation2_UpperSat_eydgfhthvi , & rtP .
Saturation2_LowerSat_pvud2psr4g , & rtP . Constant1_Value_anleszyjns , & rtP
. Constant18_Value , & rtP . Constant19_Value , & rtP . Constant20_Value , &
rtP . Constant6_Value_ji4ih5grvx , & rtP . Gain_Gain_ebhlmk5t4x , & rtP .
Gain4_Gain_imrt3sps2q , & rtP . Integrator_IC , & rtP .
Integrator1_IC_heq4ih3sop , & rtP . Integrator2_IC , & rtP . Integrator3_IC ,
& rtP . Integrator4_IC , & rtP . Integrator5_IC_if0dkkc4sn , & rtP .
SineWave6_Amp , & rtP . SineWave6_Bias , & rtP . SineWave6_Freq , & rtP .
SineWave6_Phase , & rtP . Switch3_Threshold , & rtP . Switch4_Threshold , &
rtP . Integrator_IC_pea4zoukn2 , & rtP . Integrator1_IC_hluxpggxgx , & rtP .
Integrator_IC_kuhmbxgxyr , & rtP . Integrator1_IC_mm1y0ejde0 , & rtP .
Integrator_IC_dkmzwnjlda , & rtP . Integrator1_IC_lmb1knnxne , & rtP .
Constant1_Value_fgyxvvitry , & rtP . Gain_Gain_awestftebg , & rtP .
Integrator_IC_lqzn20lau3 , & rtP . Integrator1_IC_ggm3f24kg1 , & rtP .
Integrator2_IC_onz01dod3h , & rtP . Integrator3_IC_nnhhmqfjhs , & rtP .
Integrator4_IC_mfxj3ieh1q , & rtP . Integrator5_IC , & rtP .
Integrator_IC_mctvldpkh3 , & rtP . Integrator1_IC , & rtP .
Integrator_IC_mwbhsimjtn , & rtP . Integrator1_IC_oayqv41ri2 , & rtP .
Integrator_IC_gxj5snzs0v , & rtP . Integrator1_IC_njked3y5ka , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 88 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 191 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3311069831U , 429242585U , 1931278995U , 2222183107U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SwarmSTSMC2_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void SwarmSTSMC2_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SwarmSTSMC2_host_InitializeDataMapInfo ( SwarmSTSMC2_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
