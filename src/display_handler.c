#include "display_handler.h"
#include "esp_log.h"
#include "esp_check.h"
#include <driver/gpio.h>
#include <esp_err.h>
#include <driver/spi_common.h>
#include <esp_lcd_types.h>
#include <esp_lcd_io_spi.h>
#include <esp_lcd_panel_dev.h>
#include <esp_lcd_panel_ops.h>
#include <esp_lcd_panel_io.h>
#include <esp_lcd_panel_vendor.h>
#include "esp_lvgl_port.h"
#include "font/lv_font.h"
#include "lcd_7x5.h"
#include "pixeboy_20.h"
#include "pixeboy_32.h"
#include "pixeboy_60.c"
#include "bat.c"


static esp_lcd_panel_handle_t panel_handle;

static const char *TAG = "DISPLAY_HANDLER";

static lv_display_t *lvgl_disp = NULL;

esp_err_t display_handler_init(void)
{

    // hardware
    gpio_config_t bk_gpio_config = {
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = 1ULL << PIN_NUM_BK_LIGHT
    };
    // Initialize the GPIO of backlight
    ESP_ERROR_CHECK(gpio_config(&bk_gpio_config));

    spi_bus_config_t buscfg = {
        .sclk_io_num = PIN_NUM_PCLK,
        .mosi_io_num = PIN_NUM_DATA0,
        .miso_io_num = -1,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
    };

    // Initialize the SPI bus
    ESP_ERROR_CHECK(spi_bus_initialize(LCD_HOST, &buscfg, SPI_DMA_CH_AUTO));

    esp_lcd_panel_io_handle_t io_handle = NULL;
    esp_lcd_panel_io_spi_config_t io_config = {
        .dc_gpio_num = PIN_NUM_DC,
        .cs_gpio_num = PIN_NUM_CS,
        .pclk_hz = LCD_PIXEL_CLOCK_HZ,
        .lcd_cmd_bits = LCD_CMD_BITS,
        .lcd_param_bits = LCD_PARAM_BITS,
        .spi_mode = 0,
        .trans_queue_depth = 10,
    };

    // Attach the LCD to the SPI bus
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)LCD_HOST, &io_config, &io_handle));

    panel_handle = NULL;
    esp_lcd_panel_dev_config_t panel_config = {
        .reset_gpio_num = PIN_NUM_RST,
        .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_RGB,
        .bits_per_pixel = 16,
    };
    // Initialize the LCD configuration
    ESP_ERROR_CHECK(esp_lcd_new_panel_st7789(io_handle, &panel_config, &panel_handle));

    // Turn off backlight to avoid unpredictable display on the LCD screen while initializing
    // the LCD panel driver. (Different LCD screens may need different levels)
    ESP_ERROR_CHECK(gpio_set_level(PIN_NUM_BK_LIGHT, LCD_BK_LIGHT_OFF_LEVEL));

    // Reset the display
    ESP_ERROR_CHECK(esp_lcd_panel_reset(panel_handle));

    // Initialize LCD panel
    ESP_ERROR_CHECK(esp_lcd_panel_init(panel_handle));

    // Turn on the screen
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));
    ESP_ERROR_CHECK(esp_lcd_panel_invert_color(panel_handle, false));

    // Swap x and y axis (Different LCD screens may need different options)
    ESP_ERROR_CHECK(esp_lcd_panel_swap_xy(panel_handle, false));

    // set a gap for the display
    ESP_ERROR_CHECK(esp_lcd_panel_set_gap(panel_handle, DISPLAY_OFFSET_W, DISPLAY_OFFSET_H));

    // Turn on backlight (Different LCD screens may need different levels)
    ESP_ERROR_CHECK(gpio_set_level(PIN_NUM_BK_LIGHT, LCD_BK_LIGHT_ON_LEVEL));

    /* Initialize LVGL */
    const lvgl_port_cfg_t lvgl_cfg = {
        .task_priority = 4,         /* LVGL task priority */
        .task_stack = 6144,         /* LVGL task stack size */
        .task_affinity = -1,        /* LVGL task pinned to core (-1 is no affinity) */
        .task_max_sleep_ms = 500,   /* Maximum sleep in LVGL task */
        .timer_period_ms = 5        /* LVGL timer tick period in ms */
    };
    ESP_RETURN_ON_ERROR(lvgl_port_init(&lvgl_cfg), TAG, "LVGL port initialization failed");

    uint32_t buff_size = DISPLAY_WIDTH * DISPLAY_HEIGHT;
