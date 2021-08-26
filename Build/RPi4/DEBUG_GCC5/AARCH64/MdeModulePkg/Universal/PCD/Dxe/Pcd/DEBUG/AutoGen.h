/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541
#define _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa7eca3b4, 0x21b0, 0x4989, {0x8c, 0x18, 0xc0, 0x8f, 0x3a, 0xe8, 0x78, 0x37}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gBcm283xTokenSpaceGuid;
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
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
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
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVpdBaseAddress  0U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64  196614U
#define _PCD_TOKEN_PcdVpdBaseAddress64  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64
#define _PCD_GET_MODE_64_PcdVpdBaseAddress64  LibPcdGetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress64 LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_SET_MODE_64_PcdVpdBaseAddress64(Value)  LibPcdSetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))
#define _PCD_SET_MODE_64_S_PcdVpdBaseAddress64(Value)  LibPcdSetEx64S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId  196612U
#define _PCD_TOKEN_PcdSetNvStoreDefaultId  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId
#define _PCD_GET_MODE_16_PcdSetNvStoreDefaultId  LibPcdGetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_GET_MODE_SIZE_PcdSetNvStoreDefaultId LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_SET_MODE_16_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))
#define _PCD_SET_MODE_16_S_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )

#define __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )

#define __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )
#define _PCD_TOKEN_EX_PcdVpdBaseAddress64(GuidPtr)   __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) ? __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) : __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  

#define __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )
#define _PCD_TOKEN_EX_PcdSetNvStoreDefaultId(GuidPtr)   __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) ? __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) : __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c

#define PCD_PEI_SERVICE_DRIVER_VERSION         7

//
// External PCD database debug information
//
#if 0
#define PEI_GUID_TABLE_SIZE                1U
#define PEI_STRING_TABLE_SIZE              1U
#define PEI_SKUID_TABLE_SIZE               1U
#define PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE  0U
#define PEI_LOCAL_TOKEN_NUMBER             0U
#define PEI_EXMAPPING_TABLE_SIZE           1U
#define PEI_EX_TOKEN_NUMBER                0U
#define PEI_SIZE_TABLE_SIZE                2U
#define PEI_GUID_TABLE_EMPTY               TRUE
#define PEI_STRING_TABLE_EMPTY             TRUE
#define PEI_SKUID_TABLE_EMPTY              TRUE
#define PEI_DATABASE_EMPTY                 TRUE
#define PEI_EXMAP_TABLE_EMPTY              TRUE

typedef struct {
  UINT64             SkuIdTable[PEI_SKUID_TABLE_SIZE];





  DYNAMICEX_MAPPING  ExMapTable[PEI_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[PEI_GUID_TABLE_SIZE];

  UINT8              StringTable[1]; /* _ */

  SIZE_INFO          SizeTable[PEI_SIZE_TABLE_SIZE];






  SKU_ID             SystemSkuId;
} PEI_PCD_DATABASE_INIT;

typedef struct {
  UINT8  dummy; /* PCD_DATABASE_UNINIT is empty */





} PEI_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;       // Current SkuId value.
  //UINT32                LengthForAllSkus;  // Length of all SKU PCD DB
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset;
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[6];
  PEI_PCD_DATABASE_INIT    Init;
  PEI_PCD_DATABASE_UNINIT  Uninit;
} PEI_PCD_DATABASE;

#define PEI_NEX_TOKEN_NUMBER (PEI_LOCAL_TOKEN_NUMBER - PEI_EX_TOKEN_NUMBER)
#endif

#define PCD_DXE_SERVICE_DRIVER_VERSION         7

//
// External PCD database debug information
//
#if 0
#define DXE_GUID_TABLE_SIZE                5U
#define DXE_STRING_TABLE_SIZE              628U
#define DXE_SKUID_TABLE_SIZE               1U
#define DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE  36
#define DXE_LOCAL_TOKEN_NUMBER             36
#define DXE_EXMAPPING_TABLE_SIZE           3U
#define DXE_EX_TOKEN_NUMBER                3U
#define DXE_SIZE_TABLE_SIZE                2U
#define DXE_GUID_TABLE_EMPTY               FALSE
#define DXE_STRING_TABLE_EMPTY             FALSE
#define DXE_SKUID_TABLE_EMPTY              TRUE
#define DXE_DATABASE_EMPTY                 FALSE
#define DXE_EXMAP_TABLE_EMPTY              FALSE

typedef struct {
  UINT64             SkuIdTable[DXE_SKUID_TABLE_SIZE];


  UINT32             PcdSetupVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32             PcdSetupVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT32             PcdBootDiscoveryPolicy_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdFanOnGpio_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdFanTemp_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcEnableDma_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdPlatformResetDelay_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdRamLimitTo3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdRamMoreThan3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;
  UINT32             PcdSystemTableMode_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;


  DYNAMICEX_MAPPING  ExMapTable[DXE_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[DXE_GUID_TABLE_SIZE];
  STRING_HEAD        PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  VARIABLE_HEAD      PcdBootDiscoveryPolicy_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1];
  VARIABLE_HEAD      PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdFanOnGpio_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdFanTemp_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcEnableDma_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdPlatformResetDelay_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdRamLimitTo3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdRamMoreThan3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  VARIABLE_HEAD      PcdSystemTableMode_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1];
  UINT8              StringTable[40]; /* PcdBootDiscoveryPolicy_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  UINT8              StringTable_1[16]; /* PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  UINT8              StringTable_2[10]; /* PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  UINT8              StringTable_3[16]; /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10 */
  UINT8              StringTable_4[18]; /* PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_5[30]; /* PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_6[32]; /* PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_7[38]; /* PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_8[52]; /* PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_9[20]; /* PcdFanOnGpio_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_10[16]; /* PcdFanTemp_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_11[32]; /* PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_12[26]; /* PcdMmcEnableDma_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_13[26]; /* PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_14[42]; /* PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_15[42]; /* PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_16[36]; /* PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_17[22]; /* PcdPlatformResetDelay_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_18[28]; /* PcdRamLimitTo3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_19[30]; /* PcdRamMoreThan3GB_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_20[22]; /* PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_21[32]; /* PcdSystemTableMode_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  UINT8              StringTable_22[2]; /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  SIZE_INFO          SizeTable[DXE_SIZE_TABLE_SIZE];

  UINT16             PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2;


  UINT8              PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2;



  SKU_ID             SystemSkuId;
} DXE_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdFlashNvStorageVariableBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT32   PcdFlashNvStorageFtwSpareBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdFlashNvStorageFtwWorkingBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdUartInUse_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5[1];

  UINT16   PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];


  BOOLEAN  PcdTestKeyUsed_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

} DXE_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;       // Current SkuId value.
  //UINT32                LengthForAllSkus;  // Length of all SKU PCD DB
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset;
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[6];
  DXE_PCD_DATABASE_INIT    Init;
  DXE_PCD_DATABASE_UNINIT  Uninit;
} DXE_PCD_DATABASE;

#define DXE_NEX_TOKEN_NUMBER (DXE_LOCAL_TOKEN_NUMBER - DXE_EX_TOKEN_NUMBER)
#endif


EFI_STATUS
EFIAPI
PcdDxeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
