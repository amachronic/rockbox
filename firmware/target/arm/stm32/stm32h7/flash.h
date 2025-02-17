/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * stm32h743 version: 1.0
 * stm32h743 authors: Aidan MacDonald
 *
 * Copyright (C) 2015 by the authors
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN_FLASH_H__
#define __HEADERGEN_FLASH_H__

#include "macro.h"

#define STA_FLASH   (0x52002000)

#define REG_FLASH_ACR                   st_reg(FLASH_ACR)
#define STA_FLASH_ACR                   (0x52002000 + 0x0)
#define STO_FLASH_ACR                   (0x0)
#define STT_FLASH_ACR                   STIO_32_RW
#define STN_FLASH_ACR                   FLASH_ACR
#define BP_FLASH_ACR_WRHIGHFREQ         3
#define BM_FLASH_ACR_WRHIGHFREQ         0x38
#define BF_FLASH_ACR_WRHIGHFREQ(v)      (((v) & 0x7) << 3)
#define BFM_FLASH_ACR_WRHIGHFREQ(v)     BM_FLASH_ACR_WRHIGHFREQ
#define BF_FLASH_ACR_WRHIGHFREQ_V(e)    BF_FLASH_ACR_WRHIGHFREQ(BV_FLASH_ACR_WRHIGHFREQ__##e)
#define BFM_FLASH_ACR_WRHIGHFREQ_V(v)   BM_FLASH_ACR_WRHIGHFREQ
#define BP_FLASH_ACR_LATENCY            0
#define BM_FLASH_ACR_LATENCY            0xf
#define BF_FLASH_ACR_LATENCY(v)         (((v) & 0xf) << 0)
#define BFM_FLASH_ACR_LATENCY(v)        BM_FLASH_ACR_LATENCY
#define BF_FLASH_ACR_LATENCY_V(e)       BF_FLASH_ACR_LATENCY(BV_FLASH_ACR_LATENCY__##e)
#define BFM_FLASH_ACR_LATENCY_V(v)      BM_FLASH_ACR_LATENCY

#endif /* __HEADERGEN_FLASH_H__*/
