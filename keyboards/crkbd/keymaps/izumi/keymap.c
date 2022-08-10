#include QMK_KEYBOARD_H
#include <stdio.h>

/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2022 Ian Hong @ianfromdover

Todo:
mac copy and paste (test windows copy and paste native works yet or not)
update kmonad with the same changes and rename the files to just launch with iz command.

Layers:
0, 7 base clmk
1, 8 nav
2, 9 num
3, 10 code
4, 11 fps
5, 12 sys
6, 13 oneshot
*/

#define MACRO_DELAY 20

enum custom_keycodes {
  SAFARI_M = SAFE_RANGE,
  NOTION_M,
  TELEGR_M,
  TXTEDT_M,
  TERMNL_M,
  FIGMA_M,
  MUSIC_M,
  MAIL_M,
  
  SSFULL_M,
  SSLASO_M,
  EMOJI_M
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // CLMK Layer Mac
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
 LT(5, KC_NO),    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,  KC_U,  KC_Y, KC_QUOT, LT(5, KC_NO),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,     KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,  KC_E,  KC_I, KC_O,    OSL(6),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  KC_CAPS, LCTL_T(KC_Z), LALT_T(KC_X), KC_C, KC_D,    KC_V,               KC_K, KC_H, KC_COMM, RALT_T(KC_DOT), RCTL_T(KC_SLSH), TG(4),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                       OSM(MOD_LSFT), LT(2, KC_BSPC), LT(3, KC_ESC),     KC_ENT, LT(1, KC_SPC), RGUI_T(KC_DEL)
                                      //`--------------------------'  `--------------------------'
  ),

  // NAV Layer
  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
KC_NO, G(KC_GRV), G(KC_TAB), G(KC_LEFT), G(KC_RGHT), KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   G(KC_LBRC), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, G(KC_RBRC),                     KC_NO,   KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, KC_NO, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), KC_NO,                          KC_NO,   KC_WH_D, KC_WH_U, KC_NO,   KC_NO,   KC_NO, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TAB,  KC_BSPC,  KC_ESC,     KC_NO,  KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  // NUM Layer
  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_ASTR, KC_7,    KC_8,    KC_9,    KC_SLSH, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,                        KC_PLUS, KC_4,    KC_5,    KC_6,    KC_0,    KC_EQL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_DLR,  KC_1,    KC_2,    KC_3,    KC_PERC, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,   KC_NO,      KC_MINS, KC_SPC,  KC_DOT
                                      //`--------------------------'  `--------------------------'
  ),

  // CODE Layer
  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_LT,   KC_LBRC, KC_RBRC, KC_GT,   KC_NO, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,                        KC_PLUS, KC_COLN, KC_LPRN, KC_RPRN, KC_SCLN, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_DQUO, KC_AMPR, KC_PIPE, KC_BSLS, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,    KC_NO,     KC_UNDS, KC_SPC,  KC_GRV
                                      //`--------------------------'  `--------------------------'
  ),


  // FPS Layer
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_1,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_3,    KC_WH_D, KC_MS_U, KC_WH_U, KC_6,    KC_7, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_2,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_4,    KC_MS_L, KC_MS_D, KC_MS_R, KC_8,    KC_9, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_5,    KC_WH_L, KC_BTN3, KC_WH_R, KC_0,    KC_TRNS, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, KC_SPC, KC_LGUI,     KC_ENT,  KC_BTN1, KC_BTN2
                                      //`--------------------------'  `--------------------------'
  ),

  // SYS and FN Layer
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,                        KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F11,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,                        KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F10,   KC_F12, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   BL_DEC,  KC_BRID, KC_BRIU, BL_INC,  KC_NO,                        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_MUTE, KC_MPLY, KC_MSTP,     KC_NO,  KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  // One-Shot Layer
  [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_NO,   KC_NO, SGUI(KC_3), SGUI(KC_4), KC_NO,                    KC_NO,  KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   DF(0),   DF(0), C(G(KC_SPC)), C(KC_SPC), KC_NO,                  KC_NO,  SAFARI_M, NOTION_M,TELEGR_M,TXTEDT_M,G(KC_TAB),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,  TERMNL_M, FIGMA_M, MUSIC_M, MAIL_M,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,   KC_NO,       KC_NO,  G(KC_SPC), KC_NO
                                      //`--------------------------'  `--------------------------'
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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

    case TELEGR_M:
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

    case MAIL_M:
      if (record -> event.pressed) {
        SEND_STRING(SS_LGUI(" ") SS_DELAY(MACRO_DELAY) "mai" SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      }
      return true;
  }
  return true;
}
