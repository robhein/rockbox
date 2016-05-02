/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * stmp3600 version: 2.4.0
 * stmp3600 authors: Amaury Pouly
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
#ifndef __HEADERGEN_STMP3600_RTC_H__
#define __HEADERGEN_STMP3600_RTC_H__

#define HW_RTC_CTRL                                 HW(RTC_CTRL)
#define HWA_RTC_CTRL                                (0x8005c000 + 0x0)
#define HWT_RTC_CTRL                                HWIO_32_RW
#define HWN_RTC_CTRL                                RTC_CTRL
#define HWI_RTC_CTRL                                
#define HW_RTC_CTRL_SET                             HW(RTC_CTRL_SET)
#define HWA_RTC_CTRL_SET                            (HWA_RTC_CTRL + 0x4)
#define HWT_RTC_CTRL_SET                            HWIO_32_WO
#define HWN_RTC_CTRL_SET                            RTC_CTRL
#define HWI_RTC_CTRL_SET                            
#define HW_RTC_CTRL_CLR                             HW(RTC_CTRL_CLR)
#define HWA_RTC_CTRL_CLR                            (HWA_RTC_CTRL + 0x8)
#define HWT_RTC_CTRL_CLR                            HWIO_32_WO
#define HWN_RTC_CTRL_CLR                            RTC_CTRL
#define HWI_RTC_CTRL_CLR                            
#define HW_RTC_CTRL_TOG                             HW(RTC_CTRL_TOG)
#define HWA_RTC_CTRL_TOG                            (HWA_RTC_CTRL + 0xc)
#define HWT_RTC_CTRL_TOG                            HWIO_32_WO
#define HWN_RTC_CTRL_TOG                            RTC_CTRL
#define HWI_RTC_CTRL_TOG                            
#define BP_RTC_CTRL_SFTRST                          31
#define BM_RTC_CTRL_SFTRST                          0x80000000
#define BF_RTC_CTRL_SFTRST(v)                       (((v) & 0x1) << 31)
#define BFM_RTC_CTRL_SFTRST(v)                      BM_RTC_CTRL_SFTRST
#define BF_RTC_CTRL_SFTRST_V(e)                     BF_RTC_CTRL_SFTRST(BV_RTC_CTRL_SFTRST__##e)
#define BFM_RTC_CTRL_SFTRST_V(v)                    BM_RTC_CTRL_SFTRST
#define BP_RTC_CTRL_CLKGATE                         30
#define BM_RTC_CTRL_CLKGATE                         0x40000000
#define BF_RTC_CTRL_CLKGATE(v)                      (((v) & 0x1) << 30)
#define BFM_RTC_CTRL_CLKGATE(v)                     BM_RTC_CTRL_CLKGATE
#define BF_RTC_CTRL_CLKGATE_V(e)                    BF_RTC_CTRL_CLKGATE(BV_RTC_CTRL_CLKGATE__##e)
#define BFM_RTC_CTRL_CLKGATE_V(v)                   BM_RTC_CTRL_CLKGATE
#define BP_RTC_CTRL_CLKDIV                          24
#define BM_RTC_CTRL_CLKDIV                          0xf000000
#define BF_RTC_CTRL_CLKDIV(v)                       (((v) & 0xf) << 24)
#define BFM_RTC_CTRL_CLKDIV(v)                      BM_RTC_CTRL_CLKDIV
#define BF_RTC_CTRL_CLKDIV_V(e)                     BF_RTC_CTRL_CLKDIV(BV_RTC_CTRL_CLKDIV__##e)
#define BFM_RTC_CTRL_CLKDIV_V(v)                    BM_RTC_CTRL_CLKDIV
#define BP_RTC_CTRL_SUPPRESS_COPY2ANALOG            6
#define BM_RTC_CTRL_SUPPRESS_COPY2ANALOG            0x40
#define BV_RTC_CTRL_SUPPRESS_COPY2ANALOG__NORMAL    0x0
#define BV_RTC_CTRL_SUPPRESS_COPY2ANALOG__NO_COPY   0x1
#define BF_RTC_CTRL_SUPPRESS_COPY2ANALOG(v)         (((v) & 0x1) << 6)
#define BFM_RTC_CTRL_SUPPRESS_COPY2ANALOG(v)        BM_RTC_CTRL_SUPPRESS_COPY2ANALOG
#define BF_RTC_CTRL_SUPPRESS_COPY2ANALOG_V(e)       BF_RTC_CTRL_SUPPRESS_COPY2ANALOG(BV_RTC_CTRL_SUPPRESS_COPY2ANALOG__##e)
#define BFM_RTC_CTRL_SUPPRESS_COPY2ANALOG_V(v)      BM_RTC_CTRL_SUPPRESS_COPY2ANALOG
#define BP_RTC_CTRL_FORCE_UPDATE                    5
#define BM_RTC_CTRL_FORCE_UPDATE                    0x20
#define BV_RTC_CTRL_FORCE_UPDATE__NORMAL            0x0
#define BV_RTC_CTRL_FORCE_UPDATE__FORCE_COPY        0x1
#define BF_RTC_CTRL_FORCE_UPDATE(v)                 (((v) & 0x1) << 5)
#define BFM_RTC_CTRL_FORCE_UPDATE(v)                BM_RTC_CTRL_FORCE_UPDATE
#define BF_RTC_CTRL_FORCE_UPDATE_V(e)               BF_RTC_CTRL_FORCE_UPDATE(BV_RTC_CTRL_FORCE_UPDATE__##e)
#define BFM_RTC_CTRL_FORCE_UPDATE_V(v)              BM_RTC_CTRL_FORCE_UPDATE
#define BP_RTC_CTRL_WATCHDOGEN                      4
#define BM_RTC_CTRL_WATCHDOGEN                      0x10
#define BF_RTC_CTRL_WATCHDOGEN(v)                   (((v) & 0x1) << 4)
#define BFM_RTC_CTRL_WATCHDOGEN(v)                  BM_RTC_CTRL_WATCHDOGEN
#define BF_RTC_CTRL_WATCHDOGEN_V(e)                 BF_RTC_CTRL_WATCHDOGEN(BV_RTC_CTRL_WATCHDOGEN__##e)
#define BFM_RTC_CTRL_WATCHDOGEN_V(v)                BM_RTC_CTRL_WATCHDOGEN
#define BP_RTC_CTRL_ONEMSEC_IRQ                     3
#define BM_RTC_CTRL_ONEMSEC_IRQ                     0x8
#define BF_RTC_CTRL_ONEMSEC_IRQ(v)                  (((v) & 0x1) << 3)
#define BFM_RTC_CTRL_ONEMSEC_IRQ(v)                 BM_RTC_CTRL_ONEMSEC_IRQ
#define BF_RTC_CTRL_ONEMSEC_IRQ_V(e)                BF_RTC_CTRL_ONEMSEC_IRQ(BV_RTC_CTRL_ONEMSEC_IRQ__##e)
#define BFM_RTC_CTRL_ONEMSEC_IRQ_V(v)               BM_RTC_CTRL_ONEMSEC_IRQ
#define BP_RTC_CTRL_ALARM_IRQ                       2
#define BM_RTC_CTRL_ALARM_IRQ                       0x4
#define BF_RTC_CTRL_ALARM_IRQ(v)                    (((v) & 0x1) << 2)
#define BFM_RTC_CTRL_ALARM_IRQ(v)                   BM_RTC_CTRL_ALARM_IRQ
#define BF_RTC_CTRL_ALARM_IRQ_V(e)                  BF_RTC_CTRL_ALARM_IRQ(BV_RTC_CTRL_ALARM_IRQ__##e)
#define BFM_RTC_CTRL_ALARM_IRQ_V(v)                 BM_RTC_CTRL_ALARM_IRQ
#define BP_RTC_CTRL_ONEMSEC_IRQ_EN                  1
#define BM_RTC_CTRL_ONEMSEC_IRQ_EN                  0x2
#define BF_RTC_CTRL_ONEMSEC_IRQ_EN(v)               (((v) & 0x1) << 1)
#define BFM_RTC_CTRL_ONEMSEC_IRQ_EN(v)              BM_RTC_CTRL_ONEMSEC_IRQ_EN
#define BF_RTC_CTRL_ONEMSEC_IRQ_EN_V(e)             BF_RTC_CTRL_ONEMSEC_IRQ_EN(BV_RTC_CTRL_ONEMSEC_IRQ_EN__##e)
#define BFM_RTC_CTRL_ONEMSEC_IRQ_EN_V(v)            BM_RTC_CTRL_ONEMSEC_IRQ_EN
#define BP_RTC_CTRL_ALARM_IRQ_EN                    0
#define BM_RTC_CTRL_ALARM_IRQ_EN                    0x1
#define BF_RTC_CTRL_ALARM_IRQ_EN(v)                 (((v) & 0x1) << 0)
#define BFM_RTC_CTRL_ALARM_IRQ_EN(v)                BM_RTC_CTRL_ALARM_IRQ_EN
#define BF_RTC_CTRL_ALARM_IRQ_EN_V(e)               BF_RTC_CTRL_ALARM_IRQ_EN(BV_RTC_CTRL_ALARM_IRQ_EN__##e)
#define BFM_RTC_CTRL_ALARM_IRQ_EN_V(v)              BM_RTC_CTRL_ALARM_IRQ_EN

