// SPDX-License-Identifier: MIT
// Copyright (c) 2021 The Pybricks Authors

#include <stdint.h>
#include <stdbool.h>
#include <pbio/util.h>
#include <pbio/lwp3.h>
#include <pbdrv/bluetooth.h>

/**
 * LEGO Wireless Protocol v3 Hub Service UUID.
 *
 * 00001623-1212-EFDE-1623-785FEABCD123
 */
const uint8_t pbio_lwp3_hub_service_uuid[] = {
    0x00, 0x00, 0x16, 0x23, 0x12, 0x12, 0xEF, 0xDE,
    0x16, 0x23, 0x78, 0x5F, 0xEA, 0xBC, 0xD1, 0x23,
};

/**
 * LEGO Wireless Protocol v3 Hub Characteristic UUID.
 *
 * 00001624-1212-EFDE-1623-785FEABCD123
 */
const uint8_t pbio_lwp3_hub_char_uuid[] = {
    0x00, 0x00, 0x16, 0x24, 0x12, 0x12, 0xEF, 0xDE,
    0x16, 0x23, 0x78, 0x5F, 0xEA, 0xBC, 0xD1, 0x23,
};
