#ifndef _wmi42_h_
#define _wmi42_h_

// Wmi42 - Wmi42
// Wmi42 Sample Schema
#define Wmi42Guid \
    { 0xa0f95fd4,0xa587,0x11d2, { 0xbb,0x3a,0x00,0xc0,0x4f,0xa3,0x30,0xa6 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(Wmi42_GUID, \
            0xa0f95fd4,0xa587,0x11d2,0xbb,0x3a,0x00,0xc0,0x4f,0xa3,0x30,0xa6);
#endif


typedef struct _Wmi42
{
    // The Answer to the Ultimate Question
    ULONG TheAnswer;
    #define Wmi42_TheAnswer_SIZE sizeof(ULONG)
    #define Wmi42_TheAnswer_ID 1

} Wmi42, *PWmi42;

#define Wmi42_SIZE (FIELD_OFFSET(Wmi42, TheAnswer) + Wmi42_TheAnswer_SIZE)
#define MOFRESOURCENAME L"FireflyWMI"
NTSTATUS
WmiInitialize(
  WDFDEVICE       Device,
  PDEVICE_CONTEXT DeviceContext
);

EVT_WDF_WMI_INSTANCE_QUERY_INSTANCE EvtWmiInstanceQueryInstance;
EVT_WDF_WMI_INSTANCE_SET_INSTANCE EvtWmiInstanceSetInstance;
EVT_WDF_WMI_INSTANCE_SET_ITEM EvtWmiInstanceSetItem;
#endif
