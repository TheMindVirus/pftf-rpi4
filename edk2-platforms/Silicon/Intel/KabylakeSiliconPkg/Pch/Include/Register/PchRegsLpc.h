/** @file
  Register names for PCH LPC/eSPI device

  Conventions:

  - Prefixes:
    Definitions beginning with "R_" are registers
    Definitions beginning with "B_" are bits within registers
    Definitions beginning with "V_" are meaningful values within the bits
    Definitions beginning with "S_" are register sizes
    Definitions beginning with "N_" are the bit position
  - In general, PCH registers are denoted by "_PCH_" in register names
  - Registers / bits that are different between PCH generations are denoted by
    "_PCH_[generation_name]_" in register/bit names.
  - Registers / bits that are specific to PCH-H denoted by "_H_" in register/bit names.
    Registers / bits that are specific to PCH-LP denoted by "_LP_" in register/bit names.
    e.g., "_PCH_H_", "_PCH_LP_"
    Registers / bits names without _H_ or _LP_ apply for both H and LP.
  - Registers / bits that are different between SKUs are denoted by "_[SKU_name]"
    at the end of the register/bit names
  - Registers / bits of new devices introduced in a PCH generation will be just named
    as "_PCH_" without [generation_name] inserted.

Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef _PCH_REGS_LPC_H_
#define _PCH_REGS_LPC_H_

//
// PCI to LPC Bridge Registers (D31:F0)
//
#define PCI_DEVICE_NUMBER_PCH_LPC       31
#define PCI_FUNCTION_NUMBER_PCH_LPC     0

typedef enum {
  PchHB0         = 0x01,
  PchHC0,
  PchHD0,
  PchHD1,
  PchLpB0        = 0x23,
  PchLpB1,
  PchLpC0,
  PchLpC1,
  KblPchHA0      = 0x40,
  PchSteppingMax
} PCH_STEPPING;

#define SKL_PCH_H_MIN_SUPPORTED_STEPPING          PchHB0
#define KBL_PCH_H_MIN_SUPPORTED_STEPPING          KblPchHA0
#define PCH_LP_MIN_SUPPORTED_STEPPING             PchLpB0

#define V_PCH_LPC_VENDOR_ID                       V_PCH_INTEL_VENDOR_ID

//
//
// SKL PCH Server/WS LPC Device IDs
//
#define V_SKL_PCH_H_LPC_DEVICE_ID_SVR_0             0xA149          ///< Server SKU Intel C236 Chipset
#define V_SKL_PCH_H_LPC_DEVICE_ID_SVR_1             0xA14A          ///< Server SKU Intel C232 Chipset
#define V_SKL_PCH_H_LPC_DEVICE_ID_SVR_2             0xA150          ///< Server SKU Intel CM236 Chipset
#define V_SKL_PCH_H_LPC_DEVICE_ID_A14B              0xA14B          ///< Super SKU Unlocked

//
// SKL PCH-H Desktop LPC Device IDs
//
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_SUPER_SKU      0xA141          ///< PCH H Desktop Super SKU unlocked
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_0              0xA142          ///< PCH H Desktop Super SKU locked
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_1              0xA143          ///< PCH H Desktop H110
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_2              0xA144          ///< PCH H Desktop H170
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_3              0xA145          ///< PCH H Desktop Z170
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_4              0xA146          ///< PCH H Desktop Q170
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_5              0xA147          ///< PCH H Desktop Q150
#define V_SKL_PCH_H_LPC_DEVICE_ID_DT_6              0xA148          ///< PCH H Desktop B150
//
// SKL PCH-H Mobile LPC Device IDs
//
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_SUPER_SKU    0xA141          ///< PCH H Mobile Super SKU unlocked
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_0            0xA14D          ///< PCH H Mobile QM170
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_1            0xA14E          ///< PCH H Mobile HM170
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_3            0xA151          ///< PCH H Mobile QMS180 (SFF)
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_4            0xA152          ///< KBL PCH H Mobile HM175
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_5            0xA153          ///< KBL PCH H Mobile QM175
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_6            0xA154          ///< KBL PCH H Mobile CM238
#define V_SKL_PCH_H_LPC_DEVICE_ID_MB_8            0xA156          ///< KBL PCH H Mobile QMS185 (SFF)

//
// SKL PCH-LP LPC Device IDs
//
#define V_PCH_LP_LPC_DEVICE_ID_MB_SUPER_SKU       0x9D41          ///< PCH LP Mobile Super SKU unlocked
#define V_PCH_LP_LPC_DEVICE_ID_MB_0               0x9D42          ///< PCH LP Mobile Super SKU locked
#define V_PCH_LP_LPC_DEVICE_ID_MB_1               0x9D43          ///< PCH LP Mobile (U) Base SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_2               0x9D46          ///< PCH LP Mobile (Y) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_3               0x9D48          ///< PCH LP Mobile (U) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_SUPER_SKU_1     0x9D51          ///< KBL PCH LP Mobile Super SKU unlocked
#define V_PCH_LP_LPC_DEVICE_ID_MB_4               0x9D52          ///< KBL PCH LP Mobile Super SKU locked
#define V_PCH_LP_LPC_DEVICE_ID_MB_5               0x9D53          ///< KBL PCH LP Mobile (U) Base SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_6               0x9D56          ///< KBL PCH LP Mobile (Y) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_7               0x9D58          ///< KBL PCH LP Mobile (U) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_8               0x9D4B          ///< KBL PCH LP Mobile (Y) iHDCP 2.2 Premium
#define V_PCH_LP_LPC_DEVICE_ID_MB_9               0x9D4E          ///< KBL PCH LP Mobile (U) iHDCP 2.2 Premium
#define V_PCH_LP_LPC_DEVICE_ID_MB_10              0x9D50          ///< KBL PCH LP Mobile (U) iHDCP 2.2 Base



//
// KBL PCH Server/WS LPC Device IDs
//
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_ES_SUPER_SKU  0xA2D0        ///< ES Super SKU Unlocked. This is SKL-PCH-H in KBL-PCH-H package
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_SUPER_SKU     0xA2D1        ///< Super SKU Unlocked
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_0             0xA2D2        ///< Server SKU X290
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_1             0xA2D3        ///< Server SKU C6xx
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_2             0xA2CE        ///< Server SKU ES SuperSKU Server
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_3             0xA2CF        ///< Server SKU SuperSKU Server
#define V_KBL_PCH_H_LPC_DEVICE_ID_SVR_4             0xA2D4        ///< Server SKU C422B


//
// KBL PCH-H Desktop LPC Device IDs
//
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_ES_SUPER_SKU   0xA2C0        ///< PCH H Desktop ES Super SKU unlocked. This is SKL-PCH-H in KBL-PCH-H package
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_SUPER_SKU      0xA2C1        ///< PCH H Desktop Super SKU unlocked
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_H270           0xA2C4        ///< PCH H Desktop H270
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_Z270           0xA2C5        ///< PCH H Desktop Z270
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_Q270           0xA2C6        ///< PCH H Desktop Q270
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_Q250           0xA2C7        ///< PCH H Desktop Q250
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_B250           0xA2C8        ///< PCH H Desktop B250

#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_H215         0xA2C3          ///< PCH H Desktop H215
#define V_KBL_PCH_H_LPC_DEVICE_ID_DT_Z370         0xA2C9           ///< PCH H Desktop Z370

#define V_PCH_LPC_RID_0                           0x00
#define V_PCH_LPC_RID_1                           0x01
#define V_PCH_LPC_RID_9                           0x09
#define V_PCH_LPC_RID_10                          0x10
#define V_PCH_LPC_RID_11                          0x11
#define V_PCH_LPC_RID_20                          0x20
#define V_PCH_LPC_RID_21                          0x21
#define V_PCH_LPC_RID_30                          0x30
#define V_PCH_LPC_RID_31                          0x31
#define R_PCH_LPC_SERIRQ_CNT                      0x64
#define B_PCH_LPC_SERIRQ_CNT_SIRQEN               0x80
#define B_PCH_LPC_SERIRQ_CNT_SIRQMD               0x40
#define B_PCH_LPC_SERIRQ_CNT_SIRQSZ               0x3C
#define N_PCH_LPC_SERIRQ_CNT_SIRQSZ               2
#define B_PCH_LPC_SERIRQ_CNT_SFPW                 0x03
#define N_PCH_LPC_SERIRQ_CNT_SFPW                 0
#define V_PCH_LPC_SERIRQ_CNT_SFPW_4CLK            0x00
#define V_PCH_LPC_SERIRQ_CNT_SFPW_6CLK            0x01
#define V_PCH_LPC_SERIRQ_CNT_SFPW_8CLK            0x02
#define R_PCH_LPC_IOD                             0x80
#define B_PCH_LPC_IOD_FDD                         0x1000
#define N_PCH_LPC_IOD_FDD                         12
#define V_PCH_LPC_IOD_FDD_3F0                     0
#define V_PCH_LPC_IOD_FDD_370                     1
#define B_PCH_LPC_IOD_LPT                         0x0300
#define N_PCH_LPC_IOD_LPT                         8
#define V_PCH_LPC_IOD_LPT_378                     0
#define V_PCH_LPC_IOD_LPT_278                     1
#define V_PCH_LPC_IOD_LPT_3BC                     2
#define B_PCH_LPC_IOD_COMB                        0x0070
#define N_PCH_LPC_IOD_COMB                        4
#define V_PCH_LPC_IOD_COMB_3F8                    0
#define V_PCH_LPC_IOD_COMB_2F8                    1
#define V_PCH_LPC_IOD_COMB_220                    2
#define V_PCH_LPC_IOD_COMB_228                    3
#define V_PCH_LPC_IOD_COMB_238                    4
#define V_PCH_LPC_IOD_COMB_2E8                    5
#define V_PCH_LPC_IOD_COMB_338                    6
#define V_PCH_LPC_IOD_COMB_3E8                    7
#define B_PCH_LPC_IOD_COMA                        0x0007
#define N_PCH_LPC_IOD_COMA                        0
#define V_PCH_LPC_IOD_COMA_3F8                    0
#define V_PCH_LPC_IOD_COMA_2F8                    1
#define V_PCH_LPC_IOD_COMA_220                    2
#define V_PCH_LPC_IOD_COMA_228                    3
#define V_PCH_LPC_IOD_COMA_238                    4
#define V_PCH_LPC_IOD_COMA_2E8                    5
#define V_PCH_LPC_IOD_COMA_338                    6
#define V_PCH_LPC_IOD_COMA_3E8                    7
#define R_PCH_LPC_IOE                             0x82
#define B_PCH_LPC_IOE_ME2                         BIT13           ///< Microcontroller Enable #2, Enables decoding of I/O locations 4Eh and 4Fh to LPC
#define B_PCH_LPC_IOE_SE                          BIT12           ///< Super I/O Enable, Enables decoding of I/O locations 2Eh and 2Fh to LPC.
#define B_PCH_LPC_IOE_ME1                         BIT11           ///< Microcontroller Enable #1, Enables decoding of I/O locations 62h and 66h to LPC.
#define B_PCH_LPC_IOE_KE                          BIT10           ///< Keyboard Enable, Enables decoding of the keyboard I/O locations 60h and 64h to LPC.
#define B_PCH_LPC_IOE_HGE                         BIT9            ///< High Gameport Enable, Enables decoding of the I/O locations 208h to 20Fh to LPC.
#define B_PCH_LPC_IOE_LGE                         BIT8            ///< Low Gameport Enable, Enables decoding of the I/O locations 200h to 207h to LPC.
#define B_PCH_LPC_IOE_FDE                         BIT3            ///< Floppy Drive Enable, Enables decoding of the FDD range to LPC. Range is selected by LIOD.FDE
#define B_PCH_LPC_IOE_PPE                         BIT2            ///< Parallel Port Enable, Enables decoding of the LPT range to LPC. Range is selected by LIOD.LPT.
#define B_PCH_LPC_IOE_CBE                         BIT1            ///< Com Port B Enable, Enables decoding of the COMB range to LPC. Range is selected LIOD.CB.
#define B_PCH_LPC_IOE_CAE                         BIT0            ///< Com Port A Enable, Enables decoding of the COMA range to LPC. Range is selected LIOD.CA.
#define R_PCH_LPC_GEN1_DEC                        0x84
#define R_PCH_LPC_GEN2_DEC                        0x88
#define R_PCH_LPC_GEN3_DEC                        0x8C
#define R_PCH_LPC_GEN4_DEC                        0x90
#define B_PCH_LPC_GENX_DEC_IODRA                  0x00FC0000
#define B_PCH_LPC_GENX_DEC_IOBAR                  0x0000FFFC
#define B_PCH_LPC_GENX_DEC_EN                     0x00000001
#define R_PCH_LPC_ULKMC                           0x94
#define B_PCH_LPC_ULKMC_SMIBYENDPS                BIT15
#define B_PCH_LPC_ULKMC_TRAPBY64W                 BIT11
#define B_PCH_LPC_ULKMC_TRAPBY64R                 BIT10
#define B_PCH_LPC_ULKMC_TRAPBY60W                 BIT9
#define B_PCH_LPC_ULKMC_TRAPBY60R                 BIT8
#define B_PCH_LPC_ULKMC_SMIATENDPS                BIT7
#define B_PCH_LPC_ULKMC_PSTATE                    BIT6
#define B_PCH_LPC_ULKMC_A20PASSEN                 BIT5
#define B_PCH_LPC_ULKMC_USBSMIEN                  BIT4
#define B_PCH_LPC_ULKMC_64WEN                     BIT3
#define B_PCH_LPC_ULKMC_64REN                     BIT2
#define B_PCH_LPC_ULKMC_60WEN                     BIT1
#define B_PCH_LPC_ULKMC_60REN                     BIT0
#define R_PCH_LPC_LGMR                            0x98
#define B_PCH_LPC_LGMR_MA                         0xFFFF0000
#define B_PCH_LPC_LGMR_LMRD_EN                    BIT0

#define R_PCH_LPC_FWH_BIOS_SEL                    0xD0
#define B_PCH_LPC_FWH_BIOS_SEL_F8                 0xF0000000
#define B_PCH_LPC_FWH_BIOS_SEL_F0                 0x0F000000
#define B_PCH_LPC_FWH_BIOS_SEL_E8                 0x00F00000
#define B_PCH_LPC_FWH_BIOS_SEL_E0                 0x000F0000
#define B_PCH_LPC_FWH_BIOS_SEL_D8                 0x0000F000
#define B_PCH_LPC_FWH_BIOS_SEL_D0                 0x00000F00
#define B_PCH_LPC_FWH_BIOS_SEL_C8                 0x000000F0
#define B_PCH_LPC_FWH_BIOS_SEL_C0                 0x0000000F
#define R_PCH_LPC_FWH_BIOS_SEL2                   0xD4
#define B_PCH_LPC_FWH_BIOS_SEL2_70                0xF000
#define B_PCH_LPC_FWH_BIOS_SEL2_60                0x0F00
#define B_PCH_LPC_FWH_BIOS_SEL2_50                0x00F0
#define B_PCH_LPC_FWH_BIOS_SEL2_40                0x000F
#define R_PCH_LPC_BDE                             0xD8                          ///< BIOS decode enable
#define B_PCH_LPC_BDE_F8                          0x8000
#define B_PCH_LPC_BDE_F0                          0x4000
#define B_PCH_LPC_BDE_E8                          0x2000
#define B_PCH_LPC_BDE_E0                          0x1000
#define B_PCH_LPC_BDE_D8                          0x0800
#define B_PCH_LPC_BDE_D0                          0x0400
#define B_PCH_LPC_BDE_C8                          0x0200
#define B_PCH_LPC_BDE_C0                          0x0100
#define B_PCH_LPC_BDE_LEG_F                       0x0080
#define B_PCH_LPC_BDE_LEG_E                       0x0040
#define B_PCH_LPC_BDE_70                          0x0008
#define B_PCH_LPC_BDE_60                          0x0004
#define B_PCH_LPC_BDE_50                          0x0002
#define B_PCH_LPC_BDE_40                          0x0001
#define R_PCH_LPC_PCC                             0xE0
#define B_PCH_LPC_PCC_CLKRUN_EN                   0x0001
#define B_PCH_LPC_FVEC0_USB_PORT_CAP              0x00000C00
#define V_PCH_LPC_FVEC0_USB_14_PORT               0x00000000
#define V_PCH_LPC_FVEC0_USB_12_PORT               0x00000400
#define V_PCH_LPC_FVEC0_USB_10_PORT               0x00000800
#define B_PCH_LPC_FVEC0_SATA_RAID_CAP             0x00000080
#define B_PCH_LPC_FVEC0_SATA_PORT23_CAP           0x00000040
#define B_PCH_LPC_FVEC0_SATA_PORT1_6GB_CAP        0x00000008
#define B_PCH_LPC_FVEC0_SATA_PORT0_6GB_CAP        0x00000004
#define B_PCH_LPC_FVEC0_PCI_CAP                   0x00000002
#define R_PCH_LPC_FVEC1                           0x01
#define B_PCH_LPC_FVEC1_USB_R_CAP                 0x00400000
#define R_PCH_LPC_FVEC2                           0x02
#define V_PCH_LPC_FVEC2_PCIE_PORT78_CAP           0x00200000
#define V_PCH_LPC_FVEC2_PCH_IG_SUPPORT_CAP        0x00020000      ///< PCH Integrated Graphics Support Capability
#define R_PCH_LPC_FVEC3                           0x03
#define B_PCH_LPC_FVEC3_DCMI_CAP                  0x00002000      ///< Data Center Manageability Interface (DCMI) Capability
#define B_PCH_LPC_FVEC3_NM_CAP                    0x00001000      ///< Node Manager Capability

#define R_PCH_LPC_MDAP                            0xC0
#define B_PCH_LPC_MDAP_POLICY_EN                  BIT31
#define B_PCH_LPC_MDAP_PDMA_EN                    BIT30
#define B_PCH_LPC_MDAP_VALUE                      0x0001FFFF

//
// APM Registers
//
#define R_PCH_APM_CNT                             0xB2
#define R_PCH_APM_STS                             0xB3

#define R_PCH_LPC_BC                              0xDC            ///< Bios Control
#define S_PCH_LPC_BC                              1
#define B_PCH_LPC_BC_BILD                         BIT7            ///< BIOS Interface Lock-Down
#define B_PCH_LPC_BC_BBS                          BIT6            ///< Boot BIOS strap
#define N_PCH_LPC_BC_BBS                          6
#define V_PCH_LPC_BC_BBS_SPI                      0               ///< Boot BIOS strapped to SPI
#define V_PCH_LPC_BC_BBS_LPC                      1               ///< Boot BIOS strapped to LPC
#define B_PCH_LPC_BC_EISS                         BIT5            ///< Enable InSMM.STS
#define B_PCH_LPC_BC_TS                           BIT4            ///< Top Swap
#define B_PCH_LPC_BC_LE                           BIT1            ///< Lock Enable
#define N_PCH_LPC_BC_LE                           1
#define B_PCH_LPC_BC_WPD                          BIT0            ///< Write Protect Disable

#define R_PCH_ESPI_PCBC                           0xDC            ///< Peripheral Channel BIOS Control
#define S_PCH_ESPI_PCBC                           4               ///< Peripheral Channel BIOS Control register size
#define B_PCH_ESPI_PCBC_BWRE                      BIT11           ///< BIOS Write Report Enable
#define N_PCH_ESPI_PCBC_BWRE                      11              ///< BIOS Write Report Enable bit position
#define B_PCH_ESPI_PCBC_BWRS                      BIT10           ///< BIOS Write Report Status
#define N_PCH_ESPI_PCBC_BWRS                      10              ///< BIOS Write Report Status bit position
#define B_PCH_ESPI_PCBC_BWPDS                     BIT8            ///< BIOS Write Protect Disable Status
#define N_PCH_ESPI_PCBC_BWPDS                     8               ///< BIOS Write Protect Disable Status bit position
#define B_PCH_ESPI_PCBC_ESPI_EN                   BIT2            ///< eSPI Enable Pin Strap
#define B_PCH_ESPI_PCBC_LE                        BIT1            ///< Lock Enable
#define N_PCH_ESPI_PCBC_LE                        1

//
// eSPI slave registers
//
#define R_ESPI_SLAVE_CHA_0_CAP_AND_CONF           0x10            ///< Channel 0 Capabilities and Configurations
#define B_ESPI_SLAVE_CHA_0_CAP_AND_CONF_BME       BIT2            ///< Bus Master Enable

//
// Processor interface registers
//
#define R_PCH_NMI_SC                              0x61
#define B_PCH_NMI_SC_SERR_NMI_STS                 BIT7
#define B_PCH_NMI_SC_IOCHK_NMI_STS                BIT6
#define B_PCH_NMI_SC_TMR2_OUT_STS                 BIT5
#define B_PCH_NMI_SC_REF_TOGGLE                   BIT4
#define B_PCH_NMI_SC_IOCHK_NMI_EN                 BIT3
#define B_PCH_NMI_SC_PCI_SERR_EN                  BIT2
#define B_PCH_NMI_SC_SPKR_DAT_EN                  BIT1
#define B_PCH_NMI_SC_TIM_CNT2_EN                  BIT0
#define R_PCH_NMI_EN                              0x70
#define B_PCH_NMI_EN_NMI_EN                       BIT7

//
// Reset Generator I/O Port
//
#define R_PCH_RST_CNT                             0xCF9
#define B_PCH_RST_CNT_FULL_RST                    BIT3
#define B_PCH_RST_CNT_RST_CPU                     BIT2
#define B_PCH_RST_CNT_SYS_RST                     BIT1
#define V_PCH_RST_CNT_FULLRESET                   0x0E
#define V_PCH_RST_CNT_HARDRESET                   0x06
#define V_PCH_RST_CNT_SOFTRESET                   0x04
#define V_PCH_RST_CNT_HARDSTARTSTATE              0x02
#define V_PCH_RST_CNT_SOFTSTARTSTATE              0x00

//
// RTC register
//
#define R_PCH_RTC_INDEX                           0x70
#define R_PCH_RTC_TARGET                          0x71
#define R_PCH_RTC_EXT_INDEX                       0x72
#define R_PCH_RTC_EXT_TARGET                      0x73
#define R_PCH_RTC_INDEX_ALT                       0x74
#define R_PCH_RTC_TARGET_ALT                      0x75
#define R_PCH_RTC_EXT_INDEX_ALT                   0x76
#define R_PCH_RTC_EXT_TARGET_ALT                  0x77
#define R_PCH_RTC_REGA                            0x0A
#define B_PCH_RTC_REGA_UIP                        0x80
#define R_PCH_RTC_REGB                            0x0B
#define B_PCH_RTC_REGB_SET                        0x80
#define B_PCH_RTC_REGB_PIE                        0x40
#define B_PCH_RTC_REGB_AIE                        0x20
#define B_PCH_RTC_REGB_UIE                        0x10
#define B_PCH_RTC_REGB_DM                         0x04
#define B_PCH_RTC_REGB_HOURFORM                   0x02
#define R_PCH_RTC_REGC                            0x0C
#define R_PCH_RTC_REGD                            0x0D

//
// Private Configuration Register
// RTC PCRs (PID:RTC)
//
#define R_PCH_PCR_RTC_CONF                        0x3400               ///< RTC Configuration register
#define S_PCH_PCR_RTC_CONF                        4
#define B_PCH_PCR_RTC_CONF_UCMOS_LOCK             BIT4
#define B_PCH_PCR_RTC_CONF_LCMOS_LOCK             BIT3
#define B_PCH_PCR_RTC_CONF_RESERVED               BIT31
#define B_PCH_PCR_RTC_CONF_UCMOS_EN               BIT2                 ///< Upper CMOS bank enable
#define R_PCH_PCR_RTC_BUC                         0x3414               ///< Backed Up Control
#define B_PCH_PCR_RTC_BUC_TS                      BIT0                 ///< Top Swap
#define R_PCH_PCR_RTC_RTCDCG                      0x3418               ///< RTC Dynamic Clock Gating Control
#define R_PCH_PCR_RTC_RTCDCG_RTCPCICLKDCGEN       BIT1                 ///< ipciclk_clk (24 MHz) Dynamic Clock Gate Enable
#define R_PCH_PCR_RTC_RTCDCG_RTCROSIDEDCGEN       BIT0                 ///< rosc_side_clk (120 MHz) Dynamic Clock Gate Enable
#define R_PCH_PCR_RTC_3F00                        0x3F00
#define R_PCH_PCR_RTC_UIPSMI                      0x3F04               ///< RTC Update In Progress SMI Control

//
// LPC PCR Registers
//
#define R_PCH_PCR_LPC_HVMTCTL                     0x3410
#define R_PCH_PCR_LPC_GCFD                        0x3418
#define R_PCH_PCR_LPC_PRC                         0x341C
#define R_PCH_PCR_LPC_PCT                         0x3420
#define R_PCH_PCR_LPC_SCT                         0x3424
#define R_PCH_PCR_LPC_LPCCT                       0x3428
#define R_PCH_PCR_LPC_ULTOR                       0x3500

//
// eSPI PCR Registers
//
#define R_PCH_PCR_ESPI_SLV_CFG_REG_CTL            0x4000                  ///< Slave Configuration Register and Link Control
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRE       BIT31                   ///< Slave Configuration Register Access Enable
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRS       (BIT30 | BIT29 | BIT28) ///< Slave Configuration Register Access Status
#define N_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRS       28                      ///< Slave Configuration Register Access Status bit position
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SBLCL      BIT27                   ///< IOSF-SB eSPI Link Configuration Lock
#define V_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRS_NOERR 7                       ///< No errors (transaction completed successfully)
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SID        (BIT20 | BIT19)         ///< Slave ID
#define N_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SID        19                      ///< Slave ID bit position
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT       (BIT17 | BIT16)         ///< Slave Configuration Register Access Type
#define N_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT       16                      ///< Slave Configuration Register Access Type bit position
#define V_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT_RD    0                       ///< Slave Configuration register read from address SCRA[11:0]
#define V_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT_WR    1                       ///< Slave Configuration register write to address SCRA[11:0]
#define V_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT_STS   2                       ///< Slave Status register read
#define V_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRT_RS    3                       ///< In-Band reset
#define B_PCH_PCR_ESPI_SLV_CFG_REG_CTL_SCRA       0x00000FFF              ///< Slave Configuration Register Address
#define R_PCH_PCR_ESPI_SLV_CFG_REG_DATA           0x4004                  ///< Slave Configuration Register Data

#define R_PCH_PCR_ESPI_PCERR_SLV0                 0x4020          ///< Peripheral Channel Error for Slave 0
#define R_PCH_PCR_ESPI_PCERR_SLV1                 0x4024          ///< Peripheral Channel Error for Slave 1
#define R_PCH_PCR_ESPI_VWERR_SLV0                 0x4030          ///< Virtual Wire Channel Error for Slave 0
#define R_PCH_PCR_ESPI_VWERR_SLV1                 0x4034          ///< Virtual Wire Channel Error for Slave 1
#define R_PCH_PCR_ESPI_FCERR_SLV0                 0x4040          ///< Flash Access Channel Error for Slave 0
#define B_PCH_PCR_ESPI_XERR_XNFEE                 (BIT14 | BIT13) ///< Non-Fatal Error Reporting Enable bits
#define N_PCH_PCR_ESPI_XERR_XNFEE                 13              ///< Non-Fatal Error Reporting Enable bit position
#define V_PCH_PCR_ESPI_XERR_XNFEE_SMI             3               ///< Enable Non-Fatal Error Reporting as SMI
#define B_PCH_PCR_ESPI_XERR_XNFES                 BIT12           ///< Fatal Error Status
#define B_PCH_PCR_ESPI_XERR_XFEE                  (BIT6 | BIT5)   ///< Fatal Error Reporting Enable bits
#define N_PCH_PCR_ESPI_XERR_XFEE                  5               ///< Fatal Error Reporting Enable bit position
#define V_PCH_PCR_ESPI_XERR_XFEE_SMI              3               ///< Enable Fatal Error Reporting as SMI
#define B_PCH_PCR_ESPI_XERR_XFES                  BIT4            ///< Fatal Error Status
#define B_PCH_PCR_ESPI_PCERR_SLV0_PCURD           BIT24           ///< Peripheral Channel Unsupported Request Detected
#define R_PCH_PCR_ESPI_LNKERR_SLV0                0x4050          ///< Link Error for Slave 0
#define S_PCH_PCR_ESPI_LNKERR_SLV0                4               ///< Link Error for Slave 0 register size
#define B_PCH_PCR_ESPI_LNKERR_SLV0_SLCRR          BIT31           ///< eSPI Link and Slave Channel Recovery Required
#define B_PCH_PCR_ESPI_LNKERR_SLV0_LFET1E         (BIT22 | BIT21) ///< Fatal Error Type 1 Reporting Enable
#define N_PCH_PCR_ESPI_LNKERR_SLV0_LFET1E         21              ///< Fatal Error Type 1 Reporting Enable bit position
#define V_PCH_PCR_ESPI_LNKERR_SLV0_LFET1E_SMI     3               ///< Enable Fatal Error Type 1 Reporting as SMI
#define B_PCH_PCR_ESPI_LNKERR_SLV0_LFET1S         BIT20           ///< Link Fatal Error Type 1 Status
#define R_PCH_PCR_ESPI_CFG_VAL                    0xC00C          ///< ESPI Enabled Strap
#define B_PCH_PCR_ESPI_ENABLE_STRAP               BIT0            ///< ESPI Enabled Strap bit position



//
//  LPC Device ID macros
//
//
// Device IDs that are SKL PCH-H Desktop specific
//
#define IS_SKL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    (  \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_0) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_1) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_2) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_3) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_4) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_5) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_6) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_DT_SUPER_SKU) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_ES_SUPER_SKU /* SKL-PCH-H in KBL-PCH-H package */) \
    )

