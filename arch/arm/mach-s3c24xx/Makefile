# SPDX-License-Identifier: GPL-2.0
#
# Copyright (c) 2012 Samsung Electronics Co., Ltd.
#		http://www.samsung.com/
#
# Copyright 2007 Simtec Electronics

# core

obj-y				+= common.o

obj-$(CONFIG_S3C2410_PLL)	+= pll-s3c2410.o
obj-$(CONFIG_S3C2410_PM)	+= pm-s3c2410.o sleep-s3c2410.o

obj-$(CONFIG_CPU_S3C2440)	+= s3c2440.o
obj-$(CONFIG_CPU_S3C244X)	+= s3c244x.o
obj-$(CONFIG_S3C2440_PLL_12000000) += pll-s3c2440-12000000.o
obj-$(CONFIG_S3C2440_PLL_16934400) += pll-s3c2440-16934400.o

# PM

obj-$(CONFIG_PM)		+= pm.o
obj-$(CONFIG_PM_SLEEP)		+= irq-pm.o sleep.o

# common code

obj-$(CONFIG_S3C2410_CPUFREQ_UTILS) += cpufreq-utils.o

obj-$(CONFIG_S3C2410_IOTIMING)	+= iotiming-s3c2410.o

#
# machine support
# following is ordered alphabetically by option text.
#

obj-$(CONFIG_MACH_JZ2440)		+= mach-jz2440.o
obj-$(CONFIG_MACH_MINI2440)		+= mach-mini2440.o

# common bits of machine support

obj-$(CONFIG_S3C24XX_SMDK)		+= common-smdk.o

# machine additions

# device setup

obj-$(CONFIG_ARCH_S3C24XX)		+= setup-i2c.o
obj-$(CONFIG_S3C24XX_SETUP_TS)		+= setup-ts.o
obj-$(CONFIG_S3C_SETUP_CAMIF)		+= setup-camif.o
