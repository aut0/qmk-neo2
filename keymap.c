#include QMK_KEYBOARD_H

#include "keymap_german_mac_iso.h"

#ifdef CONSOLE_ENABLED
#include "print.h"
#endif

enum custom_keycodes{
    FOO = SAFE_RANGE,
    NEO2_LM3,
    NEO2_RM3,
    NEO2_LM4,
    NEO2_RM4
};

enum layers{
  NEO_L1, // Neo2 layer 1 + 2
  NEO_L3, // Neo2 layer 3
  NEO_L4, // Neo2 layer 4
  DE_L1     // Normal DE layer 1 + 2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NEO_L1] = LAYOUT_iso_83(
         KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_DEL,             KC_MUTE,
         KC_NUBS,  DE_1,     DE_2,     DE_3,     DE_4,     DE_5,     DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_MINS,    DE_GRV, KC_BSPC,            KC_PGUP,
         KC_TAB,   DE_X,     DE_V,     DE_L,     DE_C,     DE_W,     DE_K,     DE_H,     DE_G,     DE_F,     DE_Q,     DE_SS,      DE_ACUT,                    KC_PGDN,
         NEO2_LM3, DE_U,     DE_I,     DE_A,     DE_E,     DE_O,     DE_S,     DE_N,     DE_R,     DE_T,     DE_D,     DE_Y,       NEO2_RM3, KC_ENT,             KC_HOME,
         KC_LSFT,  NEO2_LM4, DE_UDIA,  DE_ODIA,  DE_ADIA,  DE_P,     DE_Z,     DE_B,     DE_M,     DE_COMM,  DE_DOT, DE_J,                 KC_RSFT,  KC_UP,
         KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 NEO2_RM4, KC_RCMD,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [NEO_L3] = LAYOUT_iso_83(
         KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_NO,              KC_NO,
         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,              KC_NO,
         KC_NO,    DE_ELLP,  DE_UNDS,  DE_LBRC,  DE_RBRC,  KC_NUBS,DE_EXLM,  KC_GRV,   (S(KC_GRV)),  DE_EQL,   DE_AMPR,  KC_NO,      KC_NO,                        KC_NO,
         NEO2_LM3, (A(S(DE_7))),(S(DE_7)),DE_LCBR,DE_RCBR, DE_ASTR,  DE_QUES,  DE_LPRN,  DE_RPRN,  DE_MINS,  DE_COLN,  DE_AT,      NEO2_RM3, KC_NO,              KC_NO,
         KC_NO,    KC_NO,    DE_HASH,  DE_DLR,   DE_PIPE,  DE_TILD,  DE_GRV,   DE_PLUS,  DE_PERC,  DE_DQUO,  DE_QUOT,  DE_SCLN,              KC_NO,    KC_NO,
         KC_NO,    KC_NO,    KC_NO,                                  KC_NO,                                  KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO),
    [NEO_L4] = LAYOUT_iso_83(
         KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_DEL,             KC_MUTE,
         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,              KC_NO,
         KC_NO,    KC_NO,    KC_BSPC,  KC_UP,    KC_DEL,   KC_NO,    KC_NO,    DE_7,     DE_8,     DE_9,     KC_NO,    KC_NO,      KC_NO,                        KC_NO,
         KC_NO,    KC_NO,    KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_NO,    KC_NO,    DE_4,     DE_5,     DE_6,     KC_NO,    KC_NO,      KC_NO,    KC_NO,              KC_NO,
         KC_NO,    NEO2_LM4, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    DE_1,     DE_2,     DE_3,     KC_NO,                KC_NO,    KC_NO,
         KC_NO,    KC_NO,    KC_NO,                                  KC_0,                                   NEO2_RM4, KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO),
    [DE_L1] = LAYOUT_iso_83(
         KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_DEL,             KC_MUTE,
         KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
         KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
         KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
         KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
         KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_NO     , KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [NEO_L1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [NEO_L3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [NEO_L4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [DE_L1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif // ENCODER_MAP_ENABLE

// Overrides for shifted layers
const key_override_t neo2_circ = ko_make_basic(MOD_MASK_SHIFT, KC_NUBS, DE_CARN);
const key_override_t neo2_1 = ko_make_basic(MOD_MASK_SHIFT, DE_1, S(KC_NUBS));
const key_override_t neo2_2 = ko_make_basic(MOD_MASK_SHIFT, DE_2, DE_SECT);
// TODO ℓ
const key_override_t neo2_3 = ko_make_basic(MOD_MASK_SHIFT, DE_3, KC_NO);
const key_override_t neo2_4 = ko_make_basic(MOD_MASK_SHIFT, DE_4, DE_RDAQ);
const key_override_t neo2_5 = ko_make_basic(MOD_MASK_SHIFT, DE_5, DE_LDAQ);
const key_override_t neo2_6 = ko_make_basic(MOD_MASK_SHIFT, DE_6, DE_DLR);
const key_override_t neo2_7 = ko_make_basic(MOD_MASK_SHIFT, DE_7, DE_EURO);
const key_override_t neo2_8 = ko_make_basic(MOD_MASK_SHIFT, DE_8, A(KC_NUBS));
const key_override_t neo2_9 = ko_make_basic(MOD_MASK_SHIFT, DE_9, DE_LDQU);
const key_override_t neo2_0 = ko_make_basic(MOD_MASK_SHIFT, DE_0, DE_RDQU);
const key_override_t neo2_mins = ko_make_basic(MOD_MASK_SHIFT, DE_MINS, DE_NDSH);
const key_override_t neo2_grv = ko_make_basic(MOD_MASK_SHIFT, DE_GRV, DE_CEDL);
const key_override_t neo2_ss = ko_make_basic(MOD_MASK_SHIFT, DE_SS, DE_SS);
const key_override_t neo2_acut = ko_make_basic(MOD_MASK_SHIFT, DE_ACUT, DE_TILD);
const key_override_t neo2_comm = ko_make_basic(MOD_MASK_SHIFT, DE_COMM, DE_NDSH);
const key_override_t neo2_dot = ko_make_basic(MOD_MASK_SHIFT, DE_DOT, DE_BULT);
const key_override_t *key_overrides[] = {
    &neo2_circ,
    &neo2_1,
    &neo2_2,
    &neo2_3,
    &neo2_4,
    &neo2_5,
    &neo2_6,
    &neo2_7,
    &neo2_8,
    &neo2_9,
    &neo2_0,
    &neo2_mins,
    &neo2_grv,
    &neo2_ss,
    &neo2_acut,
    &neo2_comm,
    &neo2_dot,
};

static uint8_t capslock_state = 0;
static uint8_t german_toggle = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t active_mods = get_mods();

    if (keycode == KC_LSFT || keycode == KC_RSFT) {
        if (record->event.pressed) {
            capslock_state |= (MOD_BIT(keycode));
            add_mods(MOD_BIT(keycode));
        } else {
            capslock_state &= ~(MOD_BIT(keycode));
            del_mods(MOD_BIT(keycode));
        }
        if ((capslock_state & MOD_MASK_SHIFT) == MOD_MASK_SHIFT) {
            clear_mods();
            tap_code_delay(KC_CAPS_LOCK, 100);
            set_mods(active_mods);
            return false;
        }
        return true;
    } else if (keycode == NEO2_LM3 || keycode == NEO2_RM3) {
        if (record->event.pressed) {
            layer_on(NEO_L3);
        } else {
            layer_off(NEO_L3);
        }
    } else if (keycode == NEO2_LM4 || keycode == NEO2_RM4) {
        if (record->event.pressed) {
            layer_on(NEO_L4);
        } else {
            layer_off(NEO_L4);
        }
    }

    if (keycode == KC_ESC) {
        if (record->event.pressed) {
            german_toggle++;
        } else {
            german_toggle--;
        }
    }
    if (keycode == KC_BRID && german_toggle == 1) {
        if (record->event.pressed) {
            layer_invert(DE_L1);
        }
    }

    return true;
};

#ifdef CONSOLE_ENABLED
void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
#endif
