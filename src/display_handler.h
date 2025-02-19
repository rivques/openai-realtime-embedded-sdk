#ifdef __cplusplus
extern "C" {
#endif
#pragma once
#include "esp_err.h"
#include "lvgl.h"

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 128
#define DISPLAY_OFFSET_W 2
#define DISPLAY_OFFSET_H 1

#define LCD_HOST       SPI2_HOST
#define LCD_PIXEL_CLOCK_HZ (20 * 1000 * 1000)
#define LCD_BK_LIGHT_ON_LEVEL  1
#define LCD_BK_LIGHT_OFF_LEVEL !LCD_BK_LIGHT_ON_LEVEL
#define PIN_NUM_DATA0          8  /*!< for 1-line SPI, this also refereed as MOSI */
#define PIN_NUM_PCLK           18
#define PIN_NUM_CS             10
#define PIN_NUM_DC             3
#define PIN_NUM_RST            9
#define PIN_NUM_BK_LIGHT       GPIO_NUM_7
#define LCD_CMD_BITS           8
#define LCD_PARAM_BITS         8

esp_err_t display_handler_init(void);
void demo();
void init_time_display(lv_obj_t *scr);
void update_time_display(uint8_t hours, uint8_t minutes, uint8_t seconds);
void init_date_display(lv_obj_t *scr);
void update_date_display(const char* month, const char* day, const char* year, const char* day_of_week);
void init_status_bar(lv_obj_t *scr);
void update_status_bar(const char* time_string, int8_t batt_pct);
void init_all_display();
#ifdef __cplusplus
}
#endif