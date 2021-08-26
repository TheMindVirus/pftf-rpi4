extern unsigned char BootDiscoveryPolicyUiLibStrings[];
extern EFI_GUID gEfiIfrBootMaintenanceGuid;
typedef struct {
  UINT32 BootDiscoveryPolicy;
} BOOT_DISCOVERY_POLICY_VARSTORE_DATA;
formset
  guid = { 0x5b6f7107, 0xbb3c, 0x4660, { 0x92, 0xcd, 0x54, 0x26, 0x90, 0x28, 0x0b, 0xbd } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0002),
  classguid = { 0xb2dedc91, 0xd59f, 0x48d2, { 0x89, 0x8a, 0x12, 0x49, 0xc, 0x74, 0xa4, 0xe0 } },
  efivarstore BOOT_DISCOVERY_POLICY_VARSTORE_DATA,
    attribute = 0x00000002 | 0x00000004 | 0x00000001,
    name = BootDiscoveryPolicy,
    guid = { 0x5b6f7107, 0xbb3c, 0x4660, { 0x92, 0xcd, 0x54, 0x26, 0x90, 0x28, 0x0b, 0xbd } };
  form formid = 0x0001,
    title = STRING_TOKEN(0x0002);
  oneof varid = BootDiscoveryPolicy.BootDiscoveryPolicy,
    prompt = STRING_TOKEN(0x0002),
    help = STRING_TOKEN(0x0002),
    flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
    option text = STRING_TOKEN(0x0003), value = 0, flags = DEFAULT;
    option text = STRING_TOKEN(0x0004), value = 1, flags = 0;
    option text = STRING_TOKEN(0x0005), value = 2, flags = 0;
  endoneof;
  endform;
endformset;
