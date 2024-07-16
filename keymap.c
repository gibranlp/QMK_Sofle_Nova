/* Copyright 2021 HellSingCoder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _LIMBO,
    _LUST,
    _WRATH,
    _RAISE,
    _ADJUST,
};

// clang-format off
enum custom_keycodes {
    KC_LIMBO = SAFE_RANGE,
    KC_LUST,
    KC_WRATH,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_BSPC_DEL,
    KC_LAYER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * LIMBO
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  BS  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  `   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Caps |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------|  play |    | mute  |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LAYER| LCTR | /Space  /       \Enter \  |  [   |  ]   |  -   |  =   |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

[_LIMBO] =  LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_CAPS, KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(1), KC_RALT, KC_MINS, KC_EQL),

/*
 * LUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  BS  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |  Up  |  '   |
 * |------+------+------+------+------+------|  play |    | mute  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  | Left | Down | Right|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LAYER| LCTR | /Space  /       \Enter \  |  [   |  ]   |  -   |  =   |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_LUST] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL, KC_TAB, KC_HOME, KC_UP, KC_NO, KC_END, KC_F11, KC_F12, KC_NO, KC_UP, KC_NO, KC_PSCR, KC_LBRC, KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_BRID, KC_BRIU, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_RBRC, KC_LCTL, KC_PGDN, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_MUTE, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_RSFT, KC_CAPS, KC_TRNS, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT, KC_MINS, KC_EQL),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |  Up  |      | QK_BOOT|      |                    | PWrd | NWrd | Pscr |Scroll| Pause| F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Caps | Left | Down | Rigth|      |      |-------.    ,-------|      |      |  Ins | Home | PUp  |      |
 * |------+------+------+------+------+------|  play |    | mute  |------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |-------|    |-------|      | Menu |  Del |  End | PDown|      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |MACWIN| RAlt | LAYER| RCTR | /Enter  /       \Space \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_WRATH] = LAYOUT(KC_HOME, KC_NO, KC_NO, KC_NO, KC_NO, KC_WREF, KC_BRID, KC_BRIU, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_END, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_FIND, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_PGDN, KC_UNDO, KC_AGIN, KC_COPY, KC_PSTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_P0, KC_PDOT, KC_PENT),

/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,KC_DLINE, KC_BSPC,
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND,   _______, _______,
                         _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | QK_BOOT|      |QWERTY|      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  QK_BOOT, XXXXXXX,KC_LIMBO,XXXXXXX,CG_TOGG,XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX,CG_TOGG, XXXXXXX,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
  )
};
// clang-format on

#ifdef OLED_ENABLE

/* 32 * 32 logo */
static void render_logo(void) {
    static const char PROGMEM hell_logo[] = {255,  3,253,253, 13, 13,109,109,237,237,  1,  1,253,253,  1,  1,  1,  1,  1,  1,  1,  1,253,253,205,205,205,205,253,253,  3,255,255,  0, 51, 51, 51,243,243, 51, 51, 51,  0,  0,179,147,131,243,243,131,147,179,  0,  0,243,243, 48, 48, 48, 48, 48, 48,  0,255,255,  0,204,204,204,207,207,204,204,204,  0,  0,205,201,193,207,207,193,201,205,  0,  0,207,207,204,204,204,204,204,204,  0,255,255,192,191,191,140,140,140,140,143,143,128,128,191,191,176,176,182,182,190,190,128,128,191,191,176,176,176,176,191,191,192,255};

    oled_write_raw_P(hell_logo, sizeof(hell_logo));
}

/* Smart Backspace Delete */

bool            shift_held = false;
static uint16_t held_shift = 0;

/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED      5
#    define MIN_RUN_SPEED       60

/* advanced settings */
#    define ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#    define ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;

