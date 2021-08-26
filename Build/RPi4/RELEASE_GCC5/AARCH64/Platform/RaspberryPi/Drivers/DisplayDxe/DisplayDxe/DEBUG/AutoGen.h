/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_c5deae31_fad2_4030_841b_cfc9644d2c5b
#define _AUTOGENH_c5deae31_fad2_4030_841b_cfc9644d2c5b

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xc5deae31, 0xfad2, 0x4030, {0x84, 0x1b, 0xcf, 0xc9, 0x64, 0x4d, 0x2c, 0x5b}}
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
extern EFI_GUID gArmTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gRaspberryPiFirmwareProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDisplayEnableScaledVModes  19U
#define _PCD_GET_MODE_8_PcdDisplayEnableScaledVModes  LibPcdGet8(_PCD_TOKEN_PcdDisplayEnableScaledVModes)
#define _PCD_GET_MODE_SIZE_PcdDisplayEnableScaledVModes  LibPcdGetSize(_PCD_TOKEN_PcdDisplayEnableScaledVModes)
#define _PCD_SET_MODE_8_PcdDisplayEnableScaledVModes(Value)  LibPcdSet8(_PCD_TOKEN_PcdDisplayEnableScaledVModes, (Value))
#define _PCD_SET_MODE_8_S_PcdDisplayEnableScaledVModes(Value)  LibPcdSet8S(_PCD_TOKEN_PcdDisplayEnableScaledVModes, (Value))

#define _PCD_TOKEN_PcdDisplayEnableSShot  18U
#define _PCD_GET_MODE_32_PcdDisplayEnableSShot  LibPcdGet32(_PCD_TOKEN_PcdDisplayEnableSShot)
#define _PCD_GET_MODE_SIZE_PcdDisplayEnableSShot  LibPcdGetSize(_PCD_TOKEN_PcdDisplayEnableSShot)
#define _PCD_SET_MODE_32_PcdDisplayEnableSShot(Value)  LibPcdSet32(_PCD_TOKEN_PcdDisplayEnableSShot, (Value))
#define _PCD_SET_MODE_32_S_PcdDisplayEnableSShot(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDisplayEnableSShot, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DisplayDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
