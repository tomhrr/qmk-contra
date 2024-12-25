/* Copyright 2015-2017 Jack Humbert
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


enum planck_layers {
  _QWERTY,
  _COLEMAK,
  _DVORAK,
  _LOWER,
  _RAISE,
  _PLOVER,
  _ADJUST
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  PLOVER,
  LOWER,
  RAISE,
  BACKLIT,
  EXT_PLV
};

const key_override_t no_shift_comm_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COMM);
const key_override_t no_shift_dot_override  = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_DOT);
const key_override_t no_shift_grv_override  = ko_make_basic(MOD_MASK_SHIFT, KC_GRV,  KC_GRV);
const key_override_t no_shift_mins_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_MINS);
const key_override_t no_shift_quot_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_QUOT);
const key_override_t no_shift_eql_override  = ko_make_basic(MOD_MASK_SHIFT, KC_EQL,  KC_EQL);
const key_override_t no_shift_bsls_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS);

const key_override_t *key_overrides[] = {
    &no_shift_comm_override,
    &no_shift_dot_override,
    &no_shift_grv_override,
    &no_shift_mins_override,
    &no_shift_quot_override,
    &no_shift_eql_override,
    &no_shift_bsls_override
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_ortho_4x12(
    KC_ESC  , KC_Q  , KC_W  , KC_E  , KC_R    , KC_T   , KC_Y  , KC_U    , KC_I    , KC_O   , KC_P     , KC_BSPC ,
    KC_NO   , KC_A  , KC_S  , KC_D  , KC_F    , KC_G   , KC_H  , KC_J    , KC_K    , KC_L   , KC_SCLN  , KC_ENT  ,
    KC_NO   , KC_Z  , KC_X  , KC_C  , KC_V    , KC_B   , KC_N  , KC_M    , KC_COMM , KC_DOT , KC_SLASH , KC_NO   ,
    KC_NO   , KC_NO , KC_NO , LOWER , KC_LSFT , KC_SPC , RAISE , KC_RCTL , KC_RALT , KC_NO  , KC_NO    , KC_NO
  ),

  [_RAISE] = LAYOUT_ortho_4x12(
    KC_TAB  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_TILD ,
    KC_NO   , KC_LT   , KC_GT   , KC_MINS , KC_UNDS , KC_QUOT , KC_DQT  , KC_EQL  , KC_PLUS , KC_LBRC , KC_RBRC , KC_BSLS ,
    _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
  ),

  [_LOWER] = LAYOUT_ortho_4x12(
    KC_NO   , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_DEL  ,
    KC_NO   , KC_PIPE , KC_GRV  , KC_NO   , KC_NO   , KC_NO   , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_PGUP , KC_PGDN ,
    _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
  ),

  [_COLEMAK] = LAYOUT_planck_mit(
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_DVORAK] = LAYOUT_planck_mit(
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
    KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT ,
    BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_PLOVER] = LAYOUT_planck_mit(
    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1   ,
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    EXT_PLV, XXXXXXX, XXXXXXX, KC_C,    KC_V,        XXXXXXX,      KC_N,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_ADJUST] = LAYOUT_planck_mit(
    _______, QK_BOOT, DB_TOGG, _______, _______, _______, _______, _______, _______,  _______, _______, KC_DEL ,
    _______, _______, MU_NEXT, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK,  DVORAK,  PLOVER,  _______,
    _______, AU_PREV, AU_NEXT, MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,     _______,      _______, _______,  _______, _______, _______
  )

};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
      } else {
        unregister_code(KC_RSFT);
      }
      return false;
      break;
    case PLOVER:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          stop_all_notes();
          PLAY_SONG(plover_song);
        #endif
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
        if (!eeconfig_is_enabled()) {
            eeconfig_init();
        }
        keymap_config.raw = eeconfig_read_keymap();
        keymap_config.nkro = 1;
        eeconfig_update_keymap(keymap_config.raw);
      }
      return false;
      break;
    case EXT_PLV:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_gb_song);
        #endif
        layer_off(_PLOVER);
      }
      return false;
      break;
  }
  return true;
}
