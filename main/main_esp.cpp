/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <iostream>
#include "new_file.hpp"
//#include "PHT.hpp"
#include "log/esp_log.h"
#include "driver/i2c.h"
#include "freertos/task.h"

static const char *TAG = "i2c-example";

#define I2C_SLAVE_ADDR	0x76
#define TIMEOUT_MS		1000
#define DELAY_MS		1000
#define PHT_SDA         GPIO_NUM_14
#define PHT_SCL         GPIO_NUM_13



extern "C" void app_main() {

    std::cout<<"Starting a program \n";
	uint8_t rx_data[5];

	i2c_config_t conf = {
		.mode = I2C_MODE_MASTER,
		.sda_io_num = 14,
		.scl_io_num = 13,
		.sda_pullup_en = GPIO_PULLUP_ENABLE,
		.scl_pullup_en = GPIO_PULLUP_ENABLE,
	};

	i2c_param_config(I2C_NUM_0, &conf);

	ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0, I2C_MODE_MASTER, 0, 0, 0));

	for(int i = 0; i<10; i++) {
		i2c_master_read_from_device(I2C_NUM_0, I2C_SLAVE_ADDR, rx_data, 5, TIMEOUT_MS/portTICK_RATE_MS);
		ESP_LOG_BUFFER_HEX(TAG, rx_data, 5);
		vTaskDelay(DELAY_MS/portTICK_RATE_MS);
	}

    std::cout<<"End of a program \n";
    return;
}
