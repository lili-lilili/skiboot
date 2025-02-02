// SPDX-License-Identifier: Apache-2.0
/* Copyright 2016-2018 IBM Corp. */

#ifndef __XIVE_H__
#define __XIVE_H__

/* IC register offsets */
#define CQ_SWI_CMD_HIST		0x020
#define CQ_SWI_CMD_POLL		0x028
#define CQ_SWI_CMD_BCAST	0x030
#define CQ_SWI_CMD_ASSIGN	0x038
#define CQ_SWI_CMD_BLK_UPD	0x040
#define CQ_SWI_RSP		0x048
#define X_CQ_CFG_PB_GEN		0x0a
#define CQ_CFG_PB_GEN		0x050
#define   CQ_INT_ADDR_OPT	PPC_BITMASK(14,15)
#define X_CQ_IC_BAR		0x10
#define X_CQ_MSGSND		0x0b
#define CQ_MSGSND		0x058
#define CQ_CNPM_SEL		0x078
#define CQ_IC_BAR		0x080
#define   CQ_IC_BAR_VALID 	PPC_BIT(0)
#define   CQ_IC_BAR_64K		PPC_BIT(1)
#define X_CQ_TM1_BAR		0x12
#define CQ_TM1_BAR		0x90
#define X_CQ_TM2_BAR		0x014
#define CQ_TM2_BAR		0x0a0
#define   CQ_TM_BAR_VALID 	PPC_BIT(0)
#define   CQ_TM_BAR_64K		PPC_BIT(1)
#define X_CQ_PC_BAR		0x16
#define CQ_PC_BAR		0x0b0
#define  CQ_PC_BAR_VALID 	PPC_BIT(0)
#define X_CQ_PC_BARM		0x17
#define CQ_PC_BARM		0x0b8
#define  CQ_PC_BARM_MASK	PPC_BITMASK(26,38)
#define X_CQ_VC_BAR		0x18
#define CQ_VC_BAR		0x0c0
#define  CQ_VC_BAR_VALID 	PPC_BIT(0)
#define X_CQ_VC_BARM		0x19
#define CQ_VC_BARM		0x0c8
#define  CQ_VC_BARM_MASK	PPC_BITMASK(21,37)
#define X_CQ_TAR		0x1e
#define CQ_TAR			0x0f0
#define  CQ_TAR_TBL_AUTOINC	PPC_BIT(0)
#define  CQ_TAR_TSEL_BLK	PPC_BIT(12)
#define  CQ_TAR_TSEL_MIG	PPC_BIT(13)
#define  CQ_TAR_TSEL_VDT	PPC_BIT(14)
#define  CQ_TAR_TSEL_EDT	PPC_BIT(15)
#define X_CQ_TDR		0x1f
#define CQ_TDR			0x0f8
#define X_CQ_PBI_CTL		0x20
#define CQ_PBI_CTL		0x100
#define  CQ_PBI_PC_64K		PPC_BIT(5)
#define  CQ_PBI_VC_64K		PPC_BIT(6)
#define  CQ_PBI_LNX_TRIG	PPC_BIT(7)
#define  CQ_PBI_FORCE_TM_LOCAL	PPC_BIT(22)
#define CQ_PBO_CTL		0x108
#define CQ_AIB_CTL		0x110
#define X_CQ_RST_CTL		0x23
#define CQ_RST_CTL		0x118
#define X_CQ_FIRMASK		0x33
#define CQ_FIRMASK		0x198
#define  CQ_FIR_PB_RCMDX_CI_ERR1	PPC_BIT(19)
#define  CQ_FIR_VC_INFO_ERROR_0_1	PPC_BITMASK(62,63)
#define X_CQ_FIRMASK_AND	0x34
#define CQ_FIRMASK_AND		0x1a0
#define X_CQ_FIRMASK_OR		0x35
#define CQ_FIRMASK_OR		0x1a8