//
// Device IDs that are KBL PCH-H Desktop specific
//
#define IS_KBL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    (  \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_H215)  || \
    (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_Z370)  || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_SUPER_SKU) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_H270) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_Z270) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_Q270) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_Q250) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_DT_B250) \
    )

//
// Device IDs that are PCH-H Desktop specific
//
#define IS_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    (  \
      IS_SKL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) || \
      IS_KBL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    )

#define IS_PCH_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    ( \
      IS_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    )

//
// Device IDs that are PCH-H Mobile specific
//

#define IS_PCH_H_LPC_DEVICE_ID_MOBILE(DeviceId) \
    ( \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_0) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_1) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_3) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_4) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_5) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_6) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_SUPER_SKU) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_MB_8) \
    )

//
// Device IDs that are PCH-LP Mobile specific
//
#define IS_PCH_LP_LPC_DEVICE_ID_MOBILE(DeviceId) \
    ( \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_SUPER_SKU) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_0) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_1) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_2) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_3) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_SUPER_SKU_1) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_4) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_5) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_6) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_7) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_8) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_9) || \
      (DeviceId == V_PCH_LP_LPC_DEVICE_ID_MB_10) \
    )

#define IS_PCH_LPC_DEVICE_ID_MOBILE(DeviceId) \
    ( \
      IS_PCH_H_LPC_DEVICE_ID_MOBILE(DeviceId) || \
      IS_PCH_LP_LPC_DEVICE_ID_MOBILE(DeviceId) \
    )

