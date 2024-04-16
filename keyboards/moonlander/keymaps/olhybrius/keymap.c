#include QMK_KEYBOARD_H
#include "version.h"
#include "sendstring_french.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  INSERT_PROTONMAIL,
  INSERT_VIACESI,
  INSERT_GLADY,
  INSERT_LILO,
  DOUBLE_SHIFT
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
  DANCE_13,
  DANCE_14,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
      TOGGLE_LAYER_COLOR,FR_1,           FR_2,           FR_3,           FR_4,           FR_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, FR_6,           FR_7,           FR_8,           FR_9,           FR_0,           KC_TRANSPARENT, 
      MAGIC_TOGGLE_CTL_GUI, TD(DANCE_0),    FR_Z,           TD(DANCE_1),    KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           TD(DANCE_4),    TD(DANCE_14),           KC_O,           KC_P,           KC_TRANSPARENT, 
      DOUBLE_SHIFT,      LCTL_T(FR_Q),   LALT_T(KC_S),   LSFT_T(KC_D),   LGUI_T(KC_F),   TD(DANCE_2),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LT(6,KC_H),     RGUI_T(KC_J),   RSFT_T(KC_K),   RALT_T(KC_L),   RCTL_T(FR_M),   TG(7),          
      KC_TRANSPARENT, FR_W,           KC_X,           TD(DANCE_3),    KC_V,           KC_B,                                           KC_N,           TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    KC_DELETE,      
      KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, OSL(8),         OSL(5),                                                                                                         C_S_T(KC_TAB),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_BSPC,      KC_SPACE,       MO(3),                          TT(4),          KC_ESCAPE,      LSFT_T(KC_ENTER)
      ),
  [1] = LAYOUT_moonlander(
      KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
      KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
      KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,    KC_RBRC,    KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,      KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_COMMA,       HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,RGB_MOD,                                                                                                        RGB_TOG,        KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
      RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
      ),
  [2] = LAYOUT_moonlander(
      AU_TOGG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,          
      MU_TOGG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      MU_NEXT,         KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
      ),
  [3] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, FR_GRV,         FR_CIRC,        FR_AT,          FR_AMPR,         FR_LABK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, FR_RABK,        FR_DQUO,        FR_QUOT,        FR_DLR,         FR_HASH,        KC_TRANSPARENT, 
      KC_TRANSPARENT, TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   LGUI_T(FR_LPRN),FR_DOT,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, FR_COLN,        RGUI_T(FR_RPRN),TD(DANCE_12),   RALT_T(KC_KP_SLASH),TD(DANCE_13),   KC_TRANSPARENT, 
      KC_TRANSPARENT, FR_PIPE,        FR_PLUS,        FR_EXLM,        FR_MINS,        FR_COMM,                                        FR_PERC,        FR_UNDS,        FR_QUES,        FR_TILD,        FR_ASTR,        KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, FR_DEG, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, FR_SCLN,        FR_EQL
      ),
  [4] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, FR_HASH,        FR_COLN,        FR_DOT,         FR_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_7),        LSFT(KC_8),        LSFT(KC_9),        KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, LCTL_T(KC_KP_SLASH),LALT_T(FR_ASTR),LSFT_T(KC_KP_MINUS),LGUI_T(KC_KP_PLUS),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, FR_EQL,         LSFT(KC_4),        LSFT(KC_5),        LSFT(KC_6),        KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, FR_PERC,        FR_SUP2,        FR_UNDS,        FR_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_1),        LSFT(KC_2),        LSFT(KC_3),        KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LSFT(KC_0),        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, TO(3),                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
      ),
  [5] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, LGUI(FR_AMPR),   LGUI(FR_EACU),  LGUI(FR_DQUO),  LGUI(FR_QUOT),  LGUI(FR_LPRN),  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(FR_MINS),  LGUI(FR_EGRV),  LGUI(KC_8),     LGUI(FR_CCED),  RGUI(FR_AGRV),  KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
      ),
  [6] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_EGRV,        FR_EGRV,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_GRV,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, FR_UGRV,        FR_AGRV,        FR_EACU,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_CIRC,       FR_DIAE,        KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_CCED,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
      ),
  [7] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_PSCR,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, LCTL_T(KC_F1),  LALT_T(KC_F2),  LSFT_T(KC_F3),  LGUI_T(KC_F4),  KC_F5,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F6,          RGUI_T(KC_F7),  RSFT_T(KC_F8),  RALT_T(KC_F9),  RCTL_T(KC_F10), KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_PSCR,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
      ),
  [8] = LAYOUT_moonlander(
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, INSERT_VIACESI, INSERT_LILO, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, DM_REC1, DM_RSTP,   DM_PLY1,INSERT_PROTONMAIL, INSERT_GLADY, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DM_PLY2, DM_RSTP, DM_REC2, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
      ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
  [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    if (keyboard_config.disable_layer_led) {
        return true;
    }
    switch (get_highest_layer(layer_state)) {
        case 0:
        case 1:
            set_layer_color(0);
            break;
        case 2:
            set_layer_color(1);
            break;
        case 3:
            set_layer_color(2);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case INSERT_PROTONMAIL:
      if (record->event.pressed) {
        SEND_STRING("olivier.thiel@protonmail.com");
      }
      return false;
    case INSERT_VIACESI:
      if (record->event.pressed) {
        SEND_STRING("olivier.thiel@viacesi.fr");
      }
      return false;
    case INSERT_GLADY:
      if (record->event.pressed) {
        SEND_STRING("olivier.thiel@glady.com");
      }
      return false;
    case INSERT_LILO:
      if (record->event.pressed) {
        SEND_STRING("olivier.thiel@lilo.org");
      }
      return false;
    case DOUBLE_SHIFT:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_LSFT)SS_TAP(X_LSFT));
      }
      return false;
  }
  return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (layer_state_is(7) && !record->event.pressed && keycode != TG(7)){
    layer_off(7);
  }
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
  TRIPLE_TAP,
  TRIPLE_HOLD,
  TRIPLE_SINGLE_TAP,
  MORE_TAPS
};

