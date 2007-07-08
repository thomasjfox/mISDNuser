/* q931.h
 *
 * Basic Q931 defines
 *
 * Author       Karsten Keil <kkeil@novell.com>
 *
 * Copyright 2007  by Karsten Keil <kkeil@novell.com>
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU LESSER GENERAL PUBLIC LICENSE
 * version 2.1 as published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU LESSER GENERAL PUBLIC LICENSE for more details.
 *
 */

#ifndef _Q931_H
#define _Q931_H

/*
 * Q931 protocol discriminator
 */
#define Q931_PD			0x08
/*
 * Q931 Message-Types
 */

#define MT_ALERTING		0x01
#define MT_CALL_PROCEEDING	0x02
#define MT_CONNECT		0x07
#define MT_CONNECT_ACKNOWLEDGE	0x0f
#define MT_PROGRESS		0x03
#define MT_SETUP		0x05
#define MT_SETUP_ACKNOWLEDGE	0x0d
#define MT_RESUME		0x26
#define MT_RESUME_ACKNOWLEDGE	0x2e
#define MT_RESUME_REJECT	0x22
#define MT_SUSPEND		0x25
#define MT_SUSPEND_ACKNOWLEDGE	0x2d
#define MT_SUSPEND_REJECT	0x21
#define MT_USER_INFORMATION	0x20
#define MT_DISCONNECT		0x45
#define MT_RELEASE		0x4d
#define MT_RELEASE_COMPLETE	0x5a
#define MT_RESTART		0x46
#define MT_RESTART_ACKNOWLEDGE	0x4e
#define MT_SEGMENT		0x60
#define MT_CONGESTION_CONTROL	0x79
#define MT_INFORMATION		0x7b
#define MT_FACILITY		0x62
#define MT_NOTIFY		0x6e
#define MT_STATUS		0x7d
#define MT_STATUS_ENQUIRY	0x75
#define MT_HOLD			0x24
#define MT_HOLD_ACKNOWLEDGE	0x28
#define MT_HOLD_REJECT		0x30
#define MT_RETRIEVE		0x31
#define MT_RETRIEVE_ACKNOWLEDGE	0x33
#define MT_RETRIEVE_REJECT	0x37


/*
 * Info Elements
 */
// not implemented 
// #define IE_SEGMENT		0x00
#define IE_BEARER		0x04
#define IE_CAUSE		0x08
#define IE_CALL_ID		0x10
#define IE_CALL_STATE		0x14
#define IE_CHANNEL_ID		0x18
#define IE_FACILITY		0x1c
#define IE_PROGRESS		0x1e
#define IE_NET_FAC		0x20
#define IE_NOTIFY		0x27
#define IE_DISPLAY		0x28
#define IE_DATE			0x29
#define IE_KEYPAD		0x2c
#define IE_SIGNAL		0x34
#define IE_INFORATE		0x40
#define IE_E2E_TDELAY		0x42
#define IE_TDELAY_SEL		0x43
#define IE_PACK_BINPARA		0x44
#define IE_PACK_WINSIZE		0x45
#define IE_PACK_SIZE		0x46
#define IE_CUG			0x47
#define	IE_REV_CHARGE		0x4a
#define IE_CONNECT_PN		0x4c
#define IE_CONNECT_SUB		0x4d
#define IE_CALLING_PN		0x6c
#define IE_CALLING_SUB		0x6d
#define IE_CALLED_PN		0x70
#define IE_CALLED_SUB		0x71
#define IE_REDIR_NR		0x74
#define IE_REDIR_DN		0x76
#define IE_TRANS_SEL		0x78
#define IE_RESTART_IND		0x79
#define IE_LLC			0x7c
#define IE_HLC			0x7d
#define IE_USER_USER		0x7e

#define	IE_COUNT		34

// not implemented
#define IE_ESCAPE		0x7f
// one octet IE
#define IE_SHIFT		0x90
#define IE_MORE_DATA		0xa0
#define IE_COMPLETE		0xa1
#define IE_CONGESTION		0xb0
// not allowed for ETSI
#define IE_REPEAT		0xd0

/*
 * weight for IE in check lists
 */
#define IE_MANDATORY		0x0100
/* mandatory not in every case */
#define IE_MANDATORY_1		0x0200

/*
 * Cause location
 */
#define CAUSE_LOC_USER		0
#define CAUSE_LOC_PNET_LOCUSER	1

/*
 * Cause values
 */
#define CAUSE_UNASSIGNED_NUMBER	1
#define CAUSE_NO_TRANSIT_ROUTE	2
#define CAUSE_NO_ROUTE		3
#define CAUSE_CHANNEL_UNACCEPT	6
#define CAUSE_NORMAL_CLEARING	16
#define CAUSE_USER_BUSY		17
#define CAUSE_NOUSER_RESPONDING	18
#define CAUSE_CALL_REJECTED	21
#define CAUSE_NONSELECTED_USER	26
#define CAUSE_INVALID_NUMBER	28
#define CAUSE_STATUS_RESPONSE	30
#define CAUSE_NORMALUNSPECIFIED	31
#define CAUSE_NO_CHANNEL	34
#define CAUSE_TEMPORARY_FAILURE	41
#define CAUSE_RESOURCES_UNAVAIL	47
#define CAUSE_INVALID_CALLREF	81
#define CAUSE_INCOMPATIBLE_DEST	88
#define CAUSE_MANDATORY_IE_MISS	96
#define CAUSE_MT_NOTIMPLEMENTED	97
#define CAUSE_IE_NOTIMPLEMENTED	99
#define CAUSE_INVALID_CONTENTS	100
#define CAUSE_NOTCOMPAT_STATE	101
#define CAUSE_TIMER_EXPIRED	102
#define CAUSE_PROTOCOL_ERROR	111

#define NO_CAUSE		254

/*
 * Progress values
 */
#define PROGRESS_NOT_E2E_ISDN	1
#define PROGRESS_DEST_NOT_ISDN	2
#define PROGRESS_ORIG_NOT_ISDN	3
#define PROGRESS_RET_TO_ISDN	4
#define PROGRESS_TONE		8

/*
 * Parser error codes
 */
#define	Q931_ERROR_LEN		0x010000
#define Q931_ERROR_OVERFLOW	0x020000
#define Q931_ERROR_CREF		0x040000
#define Q931_ERROR_FATAL	0x0F0000
#define Q931_ERROR_IELEN	0x100000
#define Q931_ERROR_UNKNOWN	0x200000
#define Q931_ERROR_COMPREH	0x400000
#define Q931_ERROR_IESEQ	0x800000	/* do not carein our implementation */

#endif
