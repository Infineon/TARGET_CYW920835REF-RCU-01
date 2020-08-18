/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* 20835B1
* personalities 1.0.0.31
* udd 1.2.0.510
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_pins.h"

#define LED_RED_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_10].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }
#define LED_GREEN_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_11].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }

const wiced_platform_gpio_t platform_gpio_pins[] =
{
	[PLATFORM_GPIO_0] = {WICED_P00, keyscan_0_ksi_0_TRIGGER_IN},
	[PLATFORM_GPIO_1] = {WICED_P01, keyscan_0_ksi_1_TRIGGER_IN},
	[PLATFORM_GPIO_2] = {WICED_P02, keyscan_0_ksi_2_TRIGGER_IN},
	[PLATFORM_GPIO_3] = {WICED_P08, keyscan_0_kso_0_TRIGGER_IN},
	[PLATFORM_GPIO_4] = {WICED_P09, keyscan_0_kso_1_TRIGGER_IN},
	[PLATFORM_GPIO_5] = {WICED_P10, keyscan_0_kso_2_TRIGGER_IN},
	[PLATFORM_GPIO_6] = {WICED_P11, keyscan_0_kso_3_TRIGGER_IN},
	[PLATFORM_GPIO_7] = {WICED_P12, keyscan_0_kso_4_TRIGGER_IN},
	[PLATFORM_GPIO_8] = {WICED_P13, keyscan_0_kso_5_TRIGGER_IN},
	[PLATFORM_GPIO_9] = {WICED_P14, keyscan_0_kso_6_TRIGGER_IN},
	[PLATFORM_GPIO_10] = {WICED_P28, WICED_GPIO},
	[PLATFORM_GPIO_11] = {WICED_P29, WICED_GPIO},
	[PLATFORM_GPIO_12] = {WICED_P32, uart_1_txd_0_TRIGGER_IN},
	[PLATFORM_GPIO_13] = {WICED_P34, uart_1_rxd_0_TRIGGER_IN},
};
const size_t platform_gpio_pin_count = (sizeof(platform_gpio_pins) / sizeof(wiced_platform_gpio_t));
const wiced_platform_led_config_t platform_led[] =
{
	[WICED_PLATFORM_LED_1] = LED_RED_config,
	[WICED_PLATFORM_LED_2] = LED_GREEN_config,
};
const size_t led_count = (sizeof(platform_led) / sizeof(wiced_platform_led_config_t));
const wiced_platform_button_config_t platform_button[] =
{
};
const size_t button_count = (sizeof(platform_button) / sizeof(wiced_platform_button_config_t));
const wiced_platform_gpio_config_t platform_gpio[] =
{
};
const size_t gpio_count = (sizeof(platform_gpio) / sizeof(wiced_platform_gpio_config_t));


void init_cycfg_pins(void)
{
	wiced_hal_gpio_configure_pin(platform_gpio_pins[PLATFORM_GPIO_0].gpio_pin, GPIO_PULL_UP | GPIO_INPUT_ENABLE, GPIO_PIN_OUTPUT_LOW);
	wiced_hal_gpio_configure_pin(platform_gpio_pins[PLATFORM_GPIO_1].gpio_pin, GPIO_PULL_UP | GPIO_INPUT_ENABLE, GPIO_PIN_OUTPUT_LOW);
	wiced_hal_gpio_configure_pin(platform_gpio_pins[PLATFORM_GPIO_2].gpio_pin, GPIO_PULL_UP | GPIO_INPUT_ENABLE, GPIO_PIN_OUTPUT_LOW);
}
