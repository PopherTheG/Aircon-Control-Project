#include <stdio.h>
#include "driver/gpio.h"
#include "driver/rmt.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"

#define IR_LED GPIO_NUM_15
#define RMT_TX_CHANNEL RMT_CHANNEL_0

void app_main(void)
{
  gpio_pad_select_gpio(IR_LED); // Lets the GPIO 15 work as output
  RMT_DEFAULT_CONFIG_TX(IR_LED, RMT_TX_CHANNEL); // Default configuration for Tx channel
  while (1)
  {
    printf("Turning off the LED\n");
    gpio_set_level(IR_LED, 0);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    printf("Turning on the LED\n");
    gpio_set_level(IR_LED, 1);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
