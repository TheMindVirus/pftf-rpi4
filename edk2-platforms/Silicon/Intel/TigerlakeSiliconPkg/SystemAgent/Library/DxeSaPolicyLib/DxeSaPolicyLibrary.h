/** @file
  Header file for the DxeSaPolicy library.

  Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/
#ifndef _DXE_SA_POLICY_LIBRARY_H_
#define _DXE_SA_POLICY_LIBRARY_H_

#include <Uefi.h>
#include <Library/DebugLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/ConfigBlockLib.h>
#include <CpuPcieConfig.h>
#include <Protocol/SaPolicy.h>

#define WORD_FIELD_VALID_BIT  BIT15
#define MAX_PCIE_ASPM_OVERRIDE  500
#define MAX_PCIE_LTR_OVERRIDE   500
///
/// DIMM SMBus addresses
///
#define DIMM_SMB_SPD_P0C0D0 0xA0
#define DIMM_SMB_SPD_P0C0D1 0xA2
#define DIMM_SMB_SPD_P0C1D0 0xA4
#define DIMM_SMB_SPD_P0C1D1 0xA6
#define DIMM_SMB_SPD_P0C0D2 0xA8
#define DIMM_SMB_SPD_P0C1D2 0xAA

#endif // _DXE_SA_POLICY_LIBRARY_H_
