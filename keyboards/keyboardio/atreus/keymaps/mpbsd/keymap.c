#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      LT(4,KC_Q), LT(3,KC_W), LT(2,KC_E), LT(1,KC_R),    KC_T,                     KC_Y, LT(1,KC_U), LT(2,KC_I), LT(3,KC_O), LT(4,KC_P),
      LCTL(KC_A), LGUI(KC_S), LALT(KC_D), LSFT(KC_F),    KC_G,                     KC_H, RSFT(KC_J), RALT(KC_K), RGUI(KC_L), RCTL(KC_SCLN),
            KC_Z,       KC_X,       KC_C,       KC_V,    KC_B, XXXXXXX, XXXXXXX,   KC_N,       KC_M,    KC_COMM,     KC_DOT,    KC_SLSH,
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, KC_BSPC,  KC_ESC,  KC_ENT, KC_SPC,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    ),

  [1] = LAYOUT(
         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6, KC_7,    KC_8,    KC_9,    KC_0,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, KC_4,    KC_5,    KC_6, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, KC_1,    KC_2,    KC_3, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, KC_0, XXXXXXX, XXXXXXX, XXXXXXX
    ),

  [2] = LAYOUT(
      KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
      KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,   KC_F6,   KC_F11,
      KC_NO,   KC_VOLU, KC_NO,   KC_NO,   QK_BOOT, XXXXXXX, XXXXXXX, KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,
      KC_NO,   KC_VOLD, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  TO(_QW), KC_PSCR, KC_SCRL, KC_PAUS
    )
};
