#include "main.h"

#include <esp_event.h>
#include <esp_log.h>
#include <peer.h>


#include "display_handler.h"
#include "time_mgmt.h"
#include "freertos/FreeRTOS.h"

#ifndef LINUX_BUILD
#include "nvs_flash.h"

const char *TAG = "MAIN";

extern "C" void app_main(void) {
  esp_err_t ret = nvs_flash_init();
  if (ret == ESP_ERR_NVS_NO_FREE_PAGES ||
      ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
    ESP_ERROR_CHECK(nvs_flash_erase());
    ret = nvs_flash_init();
  }
  ESP_ERROR_CHECK(ret);

  ESP_LOGI(TAG, "Initializing display handler");
  init_all_display();
  ESP_LOGI(TAG, "Display handler initialized");
  update_time_display(12, 0, 0);
  update_date_display("Jan", "01", "2023", "Mon");
  update_status_bar("12:00:00PM", 70);
  ESP_LOGI(TAG, "Initializing display update task");
  xTaskCreatePinnedToCore(update_display_task, "update_display_task", 65536,
                          NULL, 5, NULL, 1);
  ESP_LOGI(TAG, "Display update task initialized");

  ESP_ERROR_CHECK(esp_event_loop_create_default());
  peer_init();
  oai_init_audio_capture();
  oai_init_audio_decoder();
  oai_wifi();
  oai_webrtc();
}
#else
int main(void) {
  ESP_ERROR_CHECK(esp_event_loop_create_default());
  peer_init();
  oai_webrtc();
}
#endif
