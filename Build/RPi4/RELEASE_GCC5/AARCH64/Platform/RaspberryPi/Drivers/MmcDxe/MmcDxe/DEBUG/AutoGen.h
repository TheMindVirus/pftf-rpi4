/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b6f44cc0_9e45_11df_be21_0002a5f5f51b
#define _AUTOGENH_b6f44cc0_9e45_11df_be21_0002a5f5f51b

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xb6f44cc0, 0x9e45, 0x11df, {0xbe, 0x21, 0x00, 0x02, 0xa5, 0xf5, 0xf5, 0x1b}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa7eca3b4, 0x21b0, 0x4989, {0x8c, 0x18, 0xc0, 0x8f, 0x3a, 0xe8, 0x78, 0x37}}

// Guids
extern EFI_GUID gRaspberryPiTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gRaspberryPiMmcHostProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMmcForce1Bit  23U
#define _PCD_GET_MODE_32_PcdMmcForce1Bit  LibPcdGet32(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_GET_MODE_SIZE_PcdMmcForce1Bit  LibPcdGetSize(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_SET_MODE_32_PcdMmcForce1Bit(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForce1Bit, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForce1Bit(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForce1Bit, (Value))

#define _PCD_TOKEN_PcdMmcForceDefaultSpeed  24U
#define _PCD_GET_MODE_32_PcdMmcForceDefaultSpeed  LibPcdGet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_GET_MODE_SIZE_PcdMmcForceDefaultSpeed  LibPcdGetSize(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_SET_MODE_32_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))

#define _PCD_TOKEN_PcdMmcSdDefaultSpeedMHz  25U
#define _PCD_GET_MODE_32_PcdMmcSdDefaultSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdDefaultSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcSdHighSpeedMHz  26U
#define _PCD_GET_MODE_32_PcdMmcSdHighSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdHighSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcDisableMulti  21U
#define _PCD_GET_MODE_32_PcdMmcDisableMulti  LibPcdGet32(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_GET_MODE_SIZE_PcdMmcDisableMulti  LibPcdGetSize(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_SET_MODE_32_PcdMmcDisableMulti(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcDisableMulti, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcDisableMulti(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcDisableMulti, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MmcDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