/* PC LBS1 register offsets */
#define X_PC_TCTXT_CFG		0x100
#define PC_TCTXT_CFG		0x400
#define  PC_TCTXT_CFG_BLKGRP_EN		PPC_BIT(0)
#define  PC_TCTXT_CFG_TARGET_EN		PPC_BIT(1)
#define  PC_TCTXT_CFG_LGS_EN		PPC_BIT(2)
#define  PC_TCTXT_CFG_STORE_ACK		PPC_BIT(3)
#define  PC_TCTXT_CFG_HARD_CHIPID_BLK	PPC_BIT(8)
#define  PC_TCTXT_CHIPID_OVERRIDE	PPC_BIT(9)
#define  PC_TCTXT_CHIPID		PPC_BITMASK(12,15)
#define  PC_TCTXT_INIT_AGE		PPC_BITMASK(30,31)
#define X_PC_TCTXT_TRACK	0x101
#define PC_TCTXT_TRACK		0x408
#define  PC_TCTXT_TRACK_EN		PPC_BIT(0)
#define X_PC_TCTXT_INDIR0	0x104
#define PC_TCTXT_INDIR0		0x420
#define  PC_TCTXT_INDIR_VALID		PPC_BIT(0)
#define  PC_TCTXT_INDIR_THRDID		PPC_BITMASK(9,15)
#define X_PC_TCTXT_INDIR1	0x105
#define PC_TCTXT_INDIR1		0x428
#define X_PC_TCTXT_INDIR2	0x106
#define PC_TCTXT_INDIR2		0x430
#define X_PC_TCTXT_INDIR3	0x107
#define PC_TCTXT_INDIR3		0x438
#define X_PC_THREAD_EN_REG0	0x108
#define PC_THREAD_EN_REG0	0x440
#define X_PC_THREAD_EN_REG0_SET	0x109
#define PC_THREAD_EN_REG0_SET	0x448
#define X_PC_THREAD_EN_REG0_CLR	0x10a
#define PC_THREAD_EN_REG0_CLR	0x450
#define X_PC_THREAD_EN_REG1	0x10c
#define PC_THREAD_EN_REG1	0x460
#define X_PC_THREAD_EN_REG1_SET	0x10d
#define PC_THREAD_EN_REG1_SET	0x468
#define X_PC_THREAD_EN_REG1_CLR	0x10e
#define PC_THREAD_EN_REG1_CLR	0x470
#define X_PC_GLOBAL_CONFIG	0x110
#define PC_GLOBAL_CONFIG	0x480
#define  PC_GCONF_INDIRECT	PPC_BIT(32)
#define  PC_GCONF_CHIPID_OVR	PPC_BIT(40)
#define  PC_GCONF_CHIPID	PPC_BITMASK(44,47)
#define X_PC_VSD_TABLE_ADDR	0x111
#define PC_VSD_TABLE_ADDR	0x488
#define X_PC_VSD_TABLE_DATA	0x112
#define PC_VSD_TABLE_DATA	0x490
#define X_PC_AT_KILL		0x116
#define PC_AT_KILL		0x4b0
#define  PC_AT_KILL_VALID	PPC_BIT(0)
#define  PC_AT_KILL_BLOCK_ID	PPC_BITMASK(27,31)
#define  PC_AT_KILL_OFFSET	PPC_BITMASK(48,60)
#define X_PC_AT_KILL_MASK	0x117
#define PC_AT_KILL_MASK		0x4b8

/* PC LBS2 register offsets */
#define X_PC_VPC_CACHE_ENABLE	0x161
#define PC_VPC_CACHE_ENABLE	0x708
#define  PC_VPC_CACHE_EN_MASK	PPC_BITMASK(0,31)
#define X_PC_VPC_SCRUB_TRIG	0x162
#define PC_VPC_SCRUB_TRIG	0x710
#define X_PC_VPC_SCRUB_MASK	0x163
#define PC_VPC_SCRUB_MASK	0x718
#define  PC_SCRUB_VALID		PPC_BIT(0)
#define  PC_SCRUB_WANT_DISABLE	PPC_BIT(1)
#define  PC_SCRUB_WANT_INVAL	PPC_BIT(2)
#define  PC_SCRUB_BLOCK_ID	PPC_BITMASK(27,31)
#define  PC_SCRUB_OFFSET	PPC_BITMASK(45,63)
#define X_PC_VPC_CWATCH_SPEC	0x167
#define PC_VPC_CWATCH_SPEC	0x738
#define  PC_VPC_CWATCH_CONFLICT	PPC_BIT(0)
#define  PC_VPC_CWATCH_FULL	PPC_BIT(8)
#define  PC_VPC_CWATCH_BLOCKID	PPC_BITMASK(27,31)
#define  PC_VPC_CWATCH_OFFSET	PPC_BITMASK(45,63)
#define X_PC_VPC_CWATCH_DAT0	0x168
#define PC_VPC_CWATCH_DAT0	0x740
#define X_PC_VPC_CWATCH_DAT1	0x169
#define PC_VPC_CWATCH_DAT1	0x748
#define X_PC_VPC_CWATCH_DAT2	0x16a
#define PC_VPC_CWATCH_DAT2	0x750
#define X_PC_VPC_CWATCH_DAT3	0x16b
#define PC_VPC_CWATCH_DAT3	0x758
#define X_PC_VPC_CWATCH_DAT4	0x16c
#define PC_VPC_CWATCH_DAT4	0x760
#define X_PC_VPC_CWATCH_DAT5	0x16d
#define PC_VPC_CWATCH_DAT5	0x768
#define X_PC_VPC_CWATCH_DAT6	0x16e
#define PC_VPC_CWATCH_DAT6	0x770
#define X_PC_VPC_CWATCH_DAT7	0x16f
#define PC_VPC_CWATCH_DAT7	0x778

