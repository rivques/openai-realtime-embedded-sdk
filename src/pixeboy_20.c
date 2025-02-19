/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --no-compress --font Pixeboy-z8XGD.ttf --range 32-2047 --format lvgl -o pixeboy_20.c
 ******************************************************************************/
#include "pixeboy_20.h"
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef PIXEBOY_20
#define PIXEBOY_20 1
#endif

#if PIXEBOY_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0xf0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x42, 0x42, 0xff, 0xff, 0x42, 0x42, 0xff, 0xff,
    0x42, 0x42,

    /* U+0024 "$" */
    0x18, 0x7e, 0xff, 0xe1, 0x7c, 0x1e, 0x87, 0xff,
    0x7e, 0x18,

    /* U+0025 "%" */
    0x1, 0x63, 0x67, 0xe, 0x1c, 0x38, 0x70, 0xe6,
    0xc6, 0x80,

    /* U+0026 "&" */
    0x7c, 0xfe, 0xc2, 0xf8, 0x79, 0xcf, 0xce, 0xcc,
    0xfe, 0x7b,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x7f, 0x6d, 0xb6, 0xec,

    /* U+0029 ")" */
    0xdd, 0xb6, 0xdb, 0xf8,

    /* U+002A "*" */
    0x11, 0x25, 0xf0, 0x83, 0x88, 0xa0, 0x80,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xf4,

    /* U+002D "-" */
    0xff, 0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x3, 0x3, 0x7, 0xf, 0x1c, 0x38, 0xf0, 0xe0,
    0xc0, 0xc0,

    /* U+0030 "0" */
    0x7e, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0031 "1" */
    0x38, 0xf8, 0xf8, 0x98, 0x18, 0x18, 0x18, 0x18,
    0xff, 0xff,

    /* U+0032 "2" */
    0x7e, 0xff, 0xc3, 0x7, 0xe, 0x3c, 0x70, 0xe0,
    0xff, 0xff,

    /* U+0033 "3" */
    0x7e, 0xff, 0xc3, 0x3, 0x3e, 0x3e, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+0034 "4" */
    0xf, 0x1f, 0x3b, 0x73, 0xe3, 0xff, 0xff, 0x3,
    0x3, 0x3,

    /* U+0035 "5" */
    0xff, 0xff, 0xc0, 0xfe, 0x7f, 0x3, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+0036 "6" */
    0x7e, 0xff, 0xc3, 0xc0, 0xfe, 0xff, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0037 "7" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,
    0xc0, 0xc0,

    /* U+0038 "8" */
    0x7e, 0xff, 0xc3, 0xff, 0x7e, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0039 "9" */
    0x7e, 0xff, 0xc3, 0xc3, 0xff, 0x7f, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3, 0xd0,

    /* U+003C "<" */
    0x1, 0x7, 0x1c, 0x70, 0xc0, 0xc0, 0x70, 0x1c,
    0x7, 0x1,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0x38, 0xe, 0x3, 0x3, 0xe, 0x38,
    0xe0, 0x80,

    /* U+003F "?" */
    0x7e, 0xff, 0xc3, 0x7, 0xe, 0x3c, 0x30, 0x0,
    0x30, 0x30,

    /* U+0040 "@" */
    0x7e, 0xc3, 0x81, 0x9d, 0xa5, 0xa5, 0xa5, 0x9f,
    0xc0, 0x7e,

    /* U+0041 "A" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3,

    /* U+0042 "B" */
    0xfe, 0xff, 0xc3, 0xc3, 0xfe, 0xff, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0043 "C" */
    0x7e, 0xff, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xff, 0x7e,

    /* U+0044 "D" */
    0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xfe, 0xfc,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfc, 0xc0, 0xc0,
    0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0,

    /* U+0047 "G" */
    0x7e, 0xff, 0xc3, 0xc0, 0xde, 0xdf, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0xff, 0xff,

    /* U+004A "J" */
    0xf, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+004B "K" */
    0xc7, 0xce, 0xdc, 0xf8, 0xf0, 0xf0, 0xf8, 0xdc,
    0xce, 0xc7,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xff, 0xff,

    /* U+004D "M" */
    0xc3, 0xe7, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb, 0xc3,

    /* U+004E "N" */
    0xf3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb, 0xcf,

    /* U+004F "O" */
    0x7e, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0050 "P" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0,
    0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3e, 0x7f, 0xb0, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x8f, 0xff, 0xbf, 0x40,

    /* U+0052 "R" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xce,
    0xc7, 0xc3,

    /* U+0053 "S" */
    0x7e, 0xff, 0xc3, 0xc0, 0x7e, 0x3f, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+0054 "T" */
    0xff, 0xff, 0x99, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0056 "V" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7,
    0x7e, 0x18,

    /* U+0057 "W" */
    0xc3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff,
    0xe7, 0xc3,

    /* U+0058 "X" */
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x18, 0x3c, 0x7e,
    0xe7, 0xc3,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x18, 0x18,
    0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,
    0xff, 0xff,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xfc,

    /* U+005C "\\" */
    0xc0, 0xc0, 0xe0, 0xf0, 0x38, 0x1c, 0xf, 0x7,
    0x3, 0x3,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0xfc,

    /* U+005E "^" */
    0xc, 0x7, 0x81, 0x20, 0xcc, 0x21, 0x18, 0x64,
    0xb, 0x3,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xdd, 0x80,

    /* U+0061 "a" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3,

    /* U+0062 "b" */
    0xfe, 0xff, 0xc3, 0xc3, 0xfe, 0xff, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0063 "c" */
    0x7e, 0xff, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xff, 0x7e,

    /* U+0064 "d" */
    0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xfe, 0xfc,

    /* U+0065 "e" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfc, 0xc0, 0xc0,
    0xff, 0xff,

    /* U+0066 "f" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0,

    /* U+0067 "g" */
    0x7e, 0xff, 0xc3, 0xc0, 0xde, 0xdf, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0068 "h" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+0069 "i" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0xff, 0xff,

    /* U+006A "j" */
    0xf, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+006B "k" */
    0xc7, 0xce, 0xdc, 0xf8, 0xf0, 0xf0, 0xf8, 0xdc,
    0xce, 0xc7,

    /* U+006C "l" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xff, 0xff,

    /* U+006D "m" */
    0xc3, 0xe7, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb, 0xc3,

    /* U+006E "n" */
    0xf3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb, 0xcf,

    /* U+006F "o" */
    0x7e, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0070 "p" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0,
    0xc0, 0xc0,

    /* U+0071 "q" */
    0x3e, 0x7f, 0xb0, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x8f, 0xff, 0xbf, 0x40,

    /* U+0072 "r" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xce,
    0xc7, 0xc3,

    /* U+0073 "s" */
    0x7e, 0xff, 0xc3, 0xc0, 0x7e, 0x3f, 0x3, 0xc3,
    0xff, 0x7e,

    /* U+0074 "t" */
    0xff, 0xff, 0x99, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0076 "v" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7,
    0x7e, 0x18,

    /* U+0077 "w" */
    0xc3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff,
    0xe7, 0xc3,

    /* U+0078 "x" */
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x18, 0x3c, 0x7e,
    0xe7, 0xc3,

    /* U+0079 "y" */
    0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x18, 0x18,
    0x18, 0x18,

    /* U+007A "z" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,
    0xff, 0xff,

    /* U+007B "{" */
    0x19, 0xcc, 0x6c, 0x60, 0xc6, 0x38, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc7, 0x18, 0xc1, 0x8d, 0x8c, 0xc6, 0x0,

    /* U+007E "~" */
    0x21, 0x73, 0xce, 0x84,

    /* U+00A0 " " */
    0x0,

    /* U+00A9 "©" */
    0x7e, 0x81, 0x99, 0xa5, 0xa1, 0xa1, 0xa5, 0x99,
    0x81, 0x7e,

    /* U+00AD "­" */
    0xff, 0xff,

    /* U+00AE "®" */
    0x7d, 0x6, 0xcd, 0x5b, 0x35, 0x60, 0xbe,

    /* U+00AF "¯" */
    0xff, 0xff,

    /* U+00B1 "±" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,
    0x0, 0xff, 0xff,

    /* U+00B4 "´" */
    0x7f, 0x0,

    /* U+00D7 "×" */
    0x81, 0xc3, 0x66, 0x24, 0x18, 0x24, 0x66, 0xc3,
    0x81,

    /* U+00F7 "÷" */
    0x18, 0x18, 0x0, 0xff, 0xff, 0x0, 0x18, 0x18,

    /* U+037E ";" */
    0xf0, 0x3, 0xd0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 102, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 54, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 48, .adv_w = 70, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 70, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 63, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 54, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 72, .adv_w = 150, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 74, .adv_w = 54, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 191, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 150, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 207, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 70, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 70, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 182, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 527, .adv_w = 150, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 529, .adv_w = 70, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 531, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 743, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 150, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 814, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 150, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 827, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 834, .adv_w = 150, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 836, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 847, .adv_w = 70, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 849, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 858, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 866, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1}
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
const lv_font_t pixeboy_20 = {
#else
lv_font_t pixeboy_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
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



#endif /*#if PIXEBOY_20*/

