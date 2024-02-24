#include QMK_KEYBOARD_H
#include "analog.h"




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_1x1(
        KC_MS_BTN1,TO(1),KC_MS_BTN2,
        KC_WH_U,KC_SPACE,KC_WH_D
    ),
   [1] = LAYOUT_ortho_1x1(
        KC_WH_U,TO(0),KC_WH_D,
        KC_A,KC_B,KC_C
    )
     
};
#include "analog.h"