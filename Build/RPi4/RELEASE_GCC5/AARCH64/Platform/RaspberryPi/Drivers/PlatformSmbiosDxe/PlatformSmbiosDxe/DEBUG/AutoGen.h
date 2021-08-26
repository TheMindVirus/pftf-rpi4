/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BAD0554E_22E9_4D83_9AFD_CC87727A1A45
#define _AUTOGENH_BAD0554E_22E9_4D83_9AFD_CC87727A1A45

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBAD0554E, 0x22E9, 0x4D83, {0x9A, 0xFD, 0xCC, 0x87, 0x72, 0x7A, 0x1A, 0x45}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa7eca3b4, 0x21b0, 0x4989, {0x8c, 0x18, 0xc0, 0x8f, 0x3a, 0xe8, 0x78, 0x37}}

// Guids
extern EFI_GUID gConfigDxeFormSetGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gRaspberryPiFirmwareProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
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
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFdBaseAddress  0U
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress  _PCD_SIZE_PcdFdBaseAddress 
#define _PCD_VALUE_PcdFdBaseAddress  0x00000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdSize  0U
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize  _PCD_SIZE_PcdFdSize 
#define _PCD_VALUE_PcdFdSize  0x001f0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemorySize  0U
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  _PCD_SIZE_PcdSystemMemorySize 
#define _PCD_VALUE_PcdSystemMemorySize  0x3fe00000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVendor  0U
#define _PCD_VALUE_PcdFirmwareVendor  _gPcd_FixedAtBuild_PcdFirmwareVendor
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVendor[29];
#define _PCD_GET_MODE_PTR_PcdFirmwareVendor  _gPcd_FixedAtBuild_PcdFirmwareVendor
#define _PCD_SIZE_PcdFirmwareVendor 58
#define _PCD_GET_MODE_SIZE_PcdFirmwareVendor  _PCD_SIZE_PcdFirmwareVendor 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVendor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  0U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[15];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 30
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdtSize  0U
#define _PCD_SIZE_PcdFdtSize 4
#define _PCD_GET_MODE_SIZE_PcdFdtSize  _PCD_SIZE_PcdFdtSize 
#define _PCD_VALUE_PcdFdtSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdtSize;
#define _PCD_GET_MODE_32_PcdFdtSize  _gPcd_FixedAtBuild_PcdFdtSize
//#define _PCD_SET_MODE_32_PcdFdtSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRamMoreThan3GB  29U
#define _PCD_GET_MODE_32_PcdRamMoreThan3GB  LibPcdGet32(_PCD_TOKEN_PcdRamMoreThan3GB)
#define _PCD_GET_MODE_SIZE_PcdRamMoreThan3GB  LibPcdGetSize(_PCD_TOKEN_PcdRamMoreThan3GB)
#define _PCD_SET_MODE_32_PcdRamMoreThan3GB(Value)  LibPcdSet32(_PCD_TOKEN_PcdRamMoreThan3GB, (Value))
#define _PCD_SET_MODE_32_S_PcdRamMoreThan3GB(Value)  LibPcdSet32S(_PCD_TOKEN_PcdRamMoreThan3GB, (Value))

#define _PCD_TOKEN_PcdRamLimitTo3GB  28U
#define _PCD_GET_MODE_32_PcdRamLimitTo3GB  LibPcdGet32(_PCD_TOKEN_PcdRamLimitTo3GB)
#define _PCD_GET_MODE_SIZE_PcdRamLimitTo3GB  LibPcdGetSize(_PCD_TOKEN_PcdRamLimitTo3GB)
#define _PCD_SET_MODE_32_PcdRamLimitTo3GB(Value)  LibPcdSet32(_PCD_TOKEN_PcdRamLimitTo3GB, (Value))
#define _PCD_SET_MODE_32_S_PcdRamLimitTo3GB(Value)  LibPcdSet32S(_PCD_TOKEN_PcdRamLimitTo3GB, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PlatformSmbiosDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
