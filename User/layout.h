//
//  keyboard layout
//
//          Esc     1       2       3       4       5       6       7       8       9       0       -       =       Bspc
//          Tab     q       w       e       r       t       y       u       i       o       p       [       ]       \
//          Cap     a       s       d       f       g       h       j       k       l       ;       '               Ent
//          Lsh             z       x       c       v       b       n       m       ,       .       /               Rsh
//          Lct     Win     Lal                             Spc                             Ral     Men     RCt     Mo
//
//          -------------------------------------------------------------------------------------------------------------
//
//          `       F1      F2      F3      F4      F5      F6      F7      F8      F9      F10     F11     F12     Del
//          Tab     q       pu      e       r       t       y       u       i       o       p       [       ]       \
//          Cap     ho      pd      en      f       g       h       j       k       l       ;       '               Ent
//          Lsh             z       x       c       v       b       n       m       ,       .       up              Rsh
//          Lct     Win     Lal                             Spc                             lef     dow     rig     []
//
//

//#include "debug.h"
#include "keycodes.h"

#define KB_LAYER 3
#define KB_ROW 5
#define KB_COLUMN 14
;
uint16_t KB_LAYOUT[KB_LAYER][KB_ROW*KB_COLUMN] = {
    {
        KC_S,           KC_1,           KC_2,           KC_3,   KC_4,   KC_5,   KC_6,       KC_7,   KC_8,   KC_9,       KC_0,           KC_MINUS,           KC_EQUAL,           KC_BACKSPACE,
        KC_TAB,         KC_Q,           KC_W,           KC_E,   KC_R,   KC_T,   KC_Y,       KC_U,   KC_I,   KC_O,       KC_P,           KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,   KC_BACKSLASH,
        KC_CAPS_LOCK,   KC_A,           KC_S,           KC_D,   KC_F,   KC_G,   KC_H,       KC_J,   KC_K,   KC_L,       KC_SEMICOLON,   KC_QUOTE,           KC_NO,              KC_ENTER,
        KC_LEFT_SHIFT,  KC_NO,          KC_Z,           KC_X,   KC_C,   KC_V,   KC_B,       KC_N,   KC_M,   KC_COMMA,   KC_DOT,         KC_SLASH,           KC_NO,              KC_RIGHT_SHIFT,
        KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_NO,  KC_NO,  KC_NO,  KC_SPACE,   KC_NO,  KC_NO,  KC_NO,      KC_RIGHT_ALT,   KC_RIGHT_GUI,       KC_RIGHT_CTRL,      KC_MO_1
    },{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    }
};