/* VC0 register offsets */
#define X_VC_GLOBAL_CONFIG	0x200
#define VC_GLOBAL_CONFIG	0x800
#define  VC_GCONF_INDIRECT	PPC_BIT(32)
#define X_VC_VSD_TABLE_ADDR	0x201
#define VC_VSD_TABLE_ADDR	0x808
#define X_VC_VSD_TABLE_DATA	0x202
#define VC_VSD_TABLE_DATA	0x810
#define VC_IVE_ISB_BLOCK_MODE	0x818
#define VC_EQD_BLOCK_MODE	0x820
#define VC_VPS_BLOCK_MODE	0x828
#define X_VC_IRQ_CONFIG_IPI	0x208
#define VC_IRQ_CONFIG_IPI	0x840
#define  VC_IRQ_CONFIG_MEMB_EN	PPC_BIT(45)
#define  VC_IRQ_CONFIG_MEMB_SZ	PPC_BITMASK(46,51)
#define VC_IRQ_CONFIG_HW	0x848
#define VC_IRQ_CONFIG_CASCADE1	0x850
#define VC_IRQ_CONFIG_CASCADE2	0x858
#define VC_IRQ_CONFIG_REDIST	0x860
#define VC_IRQ_CONFIG_IPI_CASC	0x868
#define X_VC_AIB_TX_ORDER_TAG2	0x22d
#define  VC_AIB_TX_ORDER_TAG2_REL_TF	PPC_BIT(20)
#define VC_AIB_TX_ORDER_TAG2	0x890
#define X_VC_AT_MACRO_KILL	0x23e
#define VC_AT_MACRO_KILL	0x8b0
#define X_VC_AT_MACRO_KILL_MASK	0x23f
#define VC_AT_MACRO_KILL_MASK	0x8b8
#define  VC_KILL_VALID		PPC_BIT(0)
#define  VC_KILL_TYPE		PPC_BITMASK(14,15)
#define   VC_KILL_IRQ	0
#define   VC_KILL_IVC	1
#define   VC_KILL_SBC	2
#define   VC_KILL_EQD	3
#define  VC_KILL_BLOCK_ID	PPC_BITMASK(27,31)
#define  VC_KILL_OFFSET		PPC_BITMASK(48,60)
#define X_VC_EQC_CACHE_ENABLE	0x211
#define VC_EQC_CACHE_ENABLE	0x908
#define  VC_EQC_CACHE_EN_MASK	PPC_BITMASK(0,15)
#define X_VC_EQC_SCRUB_TRIG	0x212
#define VC_EQC_SCRUB_TRIG	0x910
#define X_VC_EQC_SCRUB_MASK	0x213
#define VC_EQC_SCRUB_MASK	0x918
#define X_VC_EQC_CWATCH_SPEC	0x215
#define VC_EQC_CONFIG		0x920
#define X_VC_EQC_CONFIG		0x214
#define  VC_EQC_CONF_SYNC_IPI		PPC_BIT(32)
#define  VC_EQC_CONF_SYNC_HW		PPC_BIT(33)
#define  VC_EQC_CONF_SYNC_ESC1		PPC_BIT(34)
#define  VC_EQC_CONF_SYNC_ESC2		PPC_BIT(35)
#define  VC_EQC_CONF_SYNC_REDI		PPC_BIT(36)
#define  VC_EQC_CONF_EQP_INTERLEAVE	PPC_BIT(38)
#define  VC_EQC_CONF_ENABLE_END_s_BIT	PPC_BIT(39)
#define  VC_EQC_CONF_ENABLE_END_u_BIT	PPC_BIT(40)
#define  VC_EQC_CONF_ENABLE_END_c_BIT	PPC_BIT(41)
#define  VC_EQC_CONF_ENABLE_MORE_QSZ	PPC_BIT(42)
#define  VC_EQC_CONF_SKIP_ESCALATE	PPC_BIT(43)
#define VC_EQC_CWATCH_SPEC	0x928
#define  VC_EQC_CWATCH_CONFLICT	PPC_BIT(0)
#define  VC_EQC_CWATCH_FULL	PPC_BIT(8)
#define  VC_EQC_CWATCH_BLOCKID	PPC_BITMASK(28,31)
#define  VC_EQC_CWATCH_OFFSET	PPC_BITMASK(40,63)
#define X_VC_EQC_CWATCH_DAT0	0x216
#define VC_EQC_CWATCH_DAT0	0x930
#define X_VC_EQC_CWATCH_DAT1	0x217
#define VC_EQC_CWATCH_DAT1	0x938
#define X_VC_EQC_CWATCH_DAT2	0x218
#define VC_EQC_CWATCH_DAT2	0x940
#define X_VC_EQC_CWATCH_DAT3	0x219
#define VC_EQC_CWATCH_DAT3	0x948
#define X_VC_IVC_SCRUB_TRIG	0x222
#define VC_IVC_SCRUB_TRIG	0x990
#define X_VC_IVC_SCRUB_MASK	0x223
#define VC_IVC_SCRUB_MASK	0x998
#define X_VC_SBC_SCRUB_TRIG	0x232
#define VC_SBC_SCRUB_TRIG	0xa10
#define X_VC_SBC_SCRUB_MASK	0x233
#define VC_SBC_SCRUB_MASK	0xa18
#define  VC_SCRUB_VALID		PPC_BIT(0)
#define  VC_SCRUB_WANT_DISABLE	PPC_BIT(1)
#define  VC_SCRUB_WANT_INVAL	PPC_BIT(2) /* EQC and SBC only */
#define  VC_SCRUB_BLOCK_ID	PPC_BITMASK(28,31)
#define  VC_SCRUB_OFFSET	PPC_BITMASK(40,63)
#define X_VC_IVC_CACHE_ENABLE	0x221
#define VC_IVC_CACHE_ENABLE	0x988
#define  VC_IVC_CACHE_EN_MASK	PPC_BITMASK(0,15)
#define X_VC_SBC_CACHE_ENABLE	0x231
#define VC_SBC_CACHE_ENABLE	0xa08
#define  VC_SBC_CACHE_EN_MASK	PPC_BITMASK(0,15)
#define VC_IVC_CACHE_SCRUB_TRIG	0x990
#define VC_IVC_CACHE_SCRUB_MASK	0x998
#define VC_SBC_CACHE_ENABLE	0xa08
#define VC_SBC_CACHE_SCRUB_TRIG	0xa10
#define VC_SBC_CACHE_SCRUB_MASK	0xa18
#define VC_SBC_CONFIG		0xa20
#define X_VC_SBC_CONFIG		0x234
#define  VC_SBC_CONF_CPLX_CIST	PPC_BIT(44)
#define  VC_SBC_CONF_CIST_BOTH	PPC_BIT(45)
#define  VC_SBC_CONF_NO_UPD_PRF	PPC_BIT(59)

