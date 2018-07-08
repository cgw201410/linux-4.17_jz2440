/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Common Header for S3C24XX SoCs
 */

#ifndef __ARCH_ARM_MACH_S3C24XX_COMMON_H
#define __ARCH_ARM_MACH_S3C24XX_COMMON_H __FILE__

#include <linux/reboot.h>

struct s3c2410_uartcfg;

#if defined(CONFIG_CPU_S3C2440)
extern void s3c244x_map_io(void);
extern void s3c244x_init_uarts(struct s3c2410_uartcfg *cfg, int no);
#else
#define s3c244x_init_uarts NULL
#endif

#ifdef CONFIG_CPU_S3C2440
extern  int s3c2440_init(void);
extern void s3c2440_map_io(void);
extern void s3c2440_init_clocks(int xtal);
extern void s3c2440_init_irq(void);
#else
#define s3c2440_init NULL
#define s3c2440_map_io NULL
#endif

extern struct syscore_ops s3c24xx_irq_syscore_ops;

extern struct platform_device s3c2410_device_dma;
extern struct platform_device s3c2412_device_dma;
extern struct platform_device s3c2440_device_dma;
extern struct platform_device s3c2443_device_dma;

extern struct platform_device s3c2410_device_dclk;

#ifdef CONFIG_S3C2410_COMMON_CLK
void __init s3c2410_common_clk_init(struct device_node *np, unsigned long xti_f,
				    int current_soc,
				    void __iomem *reg_base);
#endif

#endif /* __ARCH_ARM_MACH_S3C24XX_COMMON_H */
