/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font Pixeboy-z8XGD.ttf --range 32-2047 --format lvgl -o pixeboy_16.c
 ******************************************************************************/
#include "pixeboy_16.h"
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef PIXEBOY_16
#define PIXEBOY_16 1
#endif

#if PIXEBOY_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf3,

    /* U+0022 "\"" */
    0xf0, 0xf0,

    /* U+0023 "#" */
    0x45, 0x1f, 0xd1, 0x47, 0xf4, 0x51,

    /* U+0024 "$" */
    0x30, 0xfb, 0xb, 0xc0, 0xd1, 0xdf, 0x18,

    /* U+0025 "%" */
    0x2, 0x8, 0x20, 0x81, 0xc, 0x10, 0x66,

    /* U+0026 "&" */
    0x79, 0x89, 0x3, 0xbd, 0xdb, 0x36, 0x3a,

    /* U+0027 "'" */
    0xcc,

    /* U+0028 "(" */
    0x7b, 0x6d, 0xb3,

    /* U+0029 ")" */
    0xcd, 0xb6, 0xde,

    /* U+002A "*" */
    0x25, 0x7e, 0xe8, 0xc4,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30, 0xc0,

    /* U+002C "," */
    0xd0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x6, 0xc, 0x38, 0x81, 0x1c, 0x30, 0x60,

    /* U+0030 "0" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0031 "1" */
    0x73, 0xcb, 0xc, 0x30, 0xc3, 0x3f,

    /* U+0032 "2" */
    0x7d, 0x8c, 0x30, 0xe6, 0x8, 0x30, 0x7f,

    /* U+0033 "3" */
    0x7d, 0x8c, 0x11, 0xe0, 0x40, 0xb1, 0xbe,

    /* U+0034 "4" */
    0x1e, 0xed, 0x9f, 0x3f, 0xe0, 0xc1, 0x83,

    /* U+0035 "5" */
    0xff, 0x83, 0x3, 0xf0, 0x60, 0xf1, 0xbe,

    /* U+0036 "6" */
    0x7d, 0x8f, 0x7, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0037 "7" */
    0xfe, 0x1c, 0x30, 0xe1, 0x84, 0x10, 0x60,

    /* U+0038 "8" */
    0x7d, 0x8d, 0x13, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0039 "9" */
    0x7d, 0x8f, 0x1f, 0xf0, 0x60, 0xf1, 0xbe,

    /* U+003A ":" */
    0xc0, 0xc,

    /* U+003B ";" */
    0x87,

    /* U+003C "<" */
    0x2, 0x19, 0xe6, 0x4, 0x6, 0x2, 0x3,

    /* U+003D "=" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003E ">" */
    0x80, 0xc0, 0x40, 0x70, 0x47, 0x88, 0x60,

    /* U+003F "?" */
    0x7d, 0x8c, 0x10, 0x63, 0x0, 0x0, 0x18,

    /* U+0040 "@" */
    0x7d, 0x8e, 0x6c, 0x5a, 0xb3, 0xf0, 0x3e,

    /* U+0041 "A" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0xe3,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x17, 0xec, 0x78, 0xf1, 0xfe,

    /* U+0043 "C" */
    0x7d, 0x8f, 0x6, 0xc, 0x18, 0x31, 0xbe,

    /* U+0044 "D" */
    0xf9, 0x8b, 0x1e, 0x3c, 0x78, 0xf1, 0xfc,

    /* U+0045 "E" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x7f,

    /* U+0046 "F" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x60,

    /* U+0047 "G" */
    0x7d, 0x8f, 0x6, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xfe, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x7f,

    /* U+004A "J" */
    0x1e, 0xc, 0x18, 0x30, 0x60, 0xf1, 0xbe,

    /* U+004B "K" */
    0xcf, 0x6e, 0x38, 0xe3, 0xce, 0xb2,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x31, 0xff,

    /* U+004D "M" */
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xf3,

    /* U+004E "N" */
    0xef, 0xff, 0xff, 0xff, 0xff, 0xf7,

    /* U+004F "O" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0050 "P" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x60,

    /* U+0051 "Q" */
    0x3d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0052 "R" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xdb, 0x33, 0x67,

    /* U+0053 "S" */
    0x7d, 0x8d, 0x3, 0xe0, 0x60, 0xf1, 0xbe,

    /* U+0054 "T" */
    0xff, 0x34, 0x60, 0xc1, 0x83, 0x6, 0xc,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0056 "V" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xdb, 0x8,

    /* U+0057 "W" */
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xf3,

    /* U+0058 "X" */
    0xc6, 0x88, 0xe0, 0x81, 0x7, 0x11, 0x63,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0xc,

    /* U+005A "Z" */
    0xfe, 0x1c, 0x30, 0xe6, 0x8, 0x30, 0x7f,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb7,

    /* U+005C "\\" */
    0xc1, 0x83, 0x80, 0x81, 0x1, 0xc1, 0x83,

    /* U+005D "]" */
    0xed, 0xb6, 0xdf,

    /* U+005E "^" */
    0x8, 0xa, 0x9, 0xc, 0x64, 0x16, 0xc,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xcc,

    /* U+0061 "a" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0xe3,

    /* U+0062 "b" */
    0xfd, 0x8f, 0x17, 0xec, 0x78, 0xf1, 0xfe,

    /* U+0063 "c" */
    0x7d, 0x8f, 0x6, 0xc, 0x18, 0x31, 0xbe,

    /* U+0064 "d" */
    0xf9, 0x8b, 0x1e, 0x3c, 0x78, 0xf1, 0xfc,

    /* U+0065 "e" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x7f,

    /* U+0066 "f" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x60,

    /* U+0067 "g" */
    0x7d, 0x8f, 0x6, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0068 "h" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0xe3,

    /* U+0069 "i" */
    0xfe, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x7f,

    /* U+006A "j" */
    0x1e, 0xc, 0x18, 0x30, 0x60, 0xf1, 0xbe,

    /* U+006B "k" */
    0xcf, 0x6e, 0x38, 0xe3, 0xce, 0xb2,

    /* U+006C "l" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x31, 0xff,

    /* U+006D "m" */
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xf3,

    /* U+006E "n" */
    0xef, 0xff, 0xff, 0xff, 0xff, 0xf7,

    /* U+006F "o" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0070 "p" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x60,

    /* U+0071 "q" */
    0x3d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0072 "r" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xdb, 0x33, 0x67,

    /* U+0073 "s" */
    0x7d, 0x8d, 0x3, 0xe0, 0x60, 0xf1, 0xbe,

    /* U+0074 "t" */
    0xff, 0x34, 0x60, 0xc1, 0x83, 0x6, 0xc,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0076 "v" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xdb, 0x8,

    /* U+0077 "w" */
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xf3,

    /* U+0078 "x" */
    0xc6, 0x88, 0xe0, 0x81, 0x7, 0x11, 0x63,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0xc,

    /* U+007A "z" */
    0xfe, 0x1c, 0x30, 0xe6, 0x8, 0x30, 0x7f,

    /* U+007B "{" */
    0x32, 0xc, 0x2, 0x23,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc6, 0x1, 0x6, 0x4c,

    /* U+007E "~" */
    0x67, 0x10,

    /* U+00A0 " " */
    0x0,

    /* U+00A9 "©" */
    0x7a, 0x5a, 0xe9, 0xa6, 0xf8, 0x5e,

    /* U+00AD "­" */
    0xfc,

    /* U+00AE "®" */
    0xfe, 0x9b, 0x69, 0xb5, 0xe0,

    /* U+00AF "¯" */
    0xfc,

    /* U+00B1 "±" */
    0x30, 0xcf, 0xcc, 0x30, 0xc0, 0x3f,

    /* U+00B4 "´" */
    0x78,

    /* U+00D7 "×" */
    0xc6, 0x50, 0xc0, 0x6, 0xd0, 0x40,

    /* U+00F7 "÷" */
    0x30, 0xf, 0xc0, 0x0, 0xc0,

    /* U+037E ";" */
    0x87
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 82, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 33, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 43, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 48, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 49, .adv_w = 120, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 50, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 43, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 130, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 141, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 145, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 359, .adv_w = 120, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 360, .adv_w = 56, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 361, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 82, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 82, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 120, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 550, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 120, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 558, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 563, .adv_w = 120, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 564, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 56, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 571, .adv_w = 120, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 577, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 582, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x9, 0xd, 0xe, 0xf, 0x11, 0x14, 0x37,
    0x57, 0x2de
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 735, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 10, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t pixeboy_16 = {
#else
lv_font_t pixeboy_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PIXEBOY_16*/