#define HW_RTC_STAT                         HW(RTC_STAT)
#define HWA_RTC_STAT                        (0x8005c000 + 0x10)
#define HWT_RTC_STAT                        HWIO_32_RW
#define HWN_RTC_STAT                        RTC_STAT
#define HWI_RTC_STAT                        
#define BP_RTC_STAT_RTC_PRESENT             31
#define BM_RTC_STAT_RTC_PRESENT             0x80000000
#define BF_RTC_STAT_RTC_PRESENT(v)          (((v) & 0x1) << 31)
#define BFM_RTC_STAT_RTC_PRESENT(v)         BM_RTC_STAT_RTC_PRESENT
#define BF_RTC_STAT_RTC_PRESENT_V(e)        BF_RTC_STAT_RTC_PRESENT(BV_RTC_STAT_RTC_PRESENT__##e)
#define BFM_RTC_STAT_RTC_PRESENT_V(v)       BM_RTC_STAT_RTC_PRESENT
#define BP_RTC_STAT_ALARM_PRESENT           30
#define BM_RTC_STAT_ALARM_PRESENT           0x40000000
#define BF_RTC_STAT_ALARM_PRESENT(v)        (((v) & 0x1) << 30)
#define BFM_RTC_STAT_ALARM_PRESENT(v)       BM_RTC_STAT_ALARM_PRESENT
#define BF_RTC_STAT_ALARM_PRESENT_V(e)      BF_RTC_STAT_ALARM_PRESENT(BV_RTC_STAT_ALARM_PRESENT__##e)
#define BFM_RTC_STAT_ALARM_PRESENT_V(v)     BM_RTC_STAT_ALARM_PRESENT
#define BP_RTC_STAT_WATCHDOG_PRESENT        29
#define BM_RTC_STAT_WATCHDOG_PRESENT        0x20000000
#define BF_RTC_STAT_WATCHDOG_PRESENT(v)     (((v) & 0x1) << 29)
#define BFM_RTC_STAT_WATCHDOG_PRESENT(v)    BM_RTC_STAT_WATCHDOG_PRESENT
#define BF_RTC_STAT_WATCHDOG_PRESENT_V(e)   BF_RTC_STAT_WATCHDOG_PRESENT(BV_RTC_STAT_WATCHDOG_PRESENT__##e)
#define BFM_RTC_STAT_WATCHDOG_PRESENT_V(v)  BM_RTC_STAT_WATCHDOG_PRESENT
#define BP_RTC_STAT_XTAL32768_PRESENT       28
#define BM_RTC_STAT_XTAL32768_PRESENT       0x10000000
#define BF_RTC_STAT_XTAL32768_PRESENT(v)    (((v) & 0x1) << 28)
#define BFM_RTC_STAT_XTAL32768_PRESENT(v)   BM_RTC_STAT_XTAL32768_PRESENT
#define BF_RTC_STAT_XTAL32768_PRESENT_V(e)  BF_RTC_STAT_XTAL32768_PRESENT(BV_RTC_STAT_XTAL32768_PRESENT__##e)
#define BFM_RTC_STAT_XTAL32768_PRESENT_V(v) BM_RTC_STAT_XTAL32768_PRESENT
#define BP_RTC_STAT_STALE_REGS              16
#define BM_RTC_STAT_STALE_REGS              0x3f0000
#define BF_RTC_STAT_STALE_REGS(v)           (((v) & 0x3f) << 16)
#define BFM_RTC_STAT_STALE_REGS(v)          BM_RTC_STAT_STALE_REGS
#define BF_RTC_STAT_STALE_REGS_V(e)         BF_RTC_STAT_STALE_REGS(BV_RTC_STAT_STALE_REGS__##e)
#define BFM_RTC_STAT_STALE_REGS_V(v)        BM_RTC_STAT_STALE_REGS
#define BP_RTC_STAT_NEW_REGS                8
#define BM_RTC_STAT_NEW_REGS                0x3f00
#define BF_RTC_STAT_NEW_REGS(v)             (((v) & 0x3f) << 8)
#define BFM_RTC_STAT_NEW_REGS(v)            BM_RTC_STAT_NEW_REGS
#define BF_RTC_STAT_NEW_REGS_V(e)           BF_RTC_STAT_NEW_REGS(BV_RTC_STAT_NEW_REGS__##e)
#define BFM_RTC_STAT_NEW_REGS_V(v)          BM_RTC_STAT_NEW_REGS
#define BP_RTC_STAT_FUSE_UNLOCK             1
#define BM_RTC_STAT_FUSE_UNLOCK             0x2
#define BF_RTC_STAT_FUSE_UNLOCK(v)          (((v) & 0x1) << 1)
#define BFM_RTC_STAT_FUSE_UNLOCK(v)         BM_RTC_STAT_FUSE_UNLOCK
#define BF_RTC_STAT_FUSE_UNLOCK_V(e)        BF_RTC_STAT_FUSE_UNLOCK(BV_RTC_STAT_FUSE_UNLOCK__##e)
#define BFM_RTC_STAT_FUSE_UNLOCK_V(v)       BM_RTC_STAT_FUSE_UNLOCK
#define BP_RTC_STAT_FUSE_DONE               0
#define BM_RTC_STAT_FUSE_DONE               0x1
#define BF_RTC_STAT_FUSE_DONE(v)            (((v) & 0x1) << 0)
#define BFM_RTC_STAT_FUSE_DONE(v)           BM_RTC_STAT_FUSE_DONE
#define BF_RTC_STAT_FUSE_DONE_V(e)          BF_RTC_STAT_FUSE_DONE(BV_RTC_STAT_FUSE_DONE__##e)
#define BFM_RTC_STAT_FUSE_DONE_V(v)         BM_RTC_STAT_FUSE_DONE