/* VC1 register offsets */

/* VSD Table address register definitions (shared) */
#define VST_ADDR_AUTOINC	PPC_BIT(0)
#define VST_TABLE_SELECT	PPC_BITMASK(13,15)
#define  VST_TSEL_IVT	0
#define  VST_TSEL_SBE	1
#define  VST_TSEL_EQDT	2
#define  VST_TSEL_VPDT	3
#define  VST_TSEL_IRQ	4	/* VC only */
#define VST_TABLE_OFFSET	PPC_BITMASK(27,31)

/* Number of queue overflow pages */
#define VC_QUEUE_OVF_COUNT	6

/* Bits in a VSD entry.
 *
 * Note: the address is naturally aligned, we don't use a PPC_BITMASK,
 *       but just a mask to apply to the address before OR'ing it in.
 *
 * Note: VSD_FIRMWARE is a SW bit ! It hijacks an unused bit in the
 *       VSD and is only meant to be used in indirect mode !
 */
#define VSD_MODE		PPC_BITMASK(0,1)
#define  VSD_MODE_SHARED	1
#define  VSD_MODE_EXCLUSIVE	2
#define  VSD_MODE_FORWARD	3
#define VSD_ADDRESS_MASK	0x0ffffffffffff000ull
#define VSD_MIGRATION_REG	PPC_BITMASK(52,55)
#define VSD_INDIRECT		PPC_BIT(56)
#define VSD_TSIZE		PPC_BITMASK(59,63)
#define VSD_FIRMWARE		PPC_BIT(2) /* Read warning above */

