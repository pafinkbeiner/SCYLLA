#include QMK_KEYBOARD_H

#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5, 
        KC_0,       KC_Q,       KC_W,       KC_E,       KC_R,       KC_T, 
        KC_0,       KC_A,       KC_S,       KC_D,       KC_F,       KC_G, 
        KC_LCTL,    DE_Y,       KC_X,       KC_C,       KC_V,       KC_B,
                    KC_ENT,     KC_0,       KC_0,       KC_BSPC,    KC_LSFT,

        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       DE_SS,
        DE_Z,       KC_U,       KC_I,       KC_O,       KC_P,       DE_UDIA,
        KC_H,       KC_J,       KC_K,       KC_L,       DE_ODIA,    DE_ADIA,
        KC_N,       KC_M,       DE_COMM,    DE_DOT,     KC_UP,      KC_RIGHT,
        KC_LSFT,    KC_SPC,     KC_LEFT,    KC_DOWN,    KC_TAB       
    )
};