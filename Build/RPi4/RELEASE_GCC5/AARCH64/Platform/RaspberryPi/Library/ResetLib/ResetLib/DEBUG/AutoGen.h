/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B9F59B69_A105_41C7_8F5A_2C60DD7FD7AB
#define _AUTOGENH_B9F59B69_A105_41C7_8F5A_2C60DD7FD7AB

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gRaspberryPiEventResetGuid;
extern GUID gRaspberryPiTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPlatformResetDelay  28U
#define _PCD_GET_MODE_32_PcdPlatformResetDelay  LibPcdGet32(_PCD_TOKEN_PcdPlatformResetDelay)
#define _PCD_GET_MODE_SIZE_PcdPlatformResetDelay  LibPcdGetSize(_PCD_TOKEN_PcdPlatformResetDelay)
#define _PCD_SET_MODE_32_PcdPlatformResetDelay(Value)  LibPcdSet32(_PCD_TOKEN_PcdPlatformResetDelay, (Value))
#define _PCD_SET_MODE_32_S_PcdPlatformResetDelay(Value)  LibPcdSet32S(_PCD_TOKEN_PcdPlatformResetDelay, (Value))


#ifdef __cplusplus
}
#endif

#endif