/*
 * TM registers are special, see below
 */

/* TM register offsets */
#define TM_QW0_USER		0x000 /* All rings */
#define TM_QW1_OS		0x010 /* Ring 0..2 */
#define TM_QW2_HV_POOL		0x020 /* Ring 0..1 */
#define TM_QW3_HV_PHYS		0x030 /* Ring 0..1 */

/* Byte offsets inside a QW             QW0 QW1 QW2 QW3 */
#define TM_NSR			0x0  /*  +   +   -   +  */
#define TM_CPPR			0x1  /*  -   +   -   +  */
#define TM_IPB			0x2  /*  -   +   +   +  */
#define TM_LSMFB		0x3  /*  -   +   +   +  */
#define TM_ACK_CNT		0x4  /*  -   +   -   -  */
#define TM_INC			0x5  /*  -   +   -   +  */
#define TM_AGE			0x6  /*  -   +   -   +  */
#define TM_PIPR			0x7  /*  -   +   -   +  */

/* QW word 2 contains the valid bit at the top and other fields
 * depending on the QW
 */
#define TM_WORD2		0x8
#define   TM_QW0W2_VU		PPC_BIT32(0)
#define   TM_QW0W2_LOGIC_SERV	PPC_BITMASK32(1,31) // XX 2,31 ?
#define   TM_QW1W2_VO		PPC_BIT32(0)
#define   TM_QW1W2_OS_CAM	PPC_BITMASK32(8,31)
#define   TM_QW2W2_VP		PPC_BIT32(0)
#define   TM_QW2W2_POOL_CAM	PPC_BITMASK32(8,31)
#define   TM_QW3W2_VT		PPC_BIT32(0)
#define   TM_QW3W2_LP		PPC_BIT32(6)
#define   TM_QW3W2_LE		PPC_BIT32(7)
#define   TM_QW3W2_T		PPC_BIT32(31)

/* In addition to normal loads to "peek" and writes (only when invalid)
 * using 4 and 8 bytes accesses, the above registers support these
 * "special" byte operations:
 *
 *   - Byte load from QW0[NSR] - User level NSR (EBB)
 *   - Byte store to QW0[NSR] - User level NSR (EBB)
 *   - Byte load/store to QW1[CPPR] and QW3[CPPR] - CPPR access
 *   - Byte load from QW3[TM_WORD2] - Read VT||00000||LP||LE on thrd 0
 *                                    otherwise VT||0000000
 *   - Byte store to QW3[TM_WORD2] - Set VT bit (and LP/LE if present)
 *
 * Then we have all these "special" CI ops at these offset that trigger
 * all sorts of side effects:
 *
 * We can OR'in these a cache line index from 0...3 (ie, 0, 0x80, 0x100, 0x180)
 * to select a specific snooper. 0 is pretty busy so 0x80 or 0x100 is recommended
 * XXX TODO. add that and find way to tell KVM about it.
 */
