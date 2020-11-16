/* RMT example -- Morse Code
   This example code is in the Public Domain (or CC0 licensed, at your option.)
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/rmt.h"
#if 0
#include "samsungIRcodes.h"
#endif
#if 1
#include "samsungIRcodes2.h"
#endif

#define IR_LED GPIO_NUM_15 
#define DELAY_INC 8000

static void rmt_tx_init(void)
{
    rmt_config_t config;
    config.rmt_mode = RMT_MODE_TX;
    config.channel = RMT_CHANNEL_0;
    config.gpio_num = IR_LED;
    config.clk_div = 80;                                        // TODO: do not understand yet
    config.mem_block_num = 1;                                   // TODO: do not understand yet
    config.tx_config.carrier_freq_hz = 38000;
    config.tx_config.carrier_level = RMT_CARRIER_LEVEL_HIGH;
    config.tx_config.idle_level = RMT_IDLE_LEVEL_LOW;
    config.tx_config.carrier_duty_percent = 50;
    config.tx_config.carrier_en = true; 
    config.tx_config.loop_en = false; 
    config.tx_config.idle_output_en = true;                     // TODO: do not understand yet
    rmt_config(&config);                                        // makes the configuration effective.
    rmt_driver_install(config.channel, 0, 0);                   // TODO: do not understand
} 

void goThroughCoolTemps()
{
    
}

void goThroughDryTemps()
{
    
}
   
void app_main(void *ignore)
{
    ESP_LOGI("IRLED", "Configuring transmitter");
    rmt_tx_init();
    while (true)
    {
        printf("Transmission swing...\n");
        rmt_write_items(RMT_CHANNEL_0, &TURN_ON_AC_17_COOL_LOWFAN_TOGGLESWING, sizeof(TURN_ON_AC_17_COOL_LOWFAN_TOGGLESWING) /  sizeof(TURN_ON_AC_17_COOL_LOWFAN_TOGGLESWING[0]), true);
        printf("Transmission done.\n");
        vTaskDelay( DELAY_INC / portTICK_PERIOD_MS);
    }
}