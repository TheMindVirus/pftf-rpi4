/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BE73105A_B13D_4B57_A41A_463DBD15FE10
#define _AUTOGENH_BE73105A_B13D_4B57_A41A_463DBD15FE10

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gBootDiscoveryPolicyMgrFormsetGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBootDiscoveryPolicy  1U
#define _PCD_GET_MODE_32_PcdBootDiscoveryPolicy  LibPcdGet32(_PCD_TOKEN_PcdBootDiscoveryPolicy)
#define _PCD_GET_MODE_SIZE_PcdBootDiscoveryPolicy  LibPcdGetSize(_PCD_TOKEN_PcdBootDiscoveryPolicy)
#define _PCD_SET_MODE_32_PcdBootDiscoveryPolicy(Value)  LibPcdSet32(_PCD_TOKEN_PcdBootDiscoveryPolicy, (Value))
#define _PCD_SET_MODE_32_S_PcdBootDiscoveryPolicy(Value)  LibPcdSet32S(_PCD_TOKEN_PcdBootDiscoveryPolicy, (Value))

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "BootDiscoveryPolicyUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
