/* Copyright 2021 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 * Copyright 2019 Hiroyuki Okada
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define PLOOPY_DPI_OPTIONS { 300, 500, 800 }
#define PLOOPY_DPI_DEFAULT 1

#define PLOOPY_DRAGSCROLL_DPI 5

// safe range starts at `PLOOPY_SAFE_RANGE` instead.


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_BTN1, DPI_CONFIG, KC_BTN3,
          KC_BTN2, DRAG_SCROLL
    ),
};