#define HW_RTC_MILLISECONDS             HW(RTC_MILLISECONDS)
#define HWA_RTC_MILLISECONDS            (0x8005c000 + 0x20)
#define HWT_RTC_MILLISECONDS            HWIO_32_RW
#define HWN_RTC_MILLISECONDS            RTC_MILLISECONDS
#define HWI_RTC_MILLISECONDS            
#define HW_RTC_MILLISECONDS_SET         HW(RTC_MILLISECONDS_SET)
#define HWA_RTC_MILLISECONDS_SET        (HWA_RTC_MILLISECONDS + 0x4)
#define HWT_RTC_MILLISECONDS_SET        HWIO_32_WO
#define HWN_RTC_MILLISECONDS_SET        RTC_MILLISECONDS
#define HWI_RTC_MILLISECONDS_SET        
#define HW_RTC_MILLISECONDS_CLR         HW(RTC_MILLISECONDS_CLR)
#define HWA_RTC_MILLISECONDS_CLR        (HWA_RTC_MILLISECONDS + 0x8)
#define HWT_RTC_MILLISECONDS_CLR        HWIO_32_WO
#define HWN_RTC_MILLISECONDS_CLR        RTC_MILLISECONDS
#define HWI_RTC_MILLISECONDS_CLR        
#define HW_RTC_MILLISECONDS_TOG         HW(RTC_MILLISECONDS_TOG)
#define HWA_RTC_MILLISECONDS_TOG        (HWA_RTC_MILLISECONDS + 0xc)
#define HWT_RTC_MILLISECONDS_TOG        HWIO_32_WO
#define HWN_RTC_MILLISECONDS_TOG        RTC_MILLISECONDS
#define HWI_RTC_MILLISECONDS_TOG        
#define BP_RTC_MILLISECONDS_COUNT       0
#define BM_RTC_MILLISECONDS_COUNT       0xffffffff
#define BF_RTC_MILLISECONDS_COUNT(v)    (((v) & 0xffffffff) << 0)
#define BFM_RTC_MILLISECONDS_COUNT(v)   BM_RTC_MILLISECONDS_COUNT
#define BF_RTC_MILLISECONDS_COUNT_V(e)  BF_RTC_MILLISECONDS_COUNT(BV_RTC_MILLISECONDS_COUNT__##e)
#define BFM_RTC_MILLISECONDS_COUNT_V(v) BM_RTC_MILLISECONDS_COUNT

#define HW_RTC_SECONDS              HW(RTC_SECONDS)
#define HWA_RTC_SECONDS             (0x8005c000 + 0x30)
#define HWT_RTC_SECONDS             HWIO_32_RW
#define HWN_RTC_SECONDS             RTC_SECONDS
#define HWI_RTC_SECONDS             
#define HW_RTC_SECONDS_SET          HW(RTC_SECONDS_SET)
#define HWA_RTC_SECONDS_SET         (HWA_RTC_SECONDS + 0x4)
#define HWT_RTC_SECONDS_SET         HWIO_32_WO
#define HWN_RTC_SECONDS_SET         RTC_SECONDS
#define HWI_RTC_SECONDS_SET         
#define HW_RTC_SECONDS_CLR          HW(RTC_SECONDS_CLR)
#define HWA_RTC_SECONDS_CLR         (HWA_RTC_SECONDS + 0x8)
#define HWT_RTC_SECONDS_CLR         HWIO_32_WO
#define HWN_RTC_SECONDS_CLR         RTC_SECONDS
#define HWI_RTC_SECONDS_CLR         
#define HW_RTC_SECONDS_TOG          HW(RTC_SECONDS_TOG)
#define HWA_RTC_SECONDS_TOG         (HWA_RTC_SECONDS + 0xc)
#define HWT_RTC_SECONDS_TOG         HWIO_32_WO
#define HWN_RTC_SECONDS_TOG         RTC_SECONDS
#define HWI_RTC_SECONDS_TOG         
#define BP_RTC_SECONDS_COUNT        0
#define BM_RTC_SECONDS_COUNT        0xffffffff
#define BF_RTC_SECONDS_COUNT(v)     (((v) & 0xffffffff) << 0)
#define BFM_RTC_SECONDS_COUNT(v)    BM_RTC_SECONDS_COUNT
#define BF_RTC_SECONDS_COUNT_V(e)   BF_RTC_SECONDS_COUNT(BV_RTC_SECONDS_COUNT__##e)
#define BFM_RTC_SECONDS_COUNT_V(v)  BM_RTC_SECONDS_COUNT

