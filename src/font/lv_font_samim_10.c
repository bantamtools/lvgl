/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_SAMIM_10
#define LV_FONT_SAMIM_10 1
#endif

#if LV_FONT_SAMIM_10

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
    0xfd,

    /* U+0022 "\"" */
    0xfc,

    /* U+0023 "#" */
    0x28, 0xa7, 0xca, 0x4b, 0xf5, 0x14,

    /* U+0024 "$" */
    0x27, 0xae, 0x73, 0x3f, 0x20,

    /* U+0025 "%" */
    0xc1, 0x52, 0xc5, 0x65, 0xa5, 0x4a, 0x82,

    /* U+0026 "&" */
    0x70, 0xa1, 0x41, 0x6, 0x52, 0xa2, 0x3a,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x5a, 0xaa, 0x40,

    /* U+0029 ")" */
    0xa5, 0x55, 0x80,

    /* U+002A "*" */
    0x21, 0x3e, 0x65, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0x60,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x22, 0x24, 0x44, 0x88,

    /* U+0030 "0" */
    0x74, 0xe3, 0x18, 0xc6, 0x6e,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49,

    /* U+0032 "2" */
    0x70, 0x42, 0x11, 0x11, 0x1f,

    /* U+0033 "3" */
    0x70, 0x42, 0xe0, 0x84, 0x2e,

    /* U+0034 "4" */
    0x8, 0x62, 0x92, 0x4b, 0xf0, 0x82,

    /* U+0035 "5" */
    0x72, 0x20, 0xe0, 0x84, 0x2e,

    /* U+0036 "6" */
    0x32, 0x21, 0x6c, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xf8, 0x44, 0x21, 0x10, 0x88,

    /* U+0038 "8" */
    0x74, 0x62, 0xe5, 0x46, 0x2e,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x84, 0x4e,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x86,

    /* U+003C "<" */
    0x9, 0x91, 0x83, 0x4,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x6, 0xc, 0x26, 0x40,

    /* U+003F "?" */
    0xe1, 0x12, 0x44, 0x4,

    /* U+0040 "@" */
    0x3c, 0x62, 0xdd, 0xa5, 0xa5, 0xa5, 0x9a, 0x40,
    0x3c,

    /* U+0041 "A" */
    0x10, 0xc3, 0xa, 0x49, 0xe4, 0x61,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc6, 0x3e,

    /* U+0043 "C" */
    0x39, 0x8, 0x20, 0x82, 0x4, 0x1e,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0xbc,

    /* U+0045 "E" */
    0xf8, 0x8f, 0x88, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88,

    /* U+0047 "G" */
    0x3d, 0x8, 0x20, 0x9e, 0x14, 0x4f,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x24, 0x92, 0x49, 0x38,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8a, 0x4a, 0x51,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb5, 0x6c, 0xc9,

    /* U+004E "N" */
    0x87, 0x1a, 0x69, 0x96, 0x58, 0xe1,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x8,
    0x8,

    /* U+0052 "R" */
    0xf2, 0x28, 0xa2, 0xf2, 0x48, 0xa2,

    /* U+0053 "S" */
    0x78, 0x84, 0x31, 0x1e,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x1c, 0xde,

    /* U+0056 "V" */
    0x86, 0x24, 0x92, 0x48, 0xc3, 0xc,

    /* U+0057 "W" */
    0x88, 0xc4, 0x55, 0x2a, 0xa5, 0x52, 0x99, 0x8c,
    0x44,

    /* U+0058 "X" */
    0x89, 0x23, 0xc, 0x31, 0x44, 0xa2,

    /* U+0059 "Y" */
    0x8c, 0x54, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0x44, 0x42, 0x22, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x88, 0x44, 0x42, 0x22,

    /* U+005D "]" */
    0xd5, 0x55, 0x70,

    /* U+005E "^" */
    0x22, 0x94, 0xa8, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x71, 0x79, 0x9f,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+0063 "c" */
    0x78, 0x88, 0x87,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+0065 "e" */
    0x74, 0x7f, 0xc, 0x3c,

    /* U+0066 "f" */
    0x74, 0xe4, 0x44, 0x44,

    /* U+0067 "g" */
    0x7c, 0x62, 0xe4, 0x3e, 0x31, 0x70,

    /* U+0068 "h" */
    0x84, 0x2d, 0x98, 0xc6, 0x31,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x5c,

    /* U+006B "k" */
    0x88, 0x9a, 0xca, 0xa9,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xef, 0x26, 0x4c, 0x99, 0x32, 0x40,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc4,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xb6, 0x63, 0x18, 0xfa, 0x10, 0x80,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21, 0x8,

    /* U+0072 "r" */
    0xba, 0x49, 0x0,

    /* U+0073 "s" */
    0xf8, 0x43, 0x1f,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x47,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa5, 0x10,

    /* U+0077 "w" */
    0x91, 0x9a, 0x5a, 0x6a, 0x66, 0x64,

    /* U+0078 "x" */
    0x4a, 0x88, 0x45, 0x44,

    /* U+0079 "y" */
    0x8c, 0x54, 0xa5, 0x10, 0x84, 0xc0,

    /* U+007A "z" */
    0xf1, 0x24, 0x8f,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x4c,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0x89, 0x24, 0xd2, 0x58,

    /* U+007E "~" */
    0xe1, 0xc0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbe,

    /* U+00A2 "¢" */
    0x27, 0x88, 0x88, 0x72,

    /* U+00A3 "£" */
    0x3a, 0x10, 0x8f, 0x21, 0x1f,

    /* U+00A4 "¤" */
    0xf9, 0x99, 0xf0,

    /* U+00A5 "¥" */
    0x8c, 0x54, 0xaf, 0x93, 0xe4,

    /* U+00A6 "¦" */
    0xf1, 0xe0,

    /* U+00A7 "§" */
    0xf8, 0x4b, 0x96, 0x1e,

    /* U+00A8 "¨" */
    0xc0,

    /* U+00A9 "©" */
    0x3c, 0x5a, 0xa1, 0xa1, 0xa1, 0xa1, 0x5a, 0x3c,

    /* U+00AA "ª" */
    0xee, 0xf0,

    /* U+00AB "«" */
    0x9a, 0xaa, 0xa0,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x3c, 0x7a, 0xa9, 0xa9, 0xb1, 0xa9, 0x42, 0x3c,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x56, 0xa0,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x42, 0x7c,

    /* U+00B2 "²" */
    0xe5, 0x70,

    /* U+00B3 "³" */
    0xf8, 0xf0,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x8c, 0x63, 0x18, 0xf6, 0x10, 0x80,

    /* U+00B6 "¶" */
    0x7f, 0xff, 0xff, 0xbc, 0x63, 0x18, 0xc0,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x1c,

    /* U+00B9 "¹" */
    0xd5,

    /* U+00BA "º" */
    0xf6, 0xa0,

    /* U+00BB "»" */
    0xa5, 0x55, 0xa0,

    /* U+00BC "¼" */
    0xc8, 0x91, 0x42, 0xa2, 0xc6, 0x97, 0xa2,

    /* U+00BD "½" */
    0xc8, 0x91, 0x42, 0xf2, 0x28, 0x92, 0x47,

    /* U+00BE "¾" */
    0xe4, 0x24, 0xc8, 0x2a, 0xf6, 0x2a, 0x2f, 0x42,

    /* U+00BF "¿" */
    0x20, 0x24, 0x48, 0x87,

    /* U+F001 "" */
    0x0, 0x40, 0xf1, 0xfc, 0x7d, 0x18, 0x44, 0x11,
    0x4, 0x47, 0x71, 0xdc, 0x0,

    /* U+F008 "" */
    0xbf, 0x78, 0x7e, 0x1e, 0xfd, 0xe1, 0xe8, 0x5f,
    0xfc,

    /* U+F00B "" */
    0xef, 0xfb, 0xf0, 0x3, 0xbf, 0xef, 0xc0, 0xe,
    0xff, 0xbf,

    /* U+F00C "" */
    0x0, 0xc0, 0x64, 0x33, 0x98, 0x7c, 0xe, 0x1,
    0x0,

    /* U+F00D "" */
    0xc7, 0xdd, 0xf1, 0xc7, 0xdd, 0xf1, 0x80,

    /* U+F011 "" */
    0xc, 0xb, 0x46, 0xdb, 0x33, 0xcc, 0xf0, 0x3c,
    0x1d, 0x86, 0x3f, 0x0,

    /* U+F013 "" */
    0xc, 0xe, 0x1f, 0xff, 0xf6, 0x33, 0x1b, 0xdf,
    0xff, 0x5c, 0xe, 0x0,

    /* U+F015 "" */
    0x4, 0x83, 0x70, 0xd6, 0x37, 0x6d, 0xf6, 0x7f,
    0xe, 0xe1, 0xdc, 0x3b, 0x80,

    /* U+F019 "" */
    0xe, 0x1, 0xc0, 0x38, 0x1f, 0xc1, 0xf0, 0x1c,
    0x3d, 0x7f, 0xfd, 0xff, 0xe0,

    /* U+F01C "" */
    0x3f, 0x8c, 0x19, 0x1, 0x60, 0x3f, 0x1f, 0xff,
    0xff, 0xf8,

    /* U+F021 "" */
    0x0, 0x47, 0xd6, 0x1d, 0xf, 0x0, 0x0, 0xf,
    0xb, 0x6, 0xe3, 0x27, 0x80,

    /* U+F026 "" */
    0x8, 0xff, 0xff, 0xfc, 0x61,

    /* U+F027 "" */
    0x8, 0x18, 0xf8, 0xf9, 0xf9, 0xfa, 0x18, 0x8,

    /* U+F028 "" */
    0x8, 0x83, 0x2b, 0xe2, 0xfc, 0xdf, 0x9b, 0xf5,
    0x46, 0x70, 0x42, 0x0, 0x80,

    /* U+F03E "" */
    0xff, 0xe7, 0xf9, 0xef, 0xf1, 0xc8, 0x60, 0x1f,
    0xfc,

    /* U+F043 "" */
    0x10, 0x60, 0xe3, 0xc7, 0xdf, 0xbf, 0xdf, 0x5c,
    0x70,

    /* U+F048 "" */
    0x86, 0x7b, 0xff, 0xff, 0xfb, 0xe7, 0x84,

    /* U+F04B "" */
    0xc0, 0x70, 0x3e, 0x1f, 0xcf, 0xff, 0xff, 0xfd,
    0xf8, 0xf0, 0x70, 0x0,

    /* U+F04C "" */
    0xf7, 0xfb, 0xfd, 0xfe, 0xff, 0x7f, 0xbf, 0xdf,
    0xef, 0xf7, 0x80,

    /* U+F04D "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80,

    /* U+F051 "" */
    0x87, 0x9f, 0x7f, 0xff, 0xff, 0x79, 0x84,

    /* U+F052 "" */
    0x18, 0x1e, 0x1f, 0x8f, 0xef, 0xf8, 0x3, 0xff,
    0xff,

    /* U+F053 "" */
    0x19, 0x99, 0x8c, 0x30, 0xc3,

    /* U+F054 "" */
    0x86, 0x18, 0x63, 0xb3, 0x10,

    /* U+F067 "" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x0,

    /* U+F068 "" */
    0xff, 0xff, 0xc0,

    /* U+F06E "" */
    0x1f, 0x6, 0x31, 0x9b, 0x73, 0x7e, 0xee, 0xdd,
    0x8c, 0x60, 0xf8,

    /* U+F070 "" */
    0xc0, 0x1, 0xdf, 0x1, 0xc6, 0x3, 0x4c, 0x67,
    0xb9, 0xc6, 0xe3, 0xf, 0x6, 0x18, 0xf, 0x38,
    0x0, 0x30,

    /* U+F071 "" */
    0x4, 0x1, 0xc0, 0x3c, 0xd, 0x83, 0xb8, 0x77,
    0x1f, 0xf3, 0xdf, 0xfb, 0xff, 0xfc,

    /* U+F074 "" */
    0x1, 0xb8, 0xf3, 0x58, 0x30, 0x18, 0xd, 0xee,
    0x3c, 0x6,

    /* U+F077 "" */
    0x1c, 0x1f, 0x1d, 0xdc, 0x7c, 0x18,

    /* U+F078 "" */
    0xc1, 0xb1, 0x8d, 0x83, 0x80, 0x80,

    /* U+F079 "" */
    0x20, 0x3, 0x9f, 0x3e, 0x8, 0x40, 0x42, 0x2,
    0x10, 0x7c, 0xf9, 0xc0, 0x4,

    /* U+F07B "" */
    0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc,

    /* U+F093 "" */
    0xc, 0x7, 0x83, 0xf0, 0xfc, 0xc, 0x3, 0xe,
    0xdf, 0xfd, 0xff, 0xc0,

    /* U+F095 "" */
    0x1, 0x80, 0x70, 0x3c, 0x7, 0x1, 0x80, 0x62,
    0x33, 0xf8, 0xfc, 0x3e, 0x0,

    /* U+F0C4 "" */
    0x0, 0x79, 0xe5, 0xcf, 0xc1, 0xc3, 0xe3, 0xd9,
    0x26, 0x61, 0x0,

    /* U+F0C5 "" */
    0x1d, 0xe, 0xf7, 0x1b, 0xfd, 0xfe, 0xff, 0x7f,
    0xbf, 0xc0, 0x7e, 0x0,

    /* U+F0C7 "" */
    0xfe, 0x41, 0xa0, 0xf0, 0x7f, 0xff, 0x3f, 0x9f,
    0xff,

    /* U+F0C9 "" */
    0xff, 0x80, 0x0, 0x1f, 0xf0, 0x0, 0x3, 0xfe,

    /* U+F0E0 "" */
    0x7f, 0xff, 0xf7, 0xfa, 0xfd, 0xde, 0xfc, 0xff,
    0xff, 0xff,

    /* U+F0E7 "" */
    0x73, 0xcf, 0x3f, 0xfc, 0x63, 0xc, 0x20,

    /* U+F0EA "" */
    0x10, 0x76, 0x3f, 0x1c, 0xe, 0xd7, 0x67, 0xbf,
    0xdf, 0xf, 0x87, 0xc0,

    /* U+F0F3 "" */
    0x8, 0xe, 0xf, 0x8f, 0xe7, 0xf3, 0xf9, 0xfd,
    0xff, 0x0, 0xe, 0x0,

    /* U+F11C "" */
    0xff, 0xf5, 0x57, 0xff, 0xea, 0xbf, 0xff, 0x41,
    0x7f, 0xf8,

    /* U+F124 "" */
    0x0, 0xc0, 0xf0, 0xf8, 0xfe, 0xff, 0xbf, 0xc0,
    0xf0, 0x38, 0xe, 0x3, 0x0,

    /* U+F15B "" */
    0xf4, 0xf6, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+F1EB "" */
    0x1f, 0xc3, 0xef, 0xb8, 0xe, 0x3f, 0x3, 0xc,
    0x0, 0x0, 0x18, 0x0, 0xc0,

    /* U+F240 "" */
    0xff, 0xe8, 0x3, 0xbf, 0xdb, 0xfd, 0x80, 0x3f,
    0xff,

    /* U+F241 "" */
    0xff, 0xe8, 0x3, 0xbf, 0x1b, 0xf1, 0x80, 0x3f,
    0xff,

    /* U+F242 "" */
    0xff, 0xe8, 0x3, 0xbc, 0x1b, 0xc1, 0x80, 0x3f,
    0xff,

    /* U+F243 "" */
    0xff, 0xe8, 0x3, 0xb0, 0x1b, 0x1, 0x80, 0x3f,
    0xff,

    /* U+F244 "" */
    0xff, 0xf8, 0x3, 0x80, 0x18, 0x1, 0x80, 0x3f,
    0xff,

    /* U+F287 "" */
    0x1, 0x0, 0x3c, 0x2, 0x1, 0xd0, 0x2f, 0xff,
    0xf2, 0x8, 0xb, 0x0, 0x38,

    /* U+F293 "" */
    0x3c, 0x76, 0xf3, 0xdb, 0xe7, 0xe7, 0xdb, 0xf3,
    0x76, 0x3c,

    /* U+F2ED "" */
    0x1c, 0x7f, 0xc0, 0xf, 0xe5, 0x52, 0xa9, 0x54,
    0xaa, 0x55, 0x3f, 0x80,

    /* U+F304 "" */
    0x1, 0x80, 0xf0, 0x5c, 0x3a, 0x1f, 0xf, 0x87,
    0xc3, 0xe0, 0xf0, 0x38, 0x0,

    /* U+F55A "" */
    0x1f, 0xf9, 0xed, 0xdf, 0xf, 0xfc, 0xf7, 0xc3,
    0x9e, 0xdc, 0x7f, 0xe0,

    /* U+F7C2 "" */
    0x3e, 0xb7, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc,

    /* U+F8A2 "" */
    0x0, 0x48, 0x36, 0xf, 0xff, 0x60, 0x8, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 82, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 45, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 64, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 91, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 15, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 35, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 30, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 36, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 40, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 44, .adv_w = 39, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 45, .adv_w = 51, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 46, .adv_w = 44, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 59, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 91, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 44, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 43, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 102, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 106, .adv_w = 91, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 108, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 112, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 125, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 89, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 83, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 45, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 43, .box_w = 3, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 173, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 83, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 144, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 216, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 95, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 271, .adv_w = 59, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 278, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 282, .adv_w = 72, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 92, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 284, .adv_w = 89, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 54, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 314, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 40, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 40, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 323, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 40, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 149, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 97, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 348, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 354, .adv_w = 65, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 56, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 124, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 81, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 388, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 61, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 88, .box_w = 1, .box_h = 11, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 397, .adv_w = 61, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 401, .adv_w = 91, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 403, .adv_w = 45, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 43, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 405, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 91, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 417, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 88, .box_w = 1, .box_h = 11, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 424, .adv_w = 83, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 92, .box_w = 2, .box_h = 1, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 429, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 57, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 439, .adv_w = 75, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 91, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 444, .adv_w = 51, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 445, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 80, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 454, .adv_w = 69, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 456, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 462, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 464, .adv_w = 92, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 465, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 471, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 478, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 479, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 480, .adv_w = 56, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 481, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 483, .adv_w = 75, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 512, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 525, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 110, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 572, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 584, .adv_w = 180, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 597, .adv_w = 160, .box_w = 11, .box_h = 9, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 610, .adv_w = 180, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 633, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 180, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 659, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 677, .adv_w = 140, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 684, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 696, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 707, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 718, .adv_w = 140, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 725, .adv_w = 140, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 755, .adv_w = 140, .box_w = 9, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 758, .adv_w = 180, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 200, .box_w = 14, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 787, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 801, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 140, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 817, .adv_w = 140, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 823, .adv_w = 200, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 857, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 870, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 893, .adv_w = 140, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 140, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 927, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 939, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 951, .adv_w = 180, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 974, .adv_w = 120, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 984, .adv_w = 200, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 200, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1006, .adv_w = 200, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1015, .adv_w = 200, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1024, .adv_w = 200, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1033, .adv_w = 200, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1042, .adv_w = 200, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1065, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1077, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1090, .adv_w = 200, .box_w = 13, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1111, .adv_w = 161, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 1}
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
    0, 0, 0, 0, -11, 0, 0, 3,
    0, 3, 0, 2, 0, -6, -10, -5,
    -5, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, -11,
    -3, -10, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, -3, 21, -11,
    0, -6, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    -3, 0, 0, -5, 0, -2, -3, -2,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, -3, 0, -3, -2, -3, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, -8, 0, 0, 0,
    0, 0, -3, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, -10, -6, 3,
    -11, -3, 0, 3, 0, 0, 0, 0,
    0, -13, -11, -11, -8, -10, -3, -6,
    0, -3, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 3,
    -6, -2, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -2, -2, -2, 0, 0,
    0, -10, 0, 3, -10, -3, 0, 0,
    0, 0, 0, 0, 0, -8, -8, -3,
    -5, -6, 0, -3, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, -2,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -2, 0, 0, 0, 0,
    6, -6, 0, 3, 0, 0, 0, 0,
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
const lv_font_t lv_font_samim_10 = {
#else
lv_font_t lv_font_samim_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_SAMIM_10*/

