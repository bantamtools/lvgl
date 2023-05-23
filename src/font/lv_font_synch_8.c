/*******************************************************************************
 * Size: 7 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_SYNCH_8
#define LV_FONT_SYNCH_8 1
#endif

#if LV_FONT_SYNCH_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf4,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x5f, 0x5f, 0x50,

    /* U+0024 "$" */
    0x7a, 0x73, 0xf2,

    /* U+0025 "%" */
    0xdd, 0x25, 0x90,

    /* U+0026 "&" */
    0x78, 0x79, 0x97,

    /* U+0027 "'" */
    0xd8,

    /* U+0028 "(" */
    0x6a, 0x90,

    /* U+0029 ")" */
    0x95, 0x60,

    /* U+002A "*" */
    0x2b, 0x7b, 0x20,

    /* U+002B "+" */
    0x22, 0xf2, 0x20,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x11, 0x24, 0x80,

    /* U+0030 "0" */
    0x79, 0xbd, 0x97,

    /* U+0031 "1" */
    0x75, 0x50,

    /* U+0032 "2" */
    0x79, 0x34, 0x8f,

    /* U+0033 "3" */
    0x79, 0x31, 0x97,

    /* U+0034 "4" */
    0x13, 0x5f, 0x11,

    /* U+0035 "5" */
    0xf8, 0xe1, 0x1e,

    /* U+0036 "6" */
    0x78, 0xf9, 0x97,

    /* U+0037 "7" */
    0xf8, 0x44, 0x42, 0x10,

    /* U+0038 "8" */
    0x79, 0x79, 0x97,

    /* U+0039 "9" */
    0x79, 0x97, 0x7,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xf3, 0x60,

    /* U+003C "<" */
    0x2a, 0x22,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x88, 0xa8,

    /* U+003F "?" */
    0x79, 0x12, 0x2,

    /* U+0040 "@" */
    0x78, 0xbb, 0xb7,

    /* U+0041 "A" */
    0x79, 0x9f, 0x99,

    /* U+0042 "B" */
    0xe9, 0xe9, 0x9e,

    /* U+0043 "C" */
    0x78, 0x88, 0x87,

    /* U+0044 "D" */
    0xe9, 0x99, 0x9e,

    /* U+0045 "E" */
    0xfc, 0x3d, 0x8, 0x7c,

    /* U+0046 "F" */
    0xfc, 0x3d, 0x8, 0x40,

    /* U+0047 "G" */
    0x78, 0xb9, 0x97,

    /* U+0048 "H" */
    0x99, 0xf9, 0x99,

    /* U+0049 "I" */
    0xf2, 0x22, 0x2f,

    /* U+004A "J" */
    0x11, 0x11, 0x97,

    /* U+004B "K" */
    0x99, 0xae, 0x99,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x7c,

    /* U+004D "M" */
    0x8e, 0xeb, 0x58, 0xc4,

    /* U+004E "N" */
    0x8e, 0x6b, 0x38, 0xc4,

    /* U+004F "O" */
    0x79, 0x99, 0x97,

    /* U+0050 "P" */
    0xe9, 0x9e, 0x88,

    /* U+0051 "Q" */
    0x79, 0x9b, 0x97,

    /* U+0052 "R" */
    0xe9, 0x9e, 0xa9,

    /* U+0053 "S" */
    0x7c, 0x18, 0x20, 0xf8,

    /* U+0054 "T" */
    0xf2, 0x22, 0x22,

    /* U+0055 "U" */
    0x99, 0x99, 0x97,

    /* U+0056 "V" */
    0x85, 0x24, 0x8c, 0x30, 0x40,

    /* U+0057 "W" */
    0x8c, 0x6b, 0x5d, 0xc4,

    /* U+0058 "X" */
    0x95, 0x25, 0x99,

    /* U+0059 "Y" */
    0x95, 0x22, 0x22,

    /* U+005A "Z" */
    0xf8, 0x84, 0x44, 0x7c,

    /* U+005B "[" */
    0xea, 0xb0,

    /* U+005C "\\" */
    0x84, 0x21, 0x10,

    /* U+005D "]" */
    0xd5, 0x70,

    /* U+005E "^" */
    0x25, 0x90,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x70, 0x79, 0x70,

    /* U+0062 "b" */
    0x85, 0xb3, 0x18, 0xf8,

    /* U+0063 "c" */
    0x78, 0x88, 0x70,

    /* U+0064 "d" */
    0x17, 0x99, 0x97,

    /* U+0065 "e" */
    0x79, 0xf8, 0x70,

    /* U+0066 "f" */
    0x3a, 0x3e, 0x84, 0x20,

    /* U+0067 "g" */
    0x79, 0x71, 0xe0,

    /* U+0068 "h" */
    0x85, 0xb3, 0x18, 0xc4,

    /* U+0069 "i" */
    0xbc,

    /* U+006A "j" */
    0x10, 0x11, 0x97,

    /* U+006B "k" */
    0x89, 0xac, 0xa9,

    /* U+006C "l" */
    0xd5, 0x50,

    /* U+006D "m" */
    0xdb, 0xbb, 0xb0,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x79, 0x99, 0x70,

    /* U+0070 "p" */
    0xe9, 0xe8, 0x80,

    /* U+0071 "q" */
    0x79, 0x71, 0x10,

    /* U+0072 "r" */
    0xb6, 0x61, 0x8, 0x0,

    /* U+0073 "s" */
    0x78, 0x71, 0xf0,

    /* U+0074 "t" */
    0x47, 0xd0, 0x84, 0x1c,

    /* U+0075 "u" */
    0x99, 0x99, 0x70,

    /* U+0076 "v" */
    0x99, 0x55, 0x20,

    /* U+0077 "w" */
    0x99, 0xbb, 0x50,

    /* U+0078 "x" */
    0x95, 0x25, 0x90,

    /* U+0079 "y" */
    0x99, 0x71, 0xe0,

    /* U+007A "z" */
    0xf1, 0x24, 0xf0,

    /* U+007B "{" */
    0x2a, 0x24, 0x40,

    /* U+007C "|" */
    0xfc,

    /* U+007D "}" */
    0x88, 0xa5, 0x0,

    /* U+007E "~" */
    0x4b, 0x10,

    /* U+00A1 "¡" */
    0xbc,

    /* U+00A2 "¢" */
    0x27, 0xaa, 0x72,

    /* U+00A3 "£" */
    0x34, 0x74, 0x4f,

    /* U+00A4 "¤" */
    0x96, 0x99, 0x69,

    /* U+00A5 "¥" */
    0x95, 0x27, 0x22,

    /* U+00A6 "¦" */
    0xcc,

    /* U+00A7 "§" */
    0x7c, 0x1c, 0xe0, 0xf8,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0xfb, 0xf0, 0xd2, 0xd0,

    /* U+00AA "ª" */
    0xfe, 0xf0,

    /* U+00AB "«" */
    0x59, 0x50,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x5b, 0x5b, 0x5b,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x2f, 0x2f,

    /* U+00B2 "²" */
    0xee, 0x70,

    /* U+00B3 "³" */
    0xf8, 0xe0,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x99, 0xbd, 0x80,

    /* U+00B6 "¶" */
    0x7d, 0x6a, 0xd2, 0x94,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x38,

    /* U+00B9 "¹" */
    0xd5,

    /* U+00BA "º" */
    0xf6, 0xa0,

    /* U+00BB "»" */
    0x95, 0x90,

    /* U+00BC "¼" */
    0x11, 0x7f, 0xf6,

    /* U+00BD "½" */
    0x11, 0x79, 0x96,

    /* U+00BE "¾" */
    0x10, 0x9d, 0x29, 0xb0,

    /* U+00BF "¿" */
    0x20, 0x24, 0x97,

    /* U+00C0 "À" */
    0xe0, 0x78, 0xf9, 0x90,

    /* U+00C1 "Á" */
    0x38, 0x1d, 0x1f, 0xc6, 0x20,

    /* U+00C2 "Â" */
    0x25, 0x79, 0xf9, 0x90,

    /* U+00C3 "Ã" */
    0x5a, 0x79, 0xf9, 0x90,

    /* U+00C4 "Ä" */
    0x50, 0x78, 0xf9, 0x90,

    /* U+00C5 "Å" */
    0x79, 0x78, 0xf9, 0x90,

    /* U+00C6 "Æ" */
    0x7a, 0xaf, 0xab,

    /* U+00C7 "Ç" */
    0x78, 0x87, 0x16,

    /* U+00C8 "È" */
    0xe0, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00C9 "É" */
    0x38, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00CA "Ê" */
    0x22, 0xbf, 0xf, 0x43, 0xe0,

    /* U+00CB "Ë" */
    0x50, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00CC "Ì" */
    0xe0, 0xf2, 0x22, 0xf0,

    /* U+00CD "Í" */
    0x38, 0x3e, 0x42, 0x13, 0xe0,

    /* U+00CE "Î" */
    0x25, 0xf2, 0x22, 0xf0,

    /* U+00CF "Ï" */
    0x50, 0xf2, 0x22, 0xf0,

    /* U+00D0 "Ð" */
    0xe9, 0xd9, 0x9e,

    /* U+00D1 "Ñ" */
    0x5a, 0x9d, 0xb9, 0x90,

    /* U+00D2 "Ò" */
    0xe0, 0x79, 0x99, 0x70,

    /* U+00D3 "Ó" */
    0x38, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00D4 "Ô" */
    0x25, 0x79, 0x99, 0x70,

    /* U+00D5 "Õ" */
    0x5a, 0x79, 0x99, 0x70,

    /* U+00D6 "Ö" */
    0x50, 0x79, 0x99, 0x70,

    /* U+00D7 "×" */
    0x95, 0x25, 0x90,

    /* U+00D8 "Ø" */
    0x78, 0x9b, 0xd7,

    /* U+00D9 "Ù" */
    0xe0, 0x99, 0x99, 0x70,

    /* U+00DA "Ú" */
    0x38, 0x23, 0x18, 0xc5, 0xc0,

    /* U+00DB "Û" */
    0x25, 0x99, 0x99, 0x70,

    /* U+00DC "Ü" */
    0x50, 0x99, 0x99, 0x70,

    /* U+00DD "Ý" */
    0x30, 0x95, 0x22, 0x20,

    /* U+00DE "Þ" */
    0x8e, 0x99, 0xe8,

    /* U+00DF "ß" */
    0x69, 0xa9, 0x9b,

    /* U+00E0 "à" */
    0xe0, 0x70, 0x79, 0x70,

    /* U+00E1 "á" */
    0x38, 0x1c, 0x17, 0xc5, 0xe0,

    /* U+00E2 "â" */
    0x25, 0x71, 0x79, 0x70,

    /* U+00E3 "ã" */
    0x5a, 0x71, 0x79, 0x70,

    /* U+00E4 "ä" */
    0x50, 0x70, 0x79, 0x70,

    /* U+00E5 "å" */
    0x79, 0x70, 0x79, 0x70,

    /* U+00E6 "æ" */
    0x53, 0x7a, 0x50,

    /* U+00E7 "ç" */
    0x78, 0x87, 0x16,

    /* U+00E8 "è" */
    0xe0, 0x79, 0xf8, 0x70,

    /* U+00E9 "é" */
    0x38, 0x1d, 0x1f, 0xc1, 0xe0,

    /* U+00EA "ê" */
    0x25, 0x79, 0xf8, 0x70,

    /* U+00EB "ë" */
    0x50, 0x79, 0xf8, 0x70,

    /* U+00EC "ì" */
    0xe0, 0x12, 0x48,

    /* U+00ED "í" */
    0xe0, 0x49, 0x20,

    /* U+00EE "î" */
    0x54, 0x24, 0x90,

    /* U+00EF "ï" */
    0xa0, 0x24, 0x90,

    /* U+00F0 "ð" */
    0x31, 0x79, 0x97,

    /* U+00F1 "ñ" */
    0x5a, 0xad, 0x99, 0x90,

    /* U+00F2 "ò" */
    0xe0, 0x79, 0x99, 0x70,

    /* U+00F3 "ó" */
    0x38, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F4 "ô" */
    0x25, 0x79, 0x99, 0x70,

    /* U+00F5 "õ" */
    0x5a, 0x79, 0x99, 0x70,

    /* U+00F6 "ö" */
    0x50, 0x79, 0x99, 0x70,

    /* U+00F7 "÷" */
    0x20, 0xf0, 0x20,

    /* U+00F8 "ø" */
    0x79, 0xbd, 0x70,

    /* U+00F9 "ù" */
    0xe0, 0x99, 0x99, 0x70,

    /* U+00FA "ú" */
    0x38, 0x23, 0x18, 0xcd, 0xa0,

    /* U+00FB "û" */
    0x25, 0x99, 0x99, 0x70,

    /* U+00FC "ü" */
    0x50, 0x99, 0x99, 0x70,

    /* U+00FD "ý" */
    0x38, 0x23, 0x17, 0x8f, 0x80,

    /* U+00FE "þ" */
    0x8e, 0x9e, 0x88,

    /* U+00FF "ÿ" */
    0x50, 0x99, 0x70, 0xf0,

    /* U+016E "Ů" */
    0x99, 0x99, 0x97,

    /* U+016F "ů" */
    0x99, 0x99, 0x70,

    /* U+0178 "Ÿ" */
    0x50, 0x95, 0x22, 0x20
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 98, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 98, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 98, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 4, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 7, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 98, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 17, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 24, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 98, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 98, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 29, .adv_w = 98, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 98, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 98, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 176, .adv_w = 98, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 98, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 178, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 98, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 98, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 98, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 98, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 98, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 98, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 98, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 268, .adv_w = 98, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 98, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 98, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 287, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 98, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 293, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 295, .adv_w = 98, .box_w = 5, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 98, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 298, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 98, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 302, .adv_w = 98, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 304, .adv_w = 98, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 306, .adv_w = 98, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 308, .adv_w = 98, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 310, .adv_w = 98, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 311, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 98, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 319, .adv_w = 98, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 98, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 321, .adv_w = 98, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 323, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 325, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 98, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 98, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 98, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 98, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 98, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 98, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x1, 0xa
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 161, .range_length = 95, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 366, .range_length = 11, .glyph_id_start = 191,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
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
const lv_font_t lv_font_synch_8 = {
#else
lv_font_t lv_font_synch_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 7,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_SYNCH_8*/

