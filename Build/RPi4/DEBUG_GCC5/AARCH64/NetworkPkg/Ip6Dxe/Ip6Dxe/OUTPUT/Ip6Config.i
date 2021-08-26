extern unsigned char Ip6DxeStrings[];
extern EFI_GUID { 0x2eea107, 0x98db, 0x400e, { 0x98, 0x30, 0x46, 0xa, 0x15, 0x42, 0xd7, 0x99}};
#pragma pack(1)
typedef struct {
  UINT8 IfType;
  UINT8 Padding[3];
  UINT32 Policy;
  UINT32 DadTransmitCount;
  CHAR16 InterfaceId[25];
  CHAR16 ManualAddress[255];
  CHAR16 GatewayAddress[255];
  CHAR16 DnsAddress[255];
} IP6_CONFIG_IFR_NVDATA;
#pragma pack()
formset
  guid = { 0x2eea107, 0x98db, 0x400e, { 0x98, 0x30, 0x46, 0xa, 0x15, 0x42, 0xd7, 0x99 } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  varstore IP6_CONFIG_IFR_NVDATA,
    name = IP6_CONFIG_IFR_NVDATA,
    guid = { 0x2eea107, 0x98db, 0x400e, { 0x98, 0x30, 0x46, 0xa, 0x15, 0x42, 0xd7, 0x99 } };
  form formid = 3,
    title = STRING_TOKEN(0x0004);
    goto 1,
    prompt = STRING_TOKEN (0x002C),
    help = STRING_TOKEN (0x002D),
    flags = INTERACTIVE,
    key = 0x108;
  endform;
  form formid = 1,
    title = STRING_TOKEN(0x0004);
    text
      help = STRING_TOKEN(0x0007),
      text = STRING_TOKEN(0x0006),
        text = STRING_TOKEN(0x0008);
    text
      help = STRING_TOKEN(0x000A),
      text = STRING_TOKEN(0x0009),
        text = STRING_TOKEN(0x000B);
    text
      help = STRING_TOKEN(0x000D),
      text = STRING_TOKEN(0x000C),
        text = STRING_TOKEN(0x000E);
    text
      help = STRING_TOKEN(0x0010),
      text = STRING_TOKEN(0x000F),
        text = STRING_TOKEN(0x002B);
    label 0x9000;
    label 0xffff;
    text
      help = STRING_TOKEN(0x0012),
      text = STRING_TOKEN(0x0011),
        text = STRING_TOKEN(0x002B);
    label 0xa000;
    label 0xffff;
    text
      help = STRING_TOKEN(0x0014),
      text = STRING_TOKEN(0x0013),
        text = STRING_TOKEN(0x002B);
    label 0xb000;
    label 0xffff;
    text
      help = STRING_TOKEN(0x0016),
      text = STRING_TOKEN(0x0015),
        text = STRING_TOKEN(0x002B);
    label 0xc000;
    label 0xffff;
    string varid = IP6_CONFIG_IFR_NVDATA.InterfaceId,
            prompt = STRING_TOKEN(0x0017),
            help = STRING_TOKEN(0x0018),
            flags = INTERACTIVE,
            key = 0x101,
            minsize = 1,
            maxsize = 23,
    endstring;
    numeric varid = IP6_CONFIG_IFR_NVDATA.DadTransmitCount,
            prompt = STRING_TOKEN(0x0019),
            help = STRING_TOKEN(0x001A),
            flags = 0,
            minimum = 0,
            maximum = 10,
            step = 0,
    endnumeric;
    oneof varid = IP6_CONFIG_IFR_NVDATA.Policy,
          prompt = STRING_TOKEN(0x001B),
          help = STRING_TOKEN(0x001C),
          option text = STRING_TOKEN(0x001D), value = 0, flags = DEFAULT;
          option text = STRING_TOKEN(0x001E), value = 1, flags = 0;
    endoneof;
    subtitle text = STRING_TOKEN(0x002B);
    suppressif ideqval IP6_CONFIG_IFR_NVDATA.Policy == 0;
    goto 2,
         prompt = STRING_TOKEN(0x001F),
         help = STRING_TOKEN(0x0020),
         flags = 0;
    subtitle text = STRING_TOKEN(0x002B);
    endif;
    text
      help = STRING_TOKEN (0x0028),
      text = STRING_TOKEN (0x0027),
      flags = INTERACTIVE,
      key = 0x105;
  endform;
  form formid = 2,
    title = STRING_TOKEN(0x001F);
    string varid = IP6_CONFIG_IFR_NVDATA.ManualAddress,
            prompt = STRING_TOKEN(0x0021),
            help = STRING_TOKEN(0x0022),
            flags = INTERACTIVE,
            key = 0x102,
            minsize = 2,
            maxsize = 255,
    endstring;
    string varid = IP6_CONFIG_IFR_NVDATA.GatewayAddress,
            prompt = STRING_TOKEN(0x0023),
            help = STRING_TOKEN(0x0024),
            flags = INTERACTIVE,
            key = 0x103,
            minsize = 2,
            maxsize = 255,
    endstring;
    string varid = IP6_CONFIG_IFR_NVDATA.DnsAddress,
            prompt = STRING_TOKEN(0x0025),
            help = STRING_TOKEN(0x0026),
            flags = INTERACTIVE,
            key = 0x104,
            minsize = 2,
            maxsize = 255,
    endstring;
    text
      help = STRING_TOKEN (0x0029),
      text = STRING_TOKEN (0x0029),
      flags = INTERACTIVE,
      key = 0x106;
    text
      help = STRING_TOKEN (0x002A),
      text = STRING_TOKEN (0x002A),
      flags = INTERACTIVE,
      key = 0x107;
  endform;
endformset;
