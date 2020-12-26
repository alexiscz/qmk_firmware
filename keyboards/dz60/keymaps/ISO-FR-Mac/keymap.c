#include QMK_KEYBOARD_H
#include "keymap_french_osx.h"

enum {
  DEF = 0,
  DEFWIN,
  WIN,
  FN1,
};

extern rgblight_config_t rgblight_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
    * │ @ │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │     │
    * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
    * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │   │
    * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
    * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ ` │  │
    * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┬──┤
    * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │ rshi│FN│
    * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┼── ┼──┬──┼──┤
    * │     │    │     │                       │alt│ L │ D│ U│ R│
    * └─────┴────┴─────┴───────────────────────┴───┴───┴──┴──┴──┘
    */
    [DEF] = LAYOUT_60_iso_5x1u_split_rshift(
        FR_AT, FR_AMPR,    FR_LEAC,    FR_DQUO,    FR_QUOT,    FR_LPRN,    FR_SECT,    FR_LEGR,    FR_EXLM,    FR_LCCE,    FR_LAGR,    FR_RPRN, FR_MINS,  KC_BSPC,
        KC_TAB,  FR_A,    FR_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    FR_CIRC, FR_DLR,
        KC_CAPS, FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,    FR_L,    FR_M, FR_LUGR, FR_GRV, KC_ENT,
        KC_LSFT, FR_LABK, FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM,    FR_SCLN, FR_COLN,  FR_EQL, KC_RSFT, MO(FN1),
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                    KC_ALGR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    ),
    [DEFWIN] = LAYOUT_60_iso_5x1u_split_rshift(
        FR_AT, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, MO(FN1),
        KC_ALGR, KC_LALT, KC_LCTL,                            KC_TRNS,                    KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [WIN] = LAYOUT_60_iso_5x1u_split_rshift(
        KC_ESC, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, MO(FN1),
        KC_ALGR, KC_LALT, KC_LCTL,                            KC_TRNS,                    KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [FN1] = LAYOUT_60_iso_5x1u_split_rshift(
        KC_ESC, KC_VOLD,    KC_VOLU,    KC_MUTE,    KC_TRNS,    KC_TRNS,    KC_TRNS,    RGB_SAI,    RGB_VAI,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_DELETE,  KC_POWER,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                    KC_TRNS, TO(DEF), TO(DEFWIN), TO(WIN), KC_TRNS
    ),
};

/*
    [ALTED] = LAYOUT_60_iso_5x1u_split_rshift(
        FR_BULT, FR_APPL,    FR_LEDI,    FR_LDQU,    FR_LSQU,    FR_LCBR,    FR_PILC,    FR_LDAQ,    FR_IEXL,    FR_CCCE,    FR_OSTR,    FR_RCBR, FR_MDSH,  KC_BSPC,
        KC_TRNS,  FR_AE,    FR_CACI,    FR_ECIR,    FR_REGD,    FR_DAGG,    FR_CUAC,    FR_MORD,    FR_LICI,    FR_OE,    FR_PI,    FR_OCIR, FR_EURO,
        KC_TRNS, FR_DDAG,    FR_COGR,    FR_PDIF,    FR_FHK,    FR_FI,    FR_CIGR,    FR_CIDI,    FR_CEGR,    FR_NOT,    FR_MICR, FR_CUGR, KC_TRNS, KC_TRNS,
        MO(SHIFTALTED), FR_LTEQ, FR_LSAQ,    FR_AEQL,    FR_COPY,    FR_LOZN,    FR_SS,    FR_TILD,    FR_INFN,    FR_ELLP, FR_DIV,  FR_NEQL, KC_TRNS, KC_TRNS,
        KC_LCTL, KC_TRNS, KC_LGUI,                            KC_SPC,                    KC_ALGR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    ),
    [SHIFTALTED] = LAYOUT_60_iso_5x1u_split_rshift(
        FR_CYDI, FR_ACUT,    FR_DLQU,    KC_TRNS,    KC_TRNS,    FR_LBRC,    FR_LARI,    FR_RDAQ,    FR_CUCI,    FR_CAAC,    KC_TRNS,    FR_RBRC, FR_NDSH,  KC_BSPC,
        KC_TRNS,  KC_TRNS,    FR_CARI,    KC_TRNS,    FR_SLQU,    FR_TM,    KC_TRNS,    FR_FORD,    FR_LIDI,    KC_TRNS,    FR_NARP,    KC_TRNS, FR_YEN,
        KC_TRNS, FR_OMEG,    FR_NARS,    FR_INCR,    FR_MDDT,    FR_FL,    FR_CICI,    FR_CIAC,    FR_CEDI,    FR_PIPE,    FR_COAC, FR_PERM, KC_TRNS, KC_TRNS,
        KC_LSFT, FR_GTEQ, FR_RSAQ,    FR_FRSL,    FR_CENT,    FR_SQRT,    FR_INTG,    FR_DLSI,    FR_IQUE,    KC_TRNS, FR_BSLS,  FR_PLMN, KC_TRNS, KC_TRNS,
        KC_LCTL, KC_TRNS, KC_LGUI,                            KC_SPC,                    KC_ALGR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    ),

*/

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32 (state)) {
    case DEF:
        rgblight_sethsv(20,120,180);
        break;
    case DEFWIN:
        rgblight_sethsv(127,120,180);
        break;
    case WIN:
        rgblight_sethsv(127,120,180);
        break;
    case FN1:
        rgblight_sethsv(201,120,180);
        break;
    default:
        rgblight_sethsv(20,120,180);
        break;
  }
  return state;
}

void keyboard_post_init_user(void) {
	//Enable the LED layers
	layer_state_set_user(layer_state);
}


//EEPROM Reset Function
void eeconfig_init_user(void) {
  rgblight_enable(); 
  rgblight_sethsv(20,120,180);
}
