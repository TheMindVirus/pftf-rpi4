/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_755cbac2_b23f_4b92_bc8e_fb01ce5907b7
#define _AUTOGENH_755cbac2_b23f_4b92_bc8e_fb01ce5907b7

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x755cbac2, 0xb23f, 0x4b92, {0xbc, 0x8e, 0xfb, 0x01, 0xce, 0x59, 0x07, 0xb7}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa7eca3b4, 0x21b0, 0x4989, {0x8c, 0x18, 0xc0, 0x8f, 0x3a, 0xe8, 0x78, 0x37}}

// Guids
extern EFI_GUID gConfigDxeFormSetGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gRaspberryPiTokenSpaceGuid;
extern EFI_GUID gBcm27xxTokenSpaceGuid;
extern EFI_GUID gBcm283xTokenSpaceGuid;
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
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;

// Protocols
extern EFI_GUID gBcmGenetPlatformDeviceProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gRaspberryPiFirmwareProtocolGuid;
extern EFI_GUID gRaspberryPiConfigAppliedProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCpuLowSpeedMHz  0U
#define _PCD_SIZE_PcdCpuLowSpeedMHz 4
#define _PCD_GET_MODE_SIZE_PcdCpuLowSpeedMHz  _PCD_SIZE_PcdCpuLowSpeedMHz 
#define _PCD_VALUE_PcdCpuLowSpeedMHz  800U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLowSpeedMHz;
#define _PCD_GET_MODE_32_PcdCpuLowSpeedMHz  _gPcd_FixedAtBuild_PcdCpuLowSpeedMHz
//#define _PCD_SET_MODE_32_PcdCpuLowSpeedMHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuDefSpeedMHz  0U
#define _PCD_SIZE_PcdCpuDefSpeedMHz 4
#define _PCD_GET_MODE_SIZE_PcdCpuDefSpeedMHz  _PCD_SIZE_PcdCpuDefSpeedMHz 
#define _PCD_VALUE_PcdCpuDefSpeedMHz  1500U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuDefSpeedMHz;
#define _PCD_GET_MODE_32_PcdCpuDefSpeedMHz  _gPcd_FixedAtBuild_PcdCpuDefSpeedMHz
//#define _PCD_SET_MODE_32_PcdCpuDefSpeedMHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxSpeedMHz  0U
#define _PCD_SIZE_PcdCpuMaxSpeedMHz 4
#define _PCD_GET_MODE_SIZE_PcdCpuMaxSpeedMHz  _PCD_SIZE_PcdCpuMaxSpeedMHz 
#define _PCD_VALUE_PcdCpuMaxSpeedMHz  2200U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuMaxSpeedMHz;
#define _PCD_GET_MODE_32_PcdCpuMaxSpeedMHz  _gPcd_FixedAtBuild_PcdCpuMaxSpeedMHz
//#define _PCD_SET_MODE_32_PcdCpuMaxSpeedMHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcm27xxRegistersAddress  0U
#define _PCD_SIZE_PcdBcm27xxRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm27xxRegistersAddress  _PCD_SIZE_PcdBcm27xxRegistersAddress 
#define _PCD_VALUE_PcdBcm27xxRegistersAddress  0xfc000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBcm27xxRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm27xxRegistersAddress  _gPcd_FixedAtBuild_PcdBcm27xxRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm27xxRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcmGenetRegistersAddress  0U
#define _PCD_SIZE_PcdBcmGenetRegistersAddress 8
#define _PCD_GET_MODE_SIZE_PcdBcmGenetRegistersAddress  _PCD_SIZE_PcdBcmGenetRegistersAddress 
#define _PCD_VALUE_PcdBcmGenetRegistersAddress  0xfd580000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdBcmGenetRegistersAddress;
#define _PCD_GET_MODE_64_PcdBcmGenetRegistersAddress  _gPcd_FixedAtBuild_PcdBcmGenetRegistersAddress
//#define _PCD_SET_MODE_64_PcdBcmGenetRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcm283xRegistersAddress  0U
#define _PCD_SIZE_PcdBcm283xRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm283xRegistersAddress  _PCD_SIZE_PcdBcm283xRegistersAddress 
#define _PCD_VALUE_PcdBcm283xRegistersAddress  0xfe000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm283xRegistersAddress  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm283xRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuClock  15U
#define _PCD_GET_MODE_32_PcdCpuClock  LibPcdGet32(_PCD_TOKEN_PcdCpuClock)
#define _PCD_GET_MODE_SIZE_PcdCpuClock  LibPcdGetSize(_PCD_TOKEN_PcdCpuClock)
#define _PCD_SET_MODE_32_PcdCpuClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuClock, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuClock, (Value))

