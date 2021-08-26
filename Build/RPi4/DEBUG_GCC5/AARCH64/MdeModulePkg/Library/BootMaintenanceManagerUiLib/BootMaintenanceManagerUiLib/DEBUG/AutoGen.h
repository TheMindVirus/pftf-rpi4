/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CA9E4824_4198_4715_AA22_E2935E703A07
#define _AUTOGENH_CA9E4824_4198_4715_AA22_E2935E703A07

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiIfrFrontPageGuid;
extern EFI_GUID gEfiIfrBootMaintenanceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdConOutRow  2U
#define _PCD_GET_MODE_32_PcdConOutRow  LibPcdGet32(_PCD_TOKEN_PcdConOutRow)
#define _PCD_GET_MODE_SIZE_PcdConOutRow  LibPcdGetSize(_PCD_TOKEN_PcdConOutRow)
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  LibPcdSet32(_PCD_TOKEN_PcdConOutRow, (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  LibPcdSet32S(_PCD_TOKEN_PcdConOutRow, (Value))
#define _PCD_TOKEN_PcdConOutColumn  1U
#define _PCD_GET_MODE_32_PcdConOutColumn  LibPcdGet32(_PCD_TOKEN_PcdConOutColumn)
#define _PCD_GET_MODE_SIZE_PcdConOutColumn  LibPcdGetSize(_PCD_TOKEN_PcdConOutColumn)
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  LibPcdSet32(_PCD_TOKEN_PcdConOutColumn, (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  LibPcdSet32S(_PCD_TOKEN_PcdConOutColumn, (Value))
#define _PCD_TOKEN_PcdPlatformBootTimeOut  13U
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  LibPcdGet16(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  LibPcdGetSize(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut(Value)  LibPcdSet16(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_SET_MODE_16_S_PcdPlatformBootTimeOut(Value)  LibPcdSet16S(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_TOKEN_PcdVideoHorizontalResolution  11U
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))
#define _PCD_TOKEN_PcdVideoVerticalResolution  12U
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))
#define _PCD_TOKEN_PcdSetupConOutColumn  6U
#define _PCD_GET_MODE_32_PcdSetupConOutColumn  LibPcdGet32(_PCD_TOKEN_PcdSetupConOutColumn)
#define _PCD_GET_MODE_SIZE_PcdSetupConOutColumn  LibPcdGetSize(_PCD_TOKEN_PcdSetupConOutColumn)
#define _PCD_SET_MODE_32_PcdSetupConOutColumn(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupConOutColumn, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutColumn(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupConOutColumn, (Value))
#define _PCD_TOKEN_PcdSetupConOutRow  7U
#define _PCD_GET_MODE_32_PcdSetupConOutRow  LibPcdGet32(_PCD_TOKEN_PcdSetupConOutRow)
#define _PCD_GET_MODE_SIZE_PcdSetupConOutRow  LibPcdGetSize(_PCD_TOKEN_PcdSetupConOutRow)
#define _PCD_SET_MODE_32_PcdSetupConOutRow(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupConOutRow, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutRow(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupConOutRow, (Value))
#define _PCD_TOKEN_PcdSetupVideoHorizontalResolution  8U
#define _PCD_GET_MODE_32_PcdSetupVideoHorizontalResolution  LibPcdGet32(_PCD_TOKEN_PcdSetupVideoHorizontalResolution)
#define _PCD_GET_MODE_SIZE_PcdSetupVideoHorizontalResolution  LibPcdGetSize(_PCD_TOKEN_PcdSetupVideoHorizontalResolution)
#define _PCD_SET_MODE_32_PcdSetupVideoHorizontalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupVideoHorizontalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoHorizontalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupVideoHorizontalResolution, (Value))
#define _PCD_TOKEN_PcdSetupVideoVerticalResolution  9U
#define _PCD_GET_MODE_32_PcdSetupVideoVerticalResolution  LibPcdGet32(_PCD_TOKEN_PcdSetupVideoVerticalResolution)
#define _PCD_GET_MODE_SIZE_PcdSetupVideoVerticalResolution  LibPcdGetSize(_PCD_TOKEN_PcdSetupVideoVerticalResolution)
#define _PCD_SET_MODE_32_PcdSetupVideoVerticalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupVideoVerticalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoVerticalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupVideoVerticalResolution, (Value))

EFI_STATUS
EFIAPI
BootMaintenanceManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootMaintenanceManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "BootMaintenanceManagerUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
