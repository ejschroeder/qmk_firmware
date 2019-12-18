#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define UTIL 1 // utility layer (numpad, arrow keys, media controls)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [BASE] = LAYOUT_ergodox(
    // Left Hand
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,   KC_5,   KC_LT, 
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,   KC_LBRC, 
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,   KC_G, 
    KC_LSPO,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,   KC_EQUAL, 
              KC_LCTL,  KC_LGUI,  KC_LALT,  OSL(1), MO(1),

                                                        C(KC_C),  C(KC_V), 
                                                                  KC_HOME, 
                                              KC_SPC,   KC_BSPC,  KC_END, 
    // Right Hand
    KC_GT,    KC_6,     KC_7,   KC_8,     KC_9,     KC_0,     TG(1), 
    KC_RBRC,  KC_Y,     KC_U,   KC_I,     KC_O,     KC_P,     KC_BSLS, 
              KC_H,     KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT, 
    KC_MINUS, KC_N,     KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC, 
              MO(1),    OSL(1), KC_RALT,  KC_RGUI,  KC_RCTL, 
    
    C(KC_X),  C(KC_SLSH), 
    KC_PGUP, 
    KC_PGDN,  LSFT_T(KC_DEL), LCTL_T(KC_ENTER)
  ),

	[UTIL] = LAYOUT_ergodox(
    // Left Hand
    XXXXXXX,    KC_F1,    KC_F2,      KC_F3,    KC_F4,      KC_F5,        KC_F11, 
    XXXXXXX,    XXXXXXX,  KC_MS_BTN1, KC_MS_U,  KC_MS_BTN2, KC_MS_WH_UP,  XXXXXXX, 
    KC_CAPS,    XXXXXXX,  KC_MS_L,    KC_MS_D,  KC_MS_R,    KC_MS_WH_DOWN, 
    XXXXXXX,    XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,    XXXXXXX,      XXXXXXX, 
                XXXXXXX,  XXXXXXX,    XXXXXXX,  KC_TRNS,    KC_TRNS,
    
                                                        XXXXXXX,  XXXXXXX, 
                                                                  XXXXXXX, 
                                              XXXXXXX,  XXXXXXX,  XXXXXXX, 
    // Right Hand                                          
    KC_F12,   KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_TRNS, 
    XXXXXXX,  XXXXXXX,  KC_HOME,  KC_UP,    KC_END,   XXXXXXX,  XXXXXXX, 
              XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  XXXXXXX, 
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, 
              KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX, 
    
    KC_MPRV,  KC_MNXT, 
    KC_VOLU, 
    KC_VOLD,  KC_MPLY,  XXXXXXX
  )
};
