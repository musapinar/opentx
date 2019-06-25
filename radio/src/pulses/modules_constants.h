enum ModuleType {
  MODULE_TYPE_NONE = 0,
  MODULE_TYPE_PPM,
  MODULE_TYPE_XJT_PXX1,
  MODULE_TYPE_ISRM_PXX2,
  MODULE_TYPE_DSM2,
  MODULE_TYPE_CROSSFIRE,
  MODULE_TYPE_MULTIMODULE,
  MODULE_TYPE_R9M_PXX1,
  MODULE_TYPE_R9M_PXX2,
  MODULE_TYPE_R9M_LITE_PXX1,
  MODULE_TYPE_R9M_LITE_PXX2,
  MODULE_TYPE_R9M_LITE_PRO_PXX2,
  MODULE_TYPE_SBUS,
  MODULE_TYPE_MAX = MODULE_TYPE_SBUS,
  MODULE_TYPE_COUNT
};

/* FrSky XJT / ISRM */

enum ModuleSubtypePXX1 {
  MODULE_SUBTYPE_PXX1_OFF = -1,
  MODULE_SUBTYPE_PXX1_ACCST_D16,
  MODULE_SUBTYPE_PXX1_ACCST_D8,
  MODULE_SUBTYPE_PXX1_ACCST_LR12,
  MODULE_SUBTYPE_PXX1_LAST = MODULE_SUBTYPE_PXX1_ACCST_LR12
};

enum ModuleSubtypeISRM_PXX2 {
  MODULE_SUBTYPE_ISRM_PXX2_ACCESS,
  MODULE_SUBTYPE_ISRM_PXX2_ACCST_D16,
  MODULE_SUBTYPE_ISRM_PXX2_ACCST_LR12, // not implemented in the module as of today
  MODULE_SUBTYPE_ISRM_PXX2_LAST = MODULE_SUBTYPE_ISRM_PXX2_ACCST_D16
};

enum ModuleSubtypeR9M_PXX2 {
  MODULE_SUBTYPE_R9M_PXX2_ACCESS,
  MODULE_SUBTYPE_R9M_PXX2_FCC,
  MODULE_SUBTYPE_R9M_PXX2_EU,
#if defined(R9M_PROTO_FLEX)
  MODULE_SUBTYPE_R9M_PXX2_FLEX,
#endif
  MODULE_SUBTYPE_R9M_PXX2_COUNT,
  MODULE_SUBTYPE_R9M_PXX2_LAST = MODULE_SUBTYPE_R9M_PXX2_COUNT - 1
};

enum AntennaTypes {
  XJT_INTERNAL_ANTENNA,
  XJT_EXTERNAL_ANTENNA
};

#define HAS_RF_PROTOCOL_FAILSAFE(rf)   ((rf) == MODULE_SUBTYPE_PXX1_ACCST_D16)
#define HAS_RF_PROTOCOL_MODELINDEX(rf) (((rf) == MODULE_SUBTYPE_PXX1_ACCST_D16) || ((rf) == MODULE_SUBTYPE_PXX1_ACCST_LR12))

/* FrSky R9M / R9M-Lite & co */

enum ModuleSubtypeR9M {
  MODULE_SUBTYPE_R9M_FCC,
  MODULE_SUBTYPE_R9M_EU,
  MODULE_SUBTYPE_R9M_EUPLUS,
  MODULE_SUBTYPE_R9M_AUPLUS,
  MODULE_SUBTYPE_R9M_LAST=MODULE_SUBTYPE_R9M_AUPLUS
};

/* Multi module */