#define HW_RTC_ALARM                HW(RTC_ALARM)
#define HWA_RTC_ALARM               (0x8005c000 + 0x40)
#define HWT_RTC_ALARM               HWIO_32_RW
#define HWN_RTC_ALARM               RTC_ALARM
#define HWI_RTC_ALARM               
#define HW_RTC_ALARM_SET            HW(RTC_ALARM_SET)
#define HWA_RTC_ALARM_SET           (HWA_RTC_ALARM + 0x4)
#define HWT_RTC_ALARM_SET           HWIO_32_WO
#define HWN_RTC_ALARM_SET           RTC_ALARM
#define HWI_RTC_ALARM_SET           
#define HW_RTC_ALARM_CLR            HW(RTC_ALARM_CLR)
#define HWA_RTC_ALARM_CLR           (HWA_RTC_ALARM + 0x8)
#define HWT_RTC_ALARM_CLR           HWIO_32_WO
#define HWN_RTC_ALARM_CLR           RTC_ALARM
#define HWI_RTC_ALARM_CLR           
#define HW_RTC_ALARM_TOG            HW(RTC_ALARM_TOG)
#define HWA_RTC_ALARM_TOG           (HWA_RTC_ALARM + 0xc)
#define HWT_RTC_ALARM_TOG           HWIO_32_WO
#define HWN_RTC_ALARM_TOG           RTC_ALARM
#define HWI_RTC_ALARM_TOG           
#define BP_RTC_ALARM_VALUE          0
#define BM_RTC_ALARM_VALUE          0xffffffff
#define BF_RTC_ALARM_VALUE(v)       (((v) & 0xffffffff) << 0)
#define BFM_RTC_ALARM_VALUE(v)      BM_RTC_ALARM_VALUE
#define BF_RTC_ALARM_VALUE_V(e)     BF_RTC_ALARM_VALUE(BV_RTC_ALARM_VALUE__##e)
#define BFM_RTC_ALARM_VALUE_V(v)    BM_RTC_ALARM_VALUE

#define HW_RTC_WATCHDOG             HW(RTC_WATCHDOG)
#define HWA_RTC_WATCHDOG            (0x8005c000 + 0x50)
#define HWT_RTC_WATCHDOG            HWIO_32_RW
#define HWN_RTC_WATCHDOG            RTC_WATCHDOG
#define HWI_RTC_WATCHDOG            
#define HW_RTC_WATCHDOG_SET         HW(RTC_WATCHDOG_SET)
#define HWA_RTC_WATCHDOG_SET        (HWA_RTC_WATCHDOG + 0x4)
#define HWT_RTC_WATCHDOG_SET        HWIO_32_WO
#define HWN_RTC_WATCHDOG_SET        RTC_WATCHDOG
#define HWI_RTC_WATCHDOG_SET        
#define HW_RTC_WATCHDOG_CLR         HW(RTC_WATCHDOG_CLR)
#define HWA_RTC_WATCHDOG_CLR        (HWA_RTC_WATCHDOG + 0x8)
#define HWT_RTC_WATCHDOG_CLR        HWIO_32_WO
#define HWN_RTC_WATCHDOG_CLR        RTC_WATCHDOG
#define HWI_RTC_WATCHDOG_CLR        
#define HW_RTC_WATCHDOG_TOG         HW(RTC_WATCHDOG_TOG)
#define HWA_RTC_WATCHDOG_TOG        (HWA_RTC_WATCHDOG + 0xc)
#define HWT_RTC_WATCHDOG_TOG        HWIO_32_WO
#define HWN_RTC_WATCHDOG_TOG        RTC_WATCHDOG
#define HWI_RTC_WATCHDOG_TOG        
#define BP_RTC_WATCHDOG_COUNT       0
#define BM_RTC_WATCHDOG_COUNT       0xffffffff
#define BF_RTC_WATCHDOG_COUNT(v)    (((v) & 0xffffffff) << 0)
#define BFM_RTC_WATCHDOG_COUNT(v)   BM_RTC_WATCHDOG_COUNT
#define BF_RTC_WATCHDOG_COUNT_V(e)  BF_RTC_WATCHDOG_COUNT(BV_RTC_WATCHDOG_COUNT__##e)
#define BFM_RTC_WATCHDOG_COUNT_V(v) BM_RTC_WATCHDOG_COUNT