//
// Device IDS that are SKL PCH Server\Workstation specific
//
#define IS_SKL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    ( \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_ES_SUPER_SKU) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_SVR_0) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_SVR_1) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_SVR_2) || \
      (DeviceId == V_SKL_PCH_H_LPC_DEVICE_ID_A14B) \
    )

//
// Device IDS that are KBL PCH Server\Workstation specific
//
#define IS_KBL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    ( \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_SUPER_SKU) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_0) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_1) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_2) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_3) || \
      (DeviceId == V_KBL_PCH_H_LPC_DEVICE_ID_SVR_4) \
    )


#define IS_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    ( \
      IS_KBL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) || \
      IS_SKL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    )

#define IS_PCH_LPC_DEVICE_ID_SERVER(DeviceId) \
    ( \
      IS_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    )

#define IS_PCH_H_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) || \
      IS_PCH_H_LPC_DEVICE_ID_MOBILE(DeviceId) || \
      IS_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    )

#define IS_SKL_PCH_H_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_SKL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) || \
      IS_PCH_H_LPC_DEVICE_ID_MOBILE(DeviceId) || \
      IS_SKL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    )

#define IS_KBL_PCH_H_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_KBL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) || \
      IS_KBL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) \
    )

#define IS_PCH_LP_LPC_DEVICE_ID(DeviceId) \
    ( \
     IS_PCH_LP_LPC_DEVICE_ID_MOBILE(DeviceId) \
    )

#define IS_PCH_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_PCH_H_LPC_DEVICE_ID(DeviceId) || \
      IS_PCH_LP_LPC_DEVICE_ID(DeviceId) \
    )

#define IS_SKL_PCH_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_SKL_PCH_H_LPC_DEVICE_ID_DESKTOP(DeviceId) || \
      IS_PCH_LPC_DEVICE_ID_MOBILE(DeviceId) || \
      IS_SKL_PCH_H_LPC_DEVICE_ID_SERVER(DeviceId) \
    )

#define IS_KBL_PCH_LPC_DEVICE_ID(DeviceId) \
    ( \
      IS_KBL_PCH_H_LPC_DEVICE_ID(DeviceId) \
    )
#endif
