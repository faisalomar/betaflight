/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>

#include <platform.h>

#include "rx/rx.h"

#include "config/config_master.h"

#ifdef TARGET_CONFIG
// alternative defaults settings for COLIBRI RACE targets
void targetConfiguration(master_t *config)
{
    config->rxConfig.sbus_inversion = 0;
    config->rxConfig.rssi_scale = 19;
    config->rxConfig.serialrx_provider = SERIALRX_SBUS;
}
#endif
