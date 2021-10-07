/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) Foundries Ltd. 2021
 * Author: Jorge Ramirez <jorge@foundries.io>
 */

#ifndef __DRIVERS_ZYNQMP_CSU_H_
#define __DRIVERS_ZYNQMP_CSU_H_

/* CSU registers */
#define ZYNQMP_CSU_STATUS_OFFSET		0x00
#define ZYNQMP_CSU_CTRL_OFFSET			0x04
#define ZYNQMP_CSU_SSS_CFG_OFFSET		0x08
#define ZYNQMP_CSU_DMA_RESET_OFFSET		0x0c
#define ZYNQMP_CSU_MULTI_BOOT_OFFSET		0x10
#define ZYNQMP_CSU_TAMPER_TRIG_OFFSET		0x14
#define ZYNQMP_CSU_FT_STATUS_OFFSET		0x18
#define ZYNQMP_CSU_ISR_OFFSET			0x20

#define ZYNQMP_CSU_SSS_DMA0_STREAM_TO_AES	0x5A0
#define ZYNQMP_CSU_DMA_RESET_SET		1
#define ZYNQMP_CSU_DMA_RESET_CLR		0
#define ZYNQMP_CSU_ISR_PUF_ACC_ERROR_MASK	BIT(12)

/* AES-GCM */
#define ZYNQMP_CSU_AES_BASE			(CSU_BASE + 0x1000)
#define ZYNQMP_CSU_AES_SIZE			0x1000

/* SHA */
#define ZYNQMP_CSU_SHA_BASE			(CSU_BASE + 0x2000)
#define ZYNQMP_CSU_SHA_SIZE			0x1000

/* PCAP */
#define ZYNQMP_CSU_PCAP_BASE			(CSU_BASE + 0x3000)
#define ZYNQMP_CSU_PCAP_SIZE			0x1000

/* PUF */
#define ZYNQMP_CSU_PUF_BASE			(CSU_BASE + 0x4000)
#define ZYNQMP_CSU_PUF_SIZE			0x1000

/* TAMPER */
#define ZYNQMP_CSU_TAMPER_BASE			(CSU_BASE + 0x5000)
#define ZYNQMP_CSU_TAMPER_SIZE			0x38

#endif