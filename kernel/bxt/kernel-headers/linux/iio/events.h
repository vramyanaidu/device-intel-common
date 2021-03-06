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
#ifndef _IIO_EVENTS_H_
#define _IIO_EVENTS_H_
#include <linux/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/iio/types.h>
struct iio_event_data {
  __u64 id;
  __s64 timestamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IIO_GET_EVENT_FD_IOCTL _IOR('i', 0x90, int)
#define IIO_EVENT_CODE(chan_type,diff,modifier,direction,type,chan,chan1,chan2) (((u64) type << 56) | ((u64) diff << 55) | ((u64) direction << 48) | ((u64) modifier << 40) | ((u64) chan_type << 32) | (((u16) chan2) << 16) | ((u16) chan1) | ((u16) chan))
#define IIO_MOD_EVENT_CODE(chan_type,number,modifier,type,direction) IIO_EVENT_CODE(chan_type, 0, modifier, direction, type, number, 0, 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IIO_UNMOD_EVENT_CODE(chan_type,number,type,direction) IIO_EVENT_CODE(chan_type, 0, 0, direction, type, number, 0, 0)
#define IIO_EVENT_CODE_EXTRACT_TYPE(mask) ((mask >> 56) & 0xFF)
#define IIO_EVENT_CODE_EXTRACT_DIR(mask) ((mask >> 48) & 0x7F)
#define IIO_EVENT_CODE_EXTRACT_CHAN_TYPE(mask) ((mask >> 32) & 0xFF)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IIO_EVENT_CODE_EXTRACT_CHAN(mask) ((__s16) (mask & 0xFFFF))
#define IIO_EVENT_CODE_EXTRACT_CHAN2(mask) ((__s16) (((mask) >> 16) & 0xFFFF))
#define IIO_EVENT_CODE_EXTRACT_MODIFIER(mask) ((mask >> 40) & 0xFF)
#define IIO_EVENT_CODE_EXTRACT_DIFF(mask) (((mask) >> 55) & 0x1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif

