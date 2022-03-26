/** @file

  Copyright (c) 2020 - 2021, Ampere Computing LLC. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Uefi.h>

#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/MmCommunicationLib.h>

#include "NVParamLibCommon.h"

/**
  Provides an interface to access the NVParam services via MM interface.

  @param[in]  Request             Pointer to the request buffer
  @param[in]  RequestDataSize     Size of the request buffer.
  @param[out] Response            Pointer to the response buffer
  @param[in]  ResponseDataSize    Size of the response buffer.

  @retval EFI_SUCCESS             Operation succeeded.
  @retval EFI_INVALID_PARAMETER   An invalid data parameter or an invalid
                                  combination of data parameters.
  @retval Others                  An error has occurred.
**/
EFI_STATUS
NVParamMmCommunicate (
  IN  VOID   *Request,
  IN  UINT32 RequestDataSize,
  OUT VOID   *Response,
  IN  UINT32 ResponseDataSize
  )
{
  EFI_MM_COMMUNICATE_REQUEST CommBuffer;
  EFI_STATUS                 Status;

  if (Request == NULL || RequestDataSize == 0
      || RequestDataSize > EFI_MM_MAX_PAYLOAD_SIZE
      || (ResponseDataSize == 0 && Response == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  CopyGuid (&CommBuffer.HeaderGuid, &gNVParamMmGuid);
  CommBuffer.MessageLength = RequestDataSize;
  CopyMem (CommBuffer.Data, Request, RequestDataSize);

  Status = MmCommunicationCommunicate (
             &CommBuffer,
             NULL
             );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  if (ResponseDataSize > 0) {
    CopyMem (Response, CommBuffer.Data, ResponseDataSize);
  }

  return EFI_SUCCESS;
}