#define HW_RTC_PERSISTENT0                                  HW(RTC_PERSISTENT0)
#define HWA_RTC_PERSISTENT0                                 (0x8005c000 + 0x60)
#define HWT_RTC_PERSISTENT0                                 HWIO_32_RW
#define HWN_RTC_PERSISTENT0                                 RTC_PERSISTENT0
#define HWI_RTC_PERSISTENT0                                 
#define HW_RTC_PERSISTENT0_SET                              HW(RTC_PERSISTENT0_SET)
#define HWA_RTC_PERSISTENT0_SET                             (HWA_RTC_PERSISTENT0 + 0x4)
#define HWT_RTC_PERSISTENT0_SET                             HWIO_32_WO
#define HWN_RTC_PERSISTENT0_SET                             RTC_PERSISTENT0
#define HWI_RTC_PERSISTENT0_SET                             
#define HW_RTC_PERSISTENT0_CLR                              HW(RTC_PERSISTENT0_CLR)
#define HWA_RTC_PERSISTENT0_CLR                             (HWA_RTC_PERSISTENT0 + 0x8)
#define HWT_RTC_PERSISTENT0_CLR                             HWIO_32_WO
#define HWN_RTC_PERSISTENT0_CLR                             RTC_PERSISTENT0
#define HWI_RTC_PERSISTENT0_CLR                             
#define HW_RTC_PERSISTENT0_TOG                              HW(RTC_PERSISTENT0_TOG)
#define HWA_RTC_PERSISTENT0_TOG                             (HWA_RTC_PERSISTENT0 + 0xc)
#define HWT_RTC_PERSISTENT0_TOG                             HWIO_32_WO
#define HWN_RTC_PERSISTENT0_TOG                             RTC_PERSISTENT0
#define HWI_RTC_PERSISTENT0_TOG                             
#define BP_RTC_PERSISTENT0_GENERAL                          16
#define BM_RTC_PERSISTENT0_GENERAL                          0xffff0000
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_BOOT              0x8000
#define BV_RTC_PERSISTENT0_GENERAL__ENUMERATE_500MA_TWICE   0x4000
#define BV_RTC_PERSISTENT0_GENERAL__USB_BOOT_PLAYER_MODE    0x2000
#define BV_RTC_PERSISTENT0_GENERAL__SKIP_CHECKDISK          0x1000
#define BV_RTC_PERSISTENT0_GENERAL__USB_LOW_POWER_MODE      0x800
#define BV_RTC_PERSISTENT0_GENERAL__OTG_HNP_BIT             0x400
#define BV_RTC_PERSISTENT0_GENERAL__OTG_ATL_ROLE_BIT        0x200
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_CS_HI             0x100
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_CS_LO             0x80
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_NDX_3             0x40
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_NDX_2             0x20
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_NDX_1             0x10
#define BV_RTC_PERSISTENT0_GENERAL__SDRAM_NDX_0             0x8
#define BV_RTC_PERSISTENT0_GENERAL__ETM_ENABLE              0x4
#define BF_RTC_PERSISTENT0_GENERAL(v)                       (((v) & 0xffff) << 16)
#define BFM_RTC_PERSISTENT0_GENERAL(v)                      BM_RTC_PERSISTENT0_GENERAL
#define BF_RTC_PERSISTENT0_GENERAL_V(e)                     BF_RTC_PERSISTENT0_GENERAL(BV_RTC_PERSISTENT0_GENERAL__##e)
#define BFM_RTC_PERSISTENT0_GENERAL_V(v)                    BM_RTC_PERSISTENT0_GENERAL
#define BP_RTC_PERSISTENT0_DCDC_CTRL                        6
#define BM_RTC_PERSISTENT0_DCDC_CTRL                        0xffc0
#define BV_RTC_PERSISTENT0_DCDC_CTRL__SD_PRESENT            0x200
#define BV_RTC_PERSISTENT0_DCDC_CTRL__LOWBAT_3P0            0x100
#define BV_RTC_PERSISTENT0_DCDC_CTRL__SELFBIAS_PWRUP        0x80
#define BV_RTC_PERSISTENT0_DCDC_CTRL__AUTO_RESTART          0x40
#define BV_RTC_PERSISTENT0_DCDC_CTRL__DETECT_LOWBAT         0x20
#define BV_RTC_PERSISTENT0_DCDC_CTRL__DROP_BIAS1            0x10
#define BV_RTC_PERSISTENT0_DCDC_CTRL__DROP_BIAS2            0x8
#define BV_RTC_PERSISTENT0_DCDC_CTRL__SPARE                 0x4
#define BV_RTC_PERSISTENT0_DCDC_CTRL__DISABLE_XTALSTOP      0x2
#define BV_RTC_PERSISTENT0_DCDC_CTRL__SPARE2                0x1
#define BF_RTC_PERSISTENT0_DCDC_CTRL(v)                     (((v) & 0x3ff) << 6)
#define BFM_RTC_PERSISTENT0_DCDC_CTRL(v)                    BM_RTC_PERSISTENT0_DCDC_CTRL
#define BF_RTC_PERSISTENT0_DCDC_CTRL_V(e)                   BF_RTC_PERSISTENT0_DCDC_CTRL(BV_RTC_PERSISTENT0_DCDC_CTRL__##e)
#define BFM_RTC_PERSISTENT0_DCDC_CTRL_V(v)                  BM_RTC_PERSISTENT0_DCDC_CTRL
#define BP_RTC_PERSISTENT0_XTAL32_PDOWN                     5
#define BM_RTC_PERSISTENT0_XTAL32_PDOWN                     0x20
#define BF_RTC_PERSISTENT0_XTAL32_PDOWN(v)                  (((v) & 0x1) << 5)
#define BFM_RTC_PERSISTENT0_XTAL32_PDOWN(v)                 BM_RTC_PERSISTENT0_XTAL32_PDOWN
#define BF_RTC_PERSISTENT0_XTAL32_PDOWN_V(e)                BF_RTC_PERSISTENT0_XTAL32_PDOWN(BV_RTC_PERSISTENT0_XTAL32_PDOWN__##e)
#define BFM_RTC_PERSISTENT0_XTAL32_PDOWN_V(v)               BM_RTC_PERSISTENT0_XTAL32_PDOWN
#define BP_RTC_PERSISTENT0_XTAL24_PDOWN                     4
#define BM_RTC_PERSISTENT0_XTAL24_PDOWN                     0x10
#define BF_RTC_PERSISTENT0_XTAL24_PDOWN(v)                  (((v) & 0x1) << 4)
#define BFM_RTC_PERSISTENT0_XTAL24_PDOWN(v)                 BM_RTC_PERSISTENT0_XTAL24_PDOWN
#define BF_RTC_PERSISTENT0_XTAL24_PDOWN_V(e)                BF_RTC_PERSISTENT0_XTAL24_PDOWN(BV_RTC_PERSISTENT0_XTAL24_PDOWN__##e)
#define BFM_RTC_PERSISTENT0_XTAL24_PDOWN_V(v)               BM_RTC_PERSISTENT0_XTAL24_PDOWN
#define BP_RTC_PERSISTENT0_ALARM_WAKE_EN                    3
#define BM_RTC_PERSISTENT0_ALARM_WAKE_EN                    0x8
#define BF_RTC_PERSISTENT0_ALARM_WAKE_EN(v)                 (((v) & 0x1) << 3)
#define BFM_RTC_PERSISTENT0_ALARM_WAKE_EN(v)                BM_RTC_PERSISTENT0_ALARM_WAKE_EN
#define BF_RTC_PERSISTENT0_ALARM_WAKE_EN_V(e)               BF_RTC_PERSISTENT0_ALARM_WAKE_EN(BV_RTC_PERSISTENT0_ALARM_WAKE_EN__##e)
#define BFM_RTC_PERSISTENT0_ALARM_WAKE_EN_V(v)              BM_RTC_PERSISTENT0_ALARM_WAKE_EN
#define BP_RTC_PERSISTENT0_ALARM_EN                         2
#define BM_RTC_PERSISTENT0_ALARM_EN                         0x4
#define BF_RTC_PERSISTENT0_ALARM_EN(v)                      (((v) & 0x1) << 2)
#define BFM_RTC_PERSISTENT0_ALARM_EN(v)                     BM_RTC_PERSISTENT0_ALARM_EN
#define BF_RTC_PERSISTENT0_ALARM_EN_V(e)                    BF_RTC_PERSISTENT0_ALARM_EN(BV_RTC_PERSISTENT0_ALARM_EN__##e)
#define BFM_RTC_PERSISTENT0_ALARM_EN_V(v)                   BM_RTC_PERSISTENT0_ALARM_EN
#define BP_RTC_PERSISTENT0_ALARM_WAKE                       1
#define BM_RTC_PERSISTENT0_ALARM_WAKE                       0x2
#define BF_RTC_PERSISTENT0_ALARM_WAKE(v)                    (((v) & 0x1) << 1)
#define BFM_RTC_PERSISTENT0_ALARM_WAKE(v)                   BM_RTC_PERSISTENT0_ALARM_WAKE
#define BF_RTC_PERSISTENT0_ALARM_WAKE_V(e)                  BF_RTC_PERSISTENT0_ALARM_WAKE(BV_RTC_PERSISTENT0_ALARM_WAKE__##e)
#define BFM_RTC_PERSISTENT0_ALARM_WAKE_V(v)                 BM_RTC_PERSISTENT0_ALARM_WAKE
#define BP_RTC_PERSISTENT0_CLOCKSOURCE                      0
#define BM_RTC_PERSISTENT0_CLOCKSOURCE                      0x1
#define BF_RTC_PERSISTENT0_CLOCKSOURCE(v)                   (((v) & 0x1) << 0)
#define BFM_RTC_PERSISTENT0_CLOCKSOURCE(v)                  BM_RTC_PERSISTENT0_CLOCKSOURCE
#define BF_RTC_PERSISTENT0_CLOCKSOURCE_V(e)                 BF_RTC_PERSISTENT0_CLOCKSOURCE(BV_RTC_PERSISTENT0_CLOCKSOURCE__##e)
#define BFM_RTC_PERSISTENT0_CLOCKSOURCE_V(v)                BM_RTC_PERSISTENT0_CLOCKSOURCE

