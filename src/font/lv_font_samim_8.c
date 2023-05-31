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

#ifndef LV_FONT_SAMIM_8
#define LV_FONT_SAMIM_8 1
#endif

#if LV_FONT_SAMIM_8

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
    0xf8,

    /* U+0022 "\"" */
    0xd0,

    /* U+0023 "#" */
    0x57, 0xd5, 0xf6, 0x0,

    /* U+0024 "$" */
    0x2e, 0x63, 0xe2,

    /* U+0025 "%" */
    0xe2, 0xe5, 0x4d, 0x1c,

    /* U+0026 "&" */
    0x61, 0x86, 0xa6, 0xf8,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x6a, 0x94,

    /* U+0029 ")" */
    0x95, 0x68,

    /* U+002A "*" */
    0x2f, 0x60,

    /* U+002B "+" */
    0x21, 0x3e, 0x40,

    /* U+002C "," */
    0x40,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x29, 0x48,

    /* U+0030 "0" */
    0x69, 0x99, 0x60,

    /* U+0031 "1" */
    0xd5, 0x40,

    /* U+0032 "2" */
    0xf1, 0x24, 0xf0,

    /* U+0033 "3" */
    0xf1, 0x61, 0xf0,

    /* U+0034 "4" */
    0x32, 0xa5, 0xf1, 0x0,

    /* U+0035 "5" */
    0xee, 0x11, 0xe0,

    /* U+0036 "6" */
    0x6e, 0x99, 0x60,

    /* U+0037 "7" */
    0xf2, 0x24, 0x40,

    /* U+0038 "8" */
    0xf9, 0x69, 0xf0,

    /* U+0039 "9" */
    0xe9, 0x71, 0x60,

    /* U+003A ":" */
    0xa0,

    /* U+003B ";" */
    0x40, 0x80,

    /* U+003C "<" */
    0x3c, 0x70,

    /* U+003D "=" */
    0xff,

    /* U+003E ">" */
    0xc3, 0xe0,

    /* U+003F "?" */
    0x71, 0x20, 0x20,

    /* U+0040 "@" */
    0x7a, 0xbc, 0xef, 0x81, 0xe0,

    /* U+0041 "A" */
    0x23, 0x14, 0xe8, 0x80,

    /* U+0042 "B" */
    0xf9, 0xe9, 0xf0,

    /* U+0043 "C" */
    0x7c, 0x21, 0x7, 0x0,

    /* U+0044 "D" */
    0xf4, 0x63, 0x1f, 0x0,

    /* U+0045 "E" */
    0xf8, 0xe8, 0xf0,

    /* U+0046 "F" */
    0xf8, 0xe8, 0x80,

    /* U+0047 "G" */
    0x7c, 0x27, 0x17, 0x80,

    /* U+0048 "H" */
    0x8c, 0x7f, 0x18, 0x80,

    /* U+0049 "I" */
    0xf8,

    /* U+004A "J" */
    0x55, 0x58,

    /* U+004B "K" */
    0x9a, 0xca, 0x90,

    /* U+004C "L" */
    0x88, 0x88, 0xf0,

    /* U+004D "M" */
    0xcf, 0x3d, 0x6d, 0xa4,

    /* U+004E "N" */
    0x8e, 0x6b, 0x59, 0x80,

    /* U+004F "O" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0050 "P" */
    0xf9, 0xe8, 0x80,

    /* U+0051 "Q" */
    0x74, 0x63, 0x17, 0x8,

    /* U+0052 "R" */
    0xf9, 0xea, 0x90,

    /* U+0053 "S" */
    0xf8, 0x61, 0xf0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x0,

    /* U+0055 "U" */
    0x8c, 0x63, 0x17, 0x0,

    /* U+0056 "V" */
    0x8c, 0x94, 0xc2, 0x0,

    /* U+0057 "W" */
    0x93, 0x55, 0xab, 0x64, 0x40,

    /* U+0058 "X" */
    0x93, 0x8, 0xa9, 0x0,

    /* U+0059 "Y" */
    0x8a, 0x98, 0x42, 0x0,

    /* U+005A "Z" */
    0xf2, 0x44, 0xf0,

    /* U+005B "[" */
    0xea, 0xac,

    /* U+005C "\\" */
    0x91, 0x22,

    /* U+005D "]" */
    0xd5, 0x5c,

    /* U+005E "^" */
    0x6, 0xa9,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x80,

    /* U+0061 "a" */
    0x77, 0x9f,

    /* U+0062 "b" */
    0x8f, 0x99, 0xf0,

    /* U+0063 "c" */
    0x72, 0x30,

    /* U+0064 "d" */
    0x1f, 0x99, 0xf0,

    /* U+0065 "e" */
    0x6f, 0x86,

    /* U+0066 "f" */
    0x64, 0x44, 0x40,

    /* U+0067 "g" */
    0xf9, 0x66, 0x9f,

    /* U+0068 "h" */
    0x8f, 0x99, 0x90,

    /* U+0069 "i" */
    0x78,

    /* U+006A "j" */
    0x15, 0x5c,

    /* U+006B "k" */
    0x8a, 0xca, 0xa0,

    /* U+006C "l" */
    0xf8,

    /* U+006D "m" */
    0xff, 0x26, 0x4c, 0x90,

    /* U+006E "n" */
    0xf9, 0x99,

    /* U+006F "o" */
    0x69, 0x96,

    /* U+0070 "p" */
    0xf9, 0x9f, 0x88,

    /* U+0071 "q" */
    0xf9, 0x9f, 0x11,

    /* U+0072 "r" */
    0xf2, 0x40,

    /* U+0073 "s" */
    0xf1, 0xf0,

    /* U+0074 "t" */
    0x49, 0x26,

    /* U+0075 "u" */
    0x99, 0x9f,

    /* U+0076 "v" */
    0x9a, 0x66,

    /* U+0077 "w" */
    0x96, 0xdb, 0x92,

    /* U+0078 "x" */
    0x96, 0x69,

    /* U+0079 "y" */
    0x9a, 0x66, 0x4c,

    /* U+007A "z" */
    0x69, 0x60,

    /* U+007B "{" */
    0x69, 0x44, 0x88,

    /* U+007C "|" */
    0xfe,

    /* U+007D "}" */
    0xc9, 0x34, 0xa0,

    /* U+007E "~" */
    0xf0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xf8,

    /* U+00A2 "¢" */
    0x72, 0x46,

    /* U+00A3 "£" */
    0x72, 0x3c, 0x8f, 0x80,

    /* U+00A4 "¤" */
    0xf7, 0x80,

    /* U+00A5 "¥" */
    0x96, 0x77, 0x20,

    /* U+00A6 "¦" */
    0xee,

    /* U+00A7 "§" */
    0x76, 0x96, 0xf0,

    /* U+00A8 "¨" */
    0x80,

    /* U+00A9 "©" */
    0x31, 0xec, 0x71, 0xb9, 0xc0,

    /* U+00AA "ª" */
    0xf8,

    /* U+00AB "«" */
    0x3b, 0x20,

    /* U+00AC "¬" */
    0xf1,

    /* U+00AD "­" */
    0xc0,

    /* U+00AE "®" */
    0x31, 0xeb, 0x6d, 0xa9, 0xc0,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0x55, 0x0,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x4f, 0x80,

    /* U+00B2 "²" */
    0xda,

    /* U+00B3 "³" */
    0xe5, 0x70,

    /* U+00B4 "´" */
    0x80,

    /* U+00B5 "µ" */
    0x99, 0x9f, 0x88,

    /* U+00B6 "¶" */
    0xff, 0xf7, 0x33,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x70,

    /* U+00B9 "¹" */
    0x55,

    /* U+00BA "º" */
    0xd5, 0x0,

    /* U+00BB "»" */
    0x8d, 0xc0,

    /* U+00BC "¼" */
    0xd2, 0x9a, 0xb5, 0x80,

    /* U+00BD "½" */
    0x51, 0xa6, 0x92, 0xc,

    /* U+00BE "¾" */
    0xc4, 0xa5, 0x3d, 0x2d, 0x30,

    /* U+00BF "¿" */
    0x1, 0x48, 0xc0,

    /* U+02BC "ʼ" */
    0xc0,

    /* U+02C6 "ˆ" */
    0x40,

    /* U+02C7 "ˇ" */
    0x40,

    /* U+02C9 "ˉ" */
    0xe0,

    /* U+02D8 "˘" */
    0x40,

    /* U+02D9 "˙" */
    0x0,

    /* U+02DA "˚" */
    0xb0,

    /* U+02DB "˛" */
    0xc0,

    /* U+02DC "˜" */
    0xe0,

    /* U+02DD "˝" */
    0xc0,

    /* U+02F3 "˳" */
    0xf0,

    /* U+0309 "̉" */
    0xc0,

    /* U+030F "̏" */
    0xc0,

    /* U+0323 "̣" */
    0x80,

    /* U+0384 "΄" */
    0x80,

    /* U+060C "،" */
    0xc0,

    /* U+0615 "ؕ" */
    0xa0,

    /* U+061B "؛" */
    0xd0,

    /* U+061F "؟" */
    0xf2, 0x20, 0x40,

    /* U+0621 "ء" */
    0xd3, 0x80,

    /* U+0622 "آ" */
    0x19, 0x24, 0x90,

    /* U+0623 "أ" */
    0xf5, 0x54,

    /* U+0624 "ؤ" */
    0x3, 0x6c, 0xb0,

    /* U+0625 "إ" */
    0xff,

    /* U+0626 "ئ" */
    0x42, 0x7, 0x29, 0xc5, 0xc0,

    /* U+0627 "ا" */
    0xfc,

    /* U+0628 "ب" */
    0x83, 0x5, 0xf0, 0x1, 0x0,

    /* U+0629 "ة" */
    0x1, 0x5b, 0xc0,

    /* U+062A "ت" */
    0x1, 0x6, 0xb, 0xe0,

    /* U+062B "ث" */
    0x10, 0x52, 0xc, 0x17, 0xc0,

    /* U+062C "ج" */
    0x60, 0xd9, 0x8, 0x3c,

    /* U+062D "ح" */
    0x60, 0xd9, 0x8, 0x3c,

    /* U+062E "خ" */
    0x20, 0x18, 0x36, 0x42, 0xf,

    /* U+062F "د" */
    0x44, 0xf0,

    /* U+0630 "ذ" */
    0x81, 0x13, 0xc0,

    /* U+0631 "ر" */
    0x24, 0x9c,

    /* U+0632 "ز" */
    0x24, 0x93, 0x80,

    /* U+0633 "س" */
    0x0, 0x45, 0x63, 0x51, 0x7, 0x0,

    /* U+0634 "ش" */
    0x2, 0x0, 0x80, 0x11, 0x58, 0xd4, 0x41, 0xc0,

    /* U+0635 "ص" */
    0x3, 0xc7, 0x63, 0xd1, 0x7, 0x0,

    /* U+0636 "ض" */
    0x1, 0x0, 0x0, 0xf1, 0xd8, 0xf4, 0x41, 0xc0,

    /* U+0637 "ط" */
    0x41, 0x4, 0x16, 0x6b, 0xe0,

    /* U+0638 "ظ" */
    0x41, 0x44, 0x16, 0x6b, 0xe0,

    /* U+0639 "ع" */
    0x64, 0x74, 0x88, 0x70,

    /* U+063A "غ" */
    0x20, 0x64, 0x74, 0x88, 0x70,

    /* U+0640 "ـ" */
    0x80,

    /* U+0641 "ف" */
    0x4, 0x0, 0x3c, 0x58, 0xef, 0x80,

    /* U+0642 "ق" */
    0x28, 0x7, 0x59, 0xc5, 0xc0,

    /* U+0643 "ك" */
    0x2, 0x24, 0x4c, 0x98, 0x2f, 0x80,

    /* U+0644 "ل" */
    0x8, 0x42, 0x18, 0xc6, 0x2e,

    /* U+0645 "م" */
    0x65, 0xf8, 0x88,

    /* U+0646 "ن" */
    0x24, 0x63, 0x17, 0x0,

    /* U+0647 "ه" */
    0x56, 0xf0,

    /* U+0648 "و" */
    0xdb, 0x2c,

    /* U+0649 "ى" */
    0x1c, 0xa7, 0x17, 0x0,

    /* U+064A "ي" */
    0x1c, 0xa7, 0x17, 0x8,

    /* U+064B "ً" */
    0x0,

    /* U+064C "ٌ" */
    0x4f, 0x0,

    /* U+064D "ٍ" */
    0x50,

    /* U+064E "َ" */
    0x40,

    /* U+064F "ُ" */
    0x78,

    /* U+0650 "ِ" */
    0x0,

    /* U+0651 "ّ" */
    0x18,

    /* U+0652 "ْ" */
    0xc0,

    /* U+0653 "ٓ" */
    0xc0,

    /* U+0654 "ٔ" */
    0x0,

    /* U+0655 "ٕ" */
    0xc0,

    /* U+0657 "ٗ" */
    0x6c,

    /* U+065A "ٚ" */
    0x90,

    /* U+0660 "٠" */
    0xf0,

    /* U+0661 "١" */
    0x25, 0x50,

    /* U+0662 "٢" */
    0x9, 0x64, 0x44,

    /* U+0663 "٣" */
    0x2d, 0x9c, 0x84, 0x20,

    /* U+0664 "٤" */
    0x53, 0x29, 0xc0,

    /* U+0665 "٥" */
    0x6, 0x99, 0x9f,

    /* U+0666 "٦" */
    0x70, 0x84, 0x20, 0x80,

    /* U+0667 "٧" */
    0x9, 0x56, 0x22,

    /* U+0668 "٨" */
    0x22, 0x65, 0x50,

    /* U+0669 "٩" */
    0xf6, 0xb2, 0x40,

    /* U+066A "٪" */
    0xa9, 0x4a,

    /* U+066B "٫" */
    0x68,

    /* U+066C "٬" */
    0x50,

    /* U+066E "ٮ" */
    0x83, 0x5, 0xf0,

    /* U+066F "ٯ" */
    0x1d, 0x67, 0x17, 0x0,

    /* U+0670 "ٰ" */
    0xc0,

    /* U+0674 "ٴ" */
    0xb0,

    /* U+067E "پ" */
    0x83, 0x5, 0xf0, 0x0, 0x80, 0x0,

    /* U+0686 "چ" */
    0x60, 0xdd, 0x48, 0x3c,

    /* U+0698 "ژ" */
    0x2c, 0x92, 0x70,

    /* U+06A1 "ڡ" */
    0xf, 0x16, 0x3b, 0xe0,

    /* U+06A9 "ک" */
    0x2, 0x4, 0x4, 0x84, 0x82, 0x7c,

    /* U+06AF "گ" */
    0x6, 0x14, 0x30, 0x48, 0x50, 0x9f, 0x0,

    /* U+06BA "ں" */
    0x8c, 0x62, 0xe0,

    /* U+06C0 "ۀ" */
    0x10, 0x2b, 0x78,

    /* U+06CA "ۊ" */
    0x3, 0x6c, 0xb0,

    /* U+06CC "ی" */
    0x1c, 0xa7, 0x17, 0x0,

    /* U+06D5 "ە" */
    0x56, 0xf0,

    /* U+06F0 "۰" */
    0xf0,

    /* U+06F1 "۱" */
    0x25, 0x50,

    /* U+06F2 "۲" */
    0x9, 0x64, 0x44,

    /* U+06F3 "۳" */
    0x2d, 0x9c, 0x84, 0x20,

    /* U+06F4 "۴" */
    0xbc, 0x74, 0x44,

    /* U+06F5 "۵" */
    0x6, 0xa9, 0x9f,

    /* U+06F6 "۶" */
    0xf1, 0xa8, 0x0,

    /* U+06F7 "۷" */
    0x9, 0x56, 0x22,

    /* U+06F8 "۸" */
    0x22, 0x65, 0x50,

    /* U+06F9 "۹" */
    0xf6, 0xb2, 0x40,

    /* U+F001 "" */
    0x3, 0x3f, 0x3d, 0x21, 0x21, 0x27, 0xe7, 0xe0,

    /* U+F008 "" */
    0xff, 0xd1, 0x78, 0xff, 0xfa, 0x2f, 0xfc,

    /* U+F00B "" */
    0xde, 0xff, 0xde, 0xff, 0xff, 0x0, 0xff, 0xff,

    /* U+F00C "" */
    0x3, 0x7, 0xce, 0xfc, 0x78, 0x30,

    /* U+F00D "" */
    0xcd, 0xe3, 0x1e, 0xcc,

    /* U+F011 "" */
    0x10, 0xab, 0x5c, 0x98, 0x30, 0x51, 0x1c,

    /* U+F013 "" */
    0x18, 0x5c, 0xff, 0x66, 0x66, 0xff, 0x7c, 0x18,

    /* U+F015 "" */
    0xb, 0x1b, 0x9a, 0xdf, 0xf7, 0xf3, 0xb9, 0xdc,

    /* U+F019 "" */
    0x18, 0xc, 0x6, 0xf, 0xc3, 0xc7, 0xfb, 0xfb,
    0xff,

    /* U+F01C "" */
    0x3e, 0x20, 0xb0, 0x7c, 0x7f, 0xff, 0xfc,

    /* U+F021 "" */
    0x3d, 0x43, 0xc7, 0x0, 0x0, 0xe3, 0xc6, 0xbc,

    /* U+F026 "" */
    0x3, 0xff, 0xf3, 0x0,

    /* U+F027 "" */
    0x0, 0xcf, 0x7d, 0xf0, 0xc0, 0x0,

    /* U+F028 "" */
    0x2, 0x0, 0x8c, 0xbe, 0xdf, 0x6f, 0x94, 0xc4,
    0x4,

    /* U+F03E "" */
    0xff, 0x9f, 0xfb, 0xd1, 0x81, 0xff,

    /* U+F043 "" */
    0x20, 0xc7, 0x1e, 0xfa, 0xed, 0x9c,

    /* U+F048 "" */
    0x8c, 0xff, 0xff, 0xce, 0x20,

    /* U+F04B "" */
    0xc1, 0xe3, 0xe7, 0xff, 0xff, 0x38, 0x60,

    /* U+F04C "" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb, 0x80,

    /* U+F04D "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+F051 "" */
    0x8e, 0x7f, 0xff, 0xe6, 0x20,

    /* U+F052 "" */
    0x10, 0x71, 0xf7, 0xf0, 0x1f, 0xff, 0x80,

    /* U+F053 "" */
    0x11, 0x99, 0x86, 0x18, 0x40,

    /* U+F054 "" */
    0x43, 0xc, 0x33, 0x31, 0x0,

    /* U+F067 "" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+F068 "" */
    0xfe,

    /* U+F06E "" */
    0x3e, 0x31, 0xb7, 0x7b, 0xb6, 0x31, 0xf0,

    /* U+F070 "" */
    0x40, 0xd, 0xe0, 0x76, 0x37, 0x66, 0x6c, 0x63,
    0x7, 0x30, 0x2,

    /* U+F071 "" */
    0x8, 0xe, 0x7, 0x6, 0xc7, 0x73, 0xfb, 0xdf,
    0xff,

    /* U+F074 "" */
    0x2, 0xef, 0x3a, 0x3a, 0xef, 0x2,

    /* U+F077 "" */
    0x10, 0x71, 0xb6, 0x30,

    /* U+F078 "" */
    0x82, 0xd8, 0xe0, 0x80,

    /* U+F079 "" */
    0x40, 0x77, 0xb8, 0x48, 0x24, 0x3b, 0xdc, 0x4,

    /* U+F07B "" */
    0xf0, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+F093 "" */
    0x8, 0xe, 0xf, 0x83, 0x81, 0xc7, 0xfb, 0xfb,
    0xff,

    /* U+F095 "" */
    0x3, 0x7, 0x7, 0x2, 0x6, 0x6c, 0xf8, 0xe0,

    /* U+F0C4 "" */
    0xe7, 0x5b, 0xe1, 0x8f, 0x95, 0xb9, 0x80,

    /* U+F0C5 "" */
    0x3d, 0xf3, 0xff, 0xff, 0xff, 0xf7, 0xfc,

    /* U+F0C7 "" */
    0xfd, 0xe, 0x1f, 0xfe, 0xfd, 0xff, 0x80,

    /* U+F0C9 "" */
    0xff, 0xfc, 0x7, 0xf0, 0x0, 0x3f, 0x80,

    /* U+F0E0 "" */
    0xff, 0xff, 0xbc, 0xdb, 0xe7, 0xff,

    /* U+F0E7 "" */
    0xe7, 0x3f, 0xf3, 0x10, 0x80,

    /* U+F0EA "" */
    0xf9, 0xf3, 0x7, 0xef, 0x9f, 0xff, 0x9f,

    /* U+F0F3 "" */
    0x10, 0x71, 0xf3, 0xe7, 0xdf, 0xff, 0x88,

    /* U+F11C "" */
    0xff, 0xdd, 0x7b, 0x7f, 0xfa, 0x2f, 0xfc,

    /* U+F124 "" */
    0x3, 0xf, 0x3e, 0xfe, 0x7c, 0x1c, 0x18, 0x8,

    /* U+F15B "" */
    0xf9, 0xfb, 0xc7, 0xff, 0xff, 0xff, 0xff,

    /* U+F1EB "" */
    0x0, 0x1f, 0xec, 0xc, 0x78, 0x21, 0x0, 0x0,
    0xc0, 0x30,

    /* U+F240 "" */
    0xff, 0xa0, 0x3f, 0xf7, 0xff, 0xff, 0xc0,

    /* U+F241 "" */
    0xff, 0xa0, 0x3f, 0xe7, 0xfb, 0xff, 0xc0,

    /* U+F242 "" */
    0xff, 0xa0, 0x3f, 0x87, 0xe3, 0xff, 0xc0,

    /* U+F243 "" */
    0xff, 0xa0, 0x3f, 0x7, 0xc3, 0xff, 0xc0,

    /* U+F244 "" */
    0xff, 0xa0, 0x38, 0x6, 0x3, 0xff, 0x80,

    /* U+F287 "" */
    0xe, 0x4, 0xd, 0xb, 0xff, 0xc8, 0x81, 0xc0,

    /* U+F293 "" */
    0x7b, 0xbb, 0x73, 0xce, 0xde, 0xde,

    /* U+F2ED "" */
    0xff, 0xff, 0xff, 0x7e, 0xfd, 0xfb, 0xbe,

    /* U+F304 "" */
    0x6, 0xf, 0x1f, 0x3e, 0x7c, 0xf8, 0xf0, 0xe0,

    /* U+F55A "" */
    0x3f, 0xdf, 0xff, 0x9f, 0xe7, 0x7f, 0xcf, 0xf0,

    /* U+F7C2 "" */
    0x3e, 0xd7, 0xaf, 0xff, 0xff, 0xff, 0xff,

    /* U+F8A2 "" */
    0x1, 0x61, 0xff, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 65, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 36, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 35, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 4, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 73, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 11, .adv_w = 105, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 20, .adv_w = 38, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 22, .adv_w = 38, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 24, .adv_w = 71, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 26, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 29, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 30, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 31, .adv_w = 35, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 47, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 73, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 35, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 34, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 67, .adv_w = 73, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 69, .adv_w = 73, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 73, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 72, .adv_w = 55, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 115, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 80, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 36, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 34, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 112, .adv_w = 79, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 116, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 97, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 100, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 137, .adv_w = 79, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 70, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 119, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 42, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 173, .adv_w = 47, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 42, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 177, .adv_w = 69, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 179, .adv_w = 57, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 180, .adv_w = 74, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 181, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 61, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 43, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 199, .adv_w = 79, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 32, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 32, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 205, .adv_w = 67, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 32, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 119, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 79, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 220, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 223, .adv_w = 52, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 61, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 45, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 79, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 100, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 65, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 241, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 49, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 246, .adv_w = 71, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 247, .adv_w = 49, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 250, .adv_w = 73, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 251, .adv_w = 36, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 34, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 253, .adv_w = 73, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 73, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 261, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 71, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 265, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 74, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 269, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 45, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 275, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 73, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 278, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 279, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 285, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 287, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 292, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 294, .adv_w = 74, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 295, .adv_w = 79, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 298, .adv_w = 84, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 301, .adv_w = 34, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 302, .adv_w = 29, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 303, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 304, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 306, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 55, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 324, .adv_w = 22, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 325, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 326, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 327, .adv_w = 75, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 328, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 329, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 330, .adv_w = 74, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 331, .adv_w = 25, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 332, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 333, .adv_w = 74, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 334, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 335, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 336, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 4},
    {.bitmap_index = 337, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -1},
    {.bitmap_index = 338, .adv_w = 74, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 339, .adv_w = 34, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 341, .adv_w = 34, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 55, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 35, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 28, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 28, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 356, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 361, .adv_w = 28, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 115, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 367, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 115, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 115, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 383, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 387, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 392, .adv_w = 62, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 62, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 54, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 399, .adv_w = 54, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 402, .adv_w = 149, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 408, .adv_w = 149, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 416, .adv_w = 157, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 422, .adv_w = 157, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 430, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 77, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 444, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 449, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 116, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 461, .adv_w = 117, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 472, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 479, .adv_w = 57, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 483, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 487, .adv_w = 92, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 491, .adv_w = 2, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 492, .adv_w = 2, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 494, .adv_w = 2, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 495, .adv_w = 2, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 496, .adv_w = 2, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 497, .adv_w = 2, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 498, .adv_w = 2, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 499, .adv_w = 2, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 500, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 501, .adv_w = 4, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 502, .adv_w = 4, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 503, .adv_w = 4, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 504, .adv_w = 73, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 505, .adv_w = 54, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 506, .adv_w = 47, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 62, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 76, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 78, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 537, .adv_w = 39, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 538, .adv_w = 115, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 545, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 546, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 547, .adv_w = 115, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 553, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 557, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 560, .adv_w = 116, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 123, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 88, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 580, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 586, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 590, .adv_w = 57, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 54, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 593, .adv_w = 47, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 81, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 63, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 76, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 628, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 643, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 660, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 668, .adv_w = 144, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 676, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 685, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 700, .adv_w = 64, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 704, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 710, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 719, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 88, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 731, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 736, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 743, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 757, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 762, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 769, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 774, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 779, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 786, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 787, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 160, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 805, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 814, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 112, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 824, .adv_w = 112, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 828, .adv_w = 160, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 859, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 873, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 898, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 905, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 912, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 927, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 934, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 944, .adv_w = 160, .box_w = 10, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 951, .adv_w = 160, .box_w = 10, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 958, .adv_w = 160, .box_w = 10, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 965, .adv_w = 160, .box_w = 10, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 972, .adv_w = 160, .box_w = 10, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 979, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 993, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1000, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1008, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1023, .adv_w = 129, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0xa, 0xb, 0xd, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x37, 0x4d, 0x53, 0x67, 0xc8, 0x350,
    0x359, 0x35f, 0x363
};

