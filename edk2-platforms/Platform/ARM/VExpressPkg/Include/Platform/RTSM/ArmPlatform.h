/** @file
*  Header defining Versatile Express constants (Base addresses, sizes, flags)
*
*  Copyright (c) 2011 - 2021, Arm Limited. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

#ifndef __ARM_VEXPRESS_H__
#define __ARM_VEXPRESS_H__

#include <VExpressMotherBoard.h>

/***********************************************************************************
// Platform Memory Map
************************************************************************************/

// Can be NOR0, NOR1, DRAM
#define ARM_VE_REMAP_BASE                       0x00000000
#define ARM_VE_REMAP_SZ                         SIZE_64MB

// Motherboard Peripheral and On-chip peripheral
#define ARM_VE_BOARD_PERIPH_BASE                0x1C010000

// NOR Flash 1
// There is typo in the reference manual for the Base address of NOR Flash 1
#define ARM_VE_SMB_NOR0_BASE                    0x08000000
#define ARM_VE_SMB_NOR0_SZ                      SIZE_64MB
// NOR Flash 2
#define ARM_VE_SMB_NOR1_BASE                    0x0C000000
#define ARM_VE_SMB_NOR1_SZ                      SIZE_64MB
// SRAM
#define ARM_VE_SMB_SRAM_BASE                    0x2E000000
#define ARM_VE_SMB_SRAM_SZ                      SIZE_64KB
// USB, Ethernet, VRAM
#define ARM_VE_SMB_PERIPH_BASE                  0x18800000
#define ARM_VE_SMB_PERIPH_SZ                    (SIZE_64MB - SIZE_8MB)

#define PL111_CLCD_VRAM_MOTHERBOARD_BASE        0x18000000
#define PL111_CLCD_VRAM_MOTHERBOARD_SIZE        0x800000

// DRAM
#define ARM_VE_DRAM_BASE                        PcdGet64 (PcdSystemMemoryBase)
#define ARM_VE_DRAM_SZ                          PcdGet64 (PcdSystemMemorySize)

// This can be any value since we only support motherboard PL111
#define LCD_VRAM_CORE_TILE_BASE                 0x00000000

// On-chip peripherals (Snoop Control Unit etc...)
#define ARM_VE_ON_CHIP_PERIPH_BASE              0x2C000000
// Note: The TRM says not all the peripherals are implemented
#define ARM_VE_ON_CHIP_PERIPH_SZ                SIZE_256MB


// External AXI between daughterboards (Logic Tile)
#define ARM_VE_EXT_AXI_BASE                     0x2E010000 // Not modelled
#define ARM_VE_EXT_AXI_SZ                       0x20000000  /* 512 MB */

/***********************************************************************************
// Memory-mapped peripherals
************************************************************************************/

// SP810 Controller
#undef SP810_CTRL_BASE
#define SP810_CTRL_BASE                         0x1C020000

// PL111 Colour LCD Controller
#define PL111_CLCD_SITE                         ARM_VE_MOTHERBOARD_SITE
#define PL111_CLCD_MOTHERBOARD_VIDEO_MODE_OSC_ID  1
#define PL111_CLCD_CORE_TILE_VIDEO_MODE_OSC_ID  1

#define SBSA_WATCHDOG_BASE                      0x2a440000
#define SBSA_WATCHDOG_SIZE                      (2 * SIZE_64KB)

// SMMUv3 - FVP RevC
#define FVP_REVC_SMMUV3_BASE                    0x2B400000
#define FVP_REVC_SMMUV3_SIZE                    SIZE_1MB

#endif
