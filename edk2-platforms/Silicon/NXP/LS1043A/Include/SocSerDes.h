/** SocSerDes.h
  SoC Specific header file for SerDes

  Copyright 2017-2020 NXP

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef SOC_SERDES_H
#define SOC_SERDES_H

typedef enum {
  NONE = 0,
  PCIE1,
  PCIE2,
  PCIE3,
  SATA,
  SGMII_FM1_DTSEC1,
  SGMII_FM1_DTSEC2,
  SGMII_FM1_DTSEC5,
  SGMII_FM1_DTSEC6,
  SGMII_FM1_DTSEC9,
  SGMII_FM1_DTSEC10,
  QSGMII_FM1_A,
  XFI_FM1_MAC9,
  XFI_FM1_MAC10,
  SGMII_2500_FM1_DTSEC2,
  SGMII_2500_FM1_DTSEC5,
  SGMII_2500_FM1_DTSEC9,
  SGMII_2500_FM1_DTSEC10,
  SERDES_PROTOCOL_COUNT
} SERDES_PROTOCOL;
#endif
