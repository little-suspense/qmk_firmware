/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define LAYER_DMODE         4
#define LAYER_MACRO         5
#define LAYER_KBD_CTRL      6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac 
[0] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      MAC_PRTA,   KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RGUI,   MO(1),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Mac Fn
[1] = LAYOUT_75_ansi(
    DEV_RESET,  KC_BRID,   KC_BRIU,     KC_MCTL,   MAC_SEARCH, MAC_VOICE,  MAC_DND,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,     KC_VOLU,     _______,    _______,    _______,
    DM_RSTP,    DM_PLY1,   DM_PLY2,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                 _______,    _______,
    _______,    _______,   _______,    _______,   _______,    _______,     _______,   RALT(KC_U), _______,     RALT(KC_O),_______,    KC_LPRN,     KC_RPRN,                 _______,    _______, 
    _______,    RALT(KC_A),RALT(KC_S), _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                      OSL(LAYER_MACRO),   _______,
    _______,               _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    MO(LAYER_KBD_CTRL),       _______,    _______,    _______,
    MO(LAYER_MACRO),_______,   _______,                                        _______,                            _______,   _______,    MO(LAYER_MACRO),          _______,    _______,    _______),


// layer win
[2] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      KC_PSCR,    KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LGUI,   KC_LALT,                                         KC_SPC,                             KC_RALT,   MO(3),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer win Fn
[3] = LAYOUT_75_ansi(
    DEV_RESET,  KC_BRID,   KC_BRIU,    _______,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,     KC_VOLU,     _______,     _______,    _______,
    _______,    _______,   _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                  _______,    _______,
    _______,    _______,   _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                  _______,    _______, 
    _______,    _______,   _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                      OSL(LAYER_MACRO),    _______,
    _______,               _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    MO(LAYER_KBD_CTRL),       _______,     _______,    _______,
    MO(LAYER_MACRO),    _______,   _______,                                        _______,                            _______,   _______,    MO(LAYER_MACRO),          _______,     _______,    _______),

// -------------------------- Developer mode 
[LAYER_DMODE] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
  S(KC_GRV),    S(KC_1),    S(KC_2),    S(KC_3),   S(KC_4),    S(KC_5),     S(KC_6),   S(KC_7),    S(KC_8),     S(KC_9),   S(KC_0), S(KC_MINS),   S(KC_EQL),                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                 _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   _______,    _______,                 _______,    _______,    _______),
// -------------------------- Macro layer
// MACRO layer 
[LAYER_MACRO] = LAYOUT_75_ansi(
  DEV_RESET,     KC_F13,     KC_F14,     KC_F15,    KC_F16,     KC_F17,      KC_F18,    KC_F19,     KC_F20,      KC_F21,    KC_F22,     KC_F23,      KC_F24,    _______,    _______,    _______,
    DM_RSTP,    DM_REC1,    DM_REC2,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
TG(LAYER_DMODE),_______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                 _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   _______,    _______,                 _______,    _______,    _______),

// -------------------------- Controll layer 
// Control layer 
[LAYER_KBD_CTRL] = LAYOUT_75_ansi(
    DEV_RESET,  RGB_VAD,   RGB_VAI,    RGB_MOD,   RGB_HUI,    _______,   SLEEP_MODE,  _______,    _______,     _______,   RGB_TOG,    RGB_SPD,     RGB_SPI,    _______,    _______,    BAT_SHOW,
    _______,    SIDE_VAD,  SIDE_VAI,   SIDE_MOD,  SIDE_HUI,   _______,     _______,   _______,    _______,     _______,   _______,    SIDE_SPD,    SIDE_SPI,               _______,    _______,
    _______,    LNK_BLE1,  LNK_BLE2,   LNK_BLE3,  LNK_RF,     LNK_USB,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
    _______,    _______,   _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,               _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                 _______,    _______,    _______,
    _______,    _______,   _______,                                        _______,                            _______,   _______,    _______,                 _______,    _______,    _______)

// --------------------------------------------------------------------------
// TRANSPARENT layer 
/*
[99] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                 _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   _______,    _______,                 _______,    _______,    _______)
*/
};


// --------------------------------------------------------------------------
// Additional processing 
// --------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // check only key with only shift modiefier
    if (IS_QK_MODS(keycode) 
    && (keycode & (QK_LCTL | QK_LSFT | QK_LALT | QK_LGUI)) == QK_LSFT 
    && keycode != QK_LSFT 
    && keycode != QK_RSFT ) 
    {
        uint8_t suppressed_mods = get_mods();
        if (suppressed_mods) 
        {
            if (suppressed_mods & MOD_MASK_CAG) {
                suppressed_mods = 0;    
            } else {
                suppressed_mods &= MOD_MASK_SHIFT;
                del_mods(suppressed_mods);
            }
            if (record->event.pressed)
            {
                if(suppressed_mods)
                    send_keyboard_report();
                register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
                add_mods(suppressed_mods);
            }
            else 
            {
                unregister_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
                if(suppressed_mods)
                {
                    add_mods(suppressed_mods);
                    send_keyboard_report();
                }
            }
            return false;
        }
    }
    return true;
}

// --------------------------------------------------------------------------
