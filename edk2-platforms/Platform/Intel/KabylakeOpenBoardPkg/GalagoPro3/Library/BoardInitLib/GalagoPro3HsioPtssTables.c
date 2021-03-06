/** @file
    GalagoPro3 HSIO PTSS H File

Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef GalagoPro3_HSIO_PTSS_H_
#define GalagoPro3_HSIO_PTSS_H_

#include <PchHsioPtssTables.h>

#ifndef HSIO_PTSS_TABLE_SIZE
#define HSIO_PTSS_TABLE_SIZE(A) A##_Size = sizeof (A) / sizeof (HSIO_PTSS_TABLES)
#endif

//BoardId GalagoPro3
HSIO_PTSS_TABLES PchLpHsioPtss_Cx_GalagoPro3[] = {
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoM2},
  {{11, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoM2},
  {{11, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{4, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{4, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x04000000, (UINT32) ~0x3F000000}, PchSataTopoDirectConnect},
  {{10, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoM2},
  {{10, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{5, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{5, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{6, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{6, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{15, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{15, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{7, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{7, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoM2},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopox1},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00322900, (UINT32) ~0x3F3F00}, PchSataTopoM2},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00382C00, (UINT32) ~0x3F3F00}, PchSataTopoDirectConnect},
  {{15, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoM2},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopox1},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown}
};

UINT16 PchLpHsioPtss_Cx_GALAGO_PRO_3_Size = sizeof(PchLpHsioPtss_Cx_GalagoPro3) / sizeof(HSIO_PTSS_TABLES);

HSIO_PTSS_TABLES PchLpHsioPtss_Bx_GalagoPro3[] = {
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchPcieTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{4, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{4, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x04000000, (UINT32) ~0x3F000000}, PchSataTopoDirectConnect},
  {{10, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{5, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{5, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{6, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{6, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{15, V_PCH_PCR_FIA_LANE_OWN_SATA, 0x150, 0x03000000, (UINT32) ~0x3F000000}, PchSataTopoUnknown},
  {{15, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{7, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopox4},
  {{7, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopox1},
  {{8, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{11, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00322900, (UINT32) ~0x3F3F00}, PchPcieTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{10, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00382C00, (UINT32) ~0x3F3F00}, PchSataTopoDirectConnect},
  {{15, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00060000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopox1},
  {{9, V_PCH_PCR_FIA_LANE_OWN_PCIEDMI, 0x164, 0x00080000, (UINT32) ~0x1F0000}, PchPcieTopoUnknown},
  {{12, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{13, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
  {{14, V_PCH_PCR_FIA_LANE_OWN_SATA, 0xa0, 0x00000000, (UINT32) ~0x3F3F00}, PchSataTopoUnknown},
};

UINT16 PchLpHsioPtss_Bx_GALAGO_PRO_3_Size = sizeof(PchLpHsioPtss_Bx_GalagoPro3) / sizeof(HSIO_PTSS_TABLES);

#endif // GalagoPro3_HSIO_PTSS_H_