#define HW_RTC_PERSISTENT1                  HW(RTC_PERSISTENT1)
#define HWA_RTC_PERSISTENT1                 (0x8005c000 + 0x70)
#define HWT_RTC_PERSISTENT1                 HWIO_32_RW
#define HWN_RTC_PERSISTENT1                 RTC_PERSISTENT1
#define HWI_RTC_PERSISTENT1                 
#define HW_RTC_PERSISTENT1_SET              HW(RTC_PERSISTENT1_SET)
#define HWA_RTC_PERSISTENT1_SET             (HWA_RTC_PERSISTENT1 + 0x4)
#define HWT_RTC_PERSISTENT1_SET             HWIO_32_WO
#define HWN_RTC_PERSISTENT1_SET             RTC_PERSISTENT1
#define HWI_RTC_PERSISTENT1_SET             
#define HW_RTC_PERSISTENT1_CLR              HW(RTC_PERSISTENT1_CLR)
#define HWA_RTC_PERSISTENT1_CLR             (HWA_RTC_PERSISTENT1 + 0x8)
#define HWT_RTC_PERSISTENT1_CLR             HWIO_32_WO
#define HWN_RTC_PERSISTENT1_CLR             RTC_PERSISTENT1
#define HWI_RTC_PERSISTENT1_CLR             
#define HW_RTC_PERSISTENT1_TOG              HW(RTC_PERSISTENT1_TOG)
#define HWA_RTC_PERSISTENT1_TOG             (HWA_RTC_PERSISTENT1 + 0xc)
#define HWT_RTC_PERSISTENT1_TOG             HWIO_32_WO
#define HWN_RTC_PERSISTENT1_TOG             RTC_PERSISTENT1
#define HWI_RTC_PERSISTENT1_TOG             
#define BP_RTC_PERSISTENT1_GENERAL          0
#define BM_RTC_PERSISTENT1_GENERAL          0xffffffff
#define BF_RTC_PERSISTENT1_GENERAL(v)       (((v) & 0xffffffff) << 0)
#define BFM_RTC_PERSISTENT1_GENERAL(v)      BM_RTC_PERSISTENT1_GENERAL
#define BF_RTC_PERSISTENT1_GENERAL_V(e)     BF_RTC_PERSISTENT1_GENERAL(BV_RTC_PERSISTENT1_GENERAL__##e)
#define BFM_RTC_PERSISTENT1_GENERAL_V(v)    BM_RTC_PERSISTENT1_GENERAL

