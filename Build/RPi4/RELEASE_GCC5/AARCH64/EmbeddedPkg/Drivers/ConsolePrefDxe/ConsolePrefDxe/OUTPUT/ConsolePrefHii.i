extern unsigned char ConsolePrefDxeStrings[];
extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID gEfiHiiRestStyleFormsetGuid;
extern EFI_GUID { 0x2d2358b4, 0xe96c, 0x484d, { 0xb2, 0xdd, 0x7c, 0x2e, 0xdf, 0xc7, 0xd5, 0x6f } };
typedef struct {
  UINT8 Console;
  UINT8 Reserved[3];
} CONSOLE_PREF_VARSTORE_DATA;
formset
  guid = { 0x2d2358b4, 0xe96c, 0x484d, { 0xb2, 0xdd, 0x7c, 0x2e, 0xdf, 0xc7, 0xd5, 0x6f } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },
  efivarstore CONSOLE_PREF_VARSTORE_DATA,
    attribute = 0x00000002 | 0x00000001,
    name = ConsolePref,
    guid = { 0x2d2358b4, 0xe96c, 0x484d, { 0xb2, 0xdd, 0x7c, 0x2e, 0xdf, 0xc7, 0xd5, 0x6f } };
  form formid = 0x1000,
    title = STRING_TOKEN(0x0004);
    oneof varid = ConsolePref.Console,
        prompt = STRING_TOKEN(0x0006),
        help = STRING_TOKEN(0x0007),
        flags = NUMERIC_SIZE_1 | INTERACTIVE,
        option text = STRING_TOKEN(0x0008), value = 0x0, flags = DEFAULT;
        option text = STRING_TOKEN(0x0009), value = 0x1, flags = 0;
    endoneof;
    subtitle text = STRING_TOKEN(0x0005);
  endform;
endformset;
