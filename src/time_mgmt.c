#include "time_mgmt.h"
#include "esp_lvgl_port.h"
#include <time.h>
#include "freertos/FreeRTOS.h"
#include <string.h>
#include <stdio.h>
#include "esp_log.h"
#include "display_handler.h"

static const char *TAG = "TIME_MGMT";

const char *day_of_week[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
const char *month_of_year[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void update_display_task(void *arg) {
  ESP_LOGI(TAG, "Entering update_display_task");
  time_t now;
  struct tm timeinfo;
  char strftime_buf[64];
  while (1) {
    vTaskDelay(200 / portTICK_PERIOD_MS);
    time(&now);
    localtime_r(&now, &timeinfo);
    strftime(strftime_buf, sizeof(strftime_buf), "%c", &timeinfo);
    ESP_LOGI(TAG, "The current date/time in New York is: %s", strftime_buf);
    lvgl_port_lock(0);
    update_time_display(timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);
    char day_str[4];
    snprintf(day_str, sizeof(day_str), "%02d", timeinfo.tm_mday);
    char year_str[12];
    snprintf(year_str, sizeof(year_str), "%04d", timeinfo.tm_year + 1900);
    update_date_display(month_of_year[timeinfo.tm_mon], day_str, year_str, day_of_week[timeinfo.tm_wday]);
    strftime(strftime_buf, sizeof(strftime_buf), "%I:%M:%S%p", &timeinfo);
    update_status_bar(strftime_buf, 70);
    lvgl_port_unlock();
  }
}