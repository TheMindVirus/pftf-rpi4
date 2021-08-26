extern unsigned char ConfigDxeStrings[];
extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID gEfiHiiRestStyleFormsetGuid;
extern EFI_GUID {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
#pragma pack(1)
typedef struct {
   UINT8 v800 : 1;
   UINT8 v640 : 1;
   UINT8 v1024 : 1;
   UINT8 v720p : 1;
   UINT8 v1080p : 1;
   UINT8 Physical : 1;
} DISPLAY_ENABLE_SCALED_VMODES_VARSTORE_DATA;
#pragma pack()
typedef struct {
   UINT32 Enable;
} DISPLAY_ENABLE_SSHOT_VARSTORE_DATA;
typedef struct {
   UINT32 Enable;
} DEBUG_ENABLE_JTAG_VARSTORE_DATA;
typedef struct {
  UINT32 Clock;
} CHIPSET_CPU_CLOCK_VARSTORE_DATA;
typedef struct {
  UINT32 Clock;
} CHIPSET_CUSTOM_CPU_CLOCK_VARSTORE_DATA;
typedef struct {
  UINT32 Supported;
} ADVANCED_RAM_MORE_THAN_3GB_VARSTORE_DATA;
typedef struct {
  UINT32 Enabled;
} ADVANCED_RAM_LIMIT_TO_3GB_VARSTORE_DATA;
typedef struct {
  UINT32 Enabled;
} ADVANCED_FAN_ON_GPIO_VARSTORE_DATA;
typedef struct {
  UINT32 Value;
} ADVANCED_FANTEMP_VARSTORE_DATA;
typedef struct {
  UINT32 Mode;
} SYSTEM_TABLE_MODE_VARSTORE_DATA;
typedef struct {
  CHAR16 AssetTag[33];
} ADVANCED_ASSET_TAG_VARSTORE_DATA;
typedef struct {
  UINT32 Routing;
} MMC_SD_VARSTORE_DATA;
typedef struct {
  UINT32 DisableMulti;
} MMC_DISMULTI_VARSTORE_DATA;
typedef struct {
  UINT32 Force1Bit;
} MMC_FORCE1BIT_VARSTORE_DATA;
typedef struct {
  UINT32 ForceDS;
} MMC_FORCEDS_VARSTORE_DATA;
typedef struct {
  UINT32 MHz;
} MMC_SD_DS_MHZ_VARSTORE_DATA;
typedef struct {
  UINT32 MHz;
} MMC_SD_HS_MHZ_VARSTORE_DATA;
typedef struct {
  UINT32 EnableDma;
} MMC_EMMC_DMA_VARSTORE_DATA;
formset
    guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}},
    title = STRING_TOKEN(0x0003),
    help = STRING_TOKEN(0x0004),
    classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },
    efivarstore CHIPSET_CPU_CLOCK_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = CpuClock,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore CHIPSET_CUSTOM_CPU_CLOCK_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = CustomCpuClock,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore ADVANCED_RAM_MORE_THAN_3GB_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = RamMoreThan3GB,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore ADVANCED_RAM_LIMIT_TO_3GB_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = RamLimitTo3GB,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore ADVANCED_FAN_ON_GPIO_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = FanOnGpio,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore ADVANCED_FANTEMP_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = FanTemp,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore SYSTEM_TABLE_MODE_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = SystemTableMode,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore ADVANCED_ASSET_TAG_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = AssetTag,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_SD_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = SdIsArasan,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_DISMULTI_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcDisableMulti,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_FORCE1BIT_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcForce1Bit,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_FORCEDS_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcForceDefaultSpeed,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_SD_DS_MHZ_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcSdDefaultSpeedMHz,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_SD_HS_MHZ_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcSdHighSpeedMHz,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore MMC_EMMC_DMA_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = MmcEnableDma,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore DEBUG_ENABLE_JTAG_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = DebugEnableJTAG,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore DISPLAY_ENABLE_SCALED_VMODES_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = DisplayEnableScaledVModes,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    efivarstore DISPLAY_ENABLE_SSHOT_VARSTORE_DATA,
      attribute = 0x00000002 | 0x00000004 | 0x00000001,
      name = DisplayEnableSShot,
      guid = {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}};
    form formid = 1,
        title = STRING_TOKEN(0x0003);
        subtitle text = STRING_TOKEN(0x0002);
        goto 0x1002,
           prompt = STRING_TOKEN(0x0005),
           help = STRING_TOKEN(0x0002);
        goto 0x1004,
            prompt = STRING_TOKEN(0x003E),
            help = STRING_TOKEN(0x0002);
        goto 0x1006,
           prompt = STRING_TOKEN(0x000F),
           help = STRING_TOKEN(0x0002);
        goto 0x1003,
           prompt = STRING_TOKEN(0x0023),
           help = STRING_TOKEN(0x0002);
        goto 0x1005,
            prompt = STRING_TOKEN(0x0050),
            help = STRING_TOKEN(0x0002);
    endform;
    form formid = 0x1002,
        title = STRING_TOKEN(0x0005);
        subtitle text = STRING_TOKEN(0x0006);
        oneof varid = CpuClock.Clock,
            prompt = STRING_TOKEN(0x0007),
            help = STRING_TOKEN(0x0008),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0009), value = 0, flags = 0;
            option text = STRING_TOKEN(0x000A), value = 1, flags = DEFAULT;
            option text = STRING_TOKEN(0x000B), value = 2, flags = 0;
            option text = STRING_TOKEN(0x000C), value = 3, flags = 0;
        endoneof;
        grayoutif NOT ideqval CpuClock.Clock == 3;
          numeric varid = CustomCpuClock.Clock,
              prompt = STRING_TOKEN(0x000D),
              help = STRING_TOKEN(0x000E),
              flags = DISPLAY_UINT_DEC | NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
              minimum = 100,
              maximum = 2200,
              default = 1500,
          endnumeric;
        endif;
    endform;
    form formid = 0x1006,
        title = STRING_TOKEN(0x000F);
        subtitle text = STRING_TOKEN(0x0002);
        grayoutif ideqval RamMoreThan3GB.Supported == 0;
          oneof varid = RamLimitTo3GB.Enabled,
              prompt = STRING_TOKEN(0x0010),
              help = STRING_TOKEN(0x0011),
              flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
              option text = STRING_TOKEN(0x0012), value = 0, flags = DEFAULT;
              option text = STRING_TOKEN(0x0013), value = 1, flags = 0;
          endoneof;
        endif;
        oneof varid = SystemTableMode.Mode,
            prompt = STRING_TOKEN(0x0014),
            help = STRING_TOKEN(0x0015),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0016), value = 0, flags = 0;
            option text = STRING_TOKEN(0x0017), value = 1, flags = DEFAULT;
            option text = STRING_TOKEN(0x0018), value = 2, flags = DEFAULT;
        endoneof;
        grayoutif NOT ideqval SystemTableMode.Mode == 0;
          oneof varid = FanOnGpio.Enabled,
              prompt = STRING_TOKEN(0x0019),
              help = STRING_TOKEN(0x001A),
              flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
              option text = STRING_TOKEN(0x001B), value = 0, flags = DEFAULT;
              option text = STRING_TOKEN(0x001C), value = 14, flags = 0;
              option text = STRING_TOKEN(0x001D), value = 18, flags = 0;
              option text = STRING_TOKEN(0x001E), value = 19, flags = 0;
          endoneof;
        endif;
        grayoutif ideqval FanOnGpio.Enabled == 0;
          numeric varid = FanTemp.Value,
              prompt = STRING_TOKEN(0x001F),
              help = STRING_TOKEN(0x0020),
              flags = DISPLAY_UINT_DEC | NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
       minimum = 50,
              maximum = 80,
              default = 60,
          endnumeric;
        endif;
        string varid = AssetTag.AssetTag,
            prompt = STRING_TOKEN(0x0021),
            help = STRING_TOKEN(0x0022),
            flags = INTERACTIVE | RESET_REQUIRED,
            minsize = 0,
            maxsize = 32,
        endstring;
    endform;
    form formid = 0x1003,
        title = STRING_TOKEN(0x0023);
        subtitle text = STRING_TOKEN(0x0024);
        oneof varid = SdIsArasan.Routing,
            prompt = STRING_TOKEN(0x0025),
            help = STRING_TOKEN(0x0026),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0029), value = 1, flags = DEFAULT;
            option text = STRING_TOKEN(0x0027), value = 0, flags = 0;
        endoneof;
        oneof varid = MmcDisableMulti.DisableMulti,
            prompt = STRING_TOKEN(0x002A),
            help = STRING_TOKEN(0x002B),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x002C), value = 0, flags = DEFAULT;
            option text = STRING_TOKEN(0x002D), value = 1, flags = 0;
        endoneof;
        oneof varid = MmcForce1Bit.Force1Bit,
            prompt = STRING_TOKEN(0x002E),
            help = STRING_TOKEN(0x002F),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0031), value = 0, flags = DEFAULT;
            option text = STRING_TOKEN(0x0030), value = 1, flags = 0;
        endoneof;
        oneof varid = MmcForceDefaultSpeed.ForceDS,
            prompt = STRING_TOKEN(0x0032),
            help = STRING_TOKEN(0x0033),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0035), value = 0, flags = DEFAULT;
            option text = STRING_TOKEN(0x0034), value = 1, flags = 0;
        endoneof;
        numeric varid = MmcSdDefaultSpeedMHz.MHz,
             prompt = STRING_TOKEN(0x0036),
             help = STRING_TOKEN(0x0037),
             flags = DISPLAY_UINT_DEC | NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
             minimum = 25,
             maximum = 100,
             default = 25,
        endnumeric;
        numeric varid = MmcSdHighSpeedMHz.MHz,
             prompt = STRING_TOKEN(0x0038),
             help = STRING_TOKEN(0x0039),
             flags = DISPLAY_UINT_DEC | NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
             minimum = 50,
             maximum = 100,
             default = 50,
        endnumeric;
        grayoutif ideqval SdIsArasan.Routing == 1;
        oneof varid = MmcEnableDma.EnableDma,
            prompt = STRING_TOKEN(0x003A),
            help = STRING_TOKEN(0x003D),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x003B), value = 0, flags = DEFAULT;
            option text = STRING_TOKEN(0x003C), value = 1, flags = 0;
        endoneof;
        endif;
    endform;
    form formid = 0x1004,
        title = STRING_TOKEN(0x003E);
        subtitle text = STRING_TOKEN(0x003F);
        checkbox varid = DisplayEnableScaledVModes.v640,
            prompt = STRING_TOKEN(0x0040),
            help = STRING_TOKEN(0x0041),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        checkbox varid = DisplayEnableScaledVModes.v800,
            prompt = STRING_TOKEN(0x0042),
            help = STRING_TOKEN(0x0043),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        checkbox varid = DisplayEnableScaledVModes.v1024,
            prompt = STRING_TOKEN(0x0044),
            help = STRING_TOKEN(0x0045),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        checkbox varid = DisplayEnableScaledVModes.v720p,
            prompt = STRING_TOKEN(0x0046),
            help = STRING_TOKEN(0x0047),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        checkbox varid = DisplayEnableScaledVModes.v1080p,
            prompt = STRING_TOKEN(0x0048),
            help = STRING_TOKEN(0x0049),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        checkbox varid = DisplayEnableScaledVModes.Physical,
            prompt = STRING_TOKEN(0x004A),
            help = STRING_TOKEN(0x004B),
            flags = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
        endcheckbox;
        oneof varid = DisplayEnableSShot.Enable,
            prompt = STRING_TOKEN(0x004C),
            help = STRING_TOKEN(0x004D),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x004E), value = 1, flags = DEFAULT;
            option text = STRING_TOKEN(0x004F), value = 0, flags = 0;
        endoneof;
    endform;
    form formid = 0x1005,
        title = STRING_TOKEN(0x0050);
        subtitle text = STRING_TOKEN(0x0051);
        oneof varid = DebugEnableJTAG.Enable,
            prompt = STRING_TOKEN(0x0052),
            help = STRING_TOKEN(0x0053),
            flags = NUMERIC_SIZE_4 | INTERACTIVE | RESET_REQUIRED,
            option text = STRING_TOKEN(0x0054), value = 1, flags = 0;
            option text = STRING_TOKEN(0x0055), value = 0, flags = DEFAULT;
        endoneof;
    endform;
endformset;