#define HW_RTC_PERSISTENT2                      HW(RTC_PERSISTENT2)
#define HWA_RTC_PERSISTENT2                     (0x8005c000 + 0x80)
#define HWT_RTC_PERSISTENT2                     HWIO_32_RW
#define HWN_RTC_PERSISTENT2                     RTC_PERSISTENT2
#define HWI_RTC_PERSISTENT2                     
#define HW_RTC_PERSISTENT2_SET                  HW(RTC_PERSISTENT2_SET)
#define HWA_RTC_PERSISTENT2_SET                 (HWA_RTC_PERSISTENT2 + 0x4)
#define HWT_RTC_PERSISTENT2_SET                 HWIO_32_WO
#define HWN_RTC_PERSISTENT2_SET                 RTC_PERSISTENT2
#define HWI_RTC_PERSISTENT2_SET                 
#define HW_RTC_PERSISTENT2_CLR                  HW(RTC_PERSISTENT2_CLR)
#define HWA_RTC_PERSISTENT2_CLR                 (HWA_RTC_PERSISTENT2 + 0x8)
#define HWT_RTC_PERSISTENT2_CLR                 HWIO_32_WO
#define HWN_RTC_PERSISTENT2_CLR                 RTC_PERSISTENT2
#define HWI_RTC_PERSISTENT2_CLR                 
#define HW_RTC_PERSISTENT2_TOG                  HW(RTC_PERSISTENT2_TOG)
#define HWA_RTC_PERSISTENT2_TOG                 (HWA_RTC_PERSISTENT2 + 0xc)
#define HWT_RTC_PERSISTENT2_TOG                 HWIO_32_WO
#define HWN_RTC_PERSISTENT2_TOG                 RTC_PERSISTENT2
#define HWI_RTC_PERSISTENT2_TOG                 
#define BP_RTC_PERSISTENT2_SRAM_LO              0
#define BM_RTC_PERSISTENT2_SRAM_LO              0xffffffff
#define BV_RTC_PERSISTENT2_SRAM_LO__WARM_BOOT   0x80000000
#define BF_RTC_PERSISTENT2_SRAM_LO(v)           (((v) & 0xffffffff) << 0)
#define BFM_RTC_PERSISTENT2_SRAM_LO(v)          BM_RTC_PERSISTENT2_SRAM_LO
#define BF_RTC_PERSISTENT2_SRAM_LO_V(e)         BF_RTC_PERSISTENT2_SRAM_LO(BV_RTC_PERSISTENT2_SRAM_LO__##e)
#define BFM_RTC_PERSISTENT2_SRAM_LO_V(v)        BM_RTC_PERSISTENT2_SRAM_LO

#define HW_RTC_PERSISTENT3                  HW(RTC_PERSISTENT3)
#define HWA_RTC_PERSISTENT3                 (0x8005c000 + 0x90)
#define HWT_RTC_PERSISTENT3                 HWIO_32_RW
#define HWN_RTC_PERSISTENT3                 RTC_PERSISTENT3
#define HWI_RTC_PERSISTENT3                 
#define HW_RTC_PERSISTENT3_SET              HW(RTC_PERSISTENT3_SET)
#define HWA_RTC_PERSISTENT3_SET             (HWA_RTC_PERSISTENT3 + 0x4)
#define HWT_RTC_PERSISTENT3_SET             HWIO_32_WO
#define HWN_RTC_PERSISTENT3_SET             RTC_PERSISTENT3
#define HWI_RTC_PERSISTENT3_SET             
#define HW_RTC_PERSISTENT3_CLR              HW(RTC_PERSISTENT3_CLR)
#define HWA_RTC_PERSISTENT3_CLR             (HWA_RTC_PERSISTENT3 + 0x8)
#define HWT_RTC_PERSISTENT3_CLR             HWIO_32_WO
#define HWN_RTC_PERSISTENT3_CLR             RTC_PERSISTENT3
#define HWI_RTC_PERSISTENT3_CLR             
#define HW_RTC_PERSISTENT3_TOG              HW(RTC_PERSISTENT3_TOG)
#define HWA_RTC_PERSISTENT3_TOG             (HWA_RTC_PERSISTENT3 + 0xc)
#define HWT_RTC_PERSISTENT3_TOG             HWIO_32_WO
#define HWN_RTC_PERSISTENT3_TOG             RTC_PERSISTENT3
#define HWI_RTC_PERSISTENT3_TOG             
#define BP_RTC_PERSISTENT3_SRAM_HI          0
#define BM_RTC_PERSISTENT3_SRAM_HI          0xffffffff
#define BF_RTC_PERSISTENT3_SRAM_HI(v)       (((v) & 0xffffffff) << 0)
#define BFM_RTC_PERSISTENT3_SRAM_HI(v)      BM_RTC_PERSISTENT3_SRAM_HI
#define BF_RTC_PERSISTENT3_SRAM_HI_V(e)     BF_RTC_PERSISTENT3_SRAM_HI(BV_RTC_PERSISTENT3_SRAM_HI__##e)
#define BFM_RTC_PERSISTENT3_SRAM_HI_V(v)    BM_RTC_PERSISTENT3_SRAM_HI

#define HW_RTC_DEBUG                            HW(RTC_DEBUG)
#define HWA_RTC_DEBUG                           (0x8005c000 + 0xa0)
#define HWT_RTC_DEBUG                           HWIO_32_RW
#define HWN_RTC_DEBUG                           RTC_DEBUG
#define HWI_RTC_DEBUG                           
#define HW_RTC_DEBUG_SET                        HW(RTC_DEBUG_SET)
#define HWA_RTC_DEBUG_SET                       (HWA_RTC_DEBUG + 0x4)
#define HWT_RTC_DEBUG_SET                       HWIO_32_WO
#define HWN_RTC_DEBUG_SET                       RTC_DEBUG
#define HWI_RTC_DEBUG_SET                       
#define HW_RTC_DEBUG_CLR                        HW(RTC_DEBUG_CLR)
#define HWA_RTC_DEBUG_CLR                       (HWA_RTC_DEBUG + 0x8)
#define HWT_RTC_DEBUG_CLR                       HWIO_32_WO
#define HWN_RTC_DEBUG_CLR                       RTC_DEBUG
#define HWI_RTC_DEBUG_CLR                       
#define HW_RTC_DEBUG_TOG                        HW(RTC_DEBUG_TOG)
#define HWA_RTC_DEBUG_TOG                       (HWA_RTC_DEBUG + 0xc)
#define HWT_RTC_DEBUG_TOG                       HWIO_32_WO
#define HWN_RTC_DEBUG_TOG                       RTC_DEBUG
#define HWI_RTC_DEBUG_TOG                       
#define BP_RTC_DEBUG_WATCHDOG_RESET_MASK        1
#define BM_RTC_DEBUG_WATCHDOG_RESET_MASK        0x2
#define BF_RTC_DEBUG_WATCHDOG_RESET_MASK(v)     (((v) & 0x1) << 1)
#define BFM_RTC_DEBUG_WATCHDOG_RESET_MASK(v)    BM_RTC_DEBUG_WATCHDOG_RESET_MASK
#define BF_RTC_DEBUG_WATCHDOG_RESET_MASK_V(e)   BF_RTC_DEBUG_WATCHDOG_RESET_MASK(BV_RTC_DEBUG_WATCHDOG_RESET_MASK__##e)
#define BFM_RTC_DEBUG_WATCHDOG_RESET_MASK_V(v)  BM_RTC_DEBUG_WATCHDOG_RESET_MASK
#define BP_RTC_DEBUG_WATCHDOG_RESET             0
#define BM_RTC_DEBUG_WATCHDOG_RESET             0x1
#define BF_RTC_DEBUG_WATCHDOG_RESET(v)          (((v) & 0x1) << 0)
#define BFM_RTC_DEBUG_WATCHDOG_RESET(v)         BM_RTC_DEBUG_WATCHDOG_RESET
#define BF_RTC_DEBUG_WATCHDOG_RESET_V(e)        BF_RTC_DEBUG_WATCHDOG_RESET(BV_RTC_DEBUG_WATCHDOG_RESET__##e)
#define BFM_RTC_DEBUG_WATCHDOG_RESET_V(v)       BM_RTC_DEBUG_WATCHDOG_RESET

