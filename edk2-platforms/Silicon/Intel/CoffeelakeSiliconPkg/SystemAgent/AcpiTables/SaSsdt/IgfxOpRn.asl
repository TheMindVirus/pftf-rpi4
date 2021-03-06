/** @file
  IGD OpRegion/Software SCI Reference Code.
  This file contains the interrupt handler code for the Integrated
  Graphics Device (IGD) OpRegion/Software SCI mechanism.
  It defines OperationRegions to cover the IGD PCI configuration space
  as described in the IGD OpRegion specification.

  Copyright (c) 2019 Intel Corporation. All rights reserved. <BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

//  Define an OperationRegion to cover the GMCH PCI configuration space as
//  described in the IGD OpRegion specificiation.
//
Scope(\_SB.PCI0)
{
  OperationRegion(MCHP, PCI_Config, 0x40, 0xC0)
  Field(MCHP, AnyAcc, NoLock, Preserve)
  {
    Offset(0x14),
    AUDE, 8,

    Offset(0x60), // Top of Memory register
    TASM, 10,     // Total system memory (64MB gran)
        , 6,
  }
}

//
//  Define an OperationRegion to cover the IGD PCI configuration space as
//  described in the IGD OpRegion specificiation.
//
OperationRegion(IGDP, PCI_Config, 0x40, 0xC0)
Field(IGDP, AnyAcc, NoLock, Preserve)
{
  Offset(0x10), // Mirror of gfx control reg
      , 1,
  GIVD, 1,      // IGD VGA disable bit
      , 2,
  GUMA, 3,      // Stolen memory size
      , 9,
  Offset(0x14),
      , 4,
  GMFN, 1,      // Gfx function 1 enable
      , 27,
  Offset(0xA4),
  ASLE, 8,      // Reg 0xE4, ASLE interrupt register
      , 24,     // Only use first byte of ASLE reg
  Offset(0xA8), // Reg 0xE8, SWSCI control register
  GSSE, 1,      // Graphics SCI event (1=event pending)
  GSSB, 14,     // Graphics SCI scratchpad bits
  GSES, 1,      // Graphics event select (1=SCI)
  Offset(0xB0), // Gfx Clk Frequency and Gating Control
      , 12,
  CDVL, 1,      // Core display clock value
      , 3,      // Graphics Core Display Clock Select
  Offset(0xB5),
  LBPC, 8,      // Legacy brightness control
  Offset(0xBC),
  ASLS, 32,     // Reg 0xFC, Address of the IGD OpRegion
}

//
//  Define an OperationRegion to cover the IGD OpRegion layout.
//
OperationRegion(IGDM, SystemMemory, ASLB, 0x2000)
Field(IGDM, AnyAcc, NoLock, Preserve)
{
  //
  // OpRegion Header
  //
  SIGN, 128,     // Signature-"IntelGraphicsMem"
  SIZE, 32,      // OpRegion Size
  OVER, 32,      // OpRegion Version
  SVER, 256,     // System BIOS Version
  VVER, 128,     // VBIOS Version
  GVER, 128,     // Driver version
  MBOX, 32,      // Mailboxes supported
  DMOD, 32,      // Driver Model
  PCON, 32,      // Platform Configuration
  DVER, 64,      // GOP Version
  //
  // OpRegion Mailbox 1 (Public ACPI Methods)
  // Note: Mailbox 1 is normally reserved for desktop platforms.
  //
  Offset(0x100),
  DRDY, 32,      // Driver readiness (ACPI notification)
  CSTS, 32,      // Notification status
  CEVT, 32,      // Current event
  Offset(0x120),
  DIDL, 32,      // Supported display device ID list
  DDL2, 32,      // Allows for 8 devices
  DDL3, 32,
  DDL4, 32,
  DDL5, 32,
  DDL6, 32,
  DDL7, 32,
  DDL8, 32,
  CPDL, 32,      // Currently present display list
  CPL2, 32,      // Allows for 8 devices
  CPL3, 32,
  CPL4, 32,
  CPL5, 32,
  CPL6, 32,
  CPL7, 32,
  CPL8, 32,
  CADL, 32,      // Currently active display list
  CAL2, 32,      // Allows for 8 devices
  CAL3, 32,
  CAL4, 32,
  CAL5, 32,
  CAL6, 32,
  CAL7, 32,
  CAL8, 32,
  NADL, 32,      // Next active display list
  NDL2, 32,      // Allows for 8 devices
  NDL3, 32,
  NDL4, 32,
  NDL5, 32,
  NDL6, 32,
  NDL7, 32,
  NDL8, 32,
  ASLP, 32,      // ASL sleep timeout
  TIDX, 32,      // Toggle table index
  CHPD, 32,      // Current hot plug enable indicator
  CLID, 32,      // Current lid state indicator
  CDCK, 32,      // Current docking state indicator
  SXSW, 32,      // Display switch notify on resume
  EVTS, 32,      // Events supported by ASL (diag only)
  CNOT, 32,      // Current OS notifications (diag only)
  NRDY, 32,
  //
  //Extended DIDL list
  //
  DDL9, 32,
  DD10, 32,
  DD11, 32,
  DD12, 32,
  DD13, 32,
  DD14, 32,
  DD15, 32,
  //
  //Extended Currently attached Display Device List  CPD2
  //
  CPL9, 32,
  CP10, 32,
  CP11, 32,
  CP12, 32,
  CP13, 32,
  CP14, 32,
  CP15, 32,
  //
  // OpRegion Mailbox 2 (Software SCI Interface)
  //
  Offset(0x200), // SCIC
  SCIE, 1,       // SCI entry bit (1=call unserviced)
  GEFC, 4,       // Entry function code
  GXFC, 3,       // Exit result
  GESF, 8,       // Entry/exit sub-function/parameter
      , 16,      // SCIC[31:16] reserved
  Offset(0x204), // PARM
  PARM, 32,      // PARM register (extra parameters)
  DSLP,  32,     // Driver sleep time out
  //
  // OpRegion Mailbox 3 (BIOS to Driver Notification)
  // Note: Mailbox 3 is normally reserved for desktop platforms.
  //
  Offset(0x300),
  ARDY, 32,      // Driver readiness (power conservation)
  ASLC, 32,      // ASLE interrupt command/status
  TCHE, 32,      // Technology enabled indicator
  ALSI, 32,      // Current ALS illuminance reading
  BCLP, 32,      // Backlight brightness
  PFIT, 32,      // Panel fitting state or request
  CBLV, 32,      // Current brightness level
  BCLM, 320,     // Backlight brightness level duty cycle mapping table
  CPFM, 32,      // Current panel fitting mode
  EPFM, 32,      // Enabled panel fitting modes
  PLUT, 592,     // Optional. 74-byte Panel LUT Table
  PFMB, 32,      // Optional. PWM Frequency and Minimum Brightness
  CCDV, 32,      // Optional. Gamma, Brightness, Contrast values.
  PCFT, 32,      // Optional. Power Conservation Features
  SROT, 32,      // Supported rotation angle.
  IUER, 32,      // Optional. Intel Ultrabook Event Register.
  FDSS, 64,      // Optional. FFS Display Physical address
  FDSP, 32,      // Optional. FFS Display Size
  STAT, 32,      // State Indicator
  //
  // OpRegion Mailbox 4 (VBT)
  //
  Offset(0x400),
  RVBT, 0xC000,  // 6K bytes maximum VBT image
  //
  // OpRegion Mailbox 5 (BIOS to Driver Notification Extension)
  //
  Offset(0x1C00),
  PHED, 32,      // Panel Header
  BDDC, 2048,    // Panel EDID (Max 256 bytes)

}

//
// Convert boot display type into a port mask.
//
Name (DBTB, Package()
{
  0x0000,        // Automatic
  0x0007,        // Port-0 : Integrated CRT
  0x0038,        // Port-1 : DVO-A, or Integrated LVDS
  0x01C0,        // Port-2 : SDVO-B, or SDVO-B/C
  0x0E00,        // Port-3 : SDVO-C
  0x003F,        // [CRT + DVO-A / Integrated LVDS]
  0x01C7,        // [CRT + SDVO-B] or [CRT + SDVO-B/C]
  0x0E07,        // [CRT + SDVO-C]
  0x01F8,        // [DVO-A / Integrated LVDS + SDVO-B]
  0x0E38,        // [DVO-A / Integrated LVDS + SDVO-C]
  0x0FC0,        // [SDVO-B + SDVO-C]
  0x0000,        // Reserved
  0x0000,        // Reserved
  0x0000,        // Reserved
  0x0000,        // Reserved
  0x0000,        // Reserved
  0x7000,        // Port-4: Integrated TV
  0x7007,        // [Integrated TV + CRT]
  0x7038,        // [Integrated TV + LVDS]
  0x71C0,        // [Integrated TV + DVOB]
  0x7E00         // [Integrated TV + DVOC]
})

//
// Core display clock value table.
//
Name (CDCT, Package()
{
  Package() {228, 320},
  Package() {222, 333},
  Package() {222, 333},
  Package() {  0,   0},
  Package() {222, 333},
})

//
// Defined exit result values:
//
Name (SUCC, 1)   // Exit result: Success
Name (NVLD, 2)   // Exit result: Invalid parameter
Name (CRIT, 4)   // Exit result: Critical failure
Name (NCRT, 6)   // Exit result: Non-critical failure

/************************************************************************;
;*
;* Name: GSCI
;*
;* Description: Handles an SCI generated by the graphics driver.  The
;*              PARM and SCIC input fields are parsed to determine the
;*              functionality requested by the driver.  GBDA or SBCB
;*              is called based on the input data in SCIC.
;*
;* Usage:       The method must be called in response to a GPE 06 event
;*              which will be generated by the graphics driver.
;*              Ex: Method(\_GPE._L06) {Return(\_SB.PCI0.GFX0.GSCI())}
;*
;* Input:       PARM and SCIC are indirect inputs
;*
;* Output:      PARM and SIC are indirect outputs
;*
;* References:  GBDA (Get BIOS Data method), SBCB (System BIOS Callback
;*              method)
;*
;************************************************************************/

Method (GSCI, 0, Serialized)
{
  Include("IgfxOpGbda.asl")  // "Get BIOS Data" Functions
  Include("IgfxOpSbcb.asl")  // "System BIOS CallBacks"

  If (LEqual(GEFC, 4))
  {
    Store(GBDA(), GXFC)    // Process Get BIOS Data functions
  }

  If (LEqual(GEFC, 6))
  {
    Store(SBCB(), GXFC)    // Process BIOS Callback functions
  }

  Store(0, GEFC)           // Wipe out the entry function code
  Store(1, CPSC)           // Clear CPUSCI_STS to clear the PCH TCO SCI status
  Store(0, GSSE)           // Clear the SCI generation bit in PCI space.
  Store(0, SCIE)           // Clr SCI serviced bit to signal completion

  Return(Zero)
}

Include("IgfxCommon.asl")    // IGD SCI mobile features
