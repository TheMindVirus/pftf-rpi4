/** @file

  @copyright
  Copyright 2015 Intel Corporation. <BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

Method (_ADR, 0) {
  If (LNotEqual(RPA5,0)) {
    Return (RPA5)
  } Else {
    Return (0x001C0004)
  }
}
