/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_SAMIM_12
#define LV_FONT_SAMIM_12 1
#endif

#if LV_FONT_SAMIM_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+000D "\r" */
    0x0,

    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x14, 0x49, 0xf9, 0x22, 0x9f, 0xca, 0x24, 0x48,

    /* U+0024 "$" */
    0x23, 0xe9, 0x46, 0x1c, 0xa5, 0xf1, 0x8,

    /* U+0025 "%" */
    0x62, 0x49, 0x25, 0x13, 0x66, 0xc8, 0xa4, 0x52,
    0x49, 0x23, 0x0,

    /* U+0026 "&" */
    0x30, 0x48, 0x48, 0x58, 0x20, 0x52, 0x8e, 0x86,
    0x7b,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x4a, 0x49, 0x24, 0x89, 0x0,

    /* U+0029 ")" */
    0x48, 0x92, 0x49, 0x29, 0x0,

    /* U+002A "*" */
    0x10, 0x47, 0xcc, 0x28, 0x20,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x10,

    /* U+002C "," */
    0x58,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x22, 0x24, 0x44, 0x80,

    /* U+0030 "0" */
    0x7b, 0x28, 0x61, 0x86, 0x18, 0x52, 0x78,

    /* U+0031 "1" */
    0x7c, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x39, 0x10, 0x41, 0x8, 0x42, 0x10, 0xfc,

    /* U+0033 "3" */
    0xf4, 0x42, 0x37, 0x4, 0x21, 0xf0,

    /* U+0034 "4" */
    0x8, 0x62, 0x8a, 0x4a, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0x79, 0x4, 0x1e, 0xc, 0x10, 0x63, 0x78,

    /* U+0036 "6" */
    0x39, 0x8, 0x2e, 0xce, 0x18, 0x73, 0x78,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x41, 0x8, 0x20,

    /* U+0038 "8" */
    0x72, 0x28, 0x94, 0x72, 0x38, 0x61, 0x78,

    /* U+0039 "9" */
    0x7b, 0x28, 0x61, 0x8d, 0xd0, 0x42, 0x70,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x87,

    /* U+003C "<" */
    0x4, 0x66, 0x20, 0x60, 0x60,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x81, 0x3, 0x3, 0x33, 0x0,

    /* U+003F "?" */
    0xe1, 0x11, 0x24, 0x40, 0x40,

    /* U+0040 "@" */
    0x1e, 0x30, 0x97, 0xf6, 0x5a, 0x2d, 0x16, 0x8b,
    0xba, 0x60, 0x1f, 0x0,

    /* U+0041 "A" */
    0x10, 0x18, 0x28, 0x24, 0x24, 0x7c, 0x42, 0x42,
    0x82,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x38, 0x61, 0xf8,

    /* U+0043 "C" */
    0x3d, 0x8, 0x20, 0x82, 0x8, 0x10, 0x3c,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0x60, 0xc2, 0xf8,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x80,

    /* U+0047 "G" */
    0x3e, 0x82, 0x4, 0x8, 0xf0, 0x60, 0xa1, 0x3e,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x24, 0x92, 0x49, 0x24, 0xe0,

    /* U+004B "K" */
    0x8e, 0x29, 0x28, 0xe2, 0x49, 0x22, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0xc3, 0xc3, 0xc3, 0xa5, 0xa5, 0xa5, 0x99, 0x99,
    0x99,

    /* U+004E "N" */
    0xc3, 0x86, 0x8d, 0x19, 0x31, 0x62, 0xc3, 0x86,

    /* U+004F "O" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10, 0x80,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c, 0x4, 0x2,

    /* U+0052 "R" */
    0xf2, 0x28, 0xa2, 0xf2, 0x49, 0x22, 0x88,

    /* U+0053 "S" */
    0x7c, 0x21, 0x87, 0x4, 0x21, 0xf0,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7c,

    /* U+0056 "V" */
    0x82, 0x85, 0x12, 0x22, 0x45, 0xa, 0x14, 0x10,

    /* U+0057 "W" */
    0x84, 0x29, 0x85, 0x29, 0x25, 0x24, 0xa4, 0x62,
    0x8c, 0x61, 0x8c, 0x30, 0x80,

    /* U+0058 "X" */
    0x44, 0x88, 0xa1, 0xc1, 0x5, 0xa, 0x22, 0x86,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x42, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x30, 0x84, 0x30, 0x84, 0x30, 0xfc,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x93, 0x80,

    /* U+005C "\\" */
    0x84, 0x44, 0x22, 0x21, 0x10,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x27, 0x80,

    /* U+005E "^" */
    0x10, 0xc2, 0x92, 0x46, 0x10,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x48,

    /* U+0061 "a" */
    0x70, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0xce, 0xe0,

    /* U+0063 "c" */
    0x7e, 0x21, 0x8, 0x61, 0xe0,

    /* U+0064 "d" */
    0x4, 0x10, 0x5d, 0xce, 0x18, 0x61, 0xcd, 0xf0,

    /* U+0065 "e" */
    0x76, 0x63, 0xf8, 0x61, 0xe0,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x7e, 0x28, 0xa2, 0x71, 0x7, 0xe1, 0x85, 0xe0,

    /* U+0068 "h" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0x24, 0xf0,

    /* U+006B "k" */
    0x84, 0x21, 0x39, 0x53, 0x94, 0x94, 0x40,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xb7, 0x64, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0070 "p" */
    0xbb, 0x38, 0x61, 0x87, 0x3b, 0xa0, 0x82, 0x0,

    /* U+0071 "q" */
    0x77, 0x38, 0x61, 0x87, 0x37, 0x41, 0x4, 0x10,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x7c, 0x20, 0xe0, 0x87, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x70,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xcd, 0xa0,

    /* U+0076 "v" */
    0x85, 0x34, 0x92, 0x30, 0xc3, 0x0,

    /* U+0077 "w" */
    0x88, 0xa6, 0x55, 0x2a, 0xa5, 0x53, 0x18, 0x8c,

    /* U+0078 "x" */
    0x45, 0x23, 0x4, 0x31, 0x24, 0x40,

    /* U+0079 "y" */
    0x85, 0x34, 0x92, 0x30, 0xc3, 0x8, 0x23, 0x0,

    /* U+007A "z" */
    0xf8, 0x88, 0x44, 0x43, 0xe0,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+007E "~" */
    0xe0, 0x70,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbf,

    /* U+00A2 "¢" */
    0x23, 0xf1, 0x8, 0x43, 0xf, 0x20,

    /* U+00A3 "£" */
    0x39, 0x4, 0x10, 0xf1, 0x4, 0x10, 0xfc,

    /* U+00A4 "¤" */
    0xfc, 0x63, 0x1f, 0x80,

    /* U+00A5 "¥" */
    0xc6, 0x89, 0xb1, 0x42, 0x8f, 0x9f, 0x8, 0x10,

    /* U+00A6 "¦" */
    0xf8, 0xf8,

    /* U+00A7 "§" */
    0x7c, 0x30, 0xe8, 0xc5, 0xc1, 0xf, 0x80,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0x1c, 0x31, 0x97, 0x54, 0x1a, 0xd, 0x6, 0x82,
    0xba, 0x63, 0x1f, 0x0,

    /* U+00AA "ª" */
    0xe7, 0xde,

    /* U+00AB "«" */
    0x9a, 0xaa, 0xa9,

    /* U+00AC "¬" */
    0xfc, 0x10, 0x41,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x1c, 0x31, 0x97, 0x52, 0x99, 0x4c, 0xc6, 0x52,
    0xaa, 0x63, 0x1f, 0x0,

    /* U+00AF "¯" */
    0xfc,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x21, 0x9, 0xf2, 0x10, 0x1f,

    /* U+00B2 "²" */
    0x71, 0x12, 0x4f,

    /* U+00B3 "³" */
    0x71, 0x16, 0x1f,

    /* U+00B4 "´" */
    0x50,

    /* U+00B5 "µ" */
    0x8c, 0x63, 0x18, 0xcf, 0xf0, 0x84, 0x0,

    /* U+00B6 "¶" */
    0x3e, 0xf5, 0xef, 0xd7, 0xaf, 0x46, 0x85, 0xa,
    0x14, 0x28, 0x50,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x9c,

    /* U+00B9 "¹" */
    0x64, 0x92, 0x40,

    /* U+00BA "º" */
    0x69, 0x99, 0x60,

    /* U+00BB "»" */
    0xa5, 0x55, 0x5a,

    /* U+00BC "¼" */
    0x62, 0x11, 0x9, 0x4, 0x82, 0x90, 0xb8, 0x54,
    0x4f, 0x21, 0x0,

    /* U+00BD "½" */
    0x62, 0x11, 0x9, 0x5, 0x72, 0x88, 0x84, 0x44,
    0x44, 0x43, 0x80,

    /* U+00BE "¾" */
    0x71, 0x4, 0x46, 0x20, 0x50, 0x14, 0xba, 0x60,
    0xa8, 0x4f, 0x20, 0x80,

    /* U+00BF "¿" */
    0x20, 0x22, 0x48, 0x88, 0x70,

    /* U+F001 "" */
    0x0, 0x70, 0x3f, 0x1f, 0xf1, 0xfb, 0x1c, 0x31,
    0x83, 0x18, 0x31, 0x83, 0x19, 0xf7, 0x9f, 0xf8,
    0x47, 0x0,

    /* U+F008 "" */
    0xbf, 0xde, 0x7, 0xa0, 0x5e, 0x7, 0xbf, 0xde,
    0x7, 0xa0, 0x5e, 0x7, 0xbf, 0xd0,

    /* U+F00B "" */
    0xf7, 0xf7, 0xbf, 0xfd, 0xfe, 0x0, 0xf, 0x7f,
    0x7b, 0xff, 0xdf, 0xc0, 0x0, 0xf7, 0xf7, 0xbf,
    0xfd, 0xfc,

    /* U+F00C "" */
    0x0, 0x20, 0x7, 0x0, 0xe4, 0x1c, 0xe3, 0x87,
    0x70, 0x3e, 0x1, 0xc0, 0x8, 0x0,

    /* U+F00D "" */
    0xc3, 0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xe7, 0xc3,

    /* U+F011 "" */
    0x6, 0x2, 0x64, 0x76, 0xe6, 0x66, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x3, 0x60, 0x67, 0xe, 0x3f,
    0xc0, 0xf0,

    /* U+F013 "" */
    0xe, 0x4, 0xf0, 0x7f, 0xef, 0xfe, 0x71, 0xe7,
    0xc, 0x71, 0xef, 0xfe, 0x7f, 0xe4, 0xf0, 0xe,
    0x0,

    /* U+F015 "" */
    0x3, 0x30, 0x1e, 0xc1, 0xcf, 0xc, 0xcc, 0x6f,
    0xdb, 0x7f, 0xb3, 0xff, 0xf, 0x3c, 0x3c, 0xf0,
    0xf3, 0xc0,

    /* U+F019 "" */
    0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0x3f, 0xc3,
    0xf8, 0x1f, 0x0, 0xe0, 0xf5, 0xff, 0xff, 0xff,
    0x5f, 0xff,

    /* U+F01C "" */
    0x1f, 0xe0, 0xc0, 0xc6, 0x1, 0x90, 0x2, 0xf8,
    0x7f, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+F021 "" */
    0x0, 0x31, 0xf3, 0x71, 0xfc, 0x7, 0xc3, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfc, 0x3e, 0x3, 0xf8,
    0xec, 0xf8, 0xc0, 0x0,

    /* U+F026 "" */
    0xc, 0x7f, 0xff, 0xff, 0xf1, 0xc3,

    /* U+F027 "" */
    0xc, 0xe, 0x3f, 0x7f, 0x9f, 0xdf, 0xe0, 0x70,
    0x18,

    /* U+F028 "" */
    0x0, 0x60, 0x1, 0x83, 0x34, 0x38, 0xdf, 0xda,
    0xfe, 0x57, 0xf6, 0xbf, 0x8d, 0x1c, 0xd0, 0x61,
    0x80, 0x18,

    /* U+F03E "" */
    0xff, 0xf9, 0xff, 0x9f, 0xf9, 0xef, 0xfc, 0x7d,
    0x83, 0xc0, 0x38, 0x3, 0xff, 0xf0,

    /* U+F043 "" */
    0x0, 0xc, 0x7, 0x7, 0x83, 0xe3, 0xfb, 0xfd,
    0xff, 0xdf, 0xef, 0x99, 0xc7, 0x80,

    /* U+F048 "" */
    0xc3, 0xc7, 0xcf, 0xdf, 0xff, 0xff, 0xdf, 0xcf,
    0xc7, 0xc3,

    /* U+F04B "" */
    0x0, 0x1c, 0x3, 0xe0, 0x7f, 0xf, 0xf9, 0xff,
    0xbf, 0xff, 0xfe, 0xff, 0x9f, 0xc3, 0xe0, 0x70,
    0x0, 0x0,

    /* U+F04C "" */
    0xfb, 0xff, 0x7f, 0xef, 0xfd, 0xff, 0xbf, 0xf7,
    0xfe, 0xff, 0xdf, 0xfb, 0xff, 0x7c,

    /* U+F04D "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+F051 "" */
    0xc3, 0xe3, 0xf3, 0xfb, 0xff, 0xff, 0xfb, 0xf3,
    0xe3, 0xc3,

    /* U+F052 "" */
    0xc, 0x3, 0xc0, 0x7c, 0x1f, 0xc7, 0xfd, 0xff,
    0xbf, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+F053 "" */
    0xc, 0x73, 0x9c, 0xe3, 0x87, 0xe, 0x1c, 0x30,

    /* U+F054 "" */
    0x83, 0x87, 0xe, 0x1c, 0x73, 0x9c, 0xe2, 0x0,

    /* U+F067 "" */
    0xe, 0x1, 0xc0, 0x38, 0x7, 0xf, 0xff, 0xff,
    0xc3, 0x80, 0x70, 0xe, 0x1, 0xc0,

    /* U+F068 "" */
    0xff, 0xff, 0xfc,

    /* U+F06E "" */
    0xf, 0x81, 0xc7, 0x1c, 0x1d, 0xc6, 0x7e, 0xfb,
    0xf7, 0xdd, 0xdd, 0xc7, 0x1c, 0xf, 0x80,

    /* U+F070 "" */
    0x0, 0x1, 0xc0, 0x1, 0xdf, 0x0, 0xe3, 0x80,
    0xdb, 0x84, 0xfb, 0x9c, 0x77, 0x3c, 0x6e, 0x38,
    0x78, 0x38, 0x70, 0x1e, 0x30, 0x0, 0x30, 0x0,
    0x0,

    /* U+F071 "" */
    0x3, 0x0, 0x1c, 0x0, 0xf8, 0x3, 0xf0, 0x1c,
    0xc0, 0x73, 0x83, 0xcf, 0x1f, 0xfc, 0x7c, 0xfb,
    0xf3, 0xef, 0xff, 0x80,

    /* U+F074 "" */
    0x0, 0x0, 0x6, 0xe1, 0xff, 0x3f, 0x17, 0x60,
    0xe4, 0x1f, 0x6f, 0xbf, 0xf1, 0xf0, 0x6, 0x0,
    0x40,

    /* U+F077 "" */
    0x0, 0x3, 0x1, 0xe0, 0xcc, 0x61, 0xb0, 0x30,
    0x0,

    /* U+F078 "" */
    0x0, 0x30, 0x36, 0x18, 0xcc, 0x1e, 0x3, 0x0,
    0x0,

    /* U+F079 "" */
    0x30, 0x0, 0xf7, 0xf3, 0xf0, 0x65, 0xa0, 0xc3,
    0x1, 0x86, 0xb, 0x4c, 0x1f, 0x9f, 0xde, 0x0,
    0x18,

    /* U+F07B "" */
    0x78, 0xf, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+F093 "" */
    0x6, 0x0, 0xf0, 0x1f, 0x83, 0xfc, 0x7, 0x0,
    0x70, 0x7, 0x0, 0x70, 0xf7, 0xff, 0xff, 0xff,
    0x5f, 0xff,

    /* U+F095 "" */
    0x0, 0x0, 0xf, 0x0, 0xf0, 0x1f, 0x0, 0xf0,
    0x6, 0x0, 0xe0, 0x1c, 0x73, 0xcf, 0xf8, 0xfe,
    0xf, 0xc0, 0x40, 0x0,

    /* U+F0C4 "" */
    0x70, 0x5b, 0x3f, 0x6f, 0x3f, 0xc1, 0xf0, 0x3e,
    0x1f, 0xe6, 0xde, 0xd9, 0xee, 0x8,

    /* U+F0C5 "" */
    0x1f, 0x43, 0xef, 0x7f, 0xef, 0xfd, 0xff, 0xbf,
    0xf7, 0xfe, 0xff, 0xdf, 0xf8, 0x3, 0xfc, 0x0,

    /* U+F0C7 "" */
    0xff, 0x98, 0x1b, 0x3, 0xe0, 0x7c, 0xf, 0xff,
    0xfe, 0x7f, 0x8f, 0xf9, 0xff, 0xfc,

    /* U+F0C9 "" */
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xe0,

    /* U+F0E0 "" */
    0xff, 0xff, 0xff, 0x7f, 0xeb, 0xfd, 0xcf, 0x3e,
    0x67, 0xf9, 0xff, 0xff, 0xff, 0xf0,

    /* U+F0E7 "" */
    0x78, 0x78, 0xf8, 0xf0, 0xff, 0xfe, 0xfc, 0x1c,
    0x18, 0x18, 0x10, 0x30,

    /* U+F0EA "" */
    0x18, 0x3b, 0x8e, 0xe3, 0xf8, 0xe0, 0x3b, 0xae,
    0xe7, 0xbf, 0xef, 0xfb, 0xf0, 0xfc, 0x3f,

    /* U+F0F3 "" */
    0x4, 0x0, 0x80, 0x7c, 0x1f, 0xc3, 0xf8, 0x7f,
    0x1f, 0xf3, 0xfe, 0x7f, 0xdf, 0xfc, 0x0, 0x7,
    0x0,

    /* U+F11C "" */
    0xff, 0xff, 0x52, 0xbd, 0x4a, 0xff, 0xff, 0xeb,
    0x5f, 0xff, 0xfd, 0x2, 0xf4, 0xb, 0xff, 0xfc,

    /* U+F124 "" */
    0x0, 0x0, 0xf, 0x3, 0xf0, 0xfe, 0x3f, 0xef,
    0xfc, 0xff, 0xc0, 0x78, 0x7, 0x80, 0x78, 0x7,
    0x0, 0x70, 0x2, 0x0,

    /* U+F15B "" */
    0xfa, 0x7d, 0xbe, 0xff, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+F1EB "" */
    0x7, 0xc0, 0x7f, 0xf1, 0xe0, 0xf7, 0x0, 0x70,
    0x7c, 0x3, 0xfe, 0x6, 0xc, 0x0, 0x0, 0x3,
    0x80, 0x7, 0x0, 0xe, 0x0,

    /* U+F240 "" */
    0xff, 0xff, 0x80, 0x1f, 0x7f, 0xfe, 0xff, 0xbd,
    0xff, 0xf8, 0x1, 0xff, 0xff, 0x80,

    /* U+F241 "" */
    0xff, 0xff, 0x80, 0x1f, 0x7f, 0x3e, 0xfe, 0x3d,
    0xfc, 0xf8, 0x1, 0xff, 0xff, 0x80,

    /* U+F242 "" */
    0xff, 0xff, 0x80, 0x1f, 0x78, 0x3e, 0xf0, 0x3d,
    0xe0, 0xf8, 0x1, 0xff, 0xff, 0x80,

    /* U+F243 "" */
    0xff, 0xff, 0x80, 0x1f, 0x60, 0x3e, 0xc0, 0x3d,
    0x80, 0xf8, 0x1, 0xff, 0xff, 0x80,

    /* U+F244 "" */
    0xff, 0xff, 0x80, 0x1f, 0x0, 0x3e, 0x0, 0x3c,
    0x0, 0xf8, 0x1, 0xff, 0xff, 0x80,

    /* U+F287 "" */
    0x0, 0xc0, 0x7, 0x80, 0x10, 0x7, 0x20, 0x6f,
    0xff, 0xfc, 0x41, 0x80, 0x40, 0x0, 0xb8, 0x0,
    0xf0,

    /* U+F293 "" */
    0x3e, 0x3b, 0x9c, 0xdb, 0x7c, 0xbf, 0x1f, 0x9f,
    0x87, 0xd5, 0xf9, 0x9d, 0xc7, 0xc0,

    /* U+F2ED "" */
    0xe, 0x1f, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0xd5,
    0x9a, 0xb3, 0x56, 0x6a, 0xcd, 0x59, 0xab, 0x3f,
    0xe0,

    /* U+F304 "" */
    0x0, 0x40, 0xe, 0x0, 0xf0, 0x37, 0x7, 0xa0,
    0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xc0, 0xf8,
    0xf, 0x0, 0x80, 0x0,

    /* U+F55A "" */
    0xf, 0xfe, 0x3f, 0xfc, 0xfb, 0x3b, 0xf0, 0xff,
    0xf3, 0xef, 0xc3, 0xcf, 0xb7, 0x8f, 0xff, 0xf,
    0xfe,

    /* U+F7C2 "" */
    0x1f, 0x9a, 0xbe, 0xaf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+F8A2 "" */
    0x0, 0x0, 0x3, 0x30, 0x37, 0x3, 0xff, 0xff,
    0xff, 0x70, 0x3, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 98, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 52, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 110, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 140, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 42, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 42, .adv_w = 57, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 47, .adv_w = 57, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 52, .adv_w = 106, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 57, .adv_w = 110, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 61, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 62, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 63, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 110, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 110, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 53, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 51, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 137, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 142, .adv_w = 110, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 144, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 149, .adv_w = 82, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 166, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 124, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 54, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 51, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 232, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 173, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 288, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 106, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 178, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 111, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 63, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 366, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 63, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 376, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 381, .adv_w = 86, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 382, .adv_w = 111, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 383, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 108, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 65, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 427, .adv_w = 118, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 49, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 49, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 441, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 49, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 179, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 118, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 477, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 485, .adv_w = 78, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 68, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 118, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 149, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 532, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 73, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 542, .adv_w = 106, .box_w = 1, .box_h = 13, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 544, .adv_w = 73, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 549, .adv_w = 110, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 551, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 51, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 553, .adv_w = 110, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 110, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 570, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 106, .box_w = 1, .box_h = 13, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 580, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 111, .box_w = 3, .box_h = 1, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 588, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 68, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 602, .adv_w = 91, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 110, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 608, .adv_w = 62, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 609, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 622, .adv_w = 82, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 624, .adv_w = 110, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 67, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 632, .adv_w = 67, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 635, .adv_w = 111, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 636, .adv_w = 119, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 643, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 654, .adv_w = 51, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 655, .adv_w = 44, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 656, .adv_w = 67, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 659, .adv_w = 72, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 662, .adv_w = 91, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 150, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 82, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 704, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 722, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 192, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 754, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 132, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 794, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 811, .adv_w = 216, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 829, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 847, .adv_w = 216, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 883, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 898, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 916, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 132, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 944, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 954, .adv_w = 168, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 972, .adv_w = 168, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 168, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1000, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1010, .adv_w = 168, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1026, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1034, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1042, .adv_w = 168, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1056, .adv_w = 168, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1059, .adv_w = 216, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 240, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1099, .adv_w = 216, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1119, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1136, .adv_w = 168, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1145, .adv_w = 168, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1154, .adv_w = 240, .box_w = 15, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1203, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1223, .adv_w = 168, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 168, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1253, .adv_w = 168, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 168, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1294, .adv_w = 120, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1306, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1321, .adv_w = 168, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1338, .adv_w = 216, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1354, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1374, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1388, .adv_w = 240, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1409, .adv_w = 240, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1423, .adv_w = 240, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1437, .adv_w = 240, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1451, .adv_w = 240, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1465, .adv_w = 240, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1479, .adv_w = 240, .box_w = 15, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 168, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1510, .adv_w = 168, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1527, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1547, .adv_w = 240, .box_w = 15, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 144, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1578, .adv_w = 193, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x7, 0xa, 0xb, 0xc, 0x10, 0x12, 0x14,
    0x18, 0x1b, 0x20, 0x25, 0x26, 0x27, 0x3d, 0x42,
    0x47, 0x4a, 0x4b, 0x4c, 0x50, 0x51, 0x52, 0x53,
    0x66, 0x67, 0x6d, 0x6f, 0x70, 0x73, 0x76, 0x77,
    0x78, 0x7a, 0x92, 0x94, 0xc3, 0xc4, 0xc6, 0xc8,
    0xdf, 0xe6, 0xe9, 0xf2, 0x11b, 0x123, 0x15a, 0x1ea,
    0x23f, 0x240, 0x241, 0x242, 0x243, 0x286, 0x292, 0x2ec,
    0x303, 0x559, 0x7c1, 0x8a1
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 13, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 32, .glyph_id_start = 97,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 61441, .range_length = 2210, .glyph_id_start = 129,
        .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 60, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 1, 2, 0, 0, 0, 3, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 6, 7, 6, 8,
    9, 0, 0, 0, 0, 7, 10, 0,
    0, 6, 11, 6, 0, 0, 12, 13,
    14, 14, 7, 15, 16, 2, 0, 0,
    0, 0, 0, 17, 18, 19, 0, 18,
    20, 0, 17, 0, 0, 21, 0, 17,
    17, 18, 18, 0, 22, 0, 19, 0,
    23, 23, 21, 23, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 2, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 5, 0, 6, 0, 0,
    0, 6, 0, 0, 7, 0, 0, 0,
    0, 6, 0, 6, 0, 0, 8, 9,
    10, 10, 11, 12, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 15, 15, 15,
    0, 16, 0, 0, 0, 0, 0, 17,
    17, 15, 17, 15, 17, 18, 0, 17,
    19, 19, 19, 19, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -13, 0, 0, 4,
    0, 4, 0, 2, 0, -8, -12, -6,
    -6, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, -13,
    -4, -12, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, -4, 25, -13,
    0, -8, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    -4, 0, 0, -6, 0, -2, -4, -2,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, 4, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, -4, 0, -4, -2, -4, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -25, 0, 0, -10, 0, 0, 0,
    0, 0, -4, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, -12, -8, 4,
    -13, -4, 0, 4, 0, 0, 0, 0,
    0, -15, -13, -13, -10, -12, -4, -8,
    0, -4, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 4,
    -8, -2, 0, 0, 0, 0, 0, 0,
    0, -4, -4, -2, -2, -2, 0, 0,
    0, -12, 0, 4, -12, -4, 0, 0,
    0, 0, 0, 0, 0, -10, -10, -4,
    -6, -8, 0, -4, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -2,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -4, -2, 0, 0, 0, 0,
    8, -8, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 23,
    .right_class_cnt     = 20,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_samim_12 = {
#else
lv_font_t lv_font_samim_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_SAMIM_12*/