#define TM_SPC_ACK_EBB		0x800	/* Load8 ack EBB to reg*/
#define TM_SPC_ACK_OS_REG	0x810	/* Load16 ack OS irq to reg */
#define TM_SPC_PUSH_USR_CTX	0x808	/* Store32 Push/Validate user context */
#define TM_SPC_PULL_USR_CTX	0x808	/* Load32 Pull/Invalidate user context */
#define TM_SPC_SET_OS_PENDING	0x812	/* Store8 Set OS irq pending bit */
#define TM_SPC_PULL_OS_CTX	0x818	/* Load32/Load64 Pull/Invalidate OS context to reg */
#define TM_SPC_PULL_POOL_CTX	0x828	/* Load32/Load64 Pull/Invalidate Pool context to reg*/
#define TM_SPC_ACK_HV_REG	0x830	/* Load16 ack HV irq to reg */
#define TM_SPC_PULL_USR_CTX_OL	0xc08	/* Store8 Pull/Inval usr ctx to odd line */
#define TM_SPC_ACK_OS_EL	0xc10	/* Store8 ack OS irq to even line */
#define TM_SPC_ACK_HV_POOL_EL	0xc20	/* Store8 ack HV evt pool to even line */
#define TM_SPC_ACK_HV_EL	0xc30	/* Store8 ack HV irq to even line */
/* XXX more... */

/* NSR fields for the various QW ack types */
#define TM_QW0_NSR_EB		PPC_BIT8(0)
#define TM_QW1_NSR_EO		PPC_BIT8(0)
#define TM_QW3_NSR_HE		PPC_BITMASK8(0,1)
#define  TM_QW3_NSR_HE_NONE	0
#define  TM_QW3_NSR_HE_POOL	1
#define  TM_QW3_NSR_HE_PHYS	2
#define  TM_QW3_NSR_HE_LSI	3
#define TM_QW3_NSR_I		PPC_BIT8(2)
#define TM_QW3_NSR_GRP_LVL	PPC_BIT8(3,7)

/*
 * Definition of the XIVE in-memory tables
 */

/* IVE/EAS
 *
 * One per interrupt source. Targets that interrupt to a given EQ
 * and provides the corresponding logical interrupt number (EQ data)
 *
 * We also map this structure to the escalation descriptor inside
 * an EQ, though in that case the valid and masked bits are not used.
 */
struct xive_ive {
	/* Use a single 64-bit definition to make it easier to
	 * perform atomic updates
	 */
	uint64_t	w;
#define IVE_VALID	PPC_BIT(0)
#define IVE_EQ_BLOCK	PPC_BITMASK(4,7)	/* Destination EQ block# */
#define IVE_EQ_INDEX	PPC_BITMASK(8,31)	/* Destination EQ index */
#define IVE_MASKED	PPC_BIT(32)		/* Masked */
#define IVE_EQ_DATA	PPC_BITMASK(33,63)	/* Data written to the EQ */
};

/* EQ */
struct xive_eq {
	uint32_t	w0;
#define EQ_W0_VALID		PPC_BIT32(0) /* "v" bit */
#define EQ_W0_ENQUEUE		PPC_BIT32(1) /* "q" bit */
#define EQ_W0_UCOND_NOTIFY	PPC_BIT32(2) /* "n" bit */
#define EQ_W0_BACKLOG		PPC_BIT32(3) /* "b" bit */
#define EQ_W0_PRECL_ESC_CTL	PPC_BIT32(4) /* "p" bit */
#define EQ_W0_ESCALATE_CTL	PPC_BIT32(5) /* "e" bit */
#define EQ_W0_UNCOND_ESCALATE	PPC_BIT32(6) /* "u" bit - DD2.0 */
#define EQ_W0_SILENT_ESCALATE	PPC_BIT32(7) /* "s" bit - DD2.0 */
#define EQ_W0_QSIZE		PPC_BITMASK32(12,15)
#define EQ_W0_SW0		PPC_BIT32(16)
#define EQ_W0_FIRMWARE		EQ_W0_SW0 /* Owned by FW */
#define EQ_QSIZE_4K		0
#define EQ_QSIZE_64K		4
#define EQ_W0_HWDEP		PPC_BITMASK32(24,31)
	uint32_t	w1;
#define EQ_W1_ESn		PPC_BITMASK32(0,1)
#define EQ_W1_ESn_P		PPC_BIT32(0)
#define EQ_W1_ESn_Q		PPC_BIT32(1)
#define EQ_W1_ESe		PPC_BITMASK32(2,3)
#define EQ_W1_ESe_P		PPC_BIT32(2)
#define EQ_W1_ESe_Q		PPC_BIT32(3)
#define EQ_W1_GENERATION	PPC_BIT32(9)
#define EQ_W1_PAGE_OFF		PPC_BITMASK32(10,31)
	uint32_t	w2;
#define EQ_W2_MIGRATION_REG	PPC_BITMASK32(0,3)
#define EQ_W2_OP_DESC_HI	PPC_BITMASK32(4,31)
	uint32_t	w3;
#define EQ_W3_OP_DESC_LO	PPC_BITMASK32(0,31)
	uint32_t	w4;
#define EQ_W4_ESC_EQ_BLOCK	PPC_BITMASK32(4,7)
#define EQ_W4_ESC_EQ_INDEX	PPC_BITMASK32(8,31)
	uint32_t	w5;
#define EQ_W5_ESC_EQ_DATA	PPC_BITMASK32(1,31)
	uint32_t	w6;
#define EQ_W6_FORMAT_BIT	PPC_BIT32(8)
#define EQ_W6_NVT_BLOCK		PPC_BITMASK32(9,12)
#define EQ_W6_NVT_INDEX		PPC_BITMASK32(13,31)
	uint32_t	w7;
#define EQ_W7_F0_IGNORE		PPC_BIT32(0)
#define EQ_W7_F0_BLK_GROUPING	PPC_BIT32(1)
#define EQ_W7_F0_PRIORITY	PPC_BITMASK32(8,15)
#define EQ_W7_F1_WAKEZ		PPC_BIT32(0)
#define EQ_W7_F1_LOG_SERVER_ID	PPC_BITMASK32(1,31)
};

