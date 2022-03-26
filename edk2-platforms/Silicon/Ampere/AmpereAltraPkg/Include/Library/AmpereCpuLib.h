/** @file

  Copyright (c) 2020 - 2021, Ampere Computing LLC. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef AMPERE_CPU_LIB_H_
#define AMPERE_CPU_LIB_H_

#define SUBNUMA_MODE_MONOLITHIC        0
#define SUBNUMA_MODE_HEMISPHERE        1
#define SUBNUMA_MODE_QUADRANT          2

#define MONOLITIC_NUM_OF_REGION        1
#define HEMISPHERE_NUM_OF_REGION       2
#define QUADRANT_NUM_OF_REGION         4
#define SUBNUMA_CPM_REGION_SIZE        4
#define NUM_OF_CPM_PER_MESH_ROW        8

#define CPM_PER_ROW_OFFSET(CpmId)      ((CpmId) % NUM_OF_CPM_PER_MESH_ROW)
#define CPM_ROW_NUMBER(CpmId)          ((CpmId) / NUM_OF_CPM_PER_MESH_ROW)

#define SOCKET_ID(CpuId)               ((CpuId) / (PLATFORM_CPU_MAX_CPM * PLATFORM_CPU_NUM_CORES_PER_CPM))
#define CLUSTER_ID(CpuId)              (((CpuId) / PLATFORM_CPU_NUM_CORES_PER_CPM) % PLATFORM_CPU_MAX_CPM)


/**
  Get current CPU frequency.

  @param    Socket    Socket index.
  @return   UINTN     Current CPU frequency.

**/
UINTN
EFIAPI
CpuGetCurrentFreq (
  UINT8 Socket
  );

/**
  Get maximum CPU frequency.

  @param    Socket    Socket index.
  @return   UINTN     Maximum CPU frequency.

**/
UINTN
EFIAPI
CpuGetMaxFreq (
  UINT8 Socket
  );

/**
  Get CPU voltage.

  @param    Socket    Socket index.
  @return   UINT8     CPU voltage.

**/
UINT8
EFIAPI
CpuGetVoltage (
  UINT8 Socket
  );

/**
  Get the SubNUMA mode.

  @return   UINT8      The SubNUMA mode.

**/
UINT8
EFIAPI
CpuGetSubNumaMode (
  VOID
  );

/**
  Get the number of SubNUMA region.

  @return   UINT8      The number of SubNUMA region.

**/
UINT8
EFIAPI
CpuGetNumberOfSubNumaRegion (
  VOID
  );

/**
  Get the SubNUMA node of a CPM.

  @param    SocketId    Socket index.
  @param    Cpm         CPM index.
  @return   UINT8       The SubNUMA node of a CPM.

**/
UINT8
EFIAPI
CpuGetSubNumNode (
  UINT8  Socket,
  UINT16 Cpm
  );

/**
  Get the number of supported socket.

  @return   UINT8      Number of supported socket.

**/
UINT8
EFIAPI
GetNumberOfSupportedSockets (
  VOID
  );

/**
  Get the number of active socket.

  @return   UINT8      Number of active socket.

**/
UINT8
EFIAPI
GetNumberOfActiveSockets (
  VOID
  );

/**
  Get the number of active CPM per socket.

  @param    SocketId    Socket index.
  @return   UINT16      Number of CPM.

**/
UINT16
EFIAPI
GetNumberOfActiveCPMsPerSocket (
  UINT8 SocketId
  );

/**
  Get the number of configured CPM per socket.

  @param    SocketId    Socket index.
  @return   UINT16      Number of configured CPM.

**/
UINT16
EFIAPI
GetNumberOfConfiguredCPMs (
  UINT8 SocketId
  );

/**
  Set the number of configured CPM per socket.

  @param    SocketId        Socket index.
  @param    NumberOfCPMs    Number of CPM to be configured.
  @return   EFI_SUCCESS     Operation succeeded.
  @return   Others          An error has occurred.

**/
EFI_STATUS
EFIAPI
SetNumberOfConfiguredCPMs (
  UINT8  SocketId,
  UINT16 NumberOfCPMs
  );

/**
  Get the maximum number of core per socket. This number
  should be the same for all sockets.

  @return   UINT16      Maximum number of core.

**/
UINT16
EFIAPI
GetMaximumNumberOfCores (
  VOID
  );

/**
  Get the maximum number of CPM per socket. This number
  should be the same for all sockets.

  @return   UINT32      Maximum number of CPM.

**/
UINT16
EFIAPI
GetMaximumNumberOfCPMs (
  VOID
  );

/**
  Get the number of active cores of a sockets.

  @return   UINT16      Number of active core.

**/
UINT16
EFIAPI
GetNumberOfActiveCoresPerSocket (
  UINT8 SocketId
  );

/**
  Get the number of active cores of all socket.

  @return   UINT16      Number of active core.

**/
UINT16
EFIAPI
GetNumberOfActiveCores (
  VOID
  );

/**
  Check if the logical CPU is enabled or not.

  @param    CpuId       The logical Cpu ID. Started from 0.
  @return   BOOLEAN     TRUE if the Cpu enabled
                        FALSE if the Cpu disabled.

**/
BOOLEAN
EFIAPI
IsCpuEnabled (
  UINT16 CpuId
  );


/**
  Check if the slave socket is present

  @return   BOOLEAN     TRUE if the Slave Cpu is present
                        FALSE if the Slave Cpu is not present

**/
BOOLEAN
EFIAPI
IsSlaveSocketAvailable (
  VOID
  );

/**
  Check if the slave socket is active

  @return   BOOLEAN     TRUE if the Slave CPU Socket is active.
                        FALSE if the Slave CPU Socket is not active.

**/
BOOLEAN
EFIAPI
IsSlaveSocketActive (
  VOID
  );

/**
  Check if the CPU product ID is Ac01
  @return   BOOLEAN     TRUE if the Product ID is Ac01
                        FALSE otherwise.

**/
BOOLEAN
EFIAPI
IsAc01Processor (
  VOID
  );

#endif /* AMPERE_CPU_LIB_H_ */
