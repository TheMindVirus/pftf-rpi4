/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD
#define _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x7E374E25, 0x8E01, 0x4FEE, {0x87, 0xF2, 0x39, 0x0C, 0x23, 0xC6, 0x06, 0xCD}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa7eca3b4, 0x21b0, 0x4989, {0x8c, 0x18, 0xc0, 0x8f, 0x3a, 0xe8, 0x78, 0x37}}

// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gBcm27xxTokenSpaceGuid;
extern GUID gBcm283xTokenSpaceGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;
extern GUID gRaspberryPiTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdArmArchTimerIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerIntrNum  _PCD_SIZE_PcdArmArchTimerIntrNum 
#define _PCD_VALUE_PcdArmArchTimerIntrNum  30U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerHypIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerHypIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerHypIntrNum  _PCD_SIZE_PcdArmArchTimerHypIntrNum 
#define _PCD_VALUE_PcdArmArchTimerHypIntrNum  26U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerHypIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerHypIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerHypIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerHypIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerSecIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerSecIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerSecIntrNum  _PCD_SIZE_PcdArmArchTimerSecIntrNum 
#define _PCD_VALUE_PcdArmArchTimerSecIntrNum  29U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerSecIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerSecIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerSecIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerSecIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerVirtIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerVirtIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerVirtIntrNum  _PCD_SIZE_PcdArmArchTimerVirtIntrNum 
#define _PCD_VALUE_PcdArmArchTimerVirtIntrNum  27U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerVirtIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerVirtIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerVirtIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerVirtIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicInterruptInterfaceBase  0U
#define _PCD_SIZE_PcdGicInterruptInterfaceBase 8
#define _PCD_GET_MODE_SIZE_PcdGicInterruptInterfaceBase  _PCD_SIZE_PcdGicInterruptInterfaceBase 
#define _PCD_VALUE_PcdGicInterruptInterfaceBase  0xFF842000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceBase;
#define _PCD_GET_MODE_64_PcdGicInterruptInterfaceBase  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceBase
//#define _PCD_SET_MODE_64_PcdGicInterruptInterfaceBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicDistributorBase  0U
#define _PCD_SIZE_PcdGicDistributorBase 8
#define _PCD_GET_MODE_SIZE_PcdGicDistributorBase  _PCD_SIZE_PcdGicDistributorBase 
#define _PCD_VALUE_PcdGicDistributorBase  0xFF841000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicDistributorBase;
#define _PCD_GET_MODE_64_PcdGicDistributorBase  _gPcd_FixedAtBuild_PcdGicDistributorBase
//#define _PCD_SET_MODE_64_PcdGicDistributorBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcm27xxPciCpuMmioAdr  0U
#define _PCD_SIZE_PcdBcm27xxPciCpuMmioAdr 8
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciCpuMmioAdr  _PCD_SIZE_PcdBcm27xxPciCpuMmioAdr 
#define _PCD_VALUE_PcdBcm27xxPciCpuMmioAdr  0x600000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdBcm27xxPciCpuMmioAdr;
#define _PCD_GET_MODE_64_PcdBcm27xxPciCpuMmioAdr  _gPcd_FixedAtBuild_PcdBcm27xxPciCpuMmioAdr
//#define _PCD_SET_MODE_64_PcdBcm27xxPciCpuMmioAdr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcm27xxPciRegBase  0U
#define _PCD_SIZE_PcdBcm27xxPciRegBase 4
#define _PCD_GET_MODE_SIZE_PcdBcm27xxPciRegBase  _PCD_SIZE_PcdBcm27xxPciRegBase 
#define _PCD_VALUE_PcdBcm27xxPciRegBase  0xfd500000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBcm27xxPciRegBase;
#define _PCD_GET_MODE_32_PcdBcm27xxPciRegBase  _gPcd_FixedAtBuild_PcdBcm27xxPciRegBase
//#define _PCD_SET_MODE_32_PcdBcm27xxPciRegBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdUartDefaultBaudRate  0U
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate  _PCD_SIZE_PcdUartDefaultBaudRate 
#define _PCD_VALUE_PcdUartDefaultBaudRate  115200ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInterruptBaseAddress  0U
#define _PCD_SIZE_PcdInterruptBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdInterruptBaseAddress  _PCD_SIZE_PcdInterruptBaseAddress 
#define _PCD_VALUE_PcdInterruptBaseAddress  0x38e00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInterruptBaseAddress;
#define _PCD_GET_MODE_32_PcdInterruptBaseAddress  _gPcd_FixedAtBuild_PcdInterruptBaseAddress
//#define _PCD_SET_MODE_32_PcdInterruptBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicInterruptInterfaceHBase  0U
#define _PCD_SIZE_PcdGicInterruptInterfaceHBase 8
#define _PCD_GET_MODE_SIZE_PcdGicInterruptInterfaceHBase  _PCD_SIZE_PcdGicInterruptInterfaceHBase 
#define _PCD_VALUE_PcdGicInterruptInterfaceHBase  0xFF844000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceHBase;
#define _PCD_GET_MODE_64_PcdGicInterruptInterfaceHBase  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceHBase
//#define _PCD_SET_MODE_64_PcdGicInterruptInterfaceHBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicInterruptInterfaceVBase  0U
#define _PCD_SIZE_PcdGicInterruptInterfaceVBase 8
#define _PCD_GET_MODE_SIZE_PcdGicInterruptInterfaceVBase  _PCD_SIZE_PcdGicInterruptInterfaceVBase 
#define _PCD_VALUE_PcdGicInterruptInterfaceVBase  0xFF846000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceVBase;
#define _PCD_GET_MODE_64_PcdGicInterruptInterfaceVBase  _gPcd_FixedAtBuild_PcdGicInterruptInterfaceVBase
//#define _PCD_SET_MODE_64_PcdGicInterruptInterfaceVBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicGsivId  0U
#define _PCD_SIZE_PcdGicGsivId 4
#define _PCD_GET_MODE_SIZE_PcdGicGsivId  _PCD_SIZE_PcdGicGsivId 
#define _PCD_VALUE_PcdGicGsivId  0x19U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGicGsivId;
#define _PCD_GET_MODE_32_PcdGicGsivId  _gPcd_FixedAtBuild_PcdGicGsivId
//#define _PCD_SET_MODE_32_PcdGicGsivId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicPmuIrq0  0U
#define _PCD_SIZE_PcdGicPmuIrq0 4
#define _PCD_GET_MODE_SIZE_PcdGicPmuIrq0  _PCD_SIZE_PcdGicPmuIrq0 
#define _PCD_VALUE_PcdGicPmuIrq0  0x30U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGicPmuIrq0;
#define _PCD_GET_MODE_32_PcdGicPmuIrq0  _gPcd_FixedAtBuild_PcdGicPmuIrq0
//#define _PCD_SET_MODE_32_PcdGicPmuIrq0  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicPmuIrq1  0U
#define _PCD_SIZE_PcdGicPmuIrq1 4
#define _PCD_GET_MODE_SIZE_PcdGicPmuIrq1  _PCD_SIZE_PcdGicPmuIrq1 
#define _PCD_VALUE_PcdGicPmuIrq1  0x31U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGicPmuIrq1;
#define _PCD_GET_MODE_32_PcdGicPmuIrq1  _gPcd_FixedAtBuild_PcdGicPmuIrq1
//#define _PCD_SET_MODE_32_PcdGicPmuIrq1  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicPmuIrq2  0U
#define _PCD_SIZE_PcdGicPmuIrq2 4
#define _PCD_GET_MODE_SIZE_PcdGicPmuIrq2  _PCD_SIZE_PcdGicPmuIrq2 
#define _PCD_VALUE_PcdGicPmuIrq2  0x32U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGicPmuIrq2;
#define _PCD_GET_MODE_32_PcdGicPmuIrq2  _gPcd_FixedAtBuild_PcdGicPmuIrq2
//#define _PCD_SET_MODE_32_PcdGicPmuIrq2  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGicPmuIrq3  0U
#define _PCD_SIZE_PcdGicPmuIrq3 4
#define _PCD_GET_MODE_SIZE_PcdGicPmuIrq3  _PCD_SIZE_PcdGicPmuIrq3 
#define _PCD_VALUE_PcdGicPmuIrq3  0x33U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGicPmuIrq3;
#define _PCD_GET_MODE_32_PcdGicPmuIrq3  _gPcd_FixedAtBuild_PcdGicPmuIrq3
//#define _PCD_SET_MODE_32_PcdGicPmuIrq3  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
