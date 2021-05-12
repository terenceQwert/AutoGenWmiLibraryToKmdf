/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_MofHeaderGenerator,
    0x52900a1b,0xd2bd,0x420f,0x82,0x24,0xf0,0x6a,0xe2,0xca,0x2e,0x0d);
// {52900a1b-d2bd-420f-8224-f06ae2ca2e0d}



