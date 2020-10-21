#ifndef KB_H
#define KB_H

#include "quantum.h"

// clang-format off

#define KEYMAP( \
	K0000, K0001, K0002, K0003, K0004, K0005, K0006,                                                                       \
	K0100, K0101, K0102, K0103, K0104, K0105, K0106,                                                                       \
	K0200, K0201, K0202, K0203, K0204, K0205, K0206,                                                                       \
	K0300, K0301, K0302, K0303, K0304, K0305, K0306,                                                                       \
	       K0401, K0402, K0403, K0404, K0405, K0406,                                                                       \
	              K0502, K0503, K0504,        K0506,                                                                       \
	                                                 K0607, K0608, K0609, K0610, K0611, K0612, K0613, K0614, K0615, K0616, \
	                                                 K0707, K0708, K0709, K0710, K0711, K0712, K0713, K0714, K0715, K0716, \
	                                                 K0807, K0808, K0809, K0810, K0811, K0812, K0813, K0814,        K0816, \
	                                                 K0907, K0908, K0909, K0910, K0911, K0912, K0913,               K0916, \
	                                                 K1007, K1008, K1009, K1010, K1011, K1012,               K1015, K1016, \
	                                                 K1107,        K1109, K1110, K1111,               K1114, K1115, K1116  \
) { \
	{ K0000, K0001, K0002, K0003, K0004, K0005, K0006, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0100, K0101, K0102, K0103, K0104, K0105, K0106, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0200, K0201, K0202, K0203, K0204, K0205, K0206, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0300, K0301, K0302, K0303, K0304, K0305, K0306, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, K0401, K0402, K0403, K0404, K0405, K0406, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, K0502, K0503, K0504, KC_NO, K0506, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0607, K0608, K0609, K0610, K0611, K0612, K0613, K0614, K0615, K0616 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0707, K0708, K0709, K0710, K0711, K0712, K0713, K0714, K0715, K0716 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0807, K0808, K0809, K0810, K0811, K0812, K0813, K0814, KC_NO, K0816 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0907, K0908, K0909, K0910, K0911, K0912, K0913, KC_NO, KC_NO, K0916 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K1007, K1008, K1009, K1010, K1011, K1012, KC_NO, KC_NO, K1015, K1016 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K1107, KC_NO, K1109, K1110, K1111, KC_NO, KC_NO, K1114, K1115, K1116 }  \
}

#endif