#define _PCD_TOKEN_PcdCustomCpuClock  16U
#define _PCD_GET_MODE_32_PcdCustomCpuClock  LibPcdGet32(_PCD_TOKEN_PcdCustomCpuClock)
#define _PCD_GET_MODE_SIZE_PcdCustomCpuClock  LibPcdGetSize(_PCD_TOKEN_PcdCustomCpuClock)
#define _PCD_SET_MODE_32_PcdCustomCpuClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdCustomCpuClock, (Value))
#define _PCD_SET_MODE_32_S_PcdCustomCpuClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCustomCpuClock, (Value))

#define _PCD_TOKEN_PcdSdIsArasan  31U
#define _PCD_GET_MODE_32_PcdSdIsArasan  LibPcdGet32(_PCD_TOKEN_PcdSdIsArasan)
#define _PCD_GET_MODE_SIZE_PcdSdIsArasan  LibPcdGetSize(_PCD_TOKEN_PcdSdIsArasan)
#define _PCD_SET_MODE_32_PcdSdIsArasan(Value)  LibPcdSet32(_PCD_TOKEN_PcdSdIsArasan, (Value))
#define _PCD_SET_MODE_32_S_PcdSdIsArasan(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSdIsArasan, (Value))

#define _PCD_TOKEN_PcdMmcForce1Bit  24U
#define _PCD_GET_MODE_32_PcdMmcForce1Bit  LibPcdGet32(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_GET_MODE_SIZE_PcdMmcForce1Bit  LibPcdGetSize(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_SET_MODE_32_PcdMmcForce1Bit(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForce1Bit, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForce1Bit(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForce1Bit, (Value))

#define _PCD_TOKEN_PcdMmcForceDefaultSpeed  25U
#define _PCD_GET_MODE_32_PcdMmcForceDefaultSpeed  LibPcdGet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_GET_MODE_SIZE_PcdMmcForceDefaultSpeed  LibPcdGetSize(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_SET_MODE_32_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))

#define _PCD_TOKEN_PcdMmcSdDefaultSpeedMHz  26U
#define _PCD_GET_MODE_32_PcdMmcSdDefaultSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdDefaultSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcSdHighSpeedMHz  27U
#define _PCD_GET_MODE_32_PcdMmcSdHighSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdHighSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcDisableMulti  22U
#define _PCD_GET_MODE_32_PcdMmcDisableMulti  LibPcdGet32(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_GET_MODE_SIZE_PcdMmcDisableMulti  LibPcdGetSize(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_SET_MODE_32_PcdMmcDisableMulti(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcDisableMulti, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcDisableMulti(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcDisableMulti, (Value))

#define _PCD_TOKEN_PcdMmcEnableDma  23U
#define _PCD_GET_MODE_32_PcdMmcEnableDma  LibPcdGet32(_PCD_TOKEN_PcdMmcEnableDma)
#define _PCD_GET_MODE_SIZE_PcdMmcEnableDma  LibPcdGetSize(_PCD_TOKEN_PcdMmcEnableDma)
#define _PCD_SET_MODE_32_PcdMmcEnableDma(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcEnableDma, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcEnableDma(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcEnableDma, (Value))

#define _PCD_TOKEN_PcdDebugEnableJTAG  17U
#define _PCD_GET_MODE_32_PcdDebugEnableJTAG  LibPcdGet32(_PCD_TOKEN_PcdDebugEnableJTAG)
#define _PCD_GET_MODE_SIZE_PcdDebugEnableJTAG  LibPcdGetSize(_PCD_TOKEN_PcdDebugEnableJTAG)
#define _PCD_SET_MODE_32_PcdDebugEnableJTAG(Value)  LibPcdSet32(_PCD_TOKEN_PcdDebugEnableJTAG, (Value))
#define _PCD_SET_MODE_32_S_PcdDebugEnableJTAG(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDebugEnableJTAG, (Value))

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

