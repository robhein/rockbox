/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2002 by Linus Nielsen Feltzing
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef _POWER_H_
#define _POWER_H_

#define BATTERY_LEVEL_SHUTDOWN (4500000 / BATTERY_SCALE_FACTOR) /* 4.5V */
#define BATTERY_LEVEL_DANGEROUS (4750000 / BATTERY_SCALE_FACTOR) /* 4.75V */
#define BATTERY_LEVEL_FULL (5550000 / BATTERY_SCALE_FACTOR) /* 5.55V */

#define BATTERY_RANGE (BATTERY_LEVEL_FULL - BATTERY_LEVEL_SHUTDOWN)

bool charger_inserted(void);
void charger_enable(bool on);
void ide_power_enable(bool on);

/* Returns battery level in percent */
int battery_level(void);

#endif