static const uint16_t unicode_list_6[] = {
    0x0, 0x3, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe,
    0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x17,
    0x18, 0x19, 0x1d, 0x27, 0x2f, 0x41, 0x4a, 0x52,
    0x58, 0x63, 0x69, 0x73, 0x75, 0x7e, 0x99, 0x9a,
    0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2,
    0xe9aa, 0xe9b1, 0xe9b4, 0xe9b5, 0xe9b6, 0xe9ba, 0xe9bc, 0xe9be,
    0xe9c2, 0xe9c5, 0xe9ca, 0xe9cf, 0xe9d0, 0xe9d1, 0xe9e7, 0xe9ec,
    0xe9f1, 0xe9f4, 0xe9f5, 0xe9f6, 0xe9fa, 0xe9fb, 0xe9fc, 0xe9fd,
    0xea10, 0xea11, 0xea17, 0xea19, 0xea1a, 0xea1d, 0xea20, 0xea21,
    0xea22, 0xea24, 0xea3c, 0xea3e, 0xea6d, 0xea6e, 0xea70, 0xea72,
    0xea89, 0xea90, 0xea93, 0xea9c, 0xeac5, 0xeacd, 0xeb04, 0xeb94,
    0xebe9, 0xebea, 0xebeb, 0xebec, 0xebed, 0xec30, 0xec3c, 0xec96,
    0xecad, 0xef03, 0xf16b, 0xf24b
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
        .range_start = 700, .range_length = 868, .glyph_id_start = 129,
        .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 19, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1569, .range_length = 26, .glyph_id_start = 148,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1600, .range_length = 22, .glyph_id_start = 174,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1623, .range_length = 62028, .glyph_id_start = 196,
        .unicode_list = unicode_list_6, .glyph_id_ofs_list = NULL, .list_length = 100, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    0, 0, 0, 0, 24, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
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
    0, 0, 0, 0, 21, 22, 22, 23,
    0, 24, 22, 22, 22, 22, 22, 0,
    0, 0, 22, 22, 23, 23, 21, 21,
    21, 21, 21, 21, 0, 0, 22, 22,
    25, 22, 25, 21, 25, 21, 23, 26,
    24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 27, 27, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -9, 0, 0, 3,
    0, 3, 0, 1, 0, -5, -8, -4,
    -4, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -9, -3, -8,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, -3, 17, -9, 0, -5, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -3, 0, 0, -4, 0,
    -1, -3, -1, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, 0, 0, 0,
    -3, 0, -3, -1, -3, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, 0, -6, 0, 0, 0, 0, 0,
    -3, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, -5, 3, -9, -3, 0,
    3, 0, 0, 0, 0, 0, -10, -9,
    -9, -6, -8, -3, -5, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 3, -5, -1, 0, 0, 0,
    0, 0, 0, 0, -3, -3, -1, -1,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 3, -8, -3,
    0, 0, 0, 0, 0, 0, 0, -6,
    -6, -3, -4, -5, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -1, 0,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, -5, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, -13, -5, -7, -10, -7, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -13, -5, -7,
    -10, -5, -19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -10, -5, -7, -10, -7, -13
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 26,
    .right_class_cnt     = 27,
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
    .cmap_num = 7,
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
const lv_font_t lv_font_samim_8 = {
#else
lv_font_t lv_font_samim_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
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



#endif /*#if LV_FONT_SAMIM_8*/