#if EXAMPLE_LCD_LVGL_FULL_REFRESH || EXAMPLE_LCD_LVGL_DIRECT_MODE
    buff_size = DISPLAY_WIDTH * DISPLAY_HEIGHT;
#endif

    /* Add LCD screen */
    ESP_LOGD(TAG, "Add LCD screen");
    const lvgl_port_display_cfg_t disp_cfg = {
        .panel_handle = panel_handle,
        .io_handle = io_handle,
        .buffer_size = buff_size,
        .double_buffer = 0,
        .hres = DISPLAY_WIDTH,
        .vres = DISPLAY_HEIGHT,
        .monochrome = false,
#if LVGL_VERSION_MAJOR >= 9
        .color_format = LV_COLOR_FORMAT_RGB565,
#endif
        .rotation = {
            .swap_xy = false,
            .mirror_x = false,
            .mirror_y = false,
        },
        .flags = {
            .buff_dma = false,
            .buff_spiram = false,
#if EXAMPLE_LCD_LVGL_FULL_REFRESH
            .full_refresh = true,
#elif EXAMPLE_LCD_LVGL_DIRECT_MODE
            .direct_mode = true,
#endif
#if LVGL_VERSION_MAJOR >= 9
            .swap_bytes = false,
#endif
        }
    };

    lvgl_disp = lvgl_port_add_disp(&disp_cfg);


    return ESP_OK;
}

static void app_main_display(void)
{
    lv_obj_t *scr = lv_scr_act();
    lv_obj_set_style_bg_color(scr, lv_color_black(), 0);
    lv_obj_set_style_bg_opa(scr, LV_OPA_COVER, 0);
    /* Create Label */
    lv_obj_t *label = lv_label_create(scr);
    lv_obj_set_width(label, DISPLAY_WIDTH);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(label, "the quick brown fox jumps over the lazy dog. THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG. 0123456789");

    /* Improve Text Readability */
    lv_obj_set_style_text_font(label, &lcd_7x5, 0);  // Use readable font
    lv_obj_set_style_text_color(label, lv_color_white(), 0);        // High contrast text
    lv_obj_set_style_bg_color(label, lv_color_black(), 0);          // Dark background for contrast
    //lv_obj_set_style_outline_width(label, 1, 0);               // Slight outline to make text stand out
    //lv_obj_set_style_outline_color(label, lv_color_black(), 0);
    lv_obj_set_style_text_opa(label, LV_OPA_COVER, 0);              // Ensure full opacity

    /* Positioning */
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 1);

}

static lv_obj_t *bottom_line, *label, *bat_icon, *bat_fill, *bat_label;
static lv_obj_t *sec_box, *hours_label, *minutes_label, *ampm_label, *mid_line;
static lv_obj_t *dow_label, *month_label, *day_label, *year_label;

