/** @file

  @copyright
  Copyright 2015 Intel Corporation. <BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

Method (_ADR, 0) {
  If (LNotEqual(RPAA,0)) {
    Return (RPAA)
  } Else {
    Return (0x001D0001)
  }
}
