/* Copyright 2021 @ Keychron (https://www.keychron.com)
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


enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  SYS
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)
#define KC_LMAC C(G(KC_Q))

enum my_keycodes {
    KC_MCTRL = SAFE_RANGE,
    M_ALT_A,
    M_ALT_E,
    M_ALT_I,
    M_ALT_O,
    M_ALT_U,
    M_ALT_N,
    M_ALT_Q,
    M_ALT_G
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[MAC_BASE] = LAYOUT_ansi_82( 
     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_SLEP,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
     KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_RGUI, MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_82( 
     _______,            KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,
     M_ALT_G,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  _______,  _______,  M_ALT_E,  _______,  _______,  _______,  M_ALT_U,  M_ALT_I,  M_ALT_O,  _______,  _______,  _______,  _______,            _______,
     _______,  M_ALT_A,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_LMAC,  _______,  M_ALT_Q,            _______,            _______,
     _______,            _______,  _______,  _______,  _______,  _______,  M_ALT_N,  _______,  _______,  _______,  _______,            _______,  _______, 
     _______,  _______,  _______,                                _______,                                _______,  _______,  MO(SYS),  _______,  _______,  _______),

[WIN_BASE] = LAYOUT_ansi_82( 
     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_INS,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_82( 
     _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, 
     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

[SYS] = LAYOUT_ansi_82( 
     QK_BOOT,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_ON,    NK_OFF,   NK_TOGG,  _______,  QK_RBT,   _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, 
     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)

};

bool sleptAndRgbMatrixDisabled = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    if (keycode == KC_SLEP) {
        // if putting computer to sleep turn off RGB
        rgb_matrix_disable();

        sleptAndRgbMatrixDisabled = true;
    } else if (sleptAndRgbMatrixDisabled) {
        // turn on leds if previously we disabled it in any other keypresses
        rgb_matrix_enable();

        sleptAndRgbMatrixDisabled = false;
    }

    switch (keycode) {

        case KC_MCTRL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false; /* Skip all further processing of this key */

        case KC_LPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false; /* Skip all further processing of this key */

        case M_ALT_A:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("a"));
            }
            return true;

        case M_ALT_E:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("e"));
            }
            return true;
            
        case M_ALT_I:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("i"));
            }
            return true;
            
        case M_ALT_O:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("o"));
            }
            return true;
            
        case M_ALT_U:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("u"));
            }
            return true;
            
        case M_ALT_N:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("n"));
            }
            return true;
            
        case M_ALT_Q:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("'"));
            }
            return true;
            
        case M_ALT_G:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT("`"));
            }
            return true;

        default:
            return true; /* Process all other keycodes normally */

    }
}