void init_status_bar(lv_obj_t *scr) {
    lv_obj_set_style_bg_color(scr, lv_color_black(), 0);
    lv_obj_set_style_bg_opa(scr, LV_OPA_COVER, 0);

    bottom_line = lv_obj_create(scr);
    lv_obj_set_size(bottom_line, DISPLAY_WIDTH, 1);
    lv_obj_set_style_bg_color(bottom_line, lv_color_hex(0xffffff), 0); 
    lv_obj_align(bottom_line, LV_ALIGN_TOP_MID, 0, 10);
    lv_obj_set_style_bg_opa(bottom_line, LV_OPA_COVER, 0);              // Ensure full opacity
    lv_obj_set_style_radius(bottom_line, 0, 0); // No rounding
    lv_obj_set_style_shadow_opa(bottom_line, LV_OPA_TRANSP, 0); // No shadow
    lv_obj_set_style_border_opa(bottom_line, LV_OPA_TRANSP, 0); // No border
    lv_obj_set_style_outline_opa(bottom_line, LV_OPA_TRANSP, 0); // No outline
    
    label = lv_label_create(scr);
    lv_obj_set_width(label, DISPLAY_WIDTH);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_font(label, &lcd_7x5, 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_obj_align(label, LV_ALIGN_TOP_MID, -4, 1);
    
    bat_icon = lv_img_create(scr);
    lv_img_set_src(bat_icon, &bat);
    lv_obj_set_pos(bat_icon, DISPLAY_WIDTH - 17, 1);
    
    bat_fill = lv_obj_create(scr);
    lv_obj_set_size(bat_fill, 15, 7);
    lv_obj_set_style_bg_color(bat_fill, lv_color_hex(0x0000ff), 0); // Green color
    lv_obj_set_style_bg_opa(bat_fill, LV_OPA_COVER, 0);              // Ensure full opacity
    lv_obj_align(bat_fill, LV_ALIGN_TOP_LEFT, 112, 2);
    lv_obj_set_style_radius(bat_fill, 0, 0); // No rounding
    lv_obj_set_style_shadow_opa(bat_fill, LV_OPA_TRANSP, 0); // No shadow
    lv_obj_set_style_border_opa(bat_fill, LV_OPA_TRANSP, 0); // No border
    lv_obj_set_style_outline_opa(bat_fill, LV_OPA_TRANSP, 0); // No outline
    
    bat_label = lv_label_create(scr);
    lv_obj_set_width(bat_label, 50);
    lv_obj_set_style_text_align(bat_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_font(bat_label, &lcd_7x5, 0);
    lv_obj_set_style_text_color(bat_label, lv_color_white(), 0);
    lv_obj_align(bat_label, LV_ALIGN_TOP_RIGHT, -17, 1);
}

void update_status_bar(const char* time_string, int8_t batt_pct) {
    lv_label_set_text(label, time_string);
    lv_obj_set_size(bat_fill, batt_pct * 15 / 100, 7);
    ESP_LOGI(TAG, "Calculated battery pixel width: %d", batt_pct*15/100);
    char bat_str[10];
    snprintf(bat_str, sizeof(bat_str), "%d%%", batt_pct);
    lv_label_set_text(bat_label, bat_str);
}

void init_time_display(lv_obj_t *scr) {
    sec_box = lv_obj_create(scr);
    lv_obj_set_size(sec_box, 63, 117);
    lv_obj_set_style_bg_color(sec_box, lv_color_hex(0x111122), 0); // Green color
    lv_obj_set_style_bg_opa(sec_box, LV_OPA_COVER, 0);              // Ensure full opacity
    lv_obj_align(sec_box, LV_ALIGN_BOTTOM_LEFT, 1, 0);
    lv_obj_set_style_radius(sec_box, 0, 0); 
    lv_obj_set_style_shadow_opa(sec_box, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(sec_box, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(sec_box, LV_OPA_TRANSP, 0);
    
    hours_label = lv_label_create(scr);
    lv_obj_set_style_text_font(hours_label, &pixeboy_60, 0);
    lv_obj_set_style_text_color(hours_label, lv_color_hex(0xffffff), 0);
    lv_obj_align(hours_label, LV_ALIGN_TOP_LEFT, 1, 10);
    
    minutes_label = lv_label_create(scr);
    lv_obj_set_style_text_font(minutes_label, &pixeboy_60, 0);
    lv_obj_set_style_text_color(minutes_label, lv_color_hex(0xffffff), 0);
    lv_obj_align(minutes_label, LV_ALIGN_TOP_LEFT, 1, 48);
    
    ampm_label = lv_label_create(scr);
    lv_obj_set_style_text_font(ampm_label, &pixeboy_60, 0);
    lv_obj_set_style_text_color(ampm_label, lv_color_hex(0xffffff), 0);
    lv_obj_align(ampm_label, LV_ALIGN_TOP_LEFT, 1, 86);
    
    mid_line = lv_obj_create(scr);
    lv_obj_set_size(mid_line, 2, 117);
    lv_obj_set_style_bg_color(mid_line, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_bg_opa(mid_line, LV_OPA_COVER, 0);              // Ensure full opacity
    lv_obj_align(mid_line, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_style_radius(mid_line, 0, 0); // No rounding
    lv_obj_set_style_shadow_opa(mid_line, LV_OPA_TRANSP, 0); // No shadow
    lv_obj_set_style_border_opa(mid_line, LV_OPA_TRANSP, 0); // No border
    lv_obj_set_style_outline_opa(mid_line, LV_OPA_TRANSP, 0); // No outline
}

void update_time_display(uint8_t hours, uint8_t minutes, uint8_t seconds) {
    uint8_t sec_box_h = seconds * 117 / 60;
    lv_obj_set_size(sec_box, 63, sec_box_h);
    
    char hours_str[4];
    snprintf(hours_str, sizeof(hours_str), "%02d", hours == 0 ? 12 : hours > 12 ? hours - 12 : hours);
    lv_label_set_text(hours_label, hours_str);
    
    char minutes_str[4];
    snprintf(minutes_str, sizeof(minutes_str), "%02d", minutes);
    lv_label_set_text(minutes_label, minutes_str);
    
    char ampm_str[4];
    snprintf(ampm_str, sizeof(ampm_str), "%s", (hours < 12) ? "AM" : "PM");
    lv_label_set_text(ampm_label, ampm_str);
}

void init_date_display(lv_obj_t *scr) {
    dow_label = lv_label_create(scr);
    lv_obj_set_style_text_font(dow_label, &pixeboy_32, 0);
    lv_obj_set_style_text_color(dow_label, lv_color_hex(0xffffff), 0);
    lv_obj_set_width(dow_label, DISPLAY_WIDTH/2);
    lv_obj_set_style_text_align(dow_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_align(dow_label, LV_ALIGN_TOP_RIGHT, 0, 10);
    
    month_label = lv_label_create(scr);
    lv_obj_set_style_text_font(month_label, &pixeboy_32, 0);
    lv_obj_set_style_text_color(month_label, lv_color_hex(0xffffff), 0);
    lv_obj_set_width(month_label, DISPLAY_WIDTH/2);
    lv_obj_set_style_text_align(month_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_align(month_label, LV_ALIGN_TOP_RIGHT, 0, 35);
    
    day_label = lv_label_create(scr);
    lv_obj_set_style_text_font(day_label, &pixeboy_60, 0);
    lv_obj_set_style_text_color(day_label, lv_color_hex(0xffffff), 0);
    lv_obj_set_width(day_label, DISPLAY_WIDTH/2);
    lv_obj_set_style_text_align(day_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_align(day_label, LV_ALIGN_TOP_RIGHT, 0, 60);
    
    year_label = lv_label_create(scr);
    lv_obj_set_style_text_font(year_label, &pixeboy_20, 0);
    lv_obj_set_style_text_color(year_label, lv_color_hex(0xffffff), 0);
    lv_obj_set_width(year_label, DISPLAY_WIDTH/2);
    lv_obj_set_style_text_align(year_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_align(year_label, LV_ALIGN_TOP_RIGHT, 0, 103);
}

void update_date_display(const char* month, const char* day, const char* year, const char* day_of_week) {
    lv_label_set_text(dow_label, day_of_week);
    lv_label_set_text(month_label, month);
    lv_label_set_text(day_label, day);
    lv_label_set_text(year_label, year);
}

void init_all_display(){
    display_handler_init();
    lvgl_port_lock(0);
    lv_obj_t *scr = lv_scr_act();
    init_status_bar(scr);
    init_date_display(scr);
    init_time_display(scr);
    lvgl_port_unlock();
}

void demo(){
    /* Show LVGL objects */
    lvgl_port_lock(0);
    lv_obj_t *scr = lv_scr_act();
    init_status_bar(scr);
    init_date_display(scr);
    init_time_display(scr);
    update_status_bar("12:34:56PM", 75);
    update_time_display(12, 34, 56);
    update_date_display("Feb", "11", "2025", "Tue");
    lvgl_port_unlock();
}