/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __UAPI_RADIO_IRIS_COMMANDS_H
#define __UAPI_RADIO_IRIS_COMMANDS_H
enum v4l2_cid_private_iris_t {
  V4L2_CID_PRIVATE_IRIS_SRCHMODE = (0x08000000 + 1),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_SCANDWELL,
  V4L2_CID_PRIVATE_IRIS_SRCHON,
  V4L2_CID_PRIVATE_IRIS_STATE,
  V4L2_CID_PRIVATE_IRIS_TRANSMIT_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_RDSGROUP_MASK,
  V4L2_CID_PRIVATE_IRIS_REGION,
  V4L2_CID_PRIVATE_IRIS_SIGNAL_TH,
  V4L2_CID_PRIVATE_IRIS_SRCH_PTY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_SRCH_PI,
  V4L2_CID_PRIVATE_IRIS_SRCH_CNT,
  V4L2_CID_PRIVATE_IRIS_EMPHASIS,
  V4L2_CID_PRIVATE_IRIS_RDS_STD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_SPACING,
  V4L2_CID_PRIVATE_IRIS_RDSON,
  V4L2_CID_PRIVATE_IRIS_RDSGROUP_PROC,
  V4L2_CID_PRIVATE_IRIS_LP_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_ANTENNA,
  V4L2_CID_PRIVATE_IRIS_RDSD_BUF,
  V4L2_CID_PRIVATE_IRIS_PSALL,
  V4L2_CID_PRIVATE_IRIS_TX_SETPSREPEATCOUNT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_STOP_RDS_TX_PS_NAME,
  V4L2_CID_PRIVATE_IRIS_STOP_RDS_TX_RT,
  V4L2_CID_PRIVATE_IRIS_IOVERC,
  V4L2_CID_PRIVATE_IRIS_INTDET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_MPX_DCC,
  V4L2_CID_PRIVATE_IRIS_AF_JUMP,
  V4L2_CID_PRIVATE_IRIS_RSSI_DELTA,
  V4L2_CID_PRIVATE_IRIS_HLSI,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_SOFT_MUTE,
  V4L2_CID_PRIVATE_IRIS_RIVA_ACCS_ADDR,
  V4L2_CID_PRIVATE_IRIS_RIVA_ACCS_LEN,
  V4L2_CID_PRIVATE_IRIS_RIVA_PEEK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_RIVA_POKE,
  V4L2_CID_PRIVATE_IRIS_SSBI_ACCS_ADDR,
  V4L2_CID_PRIVATE_IRIS_SSBI_PEEK,
  V4L2_CID_PRIVATE_IRIS_SSBI_POKE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_TX_TONE,
  V4L2_CID_PRIVATE_IRIS_RDS_GRP_COUNTERS,
  V4L2_CID_PRIVATE_IRIS_SET_NOTCH_FILTER,
  V4L2_CID_PRIVATE_IRIS_SET_AUDIO_PATH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_DO_CALIBRATION,
  V4L2_CID_PRIVATE_IRIS_SRCH_ALGORITHM,
  V4L2_CID_PRIVATE_IRIS_GET_SINR,
  V4L2_CID_PRIVATE_INTF_LOW_THRESHOLD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_INTF_HIGH_THRESHOLD,
  V4L2_CID_PRIVATE_SINR_THRESHOLD,
  V4L2_CID_PRIVATE_SINR_SAMPLES,
  V4L2_CID_PRIVATE_SPUR_FREQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_SPUR_FREQ_RMSSI,
  V4L2_CID_PRIVATE_SPUR_SELECTION,
  V4L2_CID_PRIVATE_UPDATE_SPUR_TABLE,
  V4L2_CID_PRIVATE_VALID_CHANNEL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_AF_RMSSI_TH,
  V4L2_CID_PRIVATE_AF_RMSSI_SAMPLES,
  V4L2_CID_PRIVATE_GOOD_CH_RMSSI_TH,
  V4L2_CID_PRIVATE_SRCHALGOTYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_CF0TH12,
  V4L2_CID_PRIVATE_SINRFIRSTSTAGE,
  V4L2_CID_PRIVATE_RMSSIFIRSTSTAGE,
  V4L2_CID_PRIVATE_RXREPEATCOUNT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_RSSI_TH,
  V4L2_CID_PRIVATE_IRIS_AF_JUMP_RSSI_TH,
  V4L2_CID_PRIVATE_BLEND_SINRHI,
  V4L2_CID_PRIVATE_BLEND_RMSSIHI,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_READ_DEFAULT = 0x00980928,
  V4L2_CID_PRIVATE_IRIS_WRITE_DEFAULT,
  V4L2_CID_PRIVATE_IRIS_SET_CALIBRATION,
  V4L2_CID_PRIVATE_IRIS_SET_SPURTABLE = 0x0098092D,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  V4L2_CID_PRIVATE_IRIS_GET_SPUR_TBL = 0x0098092E,
};
enum iris_evt_t {
  IRIS_EVT_RADIO_READY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_TUNE_SUCC,
  IRIS_EVT_SEEK_COMPLETE,
  IRIS_EVT_SCAN_NEXT,
  IRIS_EVT_NEW_RAW_RDS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_NEW_RT_RDS,
  IRIS_EVT_NEW_PS_RDS,
  IRIS_EVT_ERROR,
  IRIS_EVT_BELOW_TH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_ABOVE_TH,
  IRIS_EVT_STEREO,
  IRIS_EVT_MONO,
  IRIS_EVT_RDS_AVAIL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_RDS_NOT_AVAIL,
  IRIS_EVT_NEW_SRCH_LIST,
  IRIS_EVT_NEW_AF_LIST,
  IRIS_EVT_TXRDSDAT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_TXRDSDONE,
  IRIS_EVT_RADIO_DISABLED,
  IRIS_EVT_NEW_ODA,
  IRIS_EVT_NEW_RT_PLUS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IRIS_EVT_NEW_ERT,
  IRIS_EVT_SPUR_TBL,
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