/* logic */
static void render_nova(int NOVA_X, int NOVA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {
        /* 'sit1', 32x22px */
        {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224, 28,  2,  5,  2, 36,  4,  4,  2,169, 30,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224, 16,  8,104, 16,  8,  4,  3,  0,  0,  0,  0,  0,  0,  0,  2,  6,130,124,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  4, 12, 16, 16, 32, 32, 32, 40, 62, 28, 32, 32, 62, 15, 17, 31,  0,  0,  0,  0,  0,  0,  0,  0},

        /* 'sit2', 32x22px */
        {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224, 28,  2,  5,  2, 36,  4,  4,  2,169, 30,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,144,  8, 24, 96, 16,  8,  4,  3,  0,  0,  0,  0,  0,  0,  0,  2, 14,130,124,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  4, 12, 16, 16, 32, 32, 32, 40, 62, 28, 32, 32, 62, 15, 17, 31,  0,  0,  0,  0,  0,  0,  0,  0}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {
        /* 'walk1', 32x22px */
        {0,  0,  0,  0,  0,128, 64, 32, 16,144,144,144,160,192,128,128,128,112,  8, 20,  8,144, 16, 16,  8,164,120,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  8,252,  1,  0,  0,  0,  0,128,  0,  0,  1,  0,  0,  0,  0,  0,  0,  8, 24,234, 16, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3, 28, 32, 32, 60, 15, 17, 31,  3,  6, 24, 32, 32, 60, 12, 18, 30,  1,  0,  0,  0,  0,  0,  0,  0},

        /* 'walk2', 32x22px */
        {0,  0,  0,  0,  0,  0,128, 64, 32, 32, 32, 64,128,  0,  0,  0,  0,224, 16, 40, 16, 32, 32, 32, 16, 72,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31, 32,248,  2,  1,  1,  1,  1,  1,  1,  1,  3,  0,  0,  0,  0,  1,  0, 16, 48,213, 32, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63, 32, 48, 12,  2,  5,  9, 18, 30,  2, 28, 20,  8, 16, 32, 44, 50,  1,  0,  0,  0,  0,  0,  0,  0}};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {
        /* 'run1', 32x22px */
        {0,  0,  0,  0,224, 16,  8,  8,200,176,128,128,128,128,128,128,128, 64, 64, 60, 20,  4,  8,144, 24,  4,  8,176, 64,128,  0,  0,  0,  0,  0,  0,  1,  2,196,164,252,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,200, 88, 40, 42, 16, 15,  0,  0,  0,  0,  0,  0,  0, 14,  9,  4,  4,  4,  4,  2,  3,  2,  1,  1,  2,  2,  4,  8, 16, 38, 43, 50,  4,  5,  6,  0,  0,  0,  0,  0},

        /* 'run2', 32x22px */
        {0,  0,  0,224, 16, 16,240,  0,  0,  0,  0,  0,  0,  0,  0,128,128,128,124, 40,  8, 16, 32, 60,  8, 16, 32, 64,128,  0,  0,  0,  0,  0,  0,  3,  4,  8, 16, 17,249,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1, 16,176, 80, 85, 32, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2, 12, 16, 32, 40, 55,  2, 30, 32, 32, 24, 12, 20, 30,  1,  0,  0,  0,  0,  0,  0,  0}};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {
        /* 'bark1', 32x22px */
        {0,192, 32, 16,208, 48,  0,  0,  0,  0,  0,  0,  0,128,128, 64, 60, 20,  4,  8,144, 24,  4,  8,176, 64,128,  0,  0,  0,  0,  0,  0,  3,  4,  8, 16, 17,249,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,128,200, 72, 40, 42, 16, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2, 12, 16, 32, 41, 55,  2,  2,  4,  8, 16, 38, 43, 50,  4,  5,  6,  0,  0,  0,  0,  0,  0,  0},

        /* 'bark2', 32x22px */
        {0,224, 16, 16,240,  0,  0,  0,  0,  0,  0,  0,  0,128,128, 64, 64, 44, 20,  4,  8,144, 24,  4,  8,176, 64,128,  0,  0,  0,128,  0,  3,  4,  8, 16, 17,249,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,128,192, 72, 40, 42, 16, 15, 32, 74,137, 16,  0,  0,  0,  0,  0,  0,  0,  1,  2, 12, 16, 32, 40, 55,  2,  2,  4,  8, 16, 38, 43, 50,  4,  5,  6,  0,  0,  0,  0,  0,  0,  0}};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {
        /* 'sn   ', 32x22px */
        {0,  0,  0,  0,  0,  0,128, 64, 64, 64, 64,128,  0,  0,  0,  0,  0,  0,192, 64, 64,128,  0,128, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30, 33,240,  4,  2,  2,  2,  2,  3,  2,  2,  4,  4,  4,  3,  1,  0,  0,  9,  1,128,128,171,  4,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3, 28, 32, 32, 60, 15, 17, 31,  2,  6, 24, 32, 32, 56,  8, 16, 24,  4,  4,  2,  2,  1,  0,  0,  0,  0,},

        /* 'sneak2', 32x22px */
        {0,  0,  0,  0,  0,  0,128, 64, 64, 64,128,  0,  0,  0,  0,  0,  0,  0,224,160, 32, 64,128,192, 32, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0, 62, 65,240,  4,  2,  2,  2,  3,  2,  2,  2,  4,  4,  2,  1,  0,  0,  0,  4,  0, 64, 64, 85,130,124,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63, 32, 48, 12,  2,  5,  9, 18, 30,  4, 24, 16,  8, 16, 32, 40, 52,  6,  2,  1,  1,  0,  0,  0,  0,  0,}};
     
    /* animation */
    void animate_nova(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(NOVA_X, NOVA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(NOVA_X, NOVA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(NOVA_X, NOVA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(NOVA_X, NOVA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (led_usb_state.caps_lock) {
            oled_write_raw_P(bark[current_frame], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[current_frame], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[current_frame], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[current_frame], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[current_frame], ANIM_SIZE);
        }
    }

#    if OLED_TIMEOUT > 0
    /* the animation prevents the normal timeout from occuring */
    if (last_input_activity_elapsed() > OLED_TIMEOUT && last_led_activity_elapsed() > OLED_TIMEOUT) {
        oled_off();
        return;
    } else {
        oled_on();
    }
#    endif

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_nova();
    }
}

/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    render_logo();

    /* wpm counter */
    uint8_t n = get_current_wpm();
    char    wpm_str[4];
    oled_set_cursor(0, 14);
    wpm_str[3] = '\0';
    wpm_str[2] = '0' + n % 10;
    wpm_str[1] = '0' + (n /= 10) % 10;
    wpm_str[0] = '0' + n / 10;
    oled_write(wpm_str, false);

    oled_set_cursor(0, 15);
    oled_write(" wpm", false);
}

static void print_status_narrow(void) {
    /* Print current mode */
    oled_set_cursor(0, 0);
        oled_write("v1.15", false);

    oled_set_cursor(0, 2);

    switch (get_highest_layer(default_layer_state)) {
        case _LIMBO:
            oled_write("IPGOC", false);
            break;
        case _LUST:
            oled_write("LUST", false);
            break;
        default:
            oled_write("UNDEF", false);
    }

    oled_set_cursor(0, 4);

    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 6);

    switch (get_highest_layer(layer_state)) {
        case _LIMBO:
            oled_write("TROPO", false);
            break;
        case _LUST:
            oled_write("STRAT", false);
            break;
        case _RAISE:
            oled_write("Raise", false);   
            break;
        case _WRATH:
            oled_write("WRATH", false);
            break;
        case _ADJUST:
            oled_write("Adj  ", false);
            break;
        default:
            oled_write("Undef", false);
    }

     /* Nova */
    oled_set_cursor(0, 8);
    oled_write("NOVA!", false);

    /* caps lock */
    oled_set_cursor(0, 10);
    oled_write("CAPS!", led_usb_state.caps_lock);

    /* KEYBOARD NOVA PET RENDER START */

    render_nova(0, 13);

    /* KEYBOARD PET RENDER END */
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LIMBO:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_LIMBO);
            }
            return false;
        case KC_LUST:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_LUST);
            }
            return false;
        case KC_WRATH:
            if (record->event.pressed) {
                layer_on(_WRATH);
                update_tri_layer(_WRATH, _RAISE, _ADJUST);
            } else {
                layer_off(_WRATH);
                update_tri_layer(_WRATH, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_WRATH, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_WRATH, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    /* CMD-arrow on Mac, but we have CTL and GUI swapped */
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    /* CMD-arrow on Mac, but we have CTL and GUI swapped */
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;

            /* Smart Backspace Delete */

        case KC_RSFT:
        case KC_LSFT:
            shift_held = record->event.pressed;
            held_shift = keycode;
            break;
        case KC_BSPC_DEL:
            if (record->event.pressed) {
                if (shift_held) {
                    unregister_code(held_shift);
                    register_code(KC_DEL);
                } else {
                    register_code(KC_BSPC);
                }
            } else {
                unregister_code(KC_DEL);
                unregister_code(KC_BSPC);
                if (shift_held) {
                    register_code(held_shift);
                }
            }
            return false;

            /* LAYER */

        case KC_LAYER:
            if (record->event.pressed) {
                if (shift_held) {
                    if (record->event.pressed) {
                        if (get_highest_layer(default_layer_state) == _LIMBO) {
                            set_single_persistent_default_layer(_LUST);
                        } else if (get_highest_layer(default_layer_state) == _LUST) {
                            set_single_persistent_default_layer(_LIMBO);
                        }
                    }
                } else {
                    layer_on(_WRATH);
                    update_tri_layer(_WRATH, _RAISE, _ADJUST);
                }
            } else {
                layer_off(_WRATH);
                update_tri_layer(_WRATH, _RAISE, _ADJUST);
            }
            return false;

            /* KEYBOARD PET STATUS START */

        case KC_LCTL:
        case KC_RCTL:
            if (record->event.pressed) {
                isSneaking = true;
            } else {
                isSneaking = false;
            }
            break;
        case KC_SPC:
            if (record->event.pressed) {
                isJumping  = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;

            /* KEYBOARD PET STATUS END */
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    }
    return true;
}

#endif
    