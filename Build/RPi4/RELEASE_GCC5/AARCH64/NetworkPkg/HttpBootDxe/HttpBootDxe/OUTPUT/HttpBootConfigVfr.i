extern unsigned char HttpBootDxeStrings[];
extern EFI_GUID { 0x4d20583a, 0x7765, 0x4e7a, { 0x8a, 0x67, 0xdc, 0xde, 0x74, 0xee, 0x3e, 0xc5 }};
#pragma pack(1)
typedef struct _HTTP_BOOT_CONFIG_IFR_NVDATA {
  UINT8 IpVersion;
  UINT8 Padding;
  CHAR16 Description[75];
  CHAR16 Uri[255];
} HTTP_BOOT_CONFIG_IFR_NVDATA;
#pragma pack()
formset
  guid = { 0x4d20583a, 0x7765, 0x4e7a, { 0x8a, 0x67, 0xdc, 0xde, 0x74, 0xee, 0x3e, 0xc5 } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  varstore HTTP_BOOT_CONFIG_IFR_NVDATA,
    name = HTTP_BOOT_CONFIG_IFR_NVDATA,
    guid = { 0x4d20583a, 0x7765, 0x4e7a, { 0x8a, 0x67, 0xdc, 0xde, 0x74, 0xee, 0x3e, 0xc5 } };
  form formid = 1,
    title = STRING_TOKEN(0x0002);
    string varid = HTTP_BOOT_CONFIG_IFR_NVDATA.Description,
            prompt = STRING_TOKEN(0x000A),
            help = STRING_TOKEN(0x000B),
            minsize = 6,
            maxsize = 75,
    endstring;
    oneof varid = HTTP_BOOT_CONFIG_IFR_NVDATA.IpVersion,
          prompt = STRING_TOKEN(0x0004),
          help = STRING_TOKEN(0x0005),
          option text = STRING_TOKEN(0x0006), value = 0, flags = DEFAULT;
          option text = STRING_TOKEN(0x0007), value = 1, flags = 0;
    endoneof;
    string varid = HTTP_BOOT_CONFIG_IFR_NVDATA.Uri,
            prompt = STRING_TOKEN(0x0008),
            help = STRING_TOKEN(0x0009),
            flags = INTERACTIVE,
            key = 0x101,
            minsize = 0,
            maxsize = 255,
    endstring;
  endform;
endformset;
