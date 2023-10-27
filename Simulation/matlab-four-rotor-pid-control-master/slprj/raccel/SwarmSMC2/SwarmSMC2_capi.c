#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SwarmSMC2_capi_host.h"
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
#include "SwarmSMC2.h"
#include "SwarmSMC2_capi.h"
#include "SwarmSMC2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"SwarmSMC2/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "SwarmSMC2/Derivative1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "SwarmSMC2/Derivative2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"SwarmSMC2/Derivative3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4
, 0 , TARGET_STRING ( "SwarmSMC2/Derivative4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING ( "SwarmSMC2/Derivative5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"SwarmSMC2/Derivative6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7
, 0 , TARGET_STRING ( "SwarmSMC2/Derivative7" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "SwarmSMC2/Derivative8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"SwarmSMC2/Sine Wave" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 ,
0 , TARGET_STRING ( "SwarmSMC2/Sine Wave1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 11 , 0 , TARGET_STRING ( "SwarmSMC2/Sine Wave3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"SwarmSMC2/Sine Wave4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13
, 0 , TARGET_STRING ( "SwarmSMC2/Sine Wave6" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING ( "SwarmSMC2/Sine Wave7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"SwarmSMC2/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 ,
TARGET_STRING ( "SwarmSMC2/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 17 , 0 , TARGET_STRING ( "SwarmSMC2/Add5" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING ( "SwarmSMC2/Add6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"SwarmSMC2/Add8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 ,
TARGET_STRING ( "SwarmSMC2/Add9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 21 , 0 , TARGET_STRING ( "SwarmSMC2/位置环/Sum1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING ( "SwarmSMC2/位置环/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
24 , 0 , TARGET_STRING ( "SwarmSMC2/位置环1/Sum3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING ( "SwarmSMC2/位置环2/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
27 , 0 , TARGET_STRING ( "SwarmSMC2/协同控制器2阶PID/Sum1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 29 , 0 , TARGET_STRING ( "SwarmSMC2/编队协同控制器/Derivative2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器/Derivative3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 31 , 0 , TARGET_STRING ( "SwarmSMC2/编队协同控制器1/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Derivative5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 33 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Derivative7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 34 , 0 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/  1" ) ,
TARGET_STRING ( "stlf1" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/  4" ) , TARGET_STRING ( "stlf1" ) , 0 , 0 , 0 , 0
, 0 } , { 36 , 0 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Add2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 38 , 0 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Add25" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 40 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta/Saturation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta/Asin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 42 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta/Asin1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta1/Asin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 44 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta1/Asin1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 46 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta2/Asin"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Asin1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 48 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta3/Asin" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3/Asin1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 50 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 51 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta4/Asin"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Asin1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 53 , 0 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta5/Asin" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta5/Asin1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 55 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Clock1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sum5" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Clock1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Gain4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sum3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sum5" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Clock1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Gain4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sum3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sum5" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx" )
, 0 , 0 , 0 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator3" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Product5" ) , TARGET_STRING ( "ddx" )
, 0 , 0 , 0 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_fan/Integrator" ) , TARGET_STRING ( "dfan"
) , 0 , 0 , 0 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) , 0
, 0 , 0 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_psi/Integrator" ) , TARGET_STRING ( "dpsi"
) , 0 , 0 , 0 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) , 0
, 0 , 0 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta" )
, 0 , 0 , 0 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator3" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Product5" ) , TARGET_STRING ( "ddx" )
, 0 , 0 , 0 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator" ) , TARGET_STRING ( "dx"
) , 0 , 0 , 0 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator2" ) , TARGET_STRING ( "dy"
) , 0 , 0 , 0 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator3" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator4" ) , TARGET_STRING ( "dz"
) , 0 , 0 , 0 , 0 , 0 } , { 158 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 159 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Product5" ) , TARGET_STRING ( "ddx" )
, 0 , 0 , 0 , 0 , 0 } , { 160 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Product6" ) , TARGET_STRING ( "ddy" )
, 0 , 0 , 0 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Sum2" ) , TARGET_STRING ( "ddz" ) , 0
, 0 , 0 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 163 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_fan/Integrator" ) , TARGET_STRING (
"dfan" ) , 0 , 0 , 0 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_fan/Sum" ) , TARGET_STRING ( "ddfan" ) ,
0 , 0 , 0 , 0 , 0 } , { 165 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_psi/Integrator" ) , TARGET_STRING (
"dpsi" ) , 0 , 0 , 0 , 0 , 0 } , { 166 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_psi/Sum" ) , TARGET_STRING ( "ddpsi" ) ,
0 , 0 , 0 , 0 , 0 } , { 167 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_theta/Integrator" ) , TARGET_STRING (
"dtheta" ) , 0 , 0 , 0 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_theta/Sum" ) , TARGET_STRING ( "ddtheta"
) , 0 , 0 , 0 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 170 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 171 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 172 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 173 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 174 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 175 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 178 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 179 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 180 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 181 , 0 , TARGET_STRING (
 "SwarmSMC2/位置环1/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 182 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "SwarmSMC2/位置环1/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 185 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "SwarmSMC2/位置环2/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "SwarmSMC2/位置环2/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "SwarmSMC2/协同控制器2阶PID/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2/Sum/Sum_PID/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 204 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 208 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 209 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 210 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环1/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 211 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环1/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 213 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 214 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 215 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 216 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环2/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 217 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 218 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环2/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 219 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 220 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 221 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 222 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环3/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 223 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 224 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环3/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 225 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 226 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 227 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 228 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环4/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 229 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 230 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环4/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 232 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 233 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 234 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环5/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 235 , 0 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 236 , 0 , TARGET_STRING (
 "SwarmSMC2/姿态环5/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 237 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 238 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 239 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 241 , 0 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 243 , 0 , TARGET_STRING (
 "SwarmSMC2/编队协同控制器1/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 245 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 247 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller1/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 248 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 249 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 250 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 251 , 0 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 252 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 253 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 255 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 256 , 0 , TARGET_STRING (
 "SwarmSMC2/速度环1/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 257 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 258 , 0 , TARGET_STRING (
 "SwarmSMC2/速度环1/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 259 , 0 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 260 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller/I Gain/Internal Parameters/Integral Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 262 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 263 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 264 , 0 , TARGET_STRING (
 "SwarmSMC2/速度环2/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 265 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "SwarmSMC2/速度环2/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } }
; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 268 ,
TARGET_STRING ( "SwarmSMC2/位置环" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } ,
{ 269 , TARGET_STRING ( "SwarmSMC2/位置环" ) , TARGET_STRING ( "g" ) , 0 , 0
, 0 } , { 270 , TARGET_STRING ( "SwarmSMC2/位置环1" ) , TARGET_STRING ( "m" )
, 0 , 0 , 0 } , { 271 , TARGET_STRING ( "SwarmSMC2/位置环1" ) , TARGET_STRING
( "g" ) , 0 , 0 , 0 } , { 272 , TARGET_STRING ( "SwarmSMC2/位置环2" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 273 , TARGET_STRING (
"SwarmSMC2/位置环2" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 274 ,
TARGET_STRING ( "SwarmSMC2/协同控制器2阶PID" ) , TARGET_STRING ( "m" ) , 0 ,
0 , 0 } , { 275 , TARGET_STRING ( "SwarmSMC2/协同控制器2阶PID" ) ,
TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 276 , TARGET_STRING (
"SwarmSMC2/姿态环" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } , { 277 ,
TARGET_STRING ( "SwarmSMC2/姿态环" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 }
, { 278 , TARGET_STRING ( "SwarmSMC2/姿态环" ) , TARGET_STRING ( "Izz" ) , 0
, 0 , 0 } , { 279 , TARGET_STRING ( "SwarmSMC2/姿态环1" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 280 , TARGET_STRING ( "SwarmSMC2/姿态环1" ) ,
TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } , { 281 , TARGET_STRING (
"SwarmSMC2/姿态环1" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 282 ,
TARGET_STRING ( "SwarmSMC2/姿态环2" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 }
, { 283 , TARGET_STRING ( "SwarmSMC2/姿态环2" ) , TARGET_STRING ( "Iyy" ) , 0
, 0 , 0 } , { 284 , TARGET_STRING ( "SwarmSMC2/姿态环2" ) , TARGET_STRING (
"Izz" ) , 0 , 0 , 0 } , { 285 , TARGET_STRING ( "SwarmSMC2/姿态环3" ) ,
TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } , { 286 , TARGET_STRING (
"SwarmSMC2/姿态环3" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } , { 287 ,
TARGET_STRING ( "SwarmSMC2/姿态环3" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 }
, { 288 , TARGET_STRING ( "SwarmSMC2/姿态环4" ) , TARGET_STRING ( "Ixx" ) , 0
, 0 , 0 } , { 289 , TARGET_STRING ( "SwarmSMC2/姿态环4" ) , TARGET_STRING (
"Iyy" ) , 0 , 0 , 0 } , { 290 , TARGET_STRING ( "SwarmSMC2/姿态环4" ) ,
TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 291 , TARGET_STRING (
"SwarmSMC2/姿态环5" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } , { 292 ,
TARGET_STRING ( "SwarmSMC2/姿态环5" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 }
, { 293 , TARGET_STRING ( "SwarmSMC2/姿态环5" ) , TARGET_STRING ( "Izz" ) , 0
, 0 , 0 } , { 294 , TARGET_STRING ( "SwarmSMC2/编队协同控制器" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , {
296 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta1" ) , TARGET_STRING ( "m"
) , 0 , 0 , 0 } , { 297 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta2" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 298 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , {
299 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta4" ) , TARGET_STRING ( "m"
) , 0 , 0 , 0 } , { 300 , TARGET_STRING ( "SwarmSMC2/计算期望fan与theta5" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 301 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , {
302 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } ,
{ 304 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型1" ) , TARGET_STRING (
"Izz" ) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , {
306 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型2" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 307 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } ,
{ 308 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型2" ) , TARGET_STRING (
"Izz" ) , 0 , 0 , 0 } , { 309 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , {
310 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型3" ) , TARGET_STRING (
"Ixx" ) , 0 , 0 , 0 } , { 311 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3" ) , TARGET_STRING ( "Iyy" ) , 0 , 0 , 0 } ,
{ 312 , TARGET_STRING ( "SwarmSMC2/跟随者Quadrotor模型3" ) , TARGET_STRING (
"Izz" ) , 0 , 0 , 0 } , { 313 , TARGET_STRING ( "SwarmSMC2/速度环" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 314 , TARGET_STRING (
"SwarmSMC2/速度环" ) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 315 ,
TARGET_STRING ( "SwarmSMC2/速度环2" ) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } ,
{ 316 , TARGET_STRING ( "SwarmSMC2/速度环2" ) , TARGET_STRING ( "g" ) , 0 , 0
, 0 } , { 317 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型" ) ,
TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 318 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } , {
319 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型" ) , TARGET_STRING (
"Iyy" ) , 0 , 0 , 0 } , { 320 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , {
321 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型1" ) , TARGET_STRING (
"g" ) , 0 , 0 , 0 } , { 322 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } ,
{ 323 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型1" ) , TARGET_STRING (
"Iyy" ) , 0 , 0 , 0 } , { 324 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } ,
{ 325 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型2" ) , TARGET_STRING (
"g" ) , 0 , 0 , 0 } , { 326 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2" ) , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } ,
{ 327 , TARGET_STRING ( "SwarmSMC2/领航者Quadrotor模型2" ) , TARGET_STRING (
"Iyy" ) , 0 , 0 , 0 } , { 328 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2" ) , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } ,
{ 329 , TARGET_STRING ( "SwarmSMC2/Constant13" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 330 , TARGET_STRING ( "SwarmSMC2/Constant16" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 331 , TARGET_STRING (
"SwarmSMC2/Constant17" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 332 ,
TARGET_STRING ( "SwarmSMC2/Constant23" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 333 , TARGET_STRING ( "SwarmSMC2/Constant24" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 334 , TARGET_STRING ( "SwarmSMC2/Constant25" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 335 , TARGET_STRING (
"SwarmSMC2/Constant5" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 336 ,
TARGET_STRING ( "SwarmSMC2/Constant6" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 337 , TARGET_STRING ( "SwarmSMC2/Constant7" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 338 , TARGET_STRING ( "SwarmSMC2/期望psi" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 339 , TARGET_STRING (
"SwarmSMC2/期望psi1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 340 ,
TARGET_STRING ( "SwarmSMC2/期望psi2" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 341 , TARGET_STRING ( "SwarmSMC2/期望psi3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 342 , TARGET_STRING ( "SwarmSMC2/期望psi4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 343 , TARGET_STRING (
"SwarmSMC2/期望psi5" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 344 ,
TARGET_STRING ( "SwarmSMC2/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 345 , TARGET_STRING ( "SwarmSMC2/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 346 , TARGET_STRING ( "SwarmSMC2/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 347 , TARGET_STRING ( "SwarmSMC2/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 348 , TARGET_STRING (
"SwarmSMC2/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 349 ,
TARGET_STRING ( "SwarmSMC2/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 350 , TARGET_STRING ( "SwarmSMC2/Sine Wave" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 351 , TARGET_STRING ( "SwarmSMC2/Sine Wave" )
, TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 352 , TARGET_STRING (
"SwarmSMC2/Sine Wave" ) , TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 353
, TARGET_STRING ( "SwarmSMC2/Sine Wave" ) , TARGET_STRING ( "Phase" ) , 0 , 0
, 0 } , { 354 , TARGET_STRING ( "SwarmSMC2/Sine Wave1" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 355 , TARGET_STRING ( "SwarmSMC2/Sine Wave1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 356 , TARGET_STRING (
"SwarmSMC2/Sine Wave1" ) , TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , {
357 , TARGET_STRING ( "SwarmSMC2/Sine Wave1" ) , TARGET_STRING ( "Phase" ) ,
0 , 0 , 0 } , { 358 , TARGET_STRING ( "SwarmSMC2/Sine Wave2" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 359 , TARGET_STRING (
"SwarmSMC2/Sine Wave2" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 360 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave2" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 361 , TARGET_STRING ( "SwarmSMC2/Sine Wave2" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 362 , TARGET_STRING ( "SwarmSMC2/Sine Wave3" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 363 , TARGET_STRING (
"SwarmSMC2/Sine Wave3" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 364 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave3" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 365 , TARGET_STRING ( "SwarmSMC2/Sine Wave3" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 366 , TARGET_STRING ( "SwarmSMC2/Sine Wave4" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 367 , TARGET_STRING (
"SwarmSMC2/Sine Wave4" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 368 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave4" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 369 , TARGET_STRING ( "SwarmSMC2/Sine Wave4" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 370 , TARGET_STRING ( "SwarmSMC2/Sine Wave5" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 371 , TARGET_STRING (
"SwarmSMC2/Sine Wave5" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 372 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave5" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 373 , TARGET_STRING ( "SwarmSMC2/Sine Wave5" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 374 , TARGET_STRING ( "SwarmSMC2/Sine Wave6" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 375 , TARGET_STRING (
"SwarmSMC2/Sine Wave6" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 376 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave6" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 377 , TARGET_STRING ( "SwarmSMC2/Sine Wave6" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 378 , TARGET_STRING ( "SwarmSMC2/Sine Wave7" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 379 , TARGET_STRING (
"SwarmSMC2/Sine Wave7" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 380 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave7" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 381 , TARGET_STRING ( "SwarmSMC2/Sine Wave7" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 382 , TARGET_STRING ( "SwarmSMC2/Sine Wave8" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 383 , TARGET_STRING (
"SwarmSMC2/Sine Wave8" ) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 384 ,
TARGET_STRING ( "SwarmSMC2/Sine Wave8" ) , TARGET_STRING ( "Frequency" ) , 0
, 0 , 0 } , { 385 , TARGET_STRING ( "SwarmSMC2/Sine Wave8" ) , TARGET_STRING
( "Phase" ) , 0 , 0 , 0 } , { 386 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , {
387 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING (
"I" ) , 0 , 0 , 0 } , { 388 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , {
389 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING (
"N" ) , 0 , 0 , 0 } , { 390 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 391 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 392 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 393 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 394 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 395 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 396 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 397 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 398 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 399 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 400 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 401 , TARGET_STRING ( "SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 402 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 403 , TARGET_STRING (
"SwarmSMC2/位置环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 404 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 405 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 406 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 407 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 408 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 409 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 410 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 411 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 412 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 413 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 414 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 415 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 416 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 417 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 418 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 419 , TARGET_STRING ( "SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 420 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 421 , TARGET_STRING (
"SwarmSMC2/位置环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 422 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 423 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 424 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 425 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 426 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 427 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 428 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 429 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 430 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 431 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 432 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 433 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 434 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 435 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 436 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 437 , TARGET_STRING ( "SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 438 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 439 , TARGET_STRING (
"SwarmSMC2/位置环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 440 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0
, 0 } , { 441 , TARGET_STRING ( "SwarmSMC2/协同控制器2阶PID/PID Controller" )
, TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 442 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0
, 0 } , { 443 , TARGET_STRING ( "SwarmSMC2/协同控制器2阶PID/PID Controller" )
, TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 444 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 445 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 446 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 ,
0 , 0 } , { 447 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 ,
0 , 0 } , { 448 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 ,
0 , 0 } , { 449 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 ,
0 , 0 } , { 450 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 451 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 452 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 ,
0 , 0 } , { 453 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING ( "I" ) , 0 ,
0 , 0 } , { 454 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 ,
0 , 0 } , { 455 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING ( "N" ) , 0 ,
0 , 0 } , { 456 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 457 , TARGET_STRING (
"SwarmSMC2/协同控制器2阶PID/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 458 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , {
459 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"I" ) , 0 , 0 , 0 } , { 460 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , {
461 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"N" ) , 0 , 0 , 0 } , { 462 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 463 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 464 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 465 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 466 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 467 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 468 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 469 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 470 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 471 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 472 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 473 , TARGET_STRING ( "SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 474 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 475 , TARGET_STRING (
"SwarmSMC2/姿态环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 476 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 477 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 478 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 479 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 480 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 481 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 482 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 483 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 484 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 485 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 486 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 487 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 488 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 489 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 490 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 491 , TARGET_STRING ( "SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 492 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 493 , TARGET_STRING (
"SwarmSMC2/姿态环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 494 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 495 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 496 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 497 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 498 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 499 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 500 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 501 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 502 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 503 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 504 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 505 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 506 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 507 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 508 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 509 , TARGET_STRING ( "SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 510 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 511 , TARGET_STRING (
"SwarmSMC2/姿态环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 512 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 513 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 514 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 515 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 516 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 517 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 518 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 519 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 520 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 521 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 522 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 523 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 524 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 525 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 526 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 527 , TARGET_STRING ( "SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 528 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 529 , TARGET_STRING (
"SwarmSMC2/姿态环3/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 530 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 531 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 532 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 533 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 534 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 535 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 536 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 537 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 538 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 539 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 540 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 541 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 542 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 543 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 544 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 545 , TARGET_STRING ( "SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 546 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 547 , TARGET_STRING (
"SwarmSMC2/姿态环4/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 548 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 549 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 550 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 551 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 552 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 553 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 554 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 555 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 556 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 557 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 558 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 559 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 560 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 561 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 562 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 563 , TARGET_STRING ( "SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 564 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 565 , TARGET_STRING (
"SwarmSMC2/姿态环5/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 566 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0
, 0 } , { 567 , TARGET_STRING ( "SwarmSMC2/编队协同控制器1/PID Controller" )
, TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 568 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0
, 0 } , { 569 , TARGET_STRING ( "SwarmSMC2/编队协同控制器1/PID Controller" )
, TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 570 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 571 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 572 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0
, 0 } , { 573 , TARGET_STRING ( "SwarmSMC2/编队协同控制器1/PID Controller1" )
, TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 574 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0
, 0 } , { 575 , TARGET_STRING ( "SwarmSMC2/编队协同控制器1/PID Controller1" )
, TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 576 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 577 , TARGET_STRING (
"SwarmSMC2/编队协同控制器1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 578 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 579 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 580 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 581 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Constant37" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 582 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Constant38" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 583 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 584 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Constant5" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 585 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 586 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/  " ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
587 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/  1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 588 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/  2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 589 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/  3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 590 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/  4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 591 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/  5" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 592 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 593 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Gain17" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 594 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 595 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Gain3" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 596 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 597 , TARGET_STRING ( "SwarmSMC2/编队协同控制器2/Gain5" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 598 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 599 , TARGET_STRING (
"SwarmSMC2/编队协同控制器2/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 600 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 601 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 602 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta/Saturation1" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 603 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta/Saturation1" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 604 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta1/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 605 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta1/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 606 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta1/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 607 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta1/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 608 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 609 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 610 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 611 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta2/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 612 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 613 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 614 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 615 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta3/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 616 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 617 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 618 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 619 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta4/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 620 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta5/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 621 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta5/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 622 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta5/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 623 , TARGET_STRING (
"SwarmSMC2/计算期望fan与theta5/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 624 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 625 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 626 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 627 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 628 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 629 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 630 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 631 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 632 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 633 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 634 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 635 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 636 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 637 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 638 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 639 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 640 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 641 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 642 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller" )
, TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 643 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , {
644 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller" ) , TARGET_STRING (
"D" ) , 0 , 0 , 0 } , { 645 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , {
646 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 647 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 648 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } ,
{ 649 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller1" ) , TARGET_STRING
( "D" ) , 0 , 0 , 0 } , { 650 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } ,
{ 651 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller1" ) , TARGET_STRING
( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 652 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 653 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 654 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 655 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 656 , TARGET_STRING ( "SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 657 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 658 , TARGET_STRING (
"SwarmSMC2/速度环/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 659 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 660 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 661 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 662 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 663 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 664 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 665 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } ,
{ 666 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller1" ) , TARGET_STRING
( "D" ) , 0 , 0 , 0 } , { 667 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } ,
{ 668 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller1" ) , TARGET_STRING
( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 669 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 670 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 671 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 672 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 673 , TARGET_STRING ( "SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 674 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 675 , TARGET_STRING (
"SwarmSMC2/速度环1/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 676 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 677 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 678 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 679 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 680 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 681 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 682 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } ,
{ 683 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller1" ) , TARGET_STRING
( "D" ) , 0 , 0 , 0 } , { 684 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } ,
{ 685 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller1" ) , TARGET_STRING
( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 686 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 687 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } ,
{ 688 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING
( "I" ) , 0 , 0 , 0 } , { 689 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } ,
{ 690 , TARGET_STRING ( "SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING
( "N" ) , 0 , 0 , 0 } , { 691 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 692 , TARGET_STRING (
"SwarmSMC2/速度环2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 693 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 694 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 695 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 696 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 697 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 698 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 699 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 700 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 701 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 702 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 703 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 704 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 705 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 706 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 707 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 708 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation1" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 709 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 710 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Saturation2" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 711 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 712 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant18" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 713 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant19" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 714 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant20" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 715 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Constant6" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 716 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 717 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Gain4" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 718 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 719 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 720 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 721 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 722 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 723 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 724 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 725 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 726 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 727 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Phase" ) , 0 , 0 , 0 } , { 728 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Switch3" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 729 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/Sub_xyz/Switch4" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 730 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 731 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 732 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 733 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 734 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 735 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型1/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 736 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 737 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Constant18" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 738 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Constant19" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 739 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Constant20" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 740 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Constant6" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 741 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 742 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Gain4" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 743 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 744 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 745 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 746 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 747 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 748 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 749 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 750 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 751 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 752 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Phase" ) , 0 , 0 , 0 } , { 753 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Switch3" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 754 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/Sub_xyz/Switch4" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 755 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 756 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 757 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 758 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 759 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 760 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型2/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 761 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 762 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Constant18" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 763 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Constant19" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 764 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Constant20" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 765 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Constant6" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 766 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 767 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Gain4" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 768 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 769 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 770 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 771 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 772 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 773 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 774 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 775 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 776 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 777 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Sine Wave6" ) , TARGET_STRING (
"Phase" ) , 0 , 0 , 0 } , { 778 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Switch3" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 779 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/Sub_xyz/Switch4" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 780 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 781 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 782 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 783 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 784 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 785 , TARGET_STRING (
"SwarmSMC2/跟随者Quadrotor模型3/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 786 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Constant1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 787 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 788 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 789 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 790 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 791 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 792 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 793 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 794 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 795 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 796 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 797 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 798 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 799 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 800 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 801 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 802 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 803 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 804 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 805 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 806 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 807 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 808 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 809 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 810 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 811 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 812 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 813 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型1/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 814 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 815 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 816 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 817 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 818 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 819 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 820 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 821 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/Sub_xyz/Integrator5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 822 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_fan/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 823 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_fan/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 824 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_psi/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 825 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_psi/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 826 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_theta/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 827 , TARGET_STRING (
"SwarmSMC2/领航者Quadrotor模型2/sub_theta/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ht55zbzfl3 , & rtB . n0zrk5x0qd ,
& rtB . gjlgsb5ud2 , & rtB . mlfhsuf1dc , & rtB . ecrx5ucekw , & rtB .
cvnxsgbslf , & rtB . ieswaokbbs , & rtB . loxq2gzg5d , & rtB . ffw4fd21fw , &
rtB . m3cwptyuss , & rtB . gogffxxbnf , & rtB . i4qo4t3inx , & rtB .
co21hzofmv , & rtB . gmiml41ahh , & rtB . bprns2hfy5 , & rtB . my2qvxq4vi , &
rtB . mkdgvwendj , & rtB . nsotti14ar , & rtB . fyllvvykfx , & rtB .
blzrr2dl3p , & rtB . kba1gnwoqz , & rtB . a42b4qlkos , & rtB . hegyf5vyzy , &
rtB . ifpr5jmyf1 , & rtB . lpbzqjcprk , & rtB . ighjzzaorr , & rtB .
gagetyfvke , & rtB . dew2sklnjf , & rtB . inino4sn3n , & rtB . dovkmcjvrg , &
rtB . fl25pm05gl , & rtB . cflmg0gnmi , & rtB . c15m2hah5x , & rtB .
okts5kdm5o , & rtB . mracf5jvtq , & rtB . med3sdiiqq , & rtB . bv4n4wscc2 , &
rtB . gz0h3zz2zn , & rtB . gx5fpzjouv , & rtB . kcyjdevu1q , & rtB .
nedsdxrz0d , & rtB . grop1jv2fl , & rtB . dhlf45dvej , & rtB . p13raq01zn , &
rtB . k2emhbdmfl , & rtB . fhgdzl1ux5 , & rtB . dtzbyd4h2j , & rtB .
b4yzfc1ead , & rtB . ktg1ni3yrr , & rtB . emq054pzbi , & rtB . a2cuz4plc3 , &
rtB . eemrvpv0ou , & rtB . llsiikbjsb , & rtB . l3ijkqzkh1 , & rtB .
d4vwxf2jbr , & rtB . gvk0o2svme , & rtB . cgbastyn2k , & rtB . foedhs1o3a , &
rtB . mxf343uhx5 , & rtB . hfuamunkkc , & rtB . dagpv2viuj , & rtB .
pq3as3h2ng , & rtB . g4oiivzehy , & rtB . m41hci1djw , & rtB . nkrg0rp1tj , &
rtB . fn5ghhd2tl , & rtB . ht4btdihlj , & rtB . aasmc5aubg , & rtB .
onwlyvksy1 , & rtB . bbkw4ewb4z , & rtB . lt1w2y2www , & rtB . pkkav2dgfu , &
rtB . pvkiijd32j , & rtB . ox1enmqque , & rtB . l5ytux2wku , & rtB .
gw3i35j4jt , & rtB . h1tqpswb1i , & rtB . hzqxysogc2 , & rtB . lmuwp5via1 , &
rtB . nfpwdpoxim , & rtB . hjojlg0ri5 , & rtB . dhmwksclha , & rtB .
dhaayoyjqs , & rtB . iypnm5k2l0 , & rtB . m0xb24biyp , & rtB . nbabvypszj , &
rtB . gjtd0nf3yk , & rtB . ch4uam4zhi , & rtB . pcnfbwkpz5 , & rtB .
bhvrcdxqst , & rtB . kxxwyujbhf , & rtB . ib50hx4r55 , & rtB . nzubxg3nw3 , &
rtB . c4cweg1v0h , & rtB . mx2cm2pvr4 , & rtB . eod1xw3jx5 , & rtB .
jfdgkrfi4h , & rtB . n1je2tac3l , & rtB . gf15uxwtsm , & rtB . akqkcnnrg1 , &
rtB . d3zfzrw4bi , & rtB . hhlbdzptb2 , & rtB . g3mbejedbn , & rtB .
igvbfe0ygp , & rtB . pyr2tnvc0u , & rtB . p5bhm1alpr , & rtB . fiqq3mnurr , &
rtB . muautdnlvc , & rtB . fd0ifozzzi , & rtB . burl4etjnv , & rtB .
mdf4wtsctx , & rtB . mk4pik4iwf , & rtB . a0nxandghd , & rtB . gc4vdbdowg , &
rtB . pe1rpjuvjl , & rtB . kpbyqxbm3j , & rtB . jw5qymyu2m , & rtB .
nfcrfmczg0 , & rtB . dqmjmxx1rh , & rtB . jxuw3gofsa , & rtB . obgc5k0p33 , &
rtB . cjqsc2yb0r , & rtB . co5el4lvj3 , & rtB . lhnyhfj4ax , & rtB .
gmm2zbtxb5 , & rtB . ejvulga4w5 , & rtB . noumlvysto , & rtB . broln0hw2t , &
rtB . m4yvyw4wkm , & rtB . dtg5wvfw12 , & rtB . ikvsnzuqkx , & rtB .
mehc4ezk5i , & rtB . fqvyzg1ikz , & rtB . n2t2mlsekr , & rtB . hozjtrrg3w , &
rtB . ct0ubq0p0f , & rtB . hcpmnd4tvl , & rtB . fvuuli3ztl , & rtB .
dly0u2si3d , & rtB . grifkcmi1k , & rtB . l4chavwt1y , & rtB . olropwoagx , &
rtB . pidyrnfhb3 , & rtB . hgrck5k2qn , & rtB . n0btpczb4e , & rtB .
icn3tc3wmy , & rtB . e1mg3zha3r , & rtB . a2bgnwhqmj , & rtB . eoisisc0h1 , &
rtB . m550tb0xb0 , & rtB . k1js0bv5xd , & rtB . aa3he3tbbh , & rtB .
gqiev5b33f , & rtB . p1bin1tn4s , & rtB . coaqjxrgps , & rtB . osuw2n2p5c , &
rtB . erks3kjsiv , & rtB . azguj351yz , & rtB . a2sufne1el , & rtB .
psd0qi2uaw , & rtB . jkr1aqos5k , & rtB . kgsz3eq5q3 , & rtB . fqteuw4yxc , &
rtB . mehi2jgtqv , & rtB . l24o5drtvc , & rtB . miesiu5v0m , & rtB .
myc5fy31uv , & rtB . fsigdbugsv , & rtB . ct235dqmgw , & rtB . fxkutufqvt , &
rtB . p3gscgvcwg , & rtB . ajzh3ehner , & rtB . bqmfichlii , & rtB .
a5pbo201xh , & rtB . bvqsnkcgtl , & rtB . e3ouvrfmhd , & rtB . kokm05sank , &
rtB . p5zejio25u , & rtB . ohwv2asfpz , & rtB . kllvqw0sro , & rtB .
k1n0tqzloq , & rtB . cb4fxdwmq5 , & rtB . elq41p5fyk , & rtB . nmk23uk2rt , &
rtB . h2xdtfiq14 , & rtB . iskktr4j12 , & rtB . pifpto3vrs , & rtB .
buzwp2qk0c , & rtB . fju0kavd21 , & rtB . fhwcynxoam , & rtB . kgpvjsrcvv , &
rtB . eoxpu4hzbr , & rtB . kjihy01gxn , & rtB . guz0wqnnqa , & rtB .
mjx4alvhfz , & rtB . gtsyjuxrau , & rtB . lmucwinbfn , & rtB . adb2qyporg , &
rtB . idi4whozok , & rtB . l4cyjj3vsn , & rtB . cdjr00kipb , & rtB .
nyhs3wxqky , & rtB . epn1xunf0k , & rtB . p2h10oncgq , & rtB . cfkwt4rup1 , &
rtB . ixcs0kb5cd , & rtB . klwi41ft0p , & rtB . fm4y3ciqlx , & rtB .
ii4tea1b5f , & rtB . e3lde0qeyw , & rtB . abbyqwzn2p , & rtB . ld3lnycffc , &
rtB . ihej1dufhd , & rtB . m23o2msgfd , & rtB . pmn2jinf1c , & rtB .
no4p0gupxp , & rtB . damv1eafhe , & rtB . npu5vs3ku4 , & rtB . ljqvy22dik , &
rtB . l45te5hz52 , & rtB . agh1kwbpao , & rtB . eclcbu2vsx , & rtB .
digls4x4pq , & rtB . b2ndeegab5 , & rtB . hgu05vg5ey , & rtB . av5yyqtlqj , &
rtB . gzexghqqmo , & rtB . kzsg1fqtyq , & rtB . noefdhhzfu , & rtB .
gd5vxikjkr , & rtB . kwmuy04gkx , & rtB . hvsg45qqtb , & rtB . frzlwgxrx5 , &
rtB . drxzhltnzx , & rtB . ipvxqb0no1 , & rtB . gotvrd1vif , & rtB .
pzj42wytaw , & rtB . jahc5xdouv , & rtB . ass5152o0p , & rtB . isgzklolke , &
rtB . ewudaddp3p , & rtB . ff5mcoixhb , & rtB . kkydadivym , & rtB .
namigiwbdi , & rtB . ksoaeoigyx , & rtB . odpucuep24 , & rtB . e3qoxdem5b , &
rtB . oispyu5oso , & rtB . jsto1jr5xg , & rtB . kt5xgzm5wk , & rtB .
p5kow5ymrx , & rtB . hz1yuulqw0 , & rtB . jvr4p53sde , & rtB . khk5ku0koj , &
rtB . k1puzszxy5 , & rtB . j1xjnt2uqz , & rtB . jn5pbppnc1 , & rtB .
kn0q25hdzu , & rtB . cgmyxly24o , & rtB . fy4gmkc2r2 , & rtB . m4khsgkfuv , &
rtB . k53z01ef4w , & rtB . beyiwh2ufn , & rtB . bh5zn5qbok , & rtB .
brlxhg14if , & rtB . nu1cnqvuqs , & rtB . c3brafoy2k , & rtB . ouzmvhy1gu , &
rtP . _m_acbzxt22m1 , & rtP . _g , & rtP . u_m , & rtP . u_g , & rtP .
u_m_p214vildz5 , & rtP . u_g_afxrjuatq2 , & rtP . uPID_m , & rtP . uPID_g , &
rtP . _Ixx , & rtP . _Iyy , & rtP . _Izz , & rtP . u_Ixx , & rtP . u_Iyy , &
rtP . u_Izz , & rtP . u_Ixx_kmwcqzgly3 , & rtP . u_Iyy_hbpkv0uula , & rtP .
u_Izz_apevdj43i0 , & rtP . u_Ixx_pihstiyd01 , & rtP . u_Iyy_c1lnfcrzch , &
rtP . u_Izz_kun2sqo1kd , & rtP . u_Ixx_dvy1soow50 , & rtP . u_Iyy_gcgfjsioj0
, & rtP . u_Izz_ebnkzvnqgi , & rtP . u_Ixx_joq3szosob , & rtP .
u_Iyy_avtouev4uw , & rtP . u_Izz_nd4b3hpkmx , & rtP . _m , & rtP . fantheta_m
, & rtP . fantheta1_m , & rtP . fantheta2_m , & rtP . fantheta3_m , & rtP .
fantheta4_m , & rtP . fantheta5_m , & rtP . Quadrotor1_g , & rtP .
Quadrotor1_Ixx , & rtP . Quadrotor1_Iyy , & rtP . Quadrotor1_Izz , & rtP .
Quadrotor2_g , & rtP . Quadrotor2_Ixx , & rtP . Quadrotor2_Iyy , & rtP .
Quadrotor2_Izz , & rtP . Quadrotor3_g , & rtP . Quadrotor3_Ixx , & rtP .
Quadrotor3_Iyy , & rtP . Quadrotor3_Izz , & rtP . _m_ezmi533ezn , & rtP .
_g_itsbn0zy4d , & rtP . u_m_koewvqbti3 , & rtP . u_g_mh2axwg4d0 , & rtP .
Quadrotor_g , & rtP . Quadrotor_Ixx , & rtP . Quadrotor_Iyy , & rtP .
Quadrotor_Izz , & rtP . Quadrotor1_g_ddytjpfru3 , & rtP .
Quadrotor1_Ixx_gja45mis01 , & rtP . Quadrotor1_Iyy_go5t3hyvk4 , & rtP .
Quadrotor1_Izz_g5r1ijlx4u , & rtP . Quadrotor2_g_eqcrrzybmj , & rtP .
Quadrotor2_Ixx_aoohkqt1h3 , & rtP . Quadrotor2_Iyy_n3rhz1tmo1 , & rtP .
Quadrotor2_Izz_g5qpxysxej , & rtP . Constant13_Value , & rtP .
Constant16_Value , & rtP . Constant17_Value , & rtP . Constant23_Value , &
rtP . Constant24_Value , & rtP . Constant25_Value , & rtP . Constant5_Value ,
& rtP . Constant6_Value , & rtP . Constant7_Value , & rtP . psi_Value , & rtP
. psi1_Value , & rtP . psi2_Value , & rtP . psi3_Value , & rtP . psi4_Value ,
& rtP . psi5_Value , & rtP . Gain_Gain , & rtP . Gain1_Gain_an1pdnuefr , &
rtP . Gain2_Gain , & rtP . Gain3_Gain , & rtP . Gain4_Gain_ggyj03dy1v , & rtP
. Gain5_Gain_h1imr1fczu , & rtP . SineWave_Amp , & rtP . SineWave_Bias , &
rtP . SineWave_Freq , & rtP . SineWave_Phase , & rtP . SineWave1_Amp , & rtP
. SineWave1_Bias , & rtP . SineWave1_Freq , & rtP . SineWave1_Phase , & rtP .
SineWave2_Amp , & rtP . SineWave2_Bias , & rtP . SineWave2_Freq , & rtP .
SineWave2_Phase , & rtP . SineWave3_Amp , & rtP . SineWave3_Bias , & rtP .
SineWave3_Freq , & rtP . SineWave3_Phase , & rtP . SineWave4_Amp , & rtP .
SineWave4_Bias , & rtP . SineWave4_Freq , & rtP . SineWave4_Phase , & rtP .
SineWave5_Amp , & rtP . SineWave5_Bias , & rtP . SineWave5_Freq , & rtP .
SineWave5_Phase , & rtP . SineWave6_Amp , & rtP . SineWave6_Bias , & rtP .
SineWave6_Freq , & rtP . SineWave6_Phase , & rtP . SineWave7_Amp , & rtP .
SineWave7_Bias , & rtP . SineWave7_Freq , & rtP . SineWave7_Phase , & rtP .
SineWave8_Amp , & rtP . SineWave8_Bias , & rtP . SineWave8_Freq , & rtP .
SineWave8_Phase , & rtP . PIDController_P_ju5f4j1frg , & rtP .
PIDController_I , & rtP . PIDController_D_os4cpveuwu , & rtP .
PIDController_N_gwi2qcwymh , & rtP .
PIDController_InitialConditionForIntegrator_ngy0ewyeg5 , & rtP .
PIDController_InitialConditionForFilter_pi2squh4ih , & rtP .
PIDController1_P_c4vjhd1ziq , & rtP . PIDController1_I , & rtP .
PIDController1_D_gdgmituo3o , & rtP . PIDController1_N_mhmwfw4hux , & rtP .
PIDController1_InitialConditionForIntegrator_g32cn1dkfm , & rtP .
PIDController1_InitialConditionForFilter_kmsdvwdf3m , & rtP .
PIDController2_P_dlj4ikvxns , & rtP . PIDController2_I , & rtP .
PIDController2_D_dfmo4lhky4 , & rtP . PIDController2_N_mpslhyucvp , & rtP .
PIDController2_InitialConditionForIntegrator_pbsngr4knz , & rtP .
PIDController2_InitialConditionForFilter_g0oftxmj3a , & rtP .
PIDController_P_gbmiz0skct , & rtP . PIDController_I_iwejwkej3m , & rtP .
PIDController_D_d15uoiwa50 , & rtP . PIDController_N_fj1olopwer , & rtP .
PIDController_InitialConditionForIntegrator_cjvlfsjldh , & rtP .
PIDController_InitialConditionForFilter_lmhtoe3njt , & rtP .
PIDController1_P_aq34folxbs , & rtP . PIDController1_I_ggyoqvdi4k , & rtP .
PIDController1_D_ec5g1qhnwo , & rtP . PIDController1_N_n0m4mdlpuq , & rtP .
PIDController1_InitialConditionForIntegrator_dveacu2tra , & rtP .
PIDController1_InitialConditionForFilter_bs1b4aw1p1 , & rtP .
PIDController2_P_ol1hffxhtt , & rtP . PIDController2_I_b5qoeiglnj , & rtP .
PIDController2_D_nscrao354l , & rtP . PIDController2_N_fv1xb02dkc , & rtP .
PIDController2_InitialConditionForIntegrator_hw4t2ehg5d , & rtP .
PIDController2_InitialConditionForFilter_en0izqklf0 , & rtP .
PIDController_P_dusajknfah , & rtP . PIDController_I_jo0orsgtwc , & rtP .
PIDController_D_fxccfyhj1s , & rtP . PIDController_N_m5rsvcxufh , & rtP .
PIDController_InitialConditionForIntegrator_avsteu0oht , & rtP .
PIDController_InitialConditionForFilter_hp3eqk4ff5 , & rtP .
PIDController1_P_ehab1cvw21 , & rtP . PIDController1_I_eexygojq0h , & rtP .
PIDController1_D_lmix2bvziz , & rtP . PIDController1_N_car1jg421l , & rtP .
PIDController1_InitialConditionForIntegrator_dvkc14r1w0 , & rtP .
PIDController1_InitialConditionForFilter_pajeulinwu , & rtP .
PIDController2_P_erzbkakobn , & rtP . PIDController2_I_pm4rorrqog , & rtP .
PIDController2_D_hutlxbnxkq , & rtP . PIDController2_N_hk3wqjttfe , & rtP .
PIDController2_InitialConditionForIntegrator_dsfjn3toh3 , & rtP .
PIDController2_InitialConditionForFilter_ajsr1gcclx , & rtP . PIDController_P
, & rtP . PIDController_I_jljb1hxi4k , & rtP . PIDController_D , & rtP .
PIDController_N , & rtP . PIDController_InitialConditionForIntegrator , & rtP
. PIDController_InitialConditionForFilter , & rtP . PIDController1_P , & rtP
. PIDController1_I_kk4n15ernz , & rtP . PIDController1_D , & rtP .
PIDController1_N , & rtP . PIDController1_InitialConditionForIntegrator , &
rtP . PIDController1_InitialConditionForFilter , & rtP .
PIDController2_P_j2giwegaza , & rtP . PIDController2_I_b31xx2z4ae , & rtP .
PIDController2_D_kj3bnjvbc0 , & rtP . PIDController2_N_akbmimslr4 , & rtP .
PIDController2_InitialConditionForIntegrator_c5bt5fi51p , & rtP .
PIDController2_InitialConditionForFilter_bihta5lqek , & rtP .
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
PIDController2_InitialConditionForFilter_p4g1s3metf , & rtP .
PIDController_P_kxl1kqc3oq , & rtP . PIDController_I_idhehcr2gu , & rtP .
PIDController_D_nfc3vqrqbv , & rtP . PIDController_N_fbnnaabg4e , & rtP .
PIDController_InitialConditionForIntegrator_lcb4fxxjq2 , & rtP .
PIDController_InitialConditionForFilter_m4mghgay1j , & rtP .
PIDController1_P_jpyfdfnh5b , & rtP . PIDController1_I_ardc14cci2 , & rtP .
PIDController1_D_bamu5r44om , & rtP . PIDController1_N_la5vcck0qb , & rtP .
PIDController1_InitialConditionForIntegrator_nz4dig1fgw , & rtP .
PIDController1_InitialConditionForFilter_kb2kl5oeqz , & rtP .
PIDController2_P_co0pzormut , & rtP . PIDController2_I_njw5wvp51l , & rtP .
PIDController2_D_j3uc0srlnp , & rtP . PIDController2_N_p1gigoimhs , & rtP .
PIDController2_InitialConditionForIntegrator_k1rnok2v3s , & rtP .
PIDController2_InitialConditionForFilter_pd4m1hvilk , & rtP .
PIDController_P_gyvdwyvumv , & rtP . PIDController_I_ke1xzatdh3 , & rtP .
PIDController_D_j25iff5xf3 , & rtP . PIDController_N_f1gx0hhzn2 , & rtP .
PIDController_InitialConditionForIntegrator_i5kl1tulff , & rtP .
PIDController_InitialConditionForFilter_kgltz54nbv , & rtP .
PIDController1_P_dcdjyqoctb , & rtP . PIDController1_I_jtbtiij5aw , & rtP .
PIDController1_D_f4uld0erm5 , & rtP . PIDController1_N_alytnhrrnb , & rtP .
PIDController1_InitialConditionForIntegrator_iw4k32gvre , & rtP .
PIDController1_InitialConditionForFilter_axd024yf43 , & rtP .
PIDController2_P_pxk5annt0u , & rtP . PIDController2_I_by2qqgl4bd , & rtP .
PIDController2_D_gdgwgqzkmc , & rtP . PIDController2_N_kspzcbkt2u , & rtP .
PIDController2_InitialConditionForIntegrator_krl2pziuvw , & rtP .
PIDController2_InitialConditionForFilter_eqcztveeov , & rtP .
PIDController_P_og1ahp3bam , & rtP . PIDController_I_ipvz3he1ra , & rtP .
PIDController_D_a55inr2dcg , & rtP . PIDController_N_n1mma2zzum , & rtP .
PIDController_InitialConditionForIntegrator_lcvuquuzji , & rtP .
PIDController_InitialConditionForFilter_pahdswfqmx , & rtP .
PIDController1_P_fxqhy440cw , & rtP . PIDController1_I_fjas3a3wnf , & rtP .
PIDController1_D_mqahdjnni4 , & rtP . PIDController1_N_fadqx0c2zi , & rtP .
PIDController1_InitialConditionForIntegrator_ch0immbnrm , & rtP .
PIDController1_InitialConditionForFilter_hdfns1sxqq , & rtP .
PIDController2_P_fj0sy20p12 , & rtP . PIDController2_I_ipt1mcpolc , & rtP .
PIDController2_D_mmcjie0otp , & rtP . PIDController2_N_jtg1f1vkx4 , & rtP .
PIDController2_InitialConditionForIntegrator_muqkshfigt , & rtP .
PIDController2_InitialConditionForFilter_gqusy3k4kp , & rtP .
PIDController_P_lbmuewtbrb , & rtP . PIDController_I_alqsqkfago , & rtP .
PIDController_D_en2uccolf0 , & rtP . PIDController_N_d4mtfv0ek2 , & rtP .
PIDController_InitialConditionForIntegrator_f3bhxtqksc , & rtP .
PIDController_InitialConditionForFilter_cpdt0v4ia1 , & rtP .
PIDController1_P_kwxf55bpha , & rtP . PIDController1_I_ausr5ezv4y , & rtP .
PIDController1_D_mndun3qwqh , & rtP . PIDController1_N_it2rbpjfrk , & rtP .
PIDController1_InitialConditionForIntegrator_hlkt1bv1hz , & rtP .
PIDController1_InitialConditionForFilter_ia5a3zow3c , & rtP .
PIDController2_P_chxrbh4rsl , & rtP . PIDController2_I_d2jywvs4bf , & rtP .
PIDController2_D_hnorqfxruw , & rtP . PIDController2_N_i4bf0y2l3i , & rtP .
PIDController2_InitialConditionForIntegrator_pmy2x4di4c , & rtP .
PIDController2_InitialConditionForFilter_abjibwbfny , & rtP .
PIDController_P_jiphsdjxxr , & rtP . PIDController_I_fb0qkr15vv , & rtP .
PIDController_D_nue2ikh2gu , & rtP . PIDController_N_pdt2hohbcl , & rtP .
PIDController_InitialConditionForIntegrator_oha42fu24c , & rtP .
PIDController_InitialConditionForFilter_alfqriok00 , & rtP .
PIDController1_P_dwv3e2afl1 , & rtP . PIDController1_I_juvnexjmae , & rtP .
PIDController1_D_f0yhnp32nq , & rtP . PIDController1_N_ceq3duwmmd , & rtP .
PIDController1_InitialConditionForIntegrator_h55owygxwq , & rtP .
PIDController1_InitialConditionForFilter_edcjoi3q45 , & rtP . Constant1_Value
, & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP .
Constant37_Value , & rtP . Constant38_Value , & rtP . Constant4_Value , & rtP
. Constant5_Value_cb4afoixpx , & rtP . Constant6_Value_pb14rkkk1o , & rtP .
_Gain , & rtP . u_Gain_fpadnqkfdx , & rtP . u_Gain , & rtP .
u_Gain_henc4ux5q3 , & rtP . u_Gain_ljraxbqoqb , & rtP . u_Gain_gdlekwegic , &
rtP . Gain1_Gain , & rtP . Gain17_Gain , & rtP . Gain2_Gain_onnoorg0uw , &
rtP . Gain3_Gain_dpwsijto2s , & rtP . Gain4_Gain , & rtP . Gain5_Gain , & rtP
. Integrator1_IC_ot5qtskjxx , & rtP . Integrator5_IC_dykywbkzns , & rtP .
Saturation_UpperSat_ip5m4fy0ed , & rtP . Saturation_LowerSat_j5wcuf0dgd , &
rtP . Saturation1_UpperSat_ilexu3zjfy , & rtP .
Saturation1_LowerSat_bg51c0dlft , & rtP . Saturation_UpperSat_hwp4xnffla , &
rtP . Saturation_LowerSat_psalob5khl , & rtP .
Saturation1_UpperSat_pb2v3x1tuf , & rtP . Saturation1_LowerSat_egd2dbjq3l , &
rtP . Saturation_UpperSat_pub1swf5to , & rtP . Saturation_LowerSat_f1yfb1tnps
, & rtP . Saturation1_UpperSat_a1b0m21fzl , & rtP .
Saturation1_LowerSat_oipcr5rbvx , & rtP . Saturation_UpperSat_gvwpirmxca , &
rtP . Saturation_LowerSat_ndrcqwixdd , & rtP .
Saturation1_UpperSat_kch2yvd5hq , & rtP . Saturation1_LowerSat_g2baopq4vx , &
rtP . Saturation_UpperSat_jviycb3be4 , & rtP . Saturation_LowerSat_a1fc5tfggf
, & rtP . Saturation1_UpperSat_h21ahh0qn3 , & rtP .
Saturation1_LowerSat_boiycaf11u , & rtP . Saturation_UpperSat_iko2p2vwq2 , &
rtP . Saturation_LowerSat_ma15asz4j4 , & rtP .
Saturation1_UpperSat_mjhh3ki3pa , & rtP . Saturation1_LowerSat_bzmx0c2jc5 , &
rtP . Saturation_UpperSat_ha4sihnonx , & rtP . Saturation_LowerSat_hvr4bzptww
, & rtP . Saturation1_UpperSat_hb4te1hlrm , & rtP .
Saturation1_LowerSat_bckpxbzwol , & rtP . Saturation2_UpperSat , & rtP .
Saturation2_LowerSat , & rtP . Saturation_UpperSat_iukxjbe5ft , & rtP .
Saturation_LowerSat_ilaytmc202 , & rtP . Saturation1_UpperSat_pttmxhpea2 , &
rtP . Saturation1_LowerSat_fobtnnimlk , & rtP .
Saturation2_UpperSat_gp5eczxqky , & rtP . Saturation2_LowerSat_hg04d0ium1 , &
rtP . Saturation_UpperSat_dxx3tvtltv , & rtP . Saturation_LowerSat_gbjicm5kkx
, & rtP . Saturation1_UpperSat_grcsac20ke , & rtP .
Saturation1_LowerSat_o23ypqxe3f , & rtP . Saturation2_UpperSat_ojz25b4xbk , &
rtP . Saturation2_LowerSat_niv5szdlmh , & rtP . PIDController_P_gglswmusll ,
& rtP . PIDController_I_l4hu2imemx , & rtP . PIDController_D_n0ajifbrzl , &
rtP . PIDController_N_j1rqxncrvn , & rtP .
PIDController_InitialConditionForIntegrator_dochlmuieg , & rtP .
PIDController_InitialConditionForFilter_o14mxov0mo , & rtP .
PIDController1_I_npnz5gp3zv , & rtP . PIDController1_D_lllqr1ay3g , & rtP .
PIDController1_N_kwhnf3hzry , & rtP .
PIDController1_InitialConditionForIntegrator_mfds2g0sdm , & rtP .
PIDController1_InitialConditionForFilter_fwycow5gb3 , & rtP .
PIDController2_P , & rtP . PIDController2_I_edyryjr1ey , & rtP .
PIDController2_D , & rtP . PIDController2_N , & rtP .
PIDController2_InitialConditionForIntegrator , & rtP .
PIDController2_InitialConditionForFilter , & rtP . PIDController_P_lyogmo2kkp
, & rtP . PIDController_I_p4emzoziav , & rtP . PIDController_D_n1dlg551nt , &
rtP . PIDController_N_ktqb1csp5j , & rtP .
PIDController_InitialConditionForIntegrator_eeeasmnvlu , & rtP .
PIDController_InitialConditionForFilter_h0gegwcbv4 , & rtP .
PIDController1_I_kn5hf4wlm1 , & rtP . PIDController1_D_cclgetqhq2 , & rtP .
PIDController1_N_kjcbsdgiu4 , & rtP .
PIDController1_InitialConditionForIntegrator_mjg4ehekhg , & rtP .
PIDController1_InitialConditionForFilter_d52pz1y1uv , & rtP .
PIDController2_P_g3eqpktwgi , & rtP . PIDController2_I_eda3w3pnmo , & rtP .
PIDController2_D_n2borjb1u3 , & rtP . PIDController2_N_oqf2t3gvk0 , & rtP .
PIDController2_InitialConditionForIntegrator_hbrtunelxg , & rtP .
PIDController2_InitialConditionForFilter_mj1tjascp5 , & rtP .
PIDController_P_bkixrkfemw , & rtP . PIDController_I_ka53buzhsv , & rtP .
PIDController_D_iafklpacew , & rtP . PIDController_N_lpv1bmh4cb , & rtP .
PIDController_InitialConditionForIntegrator_g04d5mrrz5 , & rtP .
PIDController_InitialConditionForFilter_j3evzf1gez , & rtP .
PIDController1_I_dhlda2mmxa , & rtP . PIDController1_D_m0zns5ehtd , & rtP .
PIDController1_N_gcwx5scc5y , & rtP .
PIDController1_InitialConditionForIntegrator_c4jhblkgrn , & rtP .
PIDController1_InitialConditionForFilter_hl4ak4lbqb , & rtP .
PIDController2_P_owpotzqpw4 , & rtP . PIDController2_I_bl0dg5wd5d , & rtP .
PIDController2_D_ivk4ytgd1g , & rtP . PIDController2_N_b2cjespzjz , & rtP .
PIDController2_InitialConditionForIntegrator_lqya4mqhuz , & rtP .
PIDController2_InitialConditionForFilter_jwfobmpi1c , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
Saturation1_UpperSat , & rtP . Saturation1_LowerSat , & rtP .
Saturation2_UpperSat_eydgfhthvi , & rtP . Saturation2_LowerSat_pvud2psr4g , &
rtP . Saturation_UpperSat_n5hle3tqlr , & rtP . Saturation_LowerSat_a0f33ks5st
, & rtP . Saturation1_UpperSat_jnqdbyjo0h , & rtP .
Saturation1_LowerSat_nxi22dnqkb , & rtP . Saturation2_UpperSat_k3zxirjbnn , &
rtP . Saturation2_LowerSat_n1oahitiww , & rtP .
Saturation_UpperSat_o3tbzyjvoe , & rtP . Saturation_LowerSat_d2hlbm4xvg , &
rtP . Saturation1_UpperSat_is1gig25ew , & rtP .
Saturation1_LowerSat_mk2outamb2 , & rtP . Saturation2_UpperSat_bxhv4xowlg , &
rtP . Saturation2_LowerSat_omipxfavcd , & rtP . Constant1_Value_anleszyjns ,
& rtP . Constant18_Value , & rtP . Constant19_Value , & rtP .
Constant20_Value , & rtP . Constant6_Value_ji4ih5grvx , & rtP .
Gain_Gain_ebhlmk5t4x , & rtP . Gain4_Gain_imrt3sps2q , & rtP . Integrator_IC
, & rtP . Integrator1_IC_heq4ih3sop , & rtP . Integrator2_IC , & rtP .
Integrator3_IC , & rtP . Integrator4_IC , & rtP . Integrator5_IC_if0dkkc4sn ,
& rtP . SineWave6_Amp_henxm5i1gd , & rtP . SineWave6_Bias_cnbbxkgu2e , & rtP
. SineWave6_Freq_mp3q4xahd0 , & rtP . SineWave6_Phase_lspwxraw1u , & rtP .
Switch3_Threshold , & rtP . Switch4_Threshold , & rtP .
Integrator_IC_pea4zoukn2 , & rtP . Integrator1_IC_hluxpggxgx , & rtP .
Integrator_IC_kuhmbxgxyr , & rtP . Integrator1_IC_mm1y0ejde0 , & rtP .
Integrator_IC_dkmzwnjlda , & rtP . Integrator1_IC_lmb1knnxne , & rtP .
Constant1_Value_oad0ewdkxh , & rtP . Constant18_Value_jl4j00is31 , & rtP .
Constant19_Value_khky1eltum , & rtP . Constant20_Value_bifugeoxsi , & rtP .
Constant6_Value_p3q4n4gg5p , & rtP . Gain_Gain_n4w5ypbc00 , & rtP .
Gain4_Gain_hvthrgs2u3 , & rtP . Integrator_IC_kgvonwyhc0 , & rtP .
Integrator1_IC_od5gppxfje , & rtP . Integrator2_IC_cjntt1wjkx , & rtP .
Integrator3_IC_eunscfkrjo , & rtP . Integrator4_IC_hweooieypn , & rtP .
Integrator5_IC_dkcmnnrtrg , & rtP . SineWave6_Amp_dodybln1ra , & rtP .
SineWave6_Bias_h3x4k5vgis , & rtP . SineWave6_Freq_lsyxwbjnmq , & rtP .
SineWave6_Phase_lxlmjcj12n , & rtP . Switch3_Threshold_oorgqpvcvo , & rtP .
Switch4_Threshold_pct3ktcsxi , & rtP . Integrator_IC_deafmlkoja , & rtP .
Integrator1_IC_c5keywtevf , & rtP . Integrator_IC_h2ghob1z1z , & rtP .
Integrator1_IC_ccuwbvxd2m , & rtP . Integrator_IC_hcxtzvq335 , & rtP .
Integrator1_IC_bk1luecfrf , & rtP . Constant1_Value_hif2vfulzb , & rtP .
Constant18_Value_jy1wqu120y , & rtP . Constant19_Value_nnupnukofe , & rtP .
Constant20_Value_ieecxe0tzh , & rtP . Constant6_Value_mf2wjkcoe1 , & rtP .
Gain_Gain_jqz2vch25q , & rtP . Gain4_Gain_nn0z0a2s0s , & rtP .
Integrator_IC_a4ahepwtbc , & rtP . Integrator1_IC_gi4giafbgs , & rtP .
Integrator2_IC_bmfscpdt33 , & rtP . Integrator3_IC_fuyeuczoy3 , & rtP .
Integrator4_IC_kdc04fe1mo , & rtP . Integrator5_IC_kfnpgityuy , & rtP .
SineWave6_Amp_jsec3i1shb , & rtP . SineWave6_Bias_gnb10sgoal , & rtP .
SineWave6_Freq_csvujkpg3v , & rtP . SineWave6_Phase_o44bvzhliy , & rtP .
Switch3_Threshold_nk3dncxebe , & rtP . Switch4_Threshold_mi0yodiqiu , & rtP .
Integrator_IC_ay1fqjw5cu , & rtP . Integrator1_IC_fraig3nxla , & rtP .
Integrator_IC_da24xtkiht , & rtP . Integrator1_IC_llubqre4or , & rtP .
Integrator_IC_d14lb2y2xu , & rtP . Integrator1_IC_nt3ac13l2a , & rtP .
Constant1_Value_fgyxvvitry , & rtP . Gain_Gain_awestftebg , & rtP .
Integrator_IC_lqzn20lau3 , & rtP . Integrator1_IC_ggm3f24kg1 , & rtP .
Integrator2_IC_onz01dod3h , & rtP . Integrator3_IC_nnhhmqfjhs , & rtP .
Integrator4_IC_mfxj3ieh1q , & rtP . Integrator5_IC , & rtP .
Integrator_IC_mctvldpkh3 , & rtP . Integrator1_IC , & rtP .
Integrator_IC_mwbhsimjtn , & rtP . Integrator1_IC_oayqv41ri2 , & rtP .
Integrator_IC_gxj5snzs0v , & rtP . Integrator1_IC_njked3y5ka , & rtP .
Constant1_Value_h3yw0poswh , & rtP . Gain_Gain_lv0lbvfry2 , & rtP .
Integrator_IC_e2hmrfune1 , & rtP . Integrator1_IC_ekxpqxuslq , & rtP .
Integrator2_IC_efpd0r0wwo , & rtP . Integrator3_IC_khpwka435t , & rtP .
Integrator4_IC_no4dif4d2y , & rtP . Integrator5_IC_bljzdd2dwj , & rtP .
Integrator_IC_jw0wt3eqo1 , & rtP . Integrator1_IC_plyhjc2cip , & rtP .
Integrator_IC_drogpohdrj , & rtP . Integrator1_IC_hmuy2i0cl2 , & rtP .
Integrator_IC_aondaic4tn , & rtP . Integrator1_IC_eq0rr2lar5 , & rtP .
Constant1_Value_eatui1s5t2 , & rtP . Gain_Gain_jfxqopldfw , & rtP .
Integrator_IC_mdcyvvmror , & rtP . Integrator1_IC_ief3n0zhlq , & rtP .
Integrator2_IC_gbvim2rrir , & rtP . Integrator3_IC_gjlkpxvur3 , & rtP .
Integrator4_IC_igppojxrmq , & rtP . Integrator5_IC_jrqdwzs0tm , & rtP .
Integrator_IC_nmclzfgmgt , & rtP . Integrator1_IC_pvv3oz1agd , & rtP .
Integrator_IC_pbr1n1noet , & rtP . Integrator1_IC_p4le5tsnjt , & rtP .
Integrator_IC_pxiemqggyu , & rtP . Integrator1_IC_p1wk5q0cdt , } ; static
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
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 268 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 560 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2421417652U , 3265537388U , 2410610641U , 1787971325U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SwarmSMC2_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void SwarmSMC2_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
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
void SwarmSMC2_host_InitializeDataMapInfo ( SwarmSMC2_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
