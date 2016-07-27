/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __BITMAP_HPP__
#define __BITMAP_HPP__

#include "ui.hpp"

namespace ui {

/* Pixel data within a byte is "reversed": LSB is left-most pixel. */

static constexpr uint8_t bitmap_record_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0xc0, 0x03,
	0xf0, 0x0f,
	0xf8, 0x1f,
	0xf8, 0x1f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xf8, 0x1f,
	0xf8, 0x1f,
	0xf0, 0x0f,
	0xc0, 0x03,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_record {
	{ 16, 16 }, bitmap_record_data
};

static constexpr uint8_t bitmap_stop_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_stop {
	{ 16, 16 }, bitmap_stop_data
};

static constexpr uint8_t bitmap_sleep_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x04,
	0x00, 0x08,
	0x00, 0x18,
	0x00, 0x18,
	0x00, 0x38,
	0x00, 0x3c,
	0x00, 0x3c,
	0x00, 0x3e,
	0x84, 0x1f,
	0xf8, 0x1f,
	0xf0, 0x0f,
	0xc0, 0x03,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_sleep {
	{ 16, 16 }, bitmap_sleep_data
};

static constexpr uint8_t bitmap_camera_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0xcc, 0x03,
	0xe8, 0x07,
	0xfc, 0x3f,
	0x3c, 0x3c,
	0x9c, 0x39,
	0xdc, 0x3b,
	0xdc, 0x3b,
	0x9c, 0x39,
	0x3c, 0x3c,
	0xfc, 0x3f,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_camera {
	{ 16, 16 }, bitmap_camera_data
};

static constexpr uint8_t bitmap_sd_card_ok_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_ok {
	{ 16, 16 }, bitmap_sd_card_ok_data
};

static constexpr uint8_t bitmap_sd_card_unknown_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0x38, 0x1c, 0x98, 0x19, 0xf8, 0x19, 0xf8, 0x1c,
	0x78, 0x1e, 0x78, 0x1e, 0xf8, 0x1f, 0x78, 0x1e,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_unknown {
	{ 16, 16 }, bitmap_sd_card_unknown_data
};

static constexpr uint8_t bitmap_sd_card_error_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0xf8, 0x1f, 0xd8, 0x1b, 0x98, 0x19, 0x38, 0x1c,
	0x78, 0x1e, 0x38, 0x1c, 0x98, 0x19, 0xd8, 0x1b,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_error {
	{ 16, 16 }, bitmap_sd_card_error_data
};

} /* namespace ui */

#endif/*__BITMAP_HPP__*/
