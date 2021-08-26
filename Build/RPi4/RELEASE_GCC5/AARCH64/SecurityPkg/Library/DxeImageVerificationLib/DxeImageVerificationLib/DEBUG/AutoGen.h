/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0CA970E1_43FA_4402_BC0A_81AF336BFFD6
#define _AUTOGENH_0CA970E1_43FA_4402_BC0A_81AF336BFFD6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiCertSha1Guid;
extern EFI_GUID gEfiCertSha256Guid;
extern EFI_GUID gEfiCertSha384Guid;
extern EFI_GUID gEfiCertSha512Guid;
extern EFI_GUID gEfiCertX509Guid;
extern EFI_GUID gEfiCertX509Sha256Guid;
extern EFI_GUID gEfiCertX509Sha384Guid;
extern EFI_GUID gEfiCertX509Sha512Guid;
extern EFI_GUID gEfiCertPkcs7Guid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOptionRomImageVerificationPolicy  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOptionRomImageVerificationPolicy;
#define _PCD_GET_MODE_32_PcdOptionRomImageVerificationPolicy  _gPcd_FixedAtBuild_PcdOptionRomImageVerificationPolicy
//#define _PCD_SET_MODE_32_PcdOptionRomImageVerificationPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOptionRomImageVerificationPolicy 0x04
#define _PCD_SIZE_PcdOptionRomImageVerificationPolicy 4
#define _PCD_GET_MODE_SIZE_PcdOptionRomImageVerificationPolicy _PCD_SIZE_PcdOptionRomImageVerificationPolicy
#define _PCD_TOKEN_PcdRemovableMediaImageVerificationPolicy  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdRemovableMediaImageVerificationPolicy;
#define _PCD_GET_MODE_32_PcdRemovableMediaImageVerificationPolicy  _gPcd_FixedAtBuild_PcdRemovableMediaImageVerificationPolicy
//#define _PCD_SET_MODE_32_PcdRemovableMediaImageVerificationPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdRemovableMediaImageVerificationPolicy 0x04
#define _PCD_SIZE_PcdRemovableMediaImageVerificationPolicy 4
#define _PCD_GET_MODE_SIZE_PcdRemovableMediaImageVerificationPolicy _PCD_SIZE_PcdRemovableMediaImageVerificationPolicy
#define _PCD_TOKEN_PcdFixedMediaImageVerificationPolicy  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFixedMediaImageVerificationPolicy;
#define _PCD_GET_MODE_32_PcdFixedMediaImageVerificationPolicy  _gPcd_FixedAtBuild_PcdFixedMediaImageVerificationPolicy
//#define _PCD_SET_MODE_32_PcdFixedMediaImageVerificationPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFixedMediaImageVerificationPolicy 0x04
#define _PCD_SIZE_PcdFixedMediaImageVerificationPolicy 4
#define _PCD_GET_MODE_SIZE_PcdFixedMediaImageVerificationPolicy _PCD_SIZE_PcdFixedMediaImageVerificationPolicy

EFI_STATUS
EFIAPI
DxeImageVerificationLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
