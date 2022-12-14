/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 37.1.0 Sun Jun 26 23:31:05 2022.
 */

#include <string.h>

#include "rivanna2.h"

static inline uint8_t pack_left_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value << shift) & mask);
}

static inline uint8_t pack_left_shift_u16(
    uint16_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value << shift) & mask);
}

static inline uint8_t pack_right_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value >> shift) & mask);
}

static inline uint8_t pack_right_shift_u16(
    uint16_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value >> shift) & mask);
}

static inline uint8_t unpack_left_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value & mask) << shift);
}

static inline uint16_t unpack_left_shift_u16(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint16_t)((uint16_t)(value & mask) << shift);
}

static inline uint8_t unpack_right_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value & mask) >> shift);
}

static inline uint16_t unpack_right_shift_u16(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint16_t)((uint16_t)(value & mask) >> shift);
}

int rivanna2_power_aux_error_pack(
    uint8_t *dst_p,
    const struct rivanna2_power_aux_error_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u8(src_p->fan_error, 0u, 0x01u);
    dst_p[0] |= pack_left_shift_u8(src_p->brake_light_error, 1u, 0x02u);
    dst_p[0] |= pack_left_shift_u8(src_p->headlight_error, 2u, 0x04u);
    dst_p[0] |= pack_left_shift_u8(src_p->bps_strobe_error, 3u, 0x08u);
    dst_p[0] |= pack_left_shift_u8(src_p->left_turn_error, 4u, 0x10u);
    dst_p[0] |= pack_left_shift_u8(src_p->right_turn_error, 5u, 0x20u);
    dst_p[0] |= pack_left_shift_u8(src_p->bps_error, 6u, 0x40u);

    return (8);
}

int rivanna2_power_aux_error_unpack(
    struct rivanna2_power_aux_error_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->fan_error = unpack_right_shift_u8(src_p[0], 0u, 0x01u);
    dst_p->brake_light_error = unpack_right_shift_u8(src_p[0], 1u, 0x02u);
    dst_p->headlight_error = unpack_right_shift_u8(src_p[0], 2u, 0x04u);
    dst_p->bps_strobe_error = unpack_right_shift_u8(src_p[0], 3u, 0x08u);
    dst_p->left_turn_error = unpack_right_shift_u8(src_p[0], 4u, 0x10u);
    dst_p->right_turn_error = unpack_right_shift_u8(src_p[0], 5u, 0x20u);
    dst_p->bps_error = unpack_right_shift_u8(src_p[0], 6u, 0x40u);

    return (0);
}

uint8_t rivanna2_power_aux_error_fan_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_fan_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_fan_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_brake_light_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_brake_light_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_brake_light_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_headlight_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_headlight_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_headlight_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_bps_strobe_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_bps_strobe_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_bps_strobe_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_left_turn_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_left_turn_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_left_turn_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_right_turn_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_right_turn_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_right_turn_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_power_aux_error_bps_error_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_power_aux_error_bps_error_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_power_aux_error_bps_error_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

int rivanna2_ecu_motor_commands_pack(
    uint8_t *dst_p,
    const struct rivanna2_ecu_motor_commands_t *src_p,
    size_t size)
{
    if (size < 4u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 4);

    dst_p[0] |= pack_left_shift_u16(src_p->throttle, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->throttle, 8u, 0x01u);
    dst_p[1] |= pack_left_shift_u16(src_p->regen, 1u, 0xfeu);
    dst_p[2] |= pack_right_shift_u16(src_p->regen, 7u, 0x03u);
    dst_p[2] |= pack_left_shift_u8(src_p->cruise_control_speed, 2u, 0xfcu);
    dst_p[3] |= pack_right_shift_u8(src_p->cruise_control_speed, 6u, 0x03u);
    dst_p[3] |= pack_left_shift_u8(src_p->cruise_control_en, 2u, 0x04u);
    dst_p[3] |= pack_left_shift_u8(src_p->forward_en, 3u, 0x08u);
    dst_p[3] |= pack_left_shift_u8(src_p->reverse_en, 4u, 0x10u);
    dst_p[3] |= pack_left_shift_u8(src_p->motor_on, 5u, 0x20u);

    return (4);
}

