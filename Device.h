/*++

Module Name:

    device.h

Abstract:

    This file contains the device definitions.

Environment:

    Kernel-mode Driver Framework

--*/

#include "public.h"

EXTERN_C_START

//
// The device context performs the same job as
// a WDM device extension in the driver frameworks
//
typedef struct _DEVICE_CONTEXT
{
    ULONG PrivateDeviceData;  // just a placeholder

} DEVICE_CONTEXT, *PDEVICE_CONTEXT;

typedef struct _THIS_DEVICE_INFORMATION
{
  // Current state of the tail light.
  BOOLEAN TailLit;
  ULONG PrivateDataPackage;
#define TailList_Size sizeof(BOOLEAN)
#define TailList_ID 1
} THIS_DEVICE_INFORMATION, *PTHIS_DEVICE_INFORMATION;

//
// This macro will generate an inline function called DeviceGetContext
// which will be used to get a pointer to the device context memory
// in a type safe manner.
//
WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(DEVICE_CONTEXT, DeviceGetContext)

//WDF_DECLARE_CONTEXT_TYPE(DEVICE_CONTEXT)

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(THIS_DEVICE_INFORMATION, InstanceGetInfo)



//
// Function to initialize the device and its callbacks
//
NTSTATUS
MofHeaderGeneratorCreateDevice(
    _Inout_ PWDFDEVICE_INIT DeviceInit
    );

EXTERN_C_END
