#pragma once

#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Row 1
#define LT_GRAVE GRAVE // `
#define LT_AOGO N1 // Ą
#define LT_CCAR N2 // Č
#define LT_EOGO N3 // Ę
#define LT_EDOT N4 // Ė
#define LT_IOGO N5 // Į
#define LT_SCAR N6 // Š
#define LT_UOGO N7 // Ų
#define LT_UMAC N8 // Ū
#define LT_9 N9 // 9
#define LT_0 N0 // 0
#define LT_MINUS MINUS // -
#define LT_ZCAR EQUAL // Ž

// Row 2
#define LT_Q Q // Q
#define LT_W W // W
#define LT_E E // E
#define LT_R R // R
#define LT_T T // T
#define LT_Y Y // Y
#define LT_U U // U
#define LT_I I // I
#define LT_O O // O
#define LT_P P // P
#define LT_LBKT LBKT // [
#define LT_RBKT RBKT // ]
#define LT_BSLH NUBS // (backslash)

// Row 3
#define LT_A A // A
#define LT_S S // S
#define LT_D D // D
#define LT_F F // F
#define LT_G G // G
#define LT_H H // H
#define LT_J J // J
#define LT_K K // K
#define LT_L L // L
#define LT_SEMI SEMI // ;
#define LT_SQT SQT // '

// Row 4
#define LT_Z Z // Z
#define LT_X X // X
#define LT_C C // C
#define LT_V V // V
#define LT_B B // B
#define LT_N N // N
#define LT_M M // M
#define LT_COMMA COMMA // ,
#define LT_DOT DOT // .
#define LT_FSLH FSLH // /

// Shifted symbols
// Row 1
#define LT_TILD LS(LT_GRAVE) // ~
#define LT_LPAR LS(LT_9) // (
#define LT_RPAR LS(LT_0) // )
#define LT_UNDS LS(LT_MINUS) // _

// Row 2
#define LT_LBRC LS(LT_LBKT) // {
#define LT_RBRC LS(LT_RBKT) // }
#define LT_PIPE LS(LT_BSLH) // |

// Row 3
#define LT_COLON LS(LT_SEMI) // :
#define LT_DQT LS(LT_SQT) // "

// Row 4
#define LT_LT LS(LT_COMMA) // <
#define LT_GT LS(LT_DOT) // >
#define LT_QMARK LS(LT_FSLH) // ?

// Alt Gr symbols
// Row 1
#define LT_1 RA(LT_AOGO) // 1
#define LT_2 RA(LT_CCAR) // 2
#define LT_3 RA(LT_EOGO) // 3 
#define LT_4 RA(LT_EDOT) // 4
#define LT_5 RA(LT_IOGO) // 5
#define LT_6 RA(LT_SCAR) // 6
#define LT_7 RA(LT_UOGO) // 7
#define LT_8 RA(LT_UMAC) // 8
#define LT_EQUAL RA(LT_ZCAR) // =

// Row 2
#define LT_EURO RA(LT_E) // €

// Shifted Alt Gr symbols
// Row 1
#define LT_EXCL LS(LT_1) // !
#define LT_AT LS(LT_2) // @
#define LT_HASH LS(LT_3) // #
#define LT_DLR LS(LT_4) // $
#define LT_PERC LS(LT_5) // %
#define LT_CIRC LS(LT_6) // ^
#define LT_AMPR LS(LT_7) // &
#define LT_ASTR LS(LT_8) // *
#define LT_PLUS LS(LT_EQUAL) // +