int rivanna2_ecu_motor_commands_unpack(
    struct rivanna2_ecu_motor_commands_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 4u) {
        return (-EINVAL);
    }

    dst_p->throttle = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->throttle |= unpack_left_shift_u16(src_p[1], 8u, 0x01u);
    dst_p->regen = unpack_right_shift_u16(src_p[1], 1u, 0xfeu);
    dst_p->regen |= unpack_left_shift_u16(src_p[2], 7u, 0x03u);
    dst_p->cruise_control_speed = unpack_right_shift_u8(src_p[2], 2u, 0xfcu);
    dst_p->cruise_control_speed |= unpack_left_shift_u8(src_p[3], 6u, 0x03u);
    dst_p->cruise_control_en = unpack_right_shift_u8(src_p[3], 2u, 0x04u);
    dst_p->forward_en = unpack_right_shift_u8(src_p[3], 3u, 0x08u);
    dst_p->reverse_en = unpack_right_shift_u8(src_p[3], 4u, 0x10u);
    dst_p->motor_on = unpack_right_shift_u8(src_p[3], 5u, 0x20u);

    return (0);
}

uint16_t rivanna2_ecu_motor_commands_throttle_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_ecu_motor_commands_throttle_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_throttle_is_in_range(uint16_t value)
{
    return (value <= 256u);
}

uint16_t rivanna2_ecu_motor_commands_regen_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_ecu_motor_commands_regen_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_regen_is_in_range(uint16_t value)
{
    return (value <= 256u);
}

uint8_t rivanna2_ecu_motor_commands_cruise_control_speed_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_motor_commands_cruise_control_speed_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_cruise_control_speed_is_in_range(uint8_t value)
{
    (void)value;

    return (true);
}

uint8_t rivanna2_ecu_motor_commands_cruise_control_en_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_motor_commands_cruise_control_en_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_cruise_control_en_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_motor_commands_forward_en_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_motor_commands_forward_en_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_forward_en_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_motor_commands_reverse_en_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_motor_commands_reverse_en_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_reverse_en_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_motor_commands_motor_on_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_motor_commands_motor_on_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_motor_commands_motor_on_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

int rivanna2_ecu_power_aux_commands_pack(
    uint8_t *dst_p,
    const struct rivanna2_ecu_power_aux_commands_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->hazards, 0u, 0x01u);
    dst_p[0] |= pack_left_shift_u8(src_p->brake_lights, 1u, 0x02u);
    dst_p[0] |= pack_left_shift_u8(src_p->headlights, 2u, 0x04u);
    dst_p[0] |= pack_left_shift_u8(src_p->left_turn_signal, 3u, 0x08u);
    dst_p[0] |= pack_left_shift_u8(src_p->right_turn_signal, 4u, 0x10u);

    return (1);
}

int rivanna2_ecu_power_aux_commands_unpack(
    struct rivanna2_ecu_power_aux_commands_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->hazards = unpack_right_shift_u8(src_p[0], 0u, 0x01u);
    dst_p->brake_lights = unpack_right_shift_u8(src_p[0], 1u, 0x02u);
    dst_p->headlights = unpack_right_shift_u8(src_p[0], 2u, 0x04u);
    dst_p->left_turn_signal = unpack_right_shift_u8(src_p[0], 3u, 0x08u);
    dst_p->right_turn_signal = unpack_right_shift_u8(src_p[0], 4u, 0x10u);

    return (0);
}

uint8_t rivanna2_ecu_power_aux_commands_hazards_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_power_aux_commands_hazards_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_power_aux_commands_hazards_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_power_aux_commands_brake_lights_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_power_aux_commands_brake_lights_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_power_aux_commands_brake_lights_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_power_aux_commands_headlights_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_power_aux_commands_headlights_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_power_aux_commands_headlights_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_power_aux_commands_left_turn_signal_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_power_aux_commands_left_turn_signal_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_power_aux_commands_left_turn_signal_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

