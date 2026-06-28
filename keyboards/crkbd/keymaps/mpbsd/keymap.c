#include QMK_KEYBOARD_H

/* LAYER TO: LHAND */
#define LLT1 LT(4,KC_Q)
#define LLT2 LT(3,KC_W)
#define LLT3 LT(2,KC_E)
#define LLT4 LT(1,KC_R)
#define LLT5 LT(1,KC_BSPC)
#define LLT6 LT(1,KC_ESC)

/* LAYER TO: RHAND */
#define RLT1 LT(1,KC_U)
#define RLT2 LT(2,KC_I)
#define RLT3 LT(3,KC_O)
#define RLT4 LT(4,KC_P)
#define RLT5 LT(4,KC_SPC)
#define RLT6 LT(4,KC_ENT)

/* HOME ROW MODS: LHAND */
#define LHRM1 MT(MOD_LCTL,KC_A)
#define LHRM2 MT(MOD_LGUI,KC_S)
#define LHRM3 MT(MOD_LALT,KC_D)
#define LHRM4 MT(MOD_LSFT,KC_F)

/* HOME ROW MODS: RHAND */
#define RHRM1 MT(MOD_RSFT,KC_J)
#define RHRM2 MT(MOD_RALT,KC_K)
#define RHRM3 MT(MOD_RGUI,KC_L)
#define RHRM4 MT(MOD_RCTL,KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
      XXXXXXX,  LLT4,  LLT3,  LLT2,    LLT1, KC_T,             KC_Y,    RLT1,    RLT2,   RLT3,    RLT4, XXXXXXX,
      XXXXXXX, LHRM1, LHRM2, LHRM3,   LHRM4, KC_G,             KC_H,   RHRM1,   RHRM2,  RHRM3,   RHRM4, XXXXXXX,
      XXXXXXX,  KC_Z,  KC_X,  KC_C,    KC_V, KC_B,             KC_N,    KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
                                    XXXXXXX, LLT5, LLT6, RLT6, RLT5, XXXXXXX
    ),

    [1] = LAYOUT_split_3x6_3(
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6, KC_7, KC_8, KC_9,    KC_0, XXXXXXX,
      XXXXXXX,  KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PPLS, KC_4, KC_5, KC_6, KC_PAST, XXXXXXX,
      XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PMNS, KC_1, KC_2, KC_3, KC_PSLS, XXXXXXX,
                                          XXXXXXX,  KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX, KC_0
  ),

    [2] = LAYOUT_split_3x6_3(
      XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
      XXXXXXX, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, XXXXXXX,                   KC_MINS,  KC_EQL, KC_NUBS,  KC_GRV, KC_QUOT, XXXXXXX,
      XXXXXXX,   KC_LT, KC_LPRN, KC_RPRN,   KC_GT, XXXXXXX,                   KC_UNDS, KC_PLUS, KC_PIPE, KC_TILD, KC_DQUO, XXXXXXX,
                                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

    [3] = LAYOUT_split_3x6_3(
      XXXXXXX, XXXXXXX, MS_WHLL, MS_WHLU, MS_WHLD, MS_WHLR,                   KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, MS_LEFT,   MS_UP, MS_DOWN, MS_RGHT,                   KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN3, MS_BTN2, MS_BTN1,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

    [4] = LAYOUT_split_3x6_3(
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,                    KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )
};
