#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_5x8( \
    L11, L12, L13, L14, L15, L16, L17, L18,   \
    L21, L22, L23, L24, L25, L26, L27, L28,     \
    L31, L32, L33, L34, L35, L36, L37, L38,    \
    L41, L42, L43, L44, L45, L46, L47, L48,           \
    L51, L52, L53, L54,                     \
                        L55, L56, L57, L58,           \
                                  L67, L68, \
                                  L77, L78, \
    R18, R17, R16, R15, R14, R13, R12, R11, \
    R28, R27, R26, R25, R24, R23, R22, R21, \
    R38, R37, R36, R35, R34, R33, R32, R31, \
    R48, R47, R46, R45, R44, R43, R42, R41, \
    R58, R57, R56, R55, \
                        R54, R53, R52, R51, \
                                  R68, R67,                         \
                                  R78, R77                               \
  ) \
  { \
    { L11,   L12,   L13, L14, L15, L16,   L17,  L18 }, \
    { L21,   L22,   L23, L24, L25, L26,   L27,  L28 }, \
    { L31,   L32,   L33, L34, L35, L36,   L37,  L38 }, \
    { L41,   L42,   L43, L44, L45, L46,   L47,  L48 }, \
    { L51,   L52,   L53, L54, L55, L56,   L57,  L58 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L67, L68 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L77, L78 }, \
    { R11,   R12,   R13, R14, R15, R16,   R17,  R18   }, \
    { R21,   R22,   R23, R24, R25, R26,   R27,  R28   }, \
    { R31,   R32,   R33, R34, R35, R36,   R37,  R38   }, \
    { R41,   R42,   R43, R44, R45, R46,   R47,  R48   }, \
    { R51,   R52,   R53, R54, R55, R56,   R57,  R58   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, R67, R68 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, R77, R78 }  \
}