uint8_t rivanna2_ecu_power_aux_commands_right_turn_signal_encode(double value)
{
    return (uint8_t)(value);
}

double rivanna2_ecu_power_aux_commands_right_turn_signal_decode(uint8_t value)
{
    return ((double)value);
}

bool rivanna2_ecu_power_aux_commands_right_turn_signal_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

int rivanna2_solar_current_pack(
    uint8_t *dst_p,
    const struct rivanna2_solar_current_t *src_p,
    size_t size)
{
    if (size < 2u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 2);

    dst_p[0] |= pack_left_shift_u16(src_p->total_current, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->total_current, 8u, 0xffu);

    return (2);
}

int rivanna2_solar_current_unpack(
    struct rivanna2_solar_current_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 2u) {
        return (-EINVAL);
    }

    dst_p->total_current = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->total_current |= unpack_left_shift_u16(src_p[1], 8u, 0xffu);

    return (0);
}

uint16_t rivanna2_solar_current_total_current_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_current_total_current_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_current_total_current_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

int rivanna2_solar_voltage_pack(
    uint8_t *dst_p,
    const struct rivanna2_solar_voltage_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u16(src_p->panel1_voltage, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->panel1_voltage, 8u, 0xffu);
    dst_p[2] |= pack_left_shift_u16(src_p->panel2_voltage, 0u, 0xffu);
    dst_p[3] |= pack_right_shift_u16(src_p->panel2_voltage, 8u, 0xffu);
    dst_p[4] |= pack_left_shift_u16(src_p->panel3_voltage, 0u, 0xffu);
    dst_p[5] |= pack_right_shift_u16(src_p->panel3_voltage, 8u, 0xffu);
    dst_p[6] |= pack_left_shift_u16(src_p->panel4_voltage, 0u, 0xffu);
    dst_p[7] |= pack_right_shift_u16(src_p->panel4_voltage, 8u, 0xffu);

    return (8);
}

int rivanna2_solar_voltage_unpack(
    struct rivanna2_solar_voltage_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->panel1_voltage = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->panel1_voltage |= unpack_left_shift_u16(src_p[1], 8u, 0xffu);
    dst_p->panel2_voltage = unpack_right_shift_u16(src_p[2], 0u, 0xffu);
    dst_p->panel2_voltage |= unpack_left_shift_u16(src_p[3], 8u, 0xffu);
    dst_p->panel3_voltage = unpack_right_shift_u16(src_p[4], 0u, 0xffu);
    dst_p->panel3_voltage |= unpack_left_shift_u16(src_p[5], 8u, 0xffu);
    dst_p->panel4_voltage = unpack_right_shift_u16(src_p[6], 0u, 0xffu);
    dst_p->panel4_voltage |= unpack_left_shift_u16(src_p[7], 8u, 0xffu);

    return (0);
}

uint16_t rivanna2_solar_voltage_panel1_voltage_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_voltage_panel1_voltage_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_voltage_panel1_voltage_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_voltage_panel2_voltage_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_voltage_panel2_voltage_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_voltage_panel2_voltage_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_voltage_panel3_voltage_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_voltage_panel3_voltage_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_voltage_panel3_voltage_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_voltage_panel4_voltage_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_voltage_panel4_voltage_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_voltage_panel4_voltage_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

int rivanna2_solar_temp_pack(
    uint8_t *dst_p,
    const struct rivanna2_solar_temp_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u16(src_p->panel1_temp, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->panel1_temp, 8u, 0xffu);
    dst_p[2] |= pack_left_shift_u16(src_p->panel2_temp, 0u, 0xffu);
    dst_p[3] |= pack_right_shift_u16(src_p->panel2_temp, 8u, 0xffu);
    dst_p[4] |= pack_left_shift_u16(src_p->panel3_temp, 0u, 0xffu);
    dst_p[5] |= pack_right_shift_u16(src_p->panel3_temp, 8u, 0xffu);
    dst_p[6] |= pack_left_shift_u16(src_p->panel4_temp, 0u, 0xffu);
    dst_p[7] |= pack_right_shift_u16(src_p->panel4_temp, 8u, 0xffu);

    return (8);
}

