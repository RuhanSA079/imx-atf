/*
 * Copyright 2019-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#define PLATFORM_LINKER_FORMAT		"elf64-littleaarch64"
#define PLATFORM_LINKER_ARCH		aarch64

#define PLATFORM_STACK_SIZE		0xB00
#define CACHE_WRITEBACK_GRANULE		64

#define PLAT_PRIMARY_CPU		0x0
#define PLATFORM_MAX_CPU_PER_CLUSTER	4
#define PLATFORM_CLUSTER_COUNT		1
#define PLATFORM_CLUSTER0_CORE_COUNT	4
#define PLATFORM_CLUSTER1_CORE_COUNT	0
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER0_CORE_COUNT)

#define IMX_PWR_LVL0			MPIDR_AFFLVL0
#define IMX_PWR_LVL1			MPIDR_AFFLVL1
#define IMX_PWR_LVL2			MPIDR_AFFLVL2

#define PWR_DOMAIN_AT_MAX_LVL		1
#define PLAT_MAX_PWR_LVL		2
#define PLAT_MAX_OFF_STATE		4
#define PLAT_MAX_RET_STATE		2

#define PLAT_WAIT_RET_STATE		1
#define PLAT_STOP_OFF_STATE		3

#define BL31_BASE			0x960000
#define BL31_LIMIT			0x980000
#define BL32_BASE			0x56000000
#define BL32_SIZE			0x02000000
#define BL32_SHM_SIZE			0x00400000
#define BL32_LIMIT			(BL32_BASE + BL32_SIZE)

/* non-secure uboot base */
#define PLAT_NS_IMAGE_OFFSET		0x40200000

/* GICv3 base address */
#define PLAT_GIC_BASE			0x38800000
#define PLAT_GICD_BASE			0x38800000
#define PLAT_GICR_BASE			0x38880000

#define PLAT_FSL_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_PHY_ADDR_SPACE_SIZE	(1ull << 32)

#define MAX_XLAT_TABLES			4
#define MAX_MMAP_REGIONS		13

#define HAB_RVT_BASE			0x00000900 /* HAB_RVT for i.MX8MM */

#define IMX_BOOT_UART_BASE		0x30890000
#define IMX_BOOT_UART_CLK_IN_HZ		24000000 /* Select 24Mhz OSC */

#define PLAT_CRASH_UART_BASE		IMX_BOOT_UART_BASE
#define PLAT_CRASH_UART_CLK_IN_HZ	24000000
#define IMX_CONSOLE_BAUDRATE		115200

#define IMX_AIPSTZ1			0x301f0000
#define IMX_AIPSTZ2			0x305f0000
#define IMX_AIPSTZ3			0x309f0000
#define IMX_AIPSTZ4			0x32df0000

#define IMX_AIPS_BASE			0x30000000
#define IMX_AIPS_SIZE			0xc00000
#define IMX_GPV_BASE			0x32000000
#define IMX_GPV_SIZE			0x800000
#define IMX_AIPS1_BASE			0x30200000
#define IMX_AIPS4_BASE			0x32c00000
#define IMX_ANAMIX_BASE			0x30360000
#define IMX_CCM_BASE			0x30380000
#define IMX_SRC_BASE			0x30390000
#define IMX_GPC_BASE			0x303a0000
#define IMX_RDC_BASE			0x303d0000
#define IMX_CSU_BASE			0x303e0000
#define IMX_WDOG_BASE			0x30280000
#define IMX_SNVS_BASE			0x30370000
#define IMX_NOC_BASE			0x32700000
#define IMX_TZASC_BASE			0x32F80000
#define IMX_IOMUX_GPR_BASE		0x30340000
#define IMX_DDRC_BASE			0x3d400000
#define IMX_DDRPHY_BASE			0x3c000000
#define IMX_DDR_IPS_BASE		0x3d000000
#define IMX_ROM_BASE			0x0

#define DRAM_PLL_CTRL			(IMX_ANAMIX_BASE + 0x50)

#define GPC_PU_PWRHSK			(IMX_GPC_BASE + 0x0190)
#define GPC_PU_PGC_UP_TRG		(IMX_GPC_BASE + 0xd8)
#define GPC_PU_PGC_DN_TRG		(IMX_GPC_BASE + 0xe4)
#define GPC_DDRMIX_PGC			(IMX_GPC_BASE + 0xfc0)
#define DDRMIX_PWR_REQ			BIT(18)
#define DDRMIX_ADB400_SYNC		BIT(11)
#define DDRMIX_ADB400_ACK		BIT(27)

#define OCRAM_S_BASE			0x00180000
#define OCRAM_S_SIZE			0x8000
#define OCRAM_S_LIMIT			(OCRAM_S_BASE + OCRAM_S_SIZE)

#define SAVED_DRAM_TIMING_BASE		OCRAM_S_BASE

#define COUNTER_FREQUENCY		8000000 /* 8MHz */

#define DEBUG_CONSOLE			0
#define IMX_WDOG_B_RESET
#define PLAT_IMX8MP			1