static tap dance_state[15];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed) return SINGLE_TAP;
    else return SINGLE_HOLD;
  } else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  } else if (state->count == 3) {
    if (state->interrupted) return TRIPLE_SINGLE_TAP;
    else if (state->pressed) return TRIPLE_HOLD;
    else return TRIPLE_TAP;
  }
  return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(FR_A);
    tap_code16(FR_A);
    tap_code16(FR_A);
  }
  if(state->count > 3) {
    tap_code16(FR_A);
  }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[0].step = dance_step(state);
  switch (dance_state[0].step) {
    case SINGLE_TAP: register_code16(FR_A); break;
    case SINGLE_HOLD: register_code16(FR_AGRV); break;
    case DOUBLE_TAP: register_code16(FR_A); register_code16(FR_A); break;
    case DOUBLE_SINGLE_TAP: tap_code16(FR_A); register_code16(FR_A);
  }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[0].step) {
    case SINGLE_TAP: unregister_code16(FR_A); break;
    case SINGLE_HOLD: unregister_code16(FR_AGRV); break;
    case DOUBLE_TAP: unregister_code16(FR_A); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(FR_A); break;
  }
  dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) { 
    tap_code16(KC_E);
    tap_code16(KC_E);
    tap_code16(KC_E);
  }
  if(state->count > 3) {
    tap_code16(KC_E);
  }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[1].step = dance_step(state);
  switch (dance_state[1].step) {
    case SINGLE_TAP: register_code16(KC_E); break;
    case SINGLE_HOLD: register_code16(FR_EACU); break;
    case DOUBLE_TAP: register_code16(FR_EGRV); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
  }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[1].step) {
    case SINGLE_TAP: unregister_code16(KC_E); break;
    case SINGLE_HOLD: unregister_code16(FR_EACU); break;
    case DOUBLE_TAP: unregister_code16(FR_EGRV); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
  }
  dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(KC_G);
    tap_code16(KC_G);
    tap_code16(KC_G);
  }
  if(state->count > 3) {
    tap_code16(KC_G);
  }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[2].step = dance_step(state);
  switch (dance_state[2].step) {
    case SINGLE_TAP: register_code16(KC_G); break;
    case SINGLE_HOLD: register_code16(KC_PSCR); break;
    case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
  }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[2].step) {
    case SINGLE_TAP: unregister_code16(KC_G); break;
    case SINGLE_HOLD: unregister_code16(KC_PSCR); break;
    case DOUBLE_TAP: unregister_code16(KC_G); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
  }
  dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(KC_C);
    tap_code16(KC_C);
    tap_code16(KC_C);
  }
  if(state->count > 3) {
    tap_code16(KC_C);
  }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[3].step = dance_step(state);
  switch (dance_state[3].step) {
    case SINGLE_TAP: register_code16(KC_C); break;
    case SINGLE_HOLD: register_code16(FR_CCED); break;
    case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
  }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[3].step) {
    case SINGLE_TAP: unregister_code16(KC_C); break;
    case SINGLE_HOLD: unregister_code16(FR_CCED); break;
    case DOUBLE_TAP: unregister_code16(KC_C); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
  }
  dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(KC_U);
    tap_code16(KC_U);
    tap_code16(KC_U);
  }
  if(state->count > 3) {
    tap_code16(KC_U);
  }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[4].step = dance_step(state);
  switch (dance_state[4].step) {
    case SINGLE_TAP: register_code16(KC_U); break;
    case SINGLE_HOLD: register_code16(FR_UGRV); break;
    case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
  }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[4].step) {
    case SINGLE_TAP: unregister_code16(KC_U); break;
    case SINGLE_HOLD: unregister_code16(FR_UGRV); break;
    case DOUBLE_TAP: unregister_code16(KC_U); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
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
    case DOUBLE_TAP: register_code16(KC_HOME); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
  }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[5].step) {
    case SINGLE_TAP: unregister_code16(KC_LEFT); break;
    case SINGLE_HOLD: unregister_code16(KC_LEFT); break;
    case DOUBLE_TAP: unregister_code16(KC_HOME); break;
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
    case SINGLE_HOLD: register_code16(KC_PGDN); break;
    case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
    case DOUBLE_HOLD: register_code16(KC_PGDN); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
  }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[6].step) {
    case SINGLE_TAP: unregister_code16(KC_DOWN); break;
    case SINGLE_HOLD: unregister_code16(KC_PGDN); break;
    case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
    case DOUBLE_HOLD: unregister_code16(KC_PGDN); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
  }
  dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(KC_UP);
    tap_code16(KC_UP);
    tap_code16(KC_UP);
  }
  if(state->count > 3) {
    tap_code16(KC_UP);
  }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[7].step = dance_step(state);
  switch (dance_state[7].step) {
    case SINGLE_TAP: register_code16(KC_UP); break;
    case SINGLE_HOLD: register_code16(KC_PGUP); break;
    case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
    case DOUBLE_HOLD: register_code16(KC_PGUP); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
  }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[7].step) {
    case SINGLE_TAP: unregister_code16(KC_UP); break;
    case SINGLE_HOLD: unregister_code16(KC_PGUP); break;
    case DOUBLE_TAP: unregister_code16(KC_UP); break;
    case DOUBLE_HOLD: unregister_code16(KC_PGUP); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
  }
  dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(KC_RIGHT);
    tap_code16(KC_RIGHT);
    tap_code16(KC_RIGHT);
  }
  if(state->count > 3) {
    tap_code16(KC_RIGHT);
  }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[8].step = dance_step(state);
  switch (dance_state[8].step) {
    case SINGLE_TAP: register_code16(KC_RIGHT); break;
    case SINGLE_HOLD: register_code16(KC_RIGHT); break;
    case DOUBLE_TAP: register_code16(KC_END); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
  }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[8].step) {
    case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    case SINGLE_HOLD: unregister_code16(KC_RIGHT); break;
    case DOUBLE_TAP: unregister_code16(KC_END); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
  }
  dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(RALT(FR_LPRN));
    tap_code16(RALT(FR_LPRN));
    tap_code16(RALT(FR_LPRN));
  }
  if(state->count > 3) {
    tap_code16(RALT(FR_LPRN));
  }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[9].step = dance_step(state);
  switch (dance_state[9].step) {
    case SINGLE_TAP: register_code16(RALT(FR_LPRN)); break;
    case SINGLE_HOLD: register_code16(KC_LCTL); break;
    case DOUBLE_TAP: register_code16(RALT(FR_LPRN)); register_code16(RALT(FR_LPRN)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_LPRN)); register_code16(RALT(FR_LPRN));
  }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[9].step) {
    case SINGLE_TAP: unregister_code16(RALT(FR_LPRN)); break;
    case SINGLE_HOLD: unregister_code16(KC_LCTL); break;
    case DOUBLE_TAP: unregister_code16(RALT(FR_LPRN)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_LPRN)); break;
  }
  dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(RALT(FR_UNDS));
    tap_code16(RALT(FR_UNDS));
    tap_code16(RALT(FR_UNDS));
  }
  if(state->count > 3) {
    tap_code16(RALT(FR_UNDS));
  }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[10].step = dance_step(state);
  switch (dance_state[10].step) {
    case SINGLE_TAP: register_code16(RALT(FR_UNDS)); break;
    case SINGLE_HOLD: register_code16(KC_LALT); break;
    case DOUBLE_TAP: register_code16(RALT(FR_UNDS)); register_code16(RALT(FR_UNDS)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_UNDS)); register_code16(RALT(FR_UNDS));
  }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[10].step) {
    case SINGLE_TAP: unregister_code16(RALT(FR_UNDS)); break;
    case SINGLE_HOLD: unregister_code16(KC_LALT); break;
    case DOUBLE_TAP: unregister_code16(RALT(FR_UNDS)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_UNDS)); break;
  }
  dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(RALT(FR_QUOT));
    tap_code16(RALT(FR_QUOT));
    tap_code16(RALT(FR_QUOT));
  }
  if(state->count > 3) {
    tap_code16(RALT(FR_QUOT));
  }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[11].step = dance_step(state);
  switch (dance_state[11].step) {
    case SINGLE_TAP: register_code16(RALT(FR_QUOT)); break;
    case SINGLE_HOLD: register_code16(KC_LSFT); break;
    case DOUBLE_TAP: register_code16(RALT(FR_QUOT)); register_code16(RALT(FR_QUOT)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_QUOT)); register_code16(RALT(FR_QUOT));
  }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[11].step) {
    case SINGLE_TAP: unregister_code16(RALT(FR_QUOT)); break;
    case SINGLE_HOLD: unregister_code16(KC_LSFT); break;
    case DOUBLE_TAP: unregister_code16(RALT(FR_QUOT)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_QUOT)); break;
  }
  dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(RALT(FR_EQL));
    tap_code16(RALT(FR_EQL));
    tap_code16(RALT(FR_EQL));
  }
  if(state->count > 3) {
    tap_code16(RALT(FR_EQL));
  }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[12].step = dance_step(state);
  switch (dance_state[12].step) {
    case SINGLE_TAP: register_code16(RALT(FR_EQL)); break;
    case SINGLE_HOLD: register_code16(KC_RSFT); break;
    case DOUBLE_TAP: register_code16(RALT(FR_EQL)); register_code16(RALT(FR_EQL)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_EQL)); register_code16(RALT(FR_EQL));
  }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[12].step) {
    case SINGLE_TAP: unregister_code16(RALT(FR_EQL)); break;
    case SINGLE_HOLD: unregister_code16(KC_RSFT); break;
    case DOUBLE_TAP: unregister_code16(RALT(FR_EQL)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_EQL)); break;
  }
  dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(RALT(FR_RPRN));
    tap_code16(RALT(FR_RPRN));
    tap_code16(RALT(FR_RPRN));
  }
  if(state->count > 3) {
    tap_code16(RALT(FR_RPRN));
  }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[13].step = dance_step(state);
  switch (dance_state[13].step) {
    case SINGLE_TAP: register_code16(RALT(FR_RPRN)); break;
    case SINGLE_HOLD: register_code16(KC_RCTL); break;
    case DOUBLE_TAP: register_code16(RALT(FR_RPRN)); register_code16(RALT(FR_RPRN)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_RPRN)); register_code16(RALT(FR_RPRN));
  }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[13].step) {
    case SINGLE_TAP: unregister_code16(RALT(FR_RPRN)); break;
    case SINGLE_HOLD: unregister_code16(KC_RCTL); break;
    case DOUBLE_TAP: unregister_code16(RALT(FR_RPRN)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_RPRN)); break;
  }
  dance_state[13].step = 0;
}

void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
  if(state->count >= 3) {
    tap_code16(KC_I);
    tap_code16(KC_I);
    tap_code16(KC_I);
  }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[14].step = dance_step(state);
  switch (dance_state[14].step) {
    case SINGLE_TAP: register_code16(KC_I); break;
    case SINGLE_HOLD: register_code16(KC_INSERT); break;
    case DOUBLE_TAP: register_code16(KC_I); register_code16(KC_I); break;
    case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I);
  }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[14].step) {
    case SINGLE_TAP: unregister_code16(KC_I); break;
    case SINGLE_HOLD: unregister_code16(KC_INSERT); break;
    case DOUBLE_TAP: unregister_code16(KC_I); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break;
  }
  dance_state[14].step = 0;
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
  [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
  [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
};

enum combo_events {
  OE
};

const uint16_t PROGMEM test_combo1[] = {KC_O, KC_E, COMBO_END};

combo_t key_combos[] = {
    [OE] = COMBO_ACTION(test_combo1),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case OE:
      if (pressed) {
        SEND_STRING("œ");
      }
      break;
  }
}