/* VP */
struct xive_vp {
	uint32_t	w0;
#define VP_W0_VALID		PPC_BIT32(0)
	uint32_t	w1;
	uint32_t	w2;
	uint32_t	w3;
	uint32_t	w4;
	uint32_t	w5;
	uint32_t	w6;
	uint32_t	w7;
	uint32_t	w8;
#define VP_W8_GRP_VALID		PPC_BIT32(0)
	uint32_t	w9;
	uint32_t	wa;
	uint32_t	wb;
	uint32_t	wc;
	uint32_t	wd;
	uint32_t	we;
	uint32_t	wf;
};

/* Internal APIs to other modules */

/* IRQ allocators return this on failure */
#define XIVE_IRQ_ERROR	0xffffffff

void init_xive(void);
int64_t xive_reset(void);

/* Allocate a chunk of HW sources */
uint32_t xive_alloc_hw_irqs(uint32_t chip_id, uint32_t count, uint32_t align);
/* Allocate a chunk of IPI sources */
uint32_t xive_alloc_ipi_irqs(uint32_t chip_id, uint32_t count, uint32_t align);

/* Get notification port address for a HW source entity */
#define XIVE_HW_SRC_PHBn(__n)	(__n)
#define XIVE_HW_SRC_PSI		8

uint64_t xive_get_notify_port(uint32_t chip_id, uint32_t ent);
uint32_t xive_get_notify_base(uint32_t girq);

/* XIVE feature flag to de/activate store EOI */
#define XIVE_STORE_EOI_ENABLED 0

/* Internal IRQ flags */
#define XIVE_SRC_TRIGGER_PAGE	0x01 /* Trigger page exist (either separate
				      * or not, so different from the OPAL
				      * flag which is only set when the
				      * trigger page is separate).
				      */
#define XIVE_SRC_EOI_PAGE1	0x02 /* EOI on the second page */
#define XIVE_SRC_STORE_EOI	0x04 /* EOI using stores supported */
#define XIVE_SRC_LSI		0x08 /* Interrupt is an LSI */
#define XIVE_SRC_SHIFT_BUG	0x10 /* ESB update offset << 4 */

struct irq_source_ops;
void xive_register_hw_source(uint32_t base, uint32_t count, uint32_t shift,
			     void *mmio, uint32_t flags, void *data,
			     const struct irq_source_ops *ops);
void xive_register_ipi_source(uint32_t base, uint32_t count, void *data,
			      const struct irq_source_ops *ops);

void xive_cpu_callin(struct cpu_thread *cpu);

/* Get the trigger page address for an interrupt allocated with
 * xive_alloc_ipi_irqs()
 */
void *xive_get_trigger_port(uint32_t girq);

/* To be used by special EOI override in PSI */
struct irq_source;
void __xive_source_eoi(struct irq_source *is, uint32_t isn);

void xive_source_mask(struct irq_source *is, uint32_t isn);

#endif /* __XIVE_H__ */
