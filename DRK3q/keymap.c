#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  THUMBS_UP_LT,
  THUMBS_DOWN_LT,
  PARTY,
  ROFL,
  HUNDRED,
  HORNS_LT,
  FINGERS_XED_LT,
  QUESTION,
  SUCCESS_MK,
  FAIL_X,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    THUMBS_UP_LT,   THUMBS_DOWN_LT, PARTY,          ROFL,           HUNDRED,                                        HORNS_LT,       FINGERS_XED_LT, QUESTION,       SUCCESS_MK,     FAIL_X,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TD(DANCE_2),    
    MO(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    KC_ENTER,       TD(DANCE_1),                                    KC_BSPC,        KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    DM_RSTP,        DM_PLY1,        MO(4),          DM_REC1,        LCTL(LSFT(KC_R)),TD(DANCE_3),                                    LALT(LCTL(KC_TAB)),KC_PAGE_UP,     TD(DANCE_4),    KC_PGDN,        LGUI(KC_TAB),   KC_DELETE,      
    KC_TRANSPARENT, MO(5),          ST_MACRO_0,     MO(11),         MO(2),          QK_LLCK,                                        KC_HOME,        TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_ESCAPE,      KC_APPLICATION, 
    KC_LSFT,        KC_CAPS,        ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     MO(6),                                          KC_END,         LGUI(LCTL(KC_LEFT)),LGUI(KC_D),     LGUI(LCTL(KC_RIGHT)),KC_LEFT_GUI,    LALT(LCTL(KC_DELETE)),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NUM,                                         ST_MACRO_4,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_NO,          
    DM_RSTP,        DM_PLY2,        KC_NO,          DM_REC2,        KC_NO,          KC_NO,                                          ST_MACRO_5,     KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ENTER,    KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          MO(3),          KC_TRANSPARENT, QK_LLCK,                                        KC_EQUAL,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_KP_ASTERISK, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(LSFT(KC_Z))),KC_NO,                                          KC_KP_0,        KC_KP_0,        KC_DLR,         KC_KP_DOT,      KC_COMMA,       KC_KP_MINUS,    
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        TD(DANCE_8),    
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(12),                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, RGB_VAD,        KC_NO,          KC_NO,                                          KC_NO,          KC_BRIGHTNESS_DOWN,KC_NO,          KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          RGB_VAI,        KC_NO,                                          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
                                                    LED_LEVEL,      KC_NO,                                          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LALT(LGUI(LCTL(LSFT(KC_W)))),KC_NO,          KC_NO,          LALT(LGUI(LCTL(LSFT(KC_T)))),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_S)))),KC_NO,          LALT(LGUI(LCTL(LSFT(KC_F)))),KC_NO,                                          KC_NO,          KC_NO,          LALT(LGUI(LCTL(LSFT(KC_K)))),KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LALT(KC_N),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    KC_TRANSPARENT, KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          MO(8),          KC_NO,          KC_NO,                                          ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    KC_NO,          
    MO(7),          KC_NO,          MO(9),          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    KC_TRANSPARENT, KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    KC_NO,          KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,                                          ST_MACRO_31,    ST_MACRO_32,    ST_MACRO_33,    ST_MACRO_34,    ST_MACRO_35,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          ST_MACRO_36,    ST_MACRO_37,    ST_MACRO_38,    KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          
    MO(10),         KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_DELETE,      
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_BTN4,     TD(DANCE_9),    KC_MS_UP,       TD(DANCE_10),   KC_MS_BTN5,     KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          QK_LLCK,                                        KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN2,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          TD(DANCE_11),   KC_MS_BTN3,     TD(DANCE_12),   KC_NO,          KC_NO,          
                                                    KC_LEFT_SHIFT,  KC_LEFT_CTRL,                                   KC_MS_BTN5,     KC_MS_BTN4
  ),
  [12] = LAYOUT_voyager(
    KC_ESCAPE,      TG(13),         KC_C,           KC_GRAVE,       KC_F,           KC_T,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_5,           KC_H,           KC_W,           KC_E,           KC_R,           KC_U,                                           KC_NO,          KC_NO,          KC_I,           KC_O,           KC_NO,          KC_NO,          
    KC_3,           KC_A,           KC_S,           KC_X,           KC_LEFT_SHIFT,  KC_D,                                           KC_NO,          KC_NO,          KC_K,           KC_NO,          KC_NO,          KC_NO,          
    KC_Z,           KC_0,           KC_6,           KC_G,           KC_LEFT_CTRL,   KC_7,                                           KC_NO,          KC_M,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_TAB,                                         KC_NO,          KC_NO
  ),
  [13] = LAYOUT_voyager(
    KC_ESCAPE,      KC_TRANSPARENT, KC_NO,          KC_GRAVE,       KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_39,    
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_I,           KC_O,           KC_NO,          KC_NO,          
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_NO,          KC_NO,          KC_K,           KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,                                           KC_NO,          KC_M,           KC_NO,          KC_NO,          KC_NO,          ST_MACRO_40,    
                                                    KC_NO,          TO(12),                                         KC_NO,          TO(0)
  ),
};

