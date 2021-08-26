/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_323bae1b_c2fc_4929_a2fe_9e9174f8ce0f
#define _AUTOGENH_323bae1b_c2fc_4929_a2fe_9e9174f8ce0f

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
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

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
#define _PCD_TOKEN_PcdSerialUseHardwareFlowControl  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl;
#define _PCD_GET_MODE_BOOL_PcdSerialUseHardwareFlowControl  _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl
//#define _PCD_SET_MODE_BOOL_PcdSerialUseHardwareFlowControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialUseHardwareFlowControl 0
#define _PCD_SIZE_PcdSerialUseHardwareFlowControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialUseHardwareFlowControl _PCD_SIZE_PcdSerialUseHardwareFlowControl
#define _PCD_TOKEN_PcdSerialDetectCable  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSerialDetectCable;
#define _PCD_GET_MODE_BOOL_PcdSerialDetectCable  _gPcd_FixedAtBuild_PcdSerialDetectCable
//#define _PCD_SET_MODE_BOOL_PcdSerialDetectCable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialDetectCable 0
#define _PCD_SIZE_PcdSerialDetectCable 1
#define _PCD_GET_MODE_SIZE_PcdSerialDetectCable _PCD_SIZE_PcdSerialDetectCable
#define _PCD_TOKEN_PcdSerialFifoControl  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdSerialFifoControl;
#define _PCD_GET_MODE_8_PcdSerialFifoControl  _gPcd_FixedAtBuild_PcdSerialFifoControl
//#define _PCD_SET_MODE_8_PcdSerialFifoControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialFifoControl 0x27
#define _PCD_SIZE_PcdSerialFifoControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialFifoControl _PCD_SIZE_PcdSerialFifoControl
#define _PCD_TOKEN_PcdSerialExtendedTxFifoSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize;
#define _PCD_GET_MODE_32_PcdSerialExtendedTxFifoSize  _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize
//#define _PCD_SET_MODE_32_PcdSerialExtendedTxFifoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialExtendedTxFifoSize 8
#define _PCD_SIZE_PcdSerialExtendedTxFifoSize 4
#define _PCD_GET_MODE_SIZE_PcdSerialExtendedTxFifoSize _PCD_SIZE_PcdSerialExtendedTxFifoSize
#define _PCD_TOKEN_PcdSerialRegisterStride  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSerialRegisterStride;
#define _PCD_GET_MODE_32_PcdSerialRegisterStride  _gPcd_FixedAtBuild_PcdSerialRegisterStride
//#define _PCD_SET_MODE_32_PcdSerialRegisterStride  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialRegisterStride 4
#define _PCD_SIZE_PcdSerialRegisterStride 4
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterStride _PCD_SIZE_PcdSerialRegisterStride


#ifdef __cplusplus
}
#endif

#endif
