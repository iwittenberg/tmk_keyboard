/*
 * References:
 * https://github.com/tmk/tmk_keyboard/blob/master/doc/keymap.md
 * https://github.com/tmk/tmk_keyboard/blob/master/doc/keycode.txt
 */
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /* Layer 0: QWERTY (Gaming)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |  +L2   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |   ~L1  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|  -   |           |  =   |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LAlt | Home | End  | LGui |                                       | Left | Down |  Up  | Right| RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |Space | Enter|------|       |------| Del  | BkSp |
     *                                 |      |      |  Esc |       |  `   |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // Left Hand
        ESC,   1,    2,    3,   4,   5,  NO, 
        TAB,   Q,    W,    E,   R,   T,  NO,
        FN0,   A,    S,    D,   F,   G,
        LSFT,  Z,    X,    C,   V,   B,  MINS,
        LCTRL, LALT, HOME, END, LGUI,
                                       NO,NO,
                                          NO,
                                  SPC,ENT,NO,
        // Right Hand
            NO,   6,   7,    8,    9,   0,    FN6,
            NO,   Y,   U,    I,    O,   P,    BSLS,
                  H,   J,    K,    L,   SCLN, QUOT,
            EQL,  N,   M,    COMM, DOT, SLSH, RSFT,
                       LEFT, DOWN, UP,  RGHT, RGUI,
        NO, NO,
        NO,
        GRV, DEL, BSPC
    ),
     
    /* Layer 1: Colemak Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |  -L2   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |  Q   |  W   |  F   |  P   |  G   |      |           |      |  J   |  L   |  U   |  Y   |  ;   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  A   |  R   |  S   |  T   |  D   |------|           |------|  H   |  N   |  E   |  I   |  O   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  Z   |  X   |  C   |  V   |  B   |      |           |      |  K   |  M   |  ,   |  .   |  /   |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP( // Layer 3: Function and Media Keys
        // Left Hand
         TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
         TRNS, Q,     W,     F,     P,     P,     TRNS,
         TRNS, A,     R,     S,     T,     D,
         TRNS, Z,     X,     C,     V,     B,     TRNS,
         TRNS, TRNS,  TRNS,  TRNS,  TRNS,
                                      TRNS, TRNS,
                                          TRNS,
                                  TRNS, TRNS, TRNS,
        // Right Hand
             TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN6,
             TRNS,  J,     L,     U,     Y,     SCLN,  TRNS,
                    H,     N,     E,     I,     O,     TRNS,
             TRNS,  K,     M,     COMM,  DOT,   SLSH,  TRNS,
                            TRNS, TRNS,  TRNS,  TRNS,  TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

     /* Layer 1
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      | TEENSY |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      | {    |   }  |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      | (    |   )  |      |------|           |------| Left | Down |  Up  | Right|      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      | [    |   ]  |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP( // Layer 1: Function and Media Keys
        // Left Hand
         TRNS,   TRNS,  TRNS,  TRNS,  TRNS, TRNS,  TRNS,
         TRNS,   TRNS,  TRNS,  FN1,   FN2,  TRNS,  TRNS,
         TRNS,   TRNS,  TRNS,  FN3,   FN4,  TRNS,
         TRNS,   TRNS,  TRNS,  LBRC,  RBRC, TRNS,  TRNS,
         TRNS,   TRNS,  TRNS,  TRNS,  TRNS,
                                            TRNS, TRNS,
                                            TRNS,
                                            TRNS, TRNS, TRNS,
        // Right Hand
             TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN5,
             TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
                    LEFT,  DOWN,  UP,    RGHT,  TRNS,  TRNS,
             TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
                           TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

     /* Layer X: Template Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    //KEYMAP( // Layer 3: Function and Media Keys
        //// Left Hand
         //TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
         //TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
         //TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
         //TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
         //TRNS, TRNS,  TRNS,  TRNS,  TRNS,
                                            //TRNS, TRNS,
                                                  //TRNS,
                                      //TRNS, TRNS, TRNS,
        //// Right Hand
             //TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
             //TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
                    //TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
             //TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
                            //TRNS, TRNS,  TRNS,  TRNS,  TRNS,
        //TRNS, TRNS,
        //TRNS,
        //TRNS, TRNS, TRNS
    //),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(2),
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    ACTION_MODS_KEY(MOD_LSFT, KC_9),
    ACTION_MODS_KEY(MOD_LSFT, KC_0),
    ACTION_FUNCTION(TEENSY_KEY),
    ACTION_LAYER_INVERT(1, ON_PRESS)
};


void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}
