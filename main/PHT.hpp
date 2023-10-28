#ifndef PHT_HPP
#define PHT_HPP
/*
#include <iostream>
#include "log/esp_log.h"
#include "driver/i2c.h"
#include "freertos/task.h"


int run_I2C(){
    
    uint8_t rx_data[5];

    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = 14,
        .scl_io_num = 13,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = 400000,
    };
    i2c_param_config(I2C_NUM_0, &conf);

    ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0, I2C_MODE_MASTER, 0, 0, 0));

    for (int i = 0; i<10; i++){

        i2c_master_read_from_device(I2C_NUM_0, I2C_SLAVE_ADDR, rx_data, 5, TIMEOUT_MS/portTICK_PERIOD_MS);
        ESP_LOG_BUFFER_HEX(TAG, rx_data, 5);
        vTaskDelay(DELAY_MS/portTICK_PERIOD_MS);

        for (int j = 0; j < 5; j++){
            std::cout<<rx_data[j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 1;
}
*/
#endif
