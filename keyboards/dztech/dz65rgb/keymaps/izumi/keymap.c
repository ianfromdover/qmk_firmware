#include QMK_KEYBOARD_H

/* Izumi68 Layout v1.0
 * 18 Dec 2022 6.36pm
 * Copyright 2022 Ian Hong @ianfromdover
 * generated from json file
 * media stop == need to manually edit
 *
 * Note: karabiner makes sticky shift malfunction
 *
 * Layers:
 * 0 qwerty
 * 1 canary, main
 * 2 num
 * 3 code
 * 4 nav
 * 5 system, functions
 * 6 mouse
 * 7 one shot
 */

#define MACRO_DELAY 20

enum custom_keycodes {
    // Mac Macros
    SAFARI_M = SAFE_RANGE,
    NOTION_M,
    TELE_M,
    TXTEDT_M,
    TERMNL_M,
    FIGMA_M,
    MUSIC_M,
    SPTFY_M,
    MAIL_M,

    // Win Macros
    CHROME_W,
    NOTION_W,
    TELE_W,
    NOTEPD_W,
    PSHELL_W,
    FIGMA_W,
    MUSIC_W,
    SPTFY_W,
    MAIL_W
};

/* default keymap spacing for reference
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi(
        QK_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, TG(2),
        CTL_T(KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_HOME,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
        KC_LCTL,        KC_LALT, KC_LGUI,                            KC_SPC,                    KC_RGUI, KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT
    )
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // ● ---------- Izumi Layer ---------- ●
    [0] = LAYOUT_65_ansi(
        QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, DF(1), 
        LT(2,KC_TAB), KC_W, KC_L, KC_Y, KC_P, KC_K, KC_Z, KC_F, KC_O, KC_U, KC_QUOT, KC_LBRC, KC_RBRC, A(KC_BSPC), KC_DEL,
        LT(3,KC_CAPS), KC_C, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_A, KC_SCLN, LT(4,KC_ENT), G(KC_TAB), 
        OSM(MOD_LSFT), KC_J, KC_V, KC_D, KC_B, KC_Q, KC_X, KC_H, KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT), KC_UP, G(KC_GRV),
        LM(1, MOD_LCTL), KC_LALT, LM(1, MOD_LGUI),              KC_SPC,         LT(7,LM(1, MOD_LGUI)), LT(5,KC_GRV), TG(6), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // ● ---------- QWERTY Layer ---------- ●
    [1] = LAYOUT_65_ansi(
        QK_GESC,        KC_1,    KC_2,     KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,    KC_EQL,     KC_BSPC, DF(0), 
        KC_TAB,         KC_Q,    KC_W,     KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,    KC_RBRC,    KC_BSLS, KC_DEL,
        KC_CAPS,        KC_A,    KC_S,     KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,                KC_ENT,  G(KC_TAB), 
        KC_LSFT,                 KC_Z,     KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,    KC_DOT,     KC_SLSH, KC_RSFT, KC_UP, G(KC_GRV), 
        KC_LCTL,    KC_LALT, KC_LGUI,                               KC_SPC,                 KC_RGUI, LT(5,KC_GRV), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
    ),


    // ● ---------- Number Layer ---------- ●
    [2] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_DLR, KC_7, KC_8, KC_9, KC_SLSH, _______, _______, _______, _______, 
        _______, KC_LCTL, KC_LGUI, KC_LSFT, _______, _______, KC_PLUS, KC_4, KC_5, KC_6, KC_EQL, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_MINS, KC_1, KC_2, KC_3, KC_DOT, _______, _______, _______, 
        _______, _______, _______,                            _______, KC_0, _______, _______, _______, _______, _______
    ),

    // ● ---------- Code Layer ---------- ●
    [3] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_GRV, KC_LT, KC_LBRC, KC_RBRC, KC_GT, _______, _______, _______, _______, 
        _______, KC_LCTL, KC_LGUI, KC_LSFT, _______, _______, KC_PLUS, KC_COLN, KC_LPRN, KC_RPRN, KC_SCLN, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_UNDS, KC_DQUO, KC_AMPR, KC_PIPE, KC_BSLS, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // ● ---------- Navigation Layer ---------- ●
    [4] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, G(KC_GRV), G(KC_TAB), G(KC_LEFT), G(KC_RGHT), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        G(KC_LBRC), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, G(KC_RBRC), _______, _______, _______, KC_RSFT, KC_RGUI, KC_RALT, _______, _______, 
        _______, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), _______, _______, _______, _______, KC_WH_D, KC_WH_U, _______, _______, _______, 
        // these keycodes dont work: undo cut copy paste, and browser
        _______, _______, _______, _______, KC_RCTL, _______, _______, _______, _______, _______
    ),

    // ● ---------- System, Function Layer ---------- ●
    [5] = LAYOUT_65_ansi(
        QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, XXXXXXX, 
        EE_CLR, RGB_VAD, KC_BRID, KC_BRIU, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, 
        KC_MUTE, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, 
        C(KC_SPC), XXXXXXX, RGB_SPI, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAI, RGB_RMOD,
        CG_NORM, CG_SWAP, XXXXXXX,                   KC_MPLY,           XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUD, RGB_SAD, RGB_HUI
    ),

    // ● ---------- Mouse Layer ---------- ●
    [6] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T, _______, KC_WH_D, KC_MS_U, KC_WH_U, _______, _______, _______, _______, KC_ACL2, 
        _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, _______, _______, KC_ACL1, 
        _______, KC_Z, KC_X, KC_C, KC_V, _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______, _______, KC_ACL0, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // ● ---------- One Shot Layer ---------- ●
    [7] = LAYOUT_65_ansi(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, FIGMA_M, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, SAFARI_M, TELE_M, NOTION_M, TXTEDT_M, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TERMNL_M, MUSIC_M, SPTFY_M, MAIL_M, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,                            G(KC_SPC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // ● ---------- Mac Macros ---------- ●
    case SAFARI_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "saf" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case NOTION_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "not" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case TELE_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "tel" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case TXTEDT_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "text" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case TERMNL_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "ter" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case FIGMA_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "fig" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case MUSIC_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "mus" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case SPTFY_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "spo" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case MAIL_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "mai" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    // ● ---------- Windows Macros ---------- ●
    case CHROME_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "chr" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case NOTION_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "not" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case TELE_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "tele" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case NOTEPD_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "notepa" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case PSHELL_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "powershel" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case FIGMA_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "fig" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case MUSIC_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "itunes" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case SPTFY_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "spo" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    case MAIL_W:
      if (record -> event.pressed) {
        SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(MACRO_DELAY) "outlook" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;

    }
  return true;
}

