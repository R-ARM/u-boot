/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016 Rockchip Electronics Co., Ltd
 * Copyright (C) 2020 Peter Robinson <pbrobinson at gmail.com>
 */

#ifndef __RG552_H
#define __RG552_H

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdin=serial,usbkbd\0" \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0"

#include <configs/rk3399_common.h>

#define SDRAM_BANK_SIZE			(2UL << 30)

#define CONFIG_USB_OHCI_NEW
#define CONFIG_SYS_USB_OHCI_MAX_ROOT_PORTS     2

#endif
