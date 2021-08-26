/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B9F59B6B_B105_41C7_8F5A_2C60DD7FD7AB
#define _AUTOGENH_B9F59B6B_B105_41C7_8F5A_2C60DD7FD7AB

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gBcm283xTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBcm283xRegistersAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm283xRegistersAddress  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm283xRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm283xRegistersAddress 0xfe000000
#define _PCD_SIZE_PcdBcm283xRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm283xRegistersAddress _PCD_SIZE_PcdBcm283xRegistersAddress


#ifdef __cplusplus
}
#endif

#endif