#define HW_RTC_UNLOCK           HW(RTC_UNLOCK)
#define HWA_RTC_UNLOCK          (0x8005c000 + 0x200)
#define HWT_RTC_UNLOCK          HWIO_32_RW
#define HWN_RTC_UNLOCK          RTC_UNLOCK
#define HWI_RTC_UNLOCK          
#define HW_RTC_UNLOCK_SET       HW(RTC_UNLOCK_SET)
#define HWA_RTC_UNLOCK_SET      (HWA_RTC_UNLOCK + 0x4)
#define HWT_RTC_UNLOCK_SET      HWIO_32_WO
#define HWN_RTC_UNLOCK_SET      RTC_UNLOCK
#define HWI_RTC_UNLOCK_SET      
#define HW_RTC_UNLOCK_CLR       HW(RTC_UNLOCK_CLR)
#define HWA_RTC_UNLOCK_CLR      (HWA_RTC_UNLOCK + 0x8)
#define HWT_RTC_UNLOCK_CLR      HWIO_32_WO
#define HWN_RTC_UNLOCK_CLR      RTC_UNLOCK
#define HWI_RTC_UNLOCK_CLR      
#define HW_RTC_UNLOCK_TOG       HW(RTC_UNLOCK_TOG)
#define HWA_RTC_UNLOCK_TOG      (HWA_RTC_UNLOCK + 0xc)
#define HWT_RTC_UNLOCK_TOG      HWIO_32_WO
#define HWN_RTC_UNLOCK_TOG      RTC_UNLOCK
#define HWI_RTC_UNLOCK_TOG      
#define BP_RTC_UNLOCK_KEY       0
#define BM_RTC_UNLOCK_KEY       0xffffffff
#define BV_RTC_UNLOCK_KEY__VAL  0xc6a83957
#define BF_RTC_UNLOCK_KEY(v)    (((v) & 0xffffffff) << 0)
#define BFM_RTC_UNLOCK_KEY(v)   BM_RTC_UNLOCK_KEY
#define BF_RTC_UNLOCK_KEY_V(e)  BF_RTC_UNLOCK_KEY(BV_RTC_UNLOCK_KEY__##e)
#define BFM_RTC_UNLOCK_KEY_V(v) BM_RTC_UNLOCK_KEY

#define HW_RTC_LASERFUSEn(_n1)          HW(RTC_LASERFUSEn(_n1))
#define HWA_RTC_LASERFUSEn(_n1)         (0x8005c000 + 0x300 + (_n1) * 0x10)
#define HWT_RTC_LASERFUSEn(_n1)         HWIO_32_RW
#define HWN_RTC_LASERFUSEn(_n1)         RTC_LASERFUSEn
#define HWI_RTC_LASERFUSEn(_n1)         (_n1)
#define HW_RTC_LASERFUSEn_SET(_n1)      HW(RTC_LASERFUSEn_SET(_n1))
#define HWA_RTC_LASERFUSEn_SET(_n1)     (HWA_RTC_LASERFUSEn(_n1) + 0x4)
#define HWT_RTC_LASERFUSEn_SET(_n1)     HWIO_32_WO
#define HWN_RTC_LASERFUSEn_SET(_n1)     RTC_LASERFUSEn
#define HWI_RTC_LASERFUSEn_SET(_n1)     (_n1)
#define HW_RTC_LASERFUSEn_CLR(_n1)      HW(RTC_LASERFUSEn_CLR(_n1))
#define HWA_RTC_LASERFUSEn_CLR(_n1)     (HWA_RTC_LASERFUSEn(_n1) + 0x8)
#define HWT_RTC_LASERFUSEn_CLR(_n1)     HWIO_32_WO
#define HWN_RTC_LASERFUSEn_CLR(_n1)     RTC_LASERFUSEn
#define HWI_RTC_LASERFUSEn_CLR(_n1)     (_n1)
#define HW_RTC_LASERFUSEn_TOG(_n1)      HW(RTC_LASERFUSEn_TOG(_n1))
#define HWA_RTC_LASERFUSEn_TOG(_n1)     (HWA_RTC_LASERFUSEn(_n1) + 0xc)
#define HWT_RTC_LASERFUSEn_TOG(_n1)     HWIO_32_WO
#define HWN_RTC_LASERFUSEn_TOG(_n1)     RTC_LASERFUSEn
#define HWI_RTC_LASERFUSEn_TOG(_n1)     (_n1)
#define BP_RTC_LASERFUSEn_BITS          0
#define BM_RTC_LASERFUSEn_BITS          0xffffffff
#define BF_RTC_LASERFUSEn_BITS(v)       (((v) & 0xffffffff) << 0)
#define BFM_RTC_LASERFUSEn_BITS(v)      BM_RTC_LASERFUSEn_BITS
#define BF_RTC_LASERFUSEn_BITS_V(e)     BF_RTC_LASERFUSEn_BITS(BV_RTC_LASERFUSEn_BITS__##e)
#define BFM_RTC_LASERFUSEn_BITS_V(v)    BM_RTC_LASERFUSEn_BITS

#endif /* __HEADERGEN_STMP3600_RTC_H__*/