enum ModuleSubtypeMulti {
  MODULE_SUBTYPE_MULTI_CUSTOM = -1,
  MODULE_SUBTYPE_MULTI_FIRST = MODULE_SUBTYPE_MULTI_CUSTOM,
  MODULE_SUBTYPE_MULTI_FLYSKY=0,
  MODULE_SUBTYPE_MULTI_HUBSAN,
  MODULE_SUBTYPE_MULTI_FRSKY,
  MODULE_SUBTYPE_MULTI_HISKY,
  MODULE_SUBTYPE_MULTI_V2X2,
  MODULE_SUBTYPE_MULTI_DSM2,
  MODULE_SUBTYPE_MULTI_DEVO,
  MODULE_SUBTYPE_MULTI_YD717,
  MODULE_SUBTYPE_MULTI_KN,
  MODULE_SUBTYPE_MULTI_SYMAX,
  MODULE_SUBTYPE_MULTI_SLT,
  MODULE_SUBTYPE_MULTI_CX10,
  MODULE_SUBTYPE_MULTI_CG023,
  MODULE_SUBTYPE_MULTI_BAYANG,
  MODULE_SUBTYPE_MULTI_ESky,
  MODULE_SUBTYPE_MULTI_MT99XX,
  MODULE_SUBTYPE_MULTI_MJXQ,
  MODULE_SUBTYPE_MULTI_SHENQI,
  MODULE_SUBTYPE_MULTI_FY326,
  MODULE_SUBTYPE_MULTI_SFHSS,
  MODULE_SUBTYPE_MULTI_J6PRO,
  MODULE_SUBTYPE_MULTI_FQ777,
  MODULE_SUBTYPE_MULTI_ASSAN,
  MODULE_SUBTYPE_MULTI_HONTAI,
  MODULE_SUBTYPE_MULTI_OLRS,
  MODULE_SUBTYPE_MULTI_FS_AFHDS2A,
  MODULE_SUBTYPE_MULTI_Q2X2,
  MODULE_SUBTYPE_MULTI_WK_2X01,
  MODULE_SUBTYPE_MULTI_Q303,
  MODULE_SUBTYPE_MULTI_GW008,
  MODULE_SUBTYPE_MULTI_DM002,
  MODULE_SUBTYPE_MULTI_CABELL,
  MODULE_SUBTYPE_MULTI_ESKY150,
  MODULE_SUBTYPE_MULTI_H83D,
  MODULE_SUBTYPE_MULTI_CORONA,
  MODULE_SUBTYPE_MULTI_CFLIE,
  MODULE_SUBTYPE_MULTI_HITEC,
  MODULE_SUBTYPE_MULTI_WFLY,
  MODULE_SUBTYPE_MULTI_BUGS,
  MODULE_SUBTYPE_MULTI_BUGS_MINI,
  MODULE_SUBTYPE_MULTI_TRAXXAS,
  MODULE_SUBTYPE_MULTI_NCC1701,
  MODULE_SUBTYPE_MULTI_E01X,
  MODULE_SUBTYPE_MULTI_V911S,
  MODULE_SUBTYPE_MULTI_GD00X,
  MODULE_SUBTYPE_MULTI_V761,
  MODULE_SUBTYPE_MULTI_KF606,
  MODULE_SUBTYPE_MULTI_REDPINE,
  MODULE_SUBTYPE_MULTI_POTENSIC,
  MODULE_SUBTYPE_MULTI_LAST = MODULE_SUBTYPE_MULTI_POTENSIC
};

enum MMDSM2Subtypes {
  MM_RF_DSM2_SUBTYPE_DSM2_22,
  MM_RF_DSM2_SUBTYPE_DSM2_11,
  MM_RF_DSM2_SUBTYPE_DSMX_22,
  MM_RF_DSM2_SUBTYPE_DSMX_11,
  MM_RF_DSM2_SUBTYPE_AUTO
};

enum MMRFrskySubtypes {
  MM_RF_FRSKY_SUBTYPE_D16,
  MM_RF_FRSKY_SUBTYPE_D8,
  MM_RF_FRSKY_SUBTYPE_D16_8CH,
  MM_RF_FRSKY_SUBTYPE_V8,
  MM_RF_FRSKY_SUBTYPE_D16_LBT,
  MM_RF_FRSKY_SUBTYPE_D16_LBT_8CH
};

enum ModuleSubtypeDSM2 {
  DSM2_PROTO_LP45,
  DSM2_PROTO_DSM2,
  DSM2_PROTO_DSMX,
};

enum FailsafeModes {
  FAILSAFE_NOT_SET,
  FAILSAFE_HOLD,
  FAILSAFE_CUSTOM,
  FAILSAFE_NOPULSES,
  FAILSAFE_RECEIVER,
  FAILSAFE_LAST = FAILSAFE_RECEIVER
};