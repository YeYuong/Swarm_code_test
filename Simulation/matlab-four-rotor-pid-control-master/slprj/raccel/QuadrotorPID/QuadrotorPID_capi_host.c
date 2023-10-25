#include "QuadrotorPID_capi_host.h"
static QuadrotorPID_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        QuadrotorPID_host_InitializeDataMapInfo(&(root), "QuadrotorPID");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