int rivanna2_solar_temp_unpack(
    struct rivanna2_solar_temp_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->panel1_temp = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->panel1_temp |= unpack_left_shift_u16(src_p[1], 8u, 0xffu);
    dst_p->panel2_temp = unpack_right_shift_u16(src_p[2], 0u, 0xffu);
    dst_p->panel2_temp |= unpack_left_shift_u16(src_p[3], 8u, 0xffu);
    dst_p->panel3_temp = unpack_right_shift_u16(src_p[4], 0u, 0xffu);
    dst_p->panel3_temp |= unpack_left_shift_u16(src_p[5], 8u, 0xffu);
    dst_p->panel4_temp = unpack_right_shift_u16(src_p[6], 0u, 0xffu);
    dst_p->panel4_temp |= unpack_left_shift_u16(src_p[7], 8u, 0xffu);

    return (0);
}

uint16_t rivanna2_solar_temp_panel1_temp_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_temp_panel1_temp_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_temp_panel1_temp_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_temp_panel2_temp_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_temp_panel2_temp_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_temp_panel2_temp_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_temp_panel3_temp_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_temp_panel3_temp_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_temp_panel3_temp_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_temp_panel4_temp_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_temp_panel4_temp_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_temp_panel4_temp_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

int rivanna2_solar_photo_pack(
    uint8_t *dst_p,
    const struct rivanna2_solar_photo_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u16(src_p->panel1_photo, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->panel1_photo, 8u, 0xffu);
    dst_p[2] |= pack_left_shift_u16(src_p->panel2_photo, 0u, 0xffu);
    dst_p[3] |= pack_right_shift_u16(src_p->panel2_photo, 8u, 0xffu);
    dst_p[4] |= pack_left_shift_u16(src_p->panel3_photo, 0u, 0xffu);
    dst_p[5] |= pack_right_shift_u16(src_p->panel3_photo, 8u, 0xffu);
    dst_p[6] |= pack_left_shift_u16(src_p->panel4_photo, 0u, 0xffu);
    dst_p[7] |= pack_right_shift_u16(src_p->panel4_photo, 8u, 0xffu);

    return (8);
}

int rivanna2_solar_photo_unpack(
    struct rivanna2_solar_photo_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->panel1_photo = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->panel1_photo |= unpack_left_shift_u16(src_p[1], 8u, 0xffu);
    dst_p->panel2_photo = unpack_right_shift_u16(src_p[2], 0u, 0xffu);
    dst_p->panel2_photo |= unpack_left_shift_u16(src_p[3], 8u, 0xffu);
    dst_p->panel3_photo = unpack_right_shift_u16(src_p[4], 0u, 0xffu);
    dst_p->panel3_photo |= unpack_left_shift_u16(src_p[5], 8u, 0xffu);
    dst_p->panel4_photo = unpack_right_shift_u16(src_p[6], 0u, 0xffu);
    dst_p->panel4_photo |= unpack_left_shift_u16(src_p[7], 8u, 0xffu);

    return (0);
}

uint16_t rivanna2_solar_photo_panel1_photo_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_photo_panel1_photo_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_photo_panel1_photo_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_photo_panel2_photo_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_photo_panel2_photo_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_photo_panel2_photo_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_photo_panel3_photo_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_photo_panel3_photo_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_photo_panel3_photo_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}

uint16_t rivanna2_solar_photo_panel4_photo_encode(double value)
{
    return (uint16_t)(value);
}

double rivanna2_solar_photo_panel4_photo_decode(uint16_t value)
{
    return ((double)value);
}

bool rivanna2_solar_photo_panel4_photo_is_in_range(uint16_t value)
{
    (void)value;

    return (true);
}
