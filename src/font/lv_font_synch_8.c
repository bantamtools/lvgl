/*******************************************************************************
 * Size: 8 px
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
    0x57, 0xd5, 0xf5, 0x0,

    /* U+0024 "$" */
    0x7d, 0x1c, 0x5f, 0x10,

    /* U+0025 "%" */
    0xce, 0x88, 0xb9, 0x80,

    /* U+0026 "&" */
    0x74, 0x1f, 0x29, 0x38,

    /* U+0027 "'" */
    0xd8,

    /* U+0028 "(" */
    0x6a, 0x90,

    /* U+0029 ")" */
    0x95, 0x60,

    /* U+002A "*" */
    0x25, 0x5d, 0x52, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x88, 0x88, 0x0,

    /* U+0030 "0" */
    0x74, 0xeb, 0x98, 0xb8,

    /* U+0031 "1" */
    0x75, 0x50,

    /* U+0032 "2" */
    0x74, 0x4c, 0x88, 0x7c,

    /* U+0033 "3" */
    0x74, 0x4c, 0x18, 0xb8,

    /* U+0034 "4" */
    0x11, 0x95, 0xf1, 0x8,

    /* U+0035 "5" */
    0xfc, 0x3c, 0x10, 0xf8,

    /* U+0036 "6" */
    0x74, 0x3d, 0x18, 0xb8,

    /* U+0037 "7" */
    0xf8, 0x44, 0x42, 0x10,

    /* U+0038 "8" */
    0x74, 0x5d, 0x18, 0xb8,

    /* U+0039 "9" */
    0x74, 0x62, 0xf0, 0xb8,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xf3, 0x60,

    /* U+003C "<" */
    0x2a, 0x22,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x88, 0xa8,

    /* U+003F "?" */
    0x74, 0x44, 0x40, 0x10,

    /* U+0040 "@" */
    0x74, 0x6f, 0x5a, 0xbc,

    /* U+0041 "A" */
    0x74, 0x63, 0xf8, 0xc4,

    /* U+0042 "B" */
    0xf4, 0x7d, 0x18, 0xf8,

    /* U+0043 "C" */
    0x7c, 0x21, 0x8, 0x3c,

    /* U+0044 "D" */
    0xf4, 0x63, 0x18, 0xf8,

    /* U+0045 "E" */
    0xfc, 0x3d, 0x8, 0x7c,

    /* U+0046 "F" */
    0xfc, 0x3d, 0x8, 0x40,

    /* U+0047 "G" */
    0x7c, 0x2f, 0x18, 0xbc,

    /* U+0048 "H" */
    0x8c, 0x7f, 0x18, 0xc4,

    /* U+0049 "I" */
    0xf9, 0x8, 0x42, 0x7c,

    /* U+004A "J" */
    0x18, 0x42, 0x18, 0xb8,

    /* U+004B "K" */
    0x8c, 0xa9, 0xc9, 0x44,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x7c,

    /* U+004D "M" */
    0x8e, 0xeb, 0x58, 0xc4,

    /* U+004E "N" */
    0x8e, 0x6b, 0x38, 0xc4,

    /* U+004F "O" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0050 "P" */
    0xf4, 0x63, 0xe8, 0x40,

    /* U+0051 "Q" */
    0x74, 0x63, 0x59, 0x34,

    /* U+0052 "R" */
    0xf4, 0x63, 0xea, 0x4c,

    /* U+0053 "S" */
    0x7e, 0x6, 0x6, 0x7, 0xe0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xb8,

    /* U+0056 "V" */
    0x82, 0x89, 0x11, 0x42, 0x82, 0x0,

    /* U+0057 "W" */
    0x8c, 0x6b, 0x5d, 0xc4,

    /* U+0058 "X" */
    0x8a, 0x88, 0xa8, 0xc4,

    /* U+0059 "Y" */
    0x8a, 0x88, 0x42, 0x10,

    /* U+005A "Z" */
    0xfc, 0x21, 0x8, 0x43, 0xf0,

    /* U+005B "[" */
    0xea, 0xb0,

    /* U+005C "\\" */
    0x82, 0x8, 0x20, 0x80,

    /* U+005D "]" */
    0xd5, 0x70,

    /* U+005E "^" */
    0x22, 0xa2,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x70, 0x5f, 0x17, 0x80,

    /* U+0062 "b" */
    0x85, 0xb3, 0x18, 0xf8,

    /* U+0063 "c" */
    0x7c, 0x21, 0x7, 0x80,

    /* U+0064 "d" */
    0xb, 0x67, 0x18, 0xbc,

    /* U+0065 "e" */
    0x74, 0x7f, 0x7, 0x80,

    /* U+0066 "f" */
    0x3a, 0x3e, 0x84, 0x20,

    /* U+0067 "g" */
    0x7c, 0x5e, 0x1f, 0x0,

    /* U+0068 "h" */
    0x85, 0xb3, 0x18, 0xc4,

    /* U+0069 "i" */
    0xbc,

    /* U+006A "j" */
    0x8, 0x2, 0x18, 0xb8,

    /* U+006B "k" */
    0x89, 0xac, 0xa9,

    /* U+006C "l" */
    0xd5, 0x50,

    /* U+006D "m" */
    0xd5, 0x6b, 0x5a, 0x80,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf4, 0x7d, 0x8, 0x0,

    /* U+0071 "q" */
    0x7c, 0x5e, 0x10, 0x80,

    /* U+0072 "r" */
    0xb6, 0x61, 0x8, 0x0,

    /* U+0073 "s" */
    0x7c, 0x1c, 0x1f, 0x0,

    /* U+0074 "t" */
    0x47, 0xd0, 0x84, 0x1c,

    /* U+0075 "u" */
    0x8c, 0x63, 0x36, 0x80,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa2, 0x0,

    /* U+0077 "w" */
    0x8c, 0x6b, 0x55, 0x0,

    /* U+0078 "x" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+0079 "y" */
    0x8c, 0x5e, 0x1f, 0x0,

    /* U+007A "z" */
    0xf8, 0x88, 0x8f, 0x80,

    /* U+007B "{" */
    0x2a, 0x24, 0x40,

    /* U+007C "|" */
    0xfc,

    /* U+007D "}" */
    0x88, 0xa5, 0x0,

    /* U+007E "~" */
    0x45, 0x44,

    /* U+00A1 "¡" */
    0xbc,

    /* U+00A2 "¢" */
    0x23, 0xe9, 0x47, 0x90,

    /* U+00A3 "£" */
    0x32, 0x1c, 0x84, 0x7c,

    /* U+00A4 "¤" */
    0x96, 0x99, 0x69,

    /* U+00A5 "¥" */
    0x8a, 0x88, 0xe2, 0x10,

    /* U+00A6 "¦" */
    0xcc,

    /* U+00A7 "§" */
    0x7e, 0x7, 0x9e, 0x7, 0xe0,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0xfd, 0x7e, 0xd, 0x93, 0x60,

    /* U+00AA "ª" */
    0xe7, 0xde,

    /* U+00AB "«" */
    0x4c, 0x92,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x55, 0x55, 0x55, 0x54,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x27, 0xc9, 0xf0,

    /* U+00B2 "²" */
    0xc5, 0xce,

    /* U+00B3 "³" */
    0xc7, 0x1c,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x8c, 0x67, 0xd8, 0x0,

    /* U+00B6 "¶" */
    0x7d, 0x6a, 0xd2, 0x94,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x38,

    /* U+00B9 "¹" */
    0x75, 0x40,

    /* U+00BA "º" */
    0x56, 0xd4,

    /* U+00BB "»" */
    0x92, 0x64,

    /* U+00BC "¼" */
    0x11, 0x7f, 0xf6,

    /* U+00BD "½" */
    0x11, 0x79, 0x96,

    /* U+00BE "¾" */
    0x10, 0x47, 0x24, 0x95, 0x80,

    /* U+00BF "¿" */
    0x20, 0x8, 0x88, 0xb8,

    /* U+00C0 "À" */
    0xe0, 0x1d, 0x1f, 0xc6, 0x20,

    /* U+00C1 "Á" */
    0x38, 0x1d, 0x1f, 0xc6, 0x20,

    /* U+00C2 "Â" */
    0x22, 0x9d, 0x1f, 0xc6, 0x20,

    /* U+00C3 "Ã" */
    0x55, 0x1d, 0x1f, 0xc6, 0x20,

    /* U+00C4 "Ä" */
    0x50, 0x1d, 0x1f, 0xc6, 0x20,

    /* U+00C5 "Å" */
    0x74, 0x5d, 0x1f, 0xc6, 0x20,

    /* U+00C6 "Æ" */
    0x7d, 0x29, 0xfa, 0x5c,

    /* U+00C7 "Ç" */
    0x7c, 0x20, 0xf1, 0x30,

    /* U+00C8 "È" */
    0xe0, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00C9 "É" */
    0x38, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00CA "Ê" */
    0x22, 0xbf, 0xf, 0x43, 0xe0,

    /* U+00CB "Ë" */
    0x50, 0x3f, 0xf, 0x43, 0xe0,

    /* U+00CC "Ì" */
    0xe0, 0x3e, 0x42, 0x13, 0xe0,

    /* U+00CD "Í" */
    0x38, 0x3e, 0x42, 0x13, 0xe0,

    /* U+00CE "Î" */
    0x22, 0xbe, 0x42, 0x13, 0xe0,

    /* U+00CF "Ï" */
    0x50, 0x3e, 0x42, 0x13, 0xe0,

    /* U+00D0 "Ð" */
    0xf4, 0x7b, 0x18, 0xf8,

    /* U+00D1 "Ñ" */
    0x55, 0x23, 0x9a, 0xce, 0x20,

    /* U+00D2 "Ò" */
    0xe0, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00D3 "Ó" */
    0x38, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00D4 "Ô" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00D5 "Õ" */
    0x55, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00D6 "Ö" */
    0x50, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00D7 "×" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+00D8 "Ø" */
    0x74, 0x67, 0x5c, 0xb8,

    /* U+00D9 "Ù" */
    0xe0, 0x23, 0x18, 0xc5, 0xc0,

    /* U+00DA "Ú" */
    0x38, 0x23, 0x18, 0xc5, 0xc0,

    /* U+00DB "Û" */
    0x22, 0xa3, 0x18, 0xc5, 0xc0,

    /* U+00DC "Ü" */
    0x50, 0x23, 0x18, 0xc5, 0xc0,

    /* U+00DD "Ý" */
    0x38, 0x22, 0xa2, 0x10, 0x80,

    /* U+00DE "Þ" */
    0x87, 0xa3, 0x1f, 0x40,

    /* U+00DF "ß" */
    0x64, 0xe9, 0x28, 0xd8,

    /* U+00E0 "à" */
    0xe0, 0x1c, 0x17, 0xc5, 0xe0,

    /* U+00E1 "á" */
    0x38, 0x1c, 0x17, 0xc5, 0xe0,

    /* U+00E2 "â" */
    0x22, 0x9c, 0x17, 0xc5, 0xe0,

    /* U+00E3 "ã" */
    0x55, 0x1c, 0x17, 0xc5, 0xe0,

    /* U+00E4 "ä" */
    0x50, 0x1c, 0x17, 0xc5, 0xe0,

    /* U+00E5 "å" */
    0x74, 0x5c, 0x17, 0xc5, 0xe0,

    /* U+00E6 "æ" */
    0x51, 0x5d, 0x45, 0x80,

    /* U+00E7 "ç" */
    0x7c, 0x20, 0xf1, 0x30,

    /* U+00E8 "è" */
    0xe0, 0x1d, 0x1f, 0xc1, 0xe0,

    /* U+00E9 "é" */
    0x38, 0x1d, 0x1f, 0xc1, 0xe0,

    /* U+00EA "ê" */
    0x22, 0x9d, 0x1f, 0xc1, 0xe0,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x1f, 0xc1, 0xe0,

    /* U+00EC "ì" */
    0xe0, 0x12, 0x48,

    /* U+00ED "í" */
    0xe0, 0x49, 0x20,

    /* U+00EE "î" */
    0x54, 0x24, 0x90,

    /* U+00EF "ï" */
    0xa0, 0x24, 0x90,

    /* U+00F0 "ð" */
    0x38, 0x5f, 0x18, 0xb8,

    /* U+00F1 "ñ" */
    0x55, 0x2d, 0x98, 0xc6, 0x20,

    /* U+00F2 "ò" */
    0xe0, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F3 "ó" */
    0x38, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F4 "ô" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F5 "õ" */
    0x55, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F6 "ö" */
    0x50, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+00F8 "ø" */
    0x74, 0xeb, 0x97, 0x0,

    /* U+00F9 "ù" */
    0xe0, 0x23, 0x18, 0xcd, 0xa0,

    /* U+00FA "ú" */
    0x38, 0x23, 0x18, 0xcd, 0xa0,

    /* U+00FB "û" */
    0x22, 0xa3, 0x18, 0xcd, 0xa0,

    /* U+00FC "ü" */
    0x50, 0x23, 0x18, 0xcd, 0xa0,

    /* U+00FD "ý" */
    0x38, 0x23, 0x17, 0x87, 0xc0,

    /* U+00FE "þ" */
    0x87, 0xa3, 0xe8, 0x40,

    /* U+00FF "ÿ" */
    0x50, 0x23, 0x17, 0x87, 0xc0,

    /* U+016E "Ů" */
    0x8c, 0x63, 0x18, 0xb8,

    /* U+016F "ů" */
    0x8c, 0x63, 0x36, 0x80,

    /* U+0178 "Ÿ" */
    0x50, 0x22, 0xa2, 0x10, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 8, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 112, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 21, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 29, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 112, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 35, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 86, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 214, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 216, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 112, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 112, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 112, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 112, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 323, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 112, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 112, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 346, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 353, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 355, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 112, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 358, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 363, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 365, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 368, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 370, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 372, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 373, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 382, .adv_w = 112, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 112, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 385, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 387, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 389, .adv_w = 112, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 112, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 112, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 112, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 112, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 112, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0}
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

