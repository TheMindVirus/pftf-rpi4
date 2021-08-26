/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8d52c038_0040_11ea_83fb_5254005675a0
#define _AUTOGENH_8d52c038_0040_11ea_83fb_5254005675a0

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gBcm27xxTokenSpaceGuid;

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
#define _PCD_TOKEN_PcdBcm27xxPciBusMmioAdr  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdBcm27xxPciBusMmioAdr;
#define _PCD_GET_MODE_64_PcdBcm27xxPciBusMmioAdr  _gPcd_FixedAtBuild_PcdBcm27xxPciBusMmioAdr
//#define _PCD_SET_MODE_64_PcdBcm27xxPciBusMmioAdr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm27xxPciBusMmioAdr 0xf8000000
#define _PCD_SIZE_PcdBcm27xxPciBusMmioAdr 8
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciBusMmioAdr _PCD_SIZE_PcdBcm27xxPciBusMmioAdr
#define _PCD_TOKEN_PcdBcm27xxPciBusMmioLen  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdBcm27xxPciBusMmioLen;
#define _PCD_GET_MODE_32_PcdBcm27xxPciBusMmioLen  _gPcd_FixedAtBuild_PcdBcm27xxPciBusMmioLen
//#define _PCD_SET_MODE_32_PcdBcm27xxPciBusMmioLen  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm27xxPciBusMmioLen 0x3ffffff
#define _PCD_SIZE_PcdBcm27xxPciBusMmioLen 4
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciBusMmioLen _PCD_SIZE_PcdBcm27xxPciBusMmioLen
#define _PCD_TOKEN_PcdBcm27xxPciCpuMmioAdr  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdBcm27xxPciCpuMmioAdr;
#define _PCD_GET_MODE_64_PcdBcm27xxPciCpuMmioAdr  _gPcd_FixedAtBuild_PcdBcm27xxPciCpuMmioAdr
//#define _PCD_SET_MODE_64_PcdBcm27xxPciCpuMmioAdr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm27xxPciCpuMmioAdr 0x600000000
#define _PCD_SIZE_PcdBcm27xxPciCpuMmioAdr 8
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciCpuMmioAdr _PCD_SIZE_PcdBcm27xxPciCpuMmioAdr

EFI_STATUS
EFIAPI
Bcm2711PciHostBridgeLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
