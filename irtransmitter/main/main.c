#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/rmt.h"
#if 1
#include "samsungIRcodes.h"
#endif

#define IR_LED_PIN              GPIO_NUM_15 
#define IR_RMT_CHANNEL          RMT_CHANNEL_0
#define DELAY_INC               3000
#define DELAY_INC_FANSPEED      10000

static void rmt_tx_init(void)
{
    rmt_config_t config;
    config.rmt_mode = RMT_MODE_TX;
    config.channel = IR_RMT_CHANNEL;
    config.gpio_num = IR_LED_PIN;
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

/*** TEST CODES ***/
  
// Expected behavior. The mode will stay in COOL mode, the fan speed will stay at LOW speed, and the temperature will
// increase by 1 degree celsius. The turbo will not be toggled, and swing mode will not be toggled.
void test_TURN_ON_AC_XX_COOL_LOWFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_COOL_LOWFAN, sizeof(TURN_ON_AC_17_COOL_LOWFAN) / sizeof(TURN_ON_AC_17_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_LOWFAN, sizeof(TURN_ON_AC_18_COOL_LOWFAN) / sizeof(TURN_ON_AC_18_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 19 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_COOL_LOWFAN, sizeof(TURN_ON_AC_19_COOL_LOWFAN) / sizeof(TURN_ON_AC_19_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_LOWFAN, sizeof(TURN_ON_AC_20_COOL_LOWFAN) / sizeof(TURN_ON_AC_20_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 21 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_COOL_LOWFAN, sizeof(TURN_ON_AC_21_COOL_LOWFAN) / sizeof(TURN_ON_AC_21_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_LOWFAN, sizeof(TURN_ON_AC_22_COOL_LOWFAN) / sizeof(TURN_ON_AC_22_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 23 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_COOL_LOWFAN, sizeof(TURN_ON_AC_23_COOL_LOWFAN) / sizeof(TURN_ON_AC_23_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_LOWFAN, sizeof(TURN_ON_AC_24_COOL_LOWFAN) / sizeof(TURN_ON_AC_24_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_LOWFAN, sizeof(TURN_ON_AC_25_COOL_LOWFAN) / sizeof(TURN_ON_AC_25_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_LOWFAN, sizeof(TURN_ON_AC_26_COOL_LOWFAN) / sizeof(TURN_ON_AC_26_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 27 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_COOL_LOWFAN, sizeof(TURN_ON_AC_27_COOL_LOWFAN) / sizeof(TURN_ON_AC_27_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_LOWFAN, sizeof(TURN_ON_AC_28_COOL_LOWFAN) / sizeof(TURN_ON_AC_28_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 29 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_COOL_LOWFAN, sizeof(TURN_ON_AC_29_COOL_LOWFAN) / sizeof(TURN_ON_AC_29_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_LOWFAN, sizeof(TURN_ON_AC_30_COOL_LOWFAN) / sizeof(TURN_ON_AC_30_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
}

// Expected behavior. The mode will stay in COOL mode, the fan speed will stay at MED speed, and the temperature will 
// increase by 1 degree celsius. The turbo will not be toggled, and swing mode will not be toggled.  
void test_TURN_ON_AC_XX_COOL_MEDFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_COOL_MEDFAN, sizeof(TURN_ON_AC_17_COOL_MEDFAN) / sizeof(TURN_ON_AC_17_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_MEDFAN, sizeof(TURN_ON_AC_18_COOL_MEDFAN) / sizeof(TURN_ON_AC_18_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 19 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_COOL_MEDFAN, sizeof(TURN_ON_AC_19_COOL_MEDFAN) / sizeof(TURN_ON_AC_19_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_MEDFAN, sizeof(TURN_ON_AC_20_COOL_MEDFAN) / sizeof(TURN_ON_AC_20_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 21 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_COOL_MEDFAN, sizeof(TURN_ON_AC_21_COOL_MEDFAN) / sizeof(TURN_ON_AC_21_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_MEDFAN, sizeof(TURN_ON_AC_22_COOL_MEDFAN) / sizeof(TURN_ON_AC_22_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 23 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_COOL_MEDFAN, sizeof(TURN_ON_AC_23_COOL_MEDFAN) / sizeof(TURN_ON_AC_23_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_MEDFAN, sizeof(TURN_ON_AC_24_COOL_MEDFAN) / sizeof(TURN_ON_AC_24_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_MEDFAN, sizeof(TURN_ON_AC_25_COOL_MEDFAN) / sizeof(TURN_ON_AC_25_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_MEDFAN, sizeof(TURN_ON_AC_26_COOL_MEDFAN) / sizeof(TURN_ON_AC_26_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 27 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_COOL_MEDFAN, sizeof(TURN_ON_AC_27_COOL_MEDFAN) / sizeof(TURN_ON_AC_27_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_MEDFAN, sizeof(TURN_ON_AC_28_COOL_MEDFAN) / sizeof(TURN_ON_AC_28_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 29 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_COOL_MEDFAN, sizeof(TURN_ON_AC_29_COOL_MEDFAN) / sizeof(TURN_ON_AC_29_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_MEDFAN, sizeof(TURN_ON_AC_30_COOL_MEDFAN) / sizeof(TURN_ON_AC_30_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
}

// Expected behavior. The mode will stay in COOL mode, the fan speed will stay at HIGH speed, and the temperature will
// increase by 1 degree celsius. The turbo will not be toggled, and swing mode will not be toggled.
void test_TURN_ON_AC_XX_COOL_HIGHFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_COOL_HIGHFAN, sizeof(TURN_ON_AC_17_COOL_HIGHFAN) / sizeof(TURN_ON_AC_17_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_HIGHFAN, sizeof(TURN_ON_AC_18_COOL_HIGHFAN) / sizeof(TURN_ON_AC_18_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 19 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_COOL_HIGHFAN, sizeof(TURN_ON_AC_19_COOL_HIGHFAN) / sizeof(TURN_ON_AC_19_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_HIGHFAN, sizeof(TURN_ON_AC_20_COOL_HIGHFAN) / sizeof(TURN_ON_AC_20_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 21 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_COOL_HIGHFAN, sizeof(TURN_ON_AC_21_COOL_HIGHFAN) / sizeof(TURN_ON_AC_21_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_HIGHFAN, sizeof(TURN_ON_AC_22_COOL_HIGHFAN) / sizeof(TURN_ON_AC_22_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 23 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_COOL_HIGHFAN, sizeof(TURN_ON_AC_23_COOL_HIGHFAN ) / sizeof(TURN_ON_AC_23_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_HIGHFAN, sizeof(TURN_ON_AC_24_COOL_HIGHFAN) / sizeof(TURN_ON_AC_24_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_HIGHFAN, sizeof(TURN_ON_AC_25_COOL_HIGHFAN) / sizeof(TURN_ON_AC_25_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_HIGHFAN, sizeof(TURN_ON_AC_26_COOL_HIGHFAN) / sizeof(TURN_ON_AC_26_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 27 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_COOL_HIGHFAN, sizeof(TURN_ON_AC_27_COOL_HIGHFAN) / sizeof(TURN_ON_AC_27_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_HIGHFAN, sizeof(TURN_ON_AC_28_COOL_HIGHFAN) / sizeof(TURN_ON_AC_28_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 29 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_COOL_HIGHFAN, sizeof(TURN_ON_AC_29_COOL_HIGHFAN) / sizeof(TURN_ON_AC_29_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_HIGHFAN, sizeof(TURN_ON_AC_30_COOL_HIGHFAN) / sizeof(TURN_ON_AC_30_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
}

 
// Expected behavior. The mode will stay in COOL mode, the fan speed will change from LOW, MED, to HIGH, and the temperature
// will stay constant. The turbo will not be toggled, and swing mode will not be toggled.
void test_TURN_ON_AC_25_COOL_VARFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_LOWFAN, sizeof(TURN_ON_AC_25_COOL_LOWFAN) / sizeof(TURN_ON_AC_25_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_MEDFAN, sizeof(TURN_ON_AC_25_COOL_MEDFAN) / sizeof(TURN_ON_AC_25_COOL_MEDFAN[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);  
    ESP_LOGI("STATUS", "TURN ON AC 25 COOL HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_HIGHFAN, sizeof(TURN_ON_AC_25_COOL_HIGHFAN) / sizeof(TURN_ON_AC_25_COOL_HIGHFAN[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);     
}

  
// Expected behavior. The mode will stay in DRY mode, there is no fan speed functionality in DRY mode, and the temperature will 
// increase by 1 degree celsius. There no turbo mode in DRY mode, and swing mode will not be toggled.
void test_TURN_ON_AC_XX_DRY()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_DRY, sizeof(TURN_ON_AC_17_DRY) / sizeof(TURN_ON_AC_17_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_DRY, sizeof(TURN_ON_AC_18_DRY) / sizeof(TURN_ON_AC_18_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 19 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_DRY, sizeof(TURN_ON_AC_19_DRY) / sizeof(TURN_ON_AC_19_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_DRY, sizeof(TURN_ON_AC_20_DRY) / sizeof(TURN_ON_AC_20_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 21 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_DRY, sizeof(TURN_ON_AC_21_DRY) / sizeof(TURN_ON_AC_21_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_DRY, sizeof(TURN_ON_AC_22_DRY) / sizeof(TURN_ON_AC_22_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 23 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_DRY, sizeof(TURN_ON_AC_23_DRY) / sizeof(TURN_ON_AC_23_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_DRY, sizeof(TURN_ON_AC_24_DRY) / sizeof(TURN_ON_AC_24_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 25 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_DRY, sizeof(TURN_ON_AC_25_DRY) / sizeof(TURN_ON_AC_25_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_DRY, sizeof(TURN_ON_AC_26_DRY) / sizeof(TURN_ON_AC_26_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 27 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_DRY, sizeof(TURN_ON_AC_27_DRY) / sizeof(TURN_ON_AC_27_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_DRY, sizeof(TURN_ON_AC_28_DRY) / sizeof(TURN_ON_AC_28_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 29 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_DRY, sizeof(TURN_ON_AC_29_DRY) / sizeof(TURN_ON_AC_29_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_DRY, sizeof(TURN_ON_AC_30_DRY) / sizeof(TURN_ON_AC_30_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
}


// Expected behavior. The mode will stay in FAN mode, the fan speed will change from LOW, MED, ot HIGH, there is no temperature
// feature in FAN mode. There is no turbo mode in FAN mode, and swing mode will not be toggled.
void test_TURN_ON_AC_FAN_VARFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC FAN LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_FAN_LOWFAN, sizeof(TURN_ON_AC_FAN_LOWFAN) / sizeof(TURN_ON_AC_FAN_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC FAN MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_FAN_MEDFAN, sizeof(TURN_ON_AC_FAN_MEDFAN) / sizeof(TURN_ON_AC_FAN_MEDFAN[0]), true);
    vTaskDelay(10000 / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC FAN HIGH FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_FAN_HIGHFAN, sizeof(TURN_ON_AC_FAN_HIGHFAN) / sizeof(TURN_ON_AC_FAN_HIGHFAN[0]), true);
    vTaskDelay(10000 / portTICK_PERIOD_MS);
}


// Expected behavior. The mode will stay in AUTO mode, there is no fan speed functionality in AUTO mode, and the temperature 
// will increase by 1 degree celsius. Turbo mode will not be triggered (turbo mode is only available in room temperature is lower
// than the desired temperature), and swing mode will not be toggled.
void test_TURN_ON_AC_XX_AUTO()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_AUTO, sizeof(TURN_ON_AC_17_AUTO) / sizeof(TURN_ON_AC_17_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_AUTO, sizeof(TURN_ON_AC_18_AUTO) / sizeof(TURN_ON_AC_18_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 19 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_AUTO, sizeof(TURN_ON_AC_19_AUTO) / sizeof(TURN_ON_AC_19_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 20 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_AUTO, sizeof(TURN_ON_AC_20_AUTO) / sizeof(TURN_ON_AC_20_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 21 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_AUTO, sizeof(TURN_ON_AC_21_AUTO) / sizeof(TURN_ON_AC_21_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 22 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_AUTO, sizeof(TURN_ON_AC_22_AUTO) / sizeof(TURN_ON_AC_22_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 23 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_AUTO, sizeof(TURN_ON_AC_23_AUTO) / sizeof(TURN_ON_AC_23_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 24 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_AUTO, sizeof(TURN_ON_AC_24_AUTO) / sizeof(TURN_ON_AC_24_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 25 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_AUTO, sizeof(TURN_ON_AC_25_AUTO) / sizeof(TURN_ON_AC_25_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 26 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_AUTO, sizeof(TURN_ON_AC_25_AUTO) / sizeof(TURN_ON_AC_25_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 27 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_AUTO, sizeof(TURN_ON_AC_27_AUTO) / sizeof(TURN_ON_AC_27_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 28 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_AUTO, sizeof(TURN_ON_AC_28_AUTO) / sizeof(TURN_ON_AC_28_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 29 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_AUTO, sizeof(TURN_ON_AC_29_AUTO) / sizeof(TURN_ON_AC_29_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS); 
    ESP_LOGI("STATUS", "TURN ON AC 30 AUTO");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_AUTO, sizeof(TURN_ON_AC_30_AUTO) / sizeof(TURN_ON_AC_30_AUTO[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);    
}


// Expected behavior. The mode will stay in COOL mode, the fan speed will stay at LOW speed, and the temperature will increase 
// by 1 degree celsius. After the temperature is increased by 2 degrees celsius the fan fin will adjust by one angle increment.
// Turbo mode will not be triggered, and swing mode will not be toggled
void test_VARYAIRDIRECTION_XX_COOL_LOWFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_COOL_LOWFAN, sizeof(TURN_ON_AC_17_COOL_LOWFAN) / sizeof(TURN_ON_AC_17_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_LOWFAN, sizeof(TURN_ON_AC_18_COOL_LOWFAN) / sizeof(TURN_ON_AC_18_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 19 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_COOL_LOWFAN, sizeof(TURN_ON_AC_19_COOL_LOWFAN) / sizeof(TURN_ON_AC_19_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_LOWFAN, sizeof(TURN_ON_AC_20_COOL_LOWFAN) / sizeof(TURN_ON_AC_20_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 21 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_COOL_LOWFAN, sizeof(TURN_ON_AC_21_COOL_LOWFAN) / sizeof(TURN_ON_AC_21_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_LOWFAN, sizeof(TURN_ON_AC_22_COOL_LOWFAN) / sizeof(TURN_ON_AC_22_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 23 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_COOL_LOWFAN, sizeof(TURN_ON_AC_23_COOL_LOWFAN) / sizeof(TURN_ON_AC_23_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_LOWFAN, sizeof(TURN_ON_AC_24_COOL_LOWFAN) / sizeof(TURN_ON_AC_24_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 25 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_LOWFAN, sizeof(TURN_ON_AC_25_COOL_LOWFAN) / sizeof(TURN_ON_AC_25_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_LOWFAN, sizeof(TURN_ON_AC_26_COOL_LOWFAN) / sizeof(TURN_ON_AC_26_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 27 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_COOL_LOWFAN, sizeof(TURN_ON_AC_27_COOL_LOWFAN) / sizeof(TURN_ON_AC_27_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_LOWFAN, sizeof(TURN_ON_AC_28_COOL_LOWFAN) / sizeof(TURN_ON_AC_28_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 29 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_COOL_LOWFAN, sizeof(TURN_ON_AC_29_COOL_LOWFAN) / sizeof(TURN_ON_AC_29_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_LOWFAN, sizeof(TURN_ON_AC_30_COOL_LOWFAN) / sizeof(TURN_ON_AC_30_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE AIR DIRECTION BY ON ANGLE INCREMENT");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_AIR_DIRECION, sizeof(AC_TOGGLE_AIR_DIRECION) / sizeof(AC_TOGGLE_AIR_DIRECION[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
}

 
// Expected behavior. The mode will stay in DRY mode. The temperature will increase by 1 degree celsius. After the temperature is 
// increased by 2 increments, the swing mode will be toggled. Turbo mode will not be triggered.
void test_TOGGLESWING_XX_DRY()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_DRY, sizeof(TURN_ON_AC_17_DRY) / sizeof(TURN_ON_AC_17_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_DRY, sizeof(TURN_ON_AC_18_DRY) / sizeof(TURN_ON_AC_18_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 19 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_DRY, sizeof(TURN_ON_AC_19_DRY) / sizeof(TURN_ON_AC_19_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_DRY, sizeof(TURN_ON_AC_20_DRY) / sizeof(TURN_ON_AC_20_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 21 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_DRY, sizeof(TURN_ON_AC_21_DRY) / sizeof(TURN_ON_AC_21_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_DRY, sizeof(TURN_ON_AC_22_DRY) / sizeof(TURN_ON_AC_22_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 23 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_DRY, sizeof(TURN_ON_AC_23_DRY) / sizeof(TURN_ON_AC_23_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_DRY, sizeof(TURN_ON_AC_24_DRY) / sizeof(TURN_ON_AC_24_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 25 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_DRY, sizeof(TURN_ON_AC_25_DRY) / sizeof(TURN_ON_AC_25_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_DRY, sizeof(TURN_ON_AC_26_DRY) / sizeof(TURN_ON_AC_26_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 27 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_DRY, sizeof(TURN_ON_AC_27_DRY) / sizeof(TURN_ON_AC_27_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_DRY, sizeof(TURN_ON_AC_28_DRY) / sizeof(TURN_ON_AC_28_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 29 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_DRY, sizeof(TURN_ON_AC_29_DRY) / sizeof(TURN_ON_AC_29_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 DRY");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_DRY, sizeof(TURN_ON_AC_30_DRY) / sizeof(TURN_ON_AC_30_DRY[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE SWING");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_SWING, sizeof(AC_TOGGLE_SWING) / sizeof(AC_TOGGLE_SWING[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
}

// Expected behavior. The mode will stay in COOL mode. The temperature will increase by 1 degree celsius. After two increments in
// temerature, the FAN SPEED will go to MED, then TURBO mode will be toggled. After a few seconds TURBO mode will be toggled. Then
// it repeats from start instruction.
void test_TOGGLETURBO_XX_COOL_VARFAN()
{
    ESP_LOGI("STATUS", "TURN ON AC 17 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_17_COOL_LOWFAN, sizeof(TURN_ON_AC_17_COOL_LOWFAN) / sizeof(TURN_ON_AC_17_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_LOWFAN, sizeof(TURN_ON_AC_18_COOL_LOWFAN) / sizeof(TURN_ON_AC_18_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 18 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_18_COOL_MEDFAN, sizeof(TURN_ON_AC_18_COOL_MEDFAN) / sizeof(TURN_ON_AC_18_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);

    ESP_LOGI("STATUS", "TURN ON AC 19 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_19_COOL_LOWFAN, sizeof(TURN_ON_AC_19_COOL_LOWFAN) / sizeof(TURN_ON_AC_19_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_LOWFAN, sizeof(TURN_ON_AC_20_COOL_LOWFAN) / sizeof(TURN_ON_AC_20_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 20 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_20_COOL_MEDFAN, sizeof(TURN_ON_AC_20_COOL_MEDFAN) / sizeof(TURN_ON_AC_20_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);


    ESP_LOGI("STATUS", "TURN ON AC 21 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_21_COOL_LOWFAN, sizeof(TURN_ON_AC_21_COOL_LOWFAN) / sizeof(TURN_ON_AC_21_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_LOWFAN, sizeof(TURN_ON_AC_22_COOL_LOWFAN) / sizeof(TURN_ON_AC_22_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 22 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_22_COOL_MEDFAN, sizeof(TURN_ON_AC_22_COOL_MEDFAN) / sizeof(TURN_ON_AC_22_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);


    ESP_LOGI("STATUS", "TURN ON AC 23 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_23_COOL_LOWFAN, sizeof(TURN_ON_AC_23_COOL_LOWFAN) / sizeof(TURN_ON_AC_23_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_LOWFAN, sizeof(TURN_ON_AC_24_COOL_LOWFAN) / sizeof(TURN_ON_AC_24_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 24 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_24_COOL_MEDFAN, sizeof(TURN_ON_AC_24_COOL_MEDFAN) / sizeof(TURN_ON_AC_24_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);


    ESP_LOGI("STATUS", "TURN ON AC 25 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_25_COOL_LOWFAN, sizeof(TURN_ON_AC_25_COOL_LOWFAN) / sizeof(TURN_ON_AC_25_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_LOWFAN, sizeof(TURN_ON_AC_26_COOL_LOWFAN) / sizeof(TURN_ON_AC_26_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 26 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_26_COOL_MEDFAN, sizeof(TURN_ON_AC_26_COOL_MEDFAN) / sizeof(TURN_ON_AC_26_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);


    ESP_LOGI("STATUS", "TURN ON AC 27 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_27_COOL_LOWFAN, sizeof(TURN_ON_AC_27_COOL_LOWFAN) / sizeof(TURN_ON_AC_27_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_LOWFAN, sizeof(TURN_ON_AC_28_COOL_LOWFAN) / sizeof(TURN_ON_AC_28_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 28 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_MEDFAN, sizeof(TURN_ON_AC_28_COOL_MEDFAN) / sizeof(TURN_ON_AC_28_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);


    ESP_LOGI("STATUS", "TURN ON AC 29 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_29_COOL_LOWFAN, sizeof(TURN_ON_AC_29_COOL_LOWFAN) / sizeof(TURN_ON_AC_29_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL LOW FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_LOWFAN, sizeof(TURN_ON_AC_30_COOL_LOWFAN) / sizeof(TURN_ON_AC_30_COOL_LOWFAN[0]), true);
    vTaskDelay(DELAY_INC / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TURN ON AC 30 COOL MED FAN");
    rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_30_COOL_MEDFAN, sizeof(TURN_ON_AC_30_COOL_MEDFAN) / sizeof(TURN_ON_AC_30_COOL_MEDFAN[0]), true);
    vTaskDelay((DELAY_INC*2) / portTICK_PERIOD_MS);
    ESP_LOGI("STATUS", "TOGGLE TURBO");
    rmt_write_items(IR_RMT_CHANNEL, AC_TOGGLE_TURBO, sizeof(AC_TOGGLE_TURBO) / sizeof(AC_TOGGLE_TURBO[0]), true);
    vTaskDelay(DELAY_INC_FANSPEED / portTICK_PERIOD_MS);
}
/*** END OF TEST CODES ***/

void app_main(void *ignore)
{
    ESP_LOGI("IRLED", "Configuring transmitter");
    rmt_tx_init();
    for(int32_t i = 3; i >= 0; i--)
    {
        ESP_LOGI("STATUS","Start sending in %u", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
#define RUN_TEST_CODES
#ifdef RUN_TEST_CODES
    while (true)
    {
        test_TURN_ON_AC_XX_COOL_LOWFAN();
        test_TURN_ON_AC_XX_COOL_MEDFAN();
        test_TURN_ON_AC_XX_COOL_HIGHFAN();
        test_TURN_ON_AC_25_COOL_VARFAN();
        test_TURN_ON_AC_XX_DRY();
        test_TURN_ON_AC_FAN_VARFAN();
        test_TURN_ON_AC_XX_AUTO();
        test_VARYAIRDIRECTION_XX_COOL_LOWFAN();
        test_TOGGLESWING_XX_DRY();
        test_TOGGLETURBO_XX_COOL_VARFAN();
        rmt_write_items(IR_RMT_CHANNEL, TURN_ON_AC_28_COOL_MEDFAN, sizeof(TURN_ON_AC_28_COOL_MEDFAN) / sizeof(TURN_ON_AC_28_COOL_MEDFAN[0]), true);
    }
#endif
}