const uint16_t PROGMEM combo0[] = { KC_A, KC_SCLN, KC_SPACE, KC_ENTER, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_L)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {0,225,174}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,183,199}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,238,186}, {158,183,199}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,238,186}, {158,236,110}, {158,236,110}, {158,236,110}, {158,236,110}, {158,238,186}, {158,238,186}, {158,236,110}, {158,236,110}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186} },

    [1] = { {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {193,255,161}, {193,255,161}, {0,225,174}, {193,255,161}, {193,255,161}, {193,255,161}, {0,225,174}, {255,242,229}, {193,255,161}, {0,225,174}, {0,225,174}, {22,235,217}, {158,183,199}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {0,225,174}, {158,238,186}, {158,183,199}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {193,255,161}, {158,238,186}, {193,255,161}, {158,238,186}, {193,255,161}, {158,238,186}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {158,238,186}, {158,238,186}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {158,238,186}, {193,255,161}, {158,238,186}, {158,238,186} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,238,186}, {193,255,161}, {193,255,161}, {0,0,0}, {193,255,161}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,225,174}, {22,235,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {0,0,0}, {158,238,186}, {158,183,199}, {158,238,186}, {151,82,65}, {151,82,65}, {151,82,65}, {158,238,186}, {0,0,0}, {158,238,186}, {151,82,65}, {151,82,65}, {151,82,65}, {158,238,186}, {158,238,186}, {158,238,186}, {151,82,65}, {151,82,65}, {151,82,65}, {158,238,186}, {158,238,186}, {151,82,65}, {151,82,65}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,238,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,225,174}, {22,235,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,238,186}, {0,0,0}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {158,238,186}, {0,0,0}, {158,238,186}, {158,238,186} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {22,235,217}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {22,235,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,235,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,174,130}, {0,0,0}, {91,174,130}, {0,0,0}, {0,0,0}, {0,0,0}, {91,174,130}, {91,174,130}, {91,174,130}, {0,0,0}, {0,0,0}, {0,0,0}, {91,174,130}, {91,174,130}, {91,174,130}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,242,229}, {0,0,0}, {0,0,0}, {255,242,229}, {0,225,174}, {255,242,229}, {255,242,229}, {0,0,0}, {255,242,229}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,242,229}, {0,0,0}, {0,0,0}, {0,0,0}, {255,242,229}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {158,238,186}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {158,238,186}, {158,238,186} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {158,238,186}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {0,0,0}, {158,238,186}, {158,238,186} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {158,238,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {158,238,186}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {0,0,0}, {158,238,186}, {158,238,186} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {158,238,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {158,238,186}, {0,0,0}, {193,255,161}, {193,255,161}, {193,255,161}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {0,0,0}, {0,0,0}, {0,0,0}, {158,238,186}, {158,238,186} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {158,238,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {0,0,0}, {0,0,0}, {158,238,186}, {0,0,0}, {193,255,161}, {0,0,0}, {193,255,161}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,161}, {0,0,0}, {0,0,0}, {0,0,0}, {158,238,186}, {158,238,186} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {0,0,0}, {0,225,174}, {0,0,0}, {22,235,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,183,199}, {158,183,199}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,235,217}, {154,54,235}, {155,161,163}, {154,54,235}, {155,235,217}, {0,0,0}, {155,215,237}, {155,161,163}, {155,161,163}, {155,161,163}, {155,215,237}, {0,0,0}, {0,0,0}, {154,54,235}, {155,215,237}, {154,54,235}, {0,0,0}, {0,0,0}, {155,235,217}, {155,235,217} },

    [12] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {29,255,255}, {29,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {29,255,255}, {29,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,225,174} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case THUMBS_UP_LT:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) SS_TAP(X_KP_0) SS_TAP(X_KP_7) SS_TAP(X_KP_7) ) SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_7) SS_TAP(X_KP_9) SS_TAP(X_KP_9) SS_TAP(X_KP_5) ));
    }
    break;
    case THUMBS_DOWN_LT:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) SS_TAP(X_KP_0) SS_TAP(X_KP_7) SS_TAP(X_KP_8) ) SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_7) SS_TAP(X_KP_9) SS_TAP(X_KP_9) SS_TAP(X_KP_5) ));
    }
    break;
    case PARTY:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_7) SS_TAP(X_KP_8) SS_TAP(X_KP_8) SS_TAP(X_KP_1) ));
    }
    break;
    case ROFL:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_1) SS_TAP(X_KP_5) ));
    }
    break;
    case HUNDRED:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_5) ));
    }
    break;
    case HORNS_LT:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_0) SS_TAP(X_KP_4) ) SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_7) SS_TAP(X_KP_9) SS_TAP(X_KP_9) SS_TAP(X_KP_5) ));
    }
    break;
    case FINGERS_XED_LT:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_1) SS_TAP(X_KP_0) ) SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_7) SS_TAP(X_KP_9) SS_TAP(X_KP_9) SS_TAP(X_KP_5) ));
    }
    break;
    case QUESTION:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_6) SS_TAP(X_KP_8) ));
    }
    break;
    case SUCCESS_MK:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_9) SS_TAP(X_KP_8) SS_TAP(X_KP_9) ));
    }
    break;
    case FAIL_X:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_6) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_M));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_LCTL(SS_TAP(X_X)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_LCTL(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_5) ));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_5) ));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_5) ));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_5) ));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_5) ));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_J)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_R)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[13];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); register_code16(KC_GRAVE); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_CTRL);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRC);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LBRC); break;
        case DOUBLE_TAP: register_code16(KC_LBRC); register_code16(KC_LBRC); break;
        case DOUBLE_HOLD: register_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRC); register_code16(KC_LBRC);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_HOLD: unregister_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRC); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_PSCR));
        tap_code16(LALT(KC_PSCR));
        tap_code16(LALT(KC_PSCR));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_PSCR));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(KC_PSCR)); break;
        case SINGLE_HOLD: register_code16(KC_PSCR); break;
        case DOUBLE_TAP: register_code16(LALT(KC_PSCR)); register_code16(LALT(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_PSCR)); register_code16(LALT(KC_PSCR));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
        case SINGLE_HOLD: unregister_code16(KC_PSCR); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(KC_UP); break;
        case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); register_code16(KC_LEFT); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_LCBR); register_code16(KC_LCBR); break;
        case DOUBLE_HOLD: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_HOLD: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_WH_UP);
        tap_code16(KC_MS_WH_UP);
        tap_code16(KC_MS_WH_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_WH_UP);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_MS_WH_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_WH_UP); register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_WH_UP); register_code16(KC_MS_WH_UP);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_WH_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_WH_UP); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_WH_DOWN);
        tap_code16(KC_MS_WH_DOWN);
        tap_code16(KC_MS_WH_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_WH_DOWN);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_MS_WH_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_WH_DOWN); register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_WH_DOWN); register_code16(KC_MS_WH_DOWN);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_WH_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_WH_DOWN); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_WH_LEFT);
        tap_code16(KC_MS_WH_LEFT);
        tap_code16(KC_MS_WH_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_WH_LEFT);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_MS_WH_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_WH_LEFT); register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_WH_LEFT); register_code16(KC_MS_WH_LEFT);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_WH_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_WH_LEFT); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_WH_RIGHT);
        tap_code16(KC_MS_WH_RIGHT);
        tap_code16(KC_MS_WH_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_WH_RIGHT);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_MS_WH_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_WH_RIGHT); register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_WH_RIGHT); register_code16(KC_MS_WH_RIGHT);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_WH_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_WH_RIGHT); break;
    }
    dance_state[12].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
};
