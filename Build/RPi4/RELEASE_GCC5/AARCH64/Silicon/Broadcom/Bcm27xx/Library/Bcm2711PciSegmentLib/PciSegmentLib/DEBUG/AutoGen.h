/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_74fe3f9e_0040_11ea_a7bf_5254005675a0
#define _AUTOGENH_74fe3f9e_0040_11ea_a7bf_5254005675a0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gBcm27xxTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBcm27xxPciRegBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdBcm27xxPciRegBase;
#define _PCD_GET_MODE_32_PcdBcm27xxPciRegBase  _gPcd_FixedAtBuild_PcdBcm27xxPciRegBase
//#define _PCD_SET_MODE_32_PcdBcm27xxPciRegBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm27xxPciRegBase 0xfd500000
#define _PCD_SIZE_PcdBcm27xxPciRegBase 4
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciRegBase _PCD_SIZE_PcdBcm27xxPciRegBase


#ifdef __cplusplus
}
#endif

#endif