#define _PCD_TOKEN_PcdSystemTableMode  32U
#define _PCD_GET_MODE_32_PcdSystemTableMode  LibPcdGet32(_PCD_TOKEN_PcdSystemTableMode)
#define _PCD_GET_MODE_SIZE_PcdSystemTableMode  LibPcdGetSize(_PCD_TOKEN_PcdSystemTableMode)
#define _PCD_SET_MODE_32_PcdSystemTableMode(Value)  LibPcdSet32(_PCD_TOKEN_PcdSystemTableMode, (Value))
#define _PCD_SET_MODE_32_S_PcdSystemTableMode(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSystemTableMode, (Value))

#define _PCD_TOKEN_PcdRamMoreThan3GB  30U
#define _PCD_GET_MODE_32_PcdRamMoreThan3GB  LibPcdGet32(_PCD_TOKEN_PcdRamMoreThan3GB)
#define _PCD_GET_MODE_SIZE_PcdRamMoreThan3GB  LibPcdGetSize(_PCD_TOKEN_PcdRamMoreThan3GB)
#define _PCD_SET_MODE_32_PcdRamMoreThan3GB(Value)  LibPcdSet32(_PCD_TOKEN_PcdRamMoreThan3GB, (Value))
#define _PCD_SET_MODE_32_S_PcdRamMoreThan3GB(Value)  LibPcdSet32S(_PCD_TOKEN_PcdRamMoreThan3GB, (Value))

#define _PCD_TOKEN_PcdRamLimitTo3GB  29U
#define _PCD_GET_MODE_32_PcdRamLimitTo3GB  LibPcdGet32(_PCD_TOKEN_PcdRamLimitTo3GB)
#define _PCD_GET_MODE_SIZE_PcdRamLimitTo3GB  LibPcdGetSize(_PCD_TOKEN_PcdRamLimitTo3GB)
#define _PCD_SET_MODE_32_PcdRamLimitTo3GB(Value)  LibPcdSet32(_PCD_TOKEN_PcdRamLimitTo3GB, (Value))
#define _PCD_SET_MODE_32_S_PcdRamLimitTo3GB(Value)  LibPcdSet32S(_PCD_TOKEN_PcdRamLimitTo3GB, (Value))

#define _PCD_TOKEN_PcdFanOnGpio  20U
#define _PCD_GET_MODE_32_PcdFanOnGpio  LibPcdGet32(_PCD_TOKEN_PcdFanOnGpio)
#define _PCD_GET_MODE_SIZE_PcdFanOnGpio  LibPcdGetSize(_PCD_TOKEN_PcdFanOnGpio)
#define _PCD_SET_MODE_32_PcdFanOnGpio(Value)  LibPcdSet32(_PCD_TOKEN_PcdFanOnGpio, (Value))
#define _PCD_SET_MODE_32_S_PcdFanOnGpio(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFanOnGpio, (Value))

#define _PCD_TOKEN_PcdFanTemp  21U
#define _PCD_GET_MODE_32_PcdFanTemp  LibPcdGet32(_PCD_TOKEN_PcdFanTemp)
#define _PCD_GET_MODE_SIZE_PcdFanTemp  LibPcdGetSize(_PCD_TOKEN_PcdFanTemp)
#define _PCD_SET_MODE_32_PcdFanTemp(Value)  LibPcdSet32(_PCD_TOKEN_PcdFanTemp, (Value))
#define _PCD_SET_MODE_32_S_PcdFanTemp(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFanTemp, (Value))

#define _PCD_TOKEN_PcdUartInUse  33U
#define _PCD_GET_MODE_32_PcdUartInUse  LibPcdGet32(_PCD_TOKEN_PcdUartInUse)
#define _PCD_GET_MODE_SIZE_PcdUartInUse  LibPcdGetSize(_PCD_TOKEN_PcdUartInUse)
#define _PCD_SET_MODE_32_PcdUartInUse(Value)  LibPcdSet32(_PCD_TOKEN_PcdUartInUse, (Value))
#define _PCD_SET_MODE_32_S_PcdUartInUse(Value)  LibPcdSet32S(_PCD_TOKEN_PcdUartInUse, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
ConfigInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "ConfigDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
