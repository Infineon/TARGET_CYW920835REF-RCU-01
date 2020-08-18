/*******************************************************************************
* File Name: cycfg_pins.h
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define bluetooth_0_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define ioss_0_pin_0_ENABLED 1U
#define ioss_0_pin_0 WICED_P00
#define ioss_0_pin_10_ENABLED 1U
#define ioss_0_pin_10 WICED_P10
#define ioss_0_pin_11_ENABLED 1U
#define ioss_0_pin_11 WICED_P11
#define ioss_0_pin_12_ENABLED 1U
#define ioss_0_pin_12 WICED_P12
#define ioss_0_pin_13_ENABLED 1U
#define ioss_0_pin_13 WICED_P13
#define ioss_0_pin_14_ENABLED 1U
#define ioss_0_pin_14 WICED_P14
#define ioss_0_pin_1_ENABLED 1U
#define ioss_0_pin_1 WICED_P01
#define LED_RED_ENABLED 1U
#define LED_RED WICED_P28
#define LED_GREEN_ENABLED 1U
#define LED_GREEN WICED_P29
#define ioss_0_pin_2_ENABLED 1U
#define ioss_0_pin_2 WICED_P02
#define PUART_TX_ENABLED 1U
#define PUART_TX WICED_P32
#define PUART_RX_ENABLED 1U
#define PUART_RX WICED_P34
#define ioss_0_pin_8_ENABLED 1U
#define ioss_0_pin_8 WICED_P08
#define ioss_0_pin_9_ENABLED 1U
#define ioss_0_pin_9 WICED_P09
#define keyscan_0_ENABLED 1U
#define uart_1_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
