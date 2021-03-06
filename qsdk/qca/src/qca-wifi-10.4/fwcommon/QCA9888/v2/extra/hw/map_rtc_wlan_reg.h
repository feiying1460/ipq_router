/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _RTC_WLAN_REG_H_
#define _RTC_WLAN_REG_H_ 		

#include "wifi_top_reg_map.h"

//#define WIFI_RTC_BASE_ADDRESS 0
//#define WIFI_TIMERS_BASE_ADDRESS 0
//#define WIFI_PTA_COEX_BASE_ADDRESS 0 

// 32'h0000 (WLAN_RESET_CONTROL)
#define WLAN_RESET_CONTROL_MCI_RESET_MSB 		 WIFI_RESET_CONTROL_MCI_RESET_MSB
#define WLAN_RESET_CONTROL_MCI_RESET_LSB 		 WIFI_RESET_CONTROL_MCI_RESET_LSB
#define WLAN_RESET_CONTROL_MCI_RESET_MASK 		 WIFI_RESET_CONTROL_MCI_RESET_MASK
#define WLAN_RESET_CONTROL_MCI_RESET_GET(x) 		 WIFI_RESET_CONTROL_MCI_RESET_GET(x)
#define WLAN_RESET_CONTROL_MCI_RESET_SET(x) 		 WIFI_RESET_CONTROL_MCI_RESET_SET(x)
#define WLAN_RESET_CONTROL_MCI_RESET_RESET 		 WIFI_RESET_CONTROL_MCI_RESET_RESET
#define WLAN_RESET_CONTROL_RADIO_SRESET_MSB 		 WIFI_RESET_CONTROL_RADIO_SRESET_MSB
#define WLAN_RESET_CONTROL_RADIO_SRESET_LSB 		 WIFI_RESET_CONTROL_RADIO_SRESET_LSB
#define WLAN_RESET_CONTROL_RADIO_SRESET_MASK 		 WIFI_RESET_CONTROL_RADIO_SRESET_MASK
#define WLAN_RESET_CONTROL_RADIO_SRESET_GET(x) 		 WIFI_RESET_CONTROL_RADIO_SRESET_GET(x)
#define WLAN_RESET_CONTROL_RADIO_SRESET_SET(x) 		 WIFI_RESET_CONTROL_RADIO_SRESET_SET(x)
#define WLAN_RESET_CONTROL_RADIO_SRESET_RESET 		 WIFI_RESET_CONTROL_RADIO_SRESET_RESET
#define WLAN_RESET_CONTROL_BB_COLD_RST_MSB 		 WIFI_RESET_CONTROL_BB_COLD_RST_MSB
#define WLAN_RESET_CONTROL_BB_COLD_RST_LSB 		 WIFI_RESET_CONTROL_BB_COLD_RST_LSB
#define WLAN_RESET_CONTROL_BB_COLD_RST_MASK 		 WIFI_RESET_CONTROL_BB_COLD_RST_MASK
#define WLAN_RESET_CONTROL_BB_COLD_RST_GET(x) 		 WIFI_RESET_CONTROL_BB_COLD_RST_GET(x)
#define WLAN_RESET_CONTROL_BB_COLD_RST_SET(x) 		 WIFI_RESET_CONTROL_BB_COLD_RST_SET(x)
#define WLAN_RESET_CONTROL_BB_COLD_RST_RESET 		 WIFI_RESET_CONTROL_BB_COLD_RST_RESET
#define WLAN_RESET_CONTROL_BB_WARM_RST_MSB 		 WIFI_RESET_CONTROL_BB_WARM_RST_MSB
#define WLAN_RESET_CONTROL_BB_WARM_RST_LSB 		 WIFI_RESET_CONTROL_BB_WARM_RST_LSB
#define WLAN_RESET_CONTROL_BB_WARM_RST_MASK 		 WIFI_RESET_CONTROL_BB_WARM_RST_MASK
#define WLAN_RESET_CONTROL_BB_WARM_RST_GET(x) 		 WIFI_RESET_CONTROL_BB_WARM_RST_GET(x)
#define WLAN_RESET_CONTROL_BB_WARM_RST_SET(x) 		 WIFI_RESET_CONTROL_BB_WARM_RST_SET(x)
#define WLAN_RESET_CONTROL_BB_WARM_RST_RESET 		 WIFI_RESET_CONTROL_BB_WARM_RST_RESET
#define WLAN_RESET_CONTROL_MAC_COLD_RST_MSB 		 WIFI_RESET_CONTROL_MAC_COLD_RST_MSB
#define WLAN_RESET_CONTROL_MAC_COLD_RST_LSB 		 WIFI_RESET_CONTROL_MAC_COLD_RST_LSB
#define WLAN_RESET_CONTROL_MAC_COLD_RST_MASK 		 WIFI_RESET_CONTROL_MAC_COLD_RST_MASK
#define WLAN_RESET_CONTROL_MAC_COLD_RST_GET(x) 		 WIFI_RESET_CONTROL_MAC_COLD_RST_GET(x)
#define WLAN_RESET_CONTROL_MAC_COLD_RST_SET(x) 		 WIFI_RESET_CONTROL_MAC_COLD_RST_SET(x)
#define WLAN_RESET_CONTROL_MAC_COLD_RST_RESET 		 WIFI_RESET_CONTROL_MAC_COLD_RST_RESET
#define WLAN_RESET_CONTROL_MAC_WARM_RST_MSB 		 WIFI_RESET_CONTROL_MAC_WARM_RST_MSB
#define WLAN_RESET_CONTROL_MAC_WARM_RST_LSB 		 WIFI_RESET_CONTROL_MAC_WARM_RST_LSB
#define WLAN_RESET_CONTROL_MAC_WARM_RST_MASK 		 WIFI_RESET_CONTROL_MAC_WARM_RST_MASK
#define WLAN_RESET_CONTROL_MAC_WARM_RST_GET(x) 		 WIFI_RESET_CONTROL_MAC_WARM_RST_GET(x)
#define WLAN_RESET_CONTROL_MAC_WARM_RST_SET(x) 		 WIFI_RESET_CONTROL_MAC_WARM_RST_SET(x)
#define WLAN_RESET_CONTROL_MAC_WARM_RST_RESET 		 WIFI_RESET_CONTROL_MAC_WARM_RST_RESET
#define WLAN_RESET_CONTROL_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_RESET_CONTROL_ADDRESS)
#define WLAN_RESET_CONTROL_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_RESET_CONTROL_OFFSET)
// SW modifiable bits
#define WLAN_RESET_CONTROL_SW_MASK 		 WIFI_RESET_CONTROL_SW_MASK
// bits defined at reset
#define WLAN_RESET_CONTROL_RSTMASK 		 WIFI_RESET_CONTROL_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_RESET_CONTROL_RESET 		 WIFI_RESET_CONTROL_RESET

// 32'h0004 (WLAN_XTAL_CONTROL)
#define WLAN_XTAL_CONTROL_TCXO_MSB 		 WIFI_XTAL_CONTROL_TCXO_MSB
#define WLAN_XTAL_CONTROL_TCXO_LSB 		 WIFI_XTAL_CONTROL_TCXO_LSB
#define WLAN_XTAL_CONTROL_TCXO_MASK 		 WIFI_XTAL_CONTROL_TCXO_MASK
#define WLAN_XTAL_CONTROL_TCXO_GET(x) 		 WIFI_XTAL_CONTROL_TCXO_GET(x)
#define WLAN_XTAL_CONTROL_TCXO_SET(x) 		 WIFI_XTAL_CONTROL_TCXO_SET(x)
#define WLAN_XTAL_CONTROL_TCXO_RESET 		 WIFI_XTAL_CONTROL_TCXO_RESET
#define WLAN_XTAL_CONTROL_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_XTAL_CONTROL_ADDRESS)
#define WLAN_XTAL_CONTROL_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_XTAL_CONTROL_OFFSET)
// SW modifiable bits
#define WLAN_XTAL_CONTROL_SW_MASK 		 WIFI_XTAL_CONTROL_SW_MASK
// bits defined at reset
#define WLAN_XTAL_CONTROL_RSTMASK 		 WIFI_XTAL_CONTROL_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_XTAL_CONTROL_RESET 		 WIFI_XTAL_CONTROL_RESET

// 32'h0010 (WLAN_QUADRATURE)
#define WLAN_QUADRATURE_ADC_MSB 		 WIFI_QUADRATURE_ADC_MSB
#define WLAN_QUADRATURE_ADC_LSB 		 WIFI_QUADRATURE_ADC_LSB
#define WLAN_QUADRATURE_ADC_MASK 		 WIFI_QUADRATURE_ADC_MASK
#define WLAN_QUADRATURE_ADC_GET(x) 		 WIFI_QUADRATURE_ADC_GET(x)
#define WLAN_QUADRATURE_ADC_SET(x) 		 WIFI_QUADRATURE_ADC_SET(x)
#define WLAN_QUADRATURE_ADC_RESET 		 WIFI_QUADRATURE_ADC_RESET
#define WLAN_QUADRATURE_DAC_MSB 		 WIFI_QUADRATURE_DAC_MSB
#define WLAN_QUADRATURE_DAC_LSB 		 WIFI_QUADRATURE_DAC_LSB
#define WLAN_QUADRATURE_DAC_MASK 		 WIFI_QUADRATURE_DAC_MASK
#define WLAN_QUADRATURE_DAC_GET(x) 		 WIFI_QUADRATURE_DAC_GET(x)
#define WLAN_QUADRATURE_DAC_SET(x) 		 WIFI_QUADRATURE_DAC_SET(x)
#define WLAN_QUADRATURE_DAC_RESET 		 WIFI_QUADRATURE_DAC_RESET
#define WLAN_QUADRATURE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_QUADRATURE_ADDRESS)
#define WLAN_QUADRATURE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_QUADRATURE_OFFSET)
// SW modifiable bits
#define WLAN_QUADRATURE_SW_MASK 		 WIFI_QUADRATURE_SW_MASK
// bits defined at reset
#define WLAN_QUADRATURE_RSTMASK 		 WIFI_QUADRATURE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_QUADRATURE_RESET 		 WIFI_QUADRATURE_RESET

// 32'h0014 (WLAN_PLL_CONTROL)
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_MSB 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_MSB
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_LSB 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_LSB
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_MASK 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_MASK
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_GET(x) 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_GET(x)
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_SET(x) 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_SET(x)
#define WLAN_PLL_CONTROL_DIG_TEST_CLK_RESET 		 WIFI_PLL_CONTROL_DIG_TEST_CLK_RESET
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_MSB 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_MSB
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_LSB 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_LSB
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_MASK 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_MASK
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_GET(x) 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_GET(x)
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_SET(x) 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_SET(x)
#define WLAN_PLL_CONTROL_MAC_OVERRIDE_RESET 		 WIFI_PLL_CONTROL_MAC_OVERRIDE_RESET
#define WLAN_PLL_CONTROL_NOPWD_MSB 		 WIFI_PLL_CONTROL_NOPWD_MSB
#define WLAN_PLL_CONTROL_NOPWD_LSB 		 WIFI_PLL_CONTROL_NOPWD_LSB
#define WLAN_PLL_CONTROL_NOPWD_MASK 		 WIFI_PLL_CONTROL_NOPWD_MASK
#define WLAN_PLL_CONTROL_NOPWD_GET(x) 		 WIFI_PLL_CONTROL_NOPWD_GET(x)
#define WLAN_PLL_CONTROL_NOPWD_SET(x) 		 WIFI_PLL_CONTROL_NOPWD_SET(x)
#define WLAN_PLL_CONTROL_NOPWD_RESET 		 WIFI_PLL_CONTROL_NOPWD_RESET
#define WLAN_PLL_CONTROL_UPDATING_MSB 		 WIFI_PLL_CONTROL_UPDATING_MSB
#define WLAN_PLL_CONTROL_UPDATING_LSB 		 WIFI_PLL_CONTROL_UPDATING_LSB
#define WLAN_PLL_CONTROL_UPDATING_MASK 		 WIFI_PLL_CONTROL_UPDATING_MASK
#define WLAN_PLL_CONTROL_UPDATING_GET(x) 		 WIFI_PLL_CONTROL_UPDATING_GET(x)
#define WLAN_PLL_CONTROL_UPDATING_SET(x) 		 WIFI_PLL_CONTROL_UPDATING_SET(x)
#define WLAN_PLL_CONTROL_UPDATING_RESET 		 WIFI_PLL_CONTROL_UPDATING_RESET
#define WLAN_PLL_CONTROL_BYPASS_MSB 		 WIFI_PLL_CONTROL_BYPASS_MSB
#define WLAN_PLL_CONTROL_BYPASS_LSB 		 WIFI_PLL_CONTROL_BYPASS_LSB
#define WLAN_PLL_CONTROL_BYPASS_MASK 		 WIFI_PLL_CONTROL_BYPASS_MASK
#define WLAN_PLL_CONTROL_BYPASS_GET(x) 		 WIFI_PLL_CONTROL_BYPASS_GET(x)
#define WLAN_PLL_CONTROL_BYPASS_SET(x) 		 WIFI_PLL_CONTROL_BYPASS_SET(x)
#define WLAN_PLL_CONTROL_BYPASS_RESET 		 WIFI_PLL_CONTROL_BYPASS_RESET
#define WLAN_PLL_CONTROL_CLK_SEL_MSB 		 WIFI_PLL_CONTROL_CLK_SEL_MSB
#define WLAN_PLL_CONTROL_CLK_SEL_LSB 		 WIFI_PLL_CONTROL_CLK_SEL_LSB
#define WLAN_PLL_CONTROL_CLK_SEL_MASK 		 WIFI_PLL_CONTROL_CLK_SEL_MASK
#define WLAN_PLL_CONTROL_CLK_SEL_GET(x) 		 WIFI_PLL_CONTROL_CLK_SEL_GET(x)
#define WLAN_PLL_CONTROL_CLK_SEL_SET(x) 		 WIFI_PLL_CONTROL_CLK_SEL_SET(x)
#define WLAN_PLL_CONTROL_CLK_SEL_RESET 		 WIFI_PLL_CONTROL_CLK_SEL_RESET
#define WLAN_PLL_CONTROL_REFDIV_MSB 		 WIFI_PLL_CONTROL_REFDIV_MSB
#define WLAN_PLL_CONTROL_REFDIV_LSB 		 WIFI_PLL_CONTROL_REFDIV_LSB
#define WLAN_PLL_CONTROL_REFDIV_MASK 		 WIFI_PLL_CONTROL_REFDIV_MASK
#define WLAN_PLL_CONTROL_REFDIV_GET(x) 		 WIFI_PLL_CONTROL_REFDIV_GET(x)
#define WLAN_PLL_CONTROL_REFDIV_SET(x) 		 WIFI_PLL_CONTROL_REFDIV_SET(x)
#define WLAN_PLL_CONTROL_REFDIV_RESET 		 WIFI_PLL_CONTROL_REFDIV_RESET
#define WLAN_PLL_CONTROL_DIV_MSB 		 WIFI_PLL_CONTROL_DIV_MSB
#define WLAN_PLL_CONTROL_DIV_LSB 		 WIFI_PLL_CONTROL_DIV_LSB
#define WLAN_PLL_CONTROL_DIV_MASK 		 WIFI_PLL_CONTROL_DIV_MASK
#define WLAN_PLL_CONTROL_DIV_GET(x) 		 WIFI_PLL_CONTROL_DIV_GET(x)
#define WLAN_PLL_CONTROL_DIV_SET(x) 		 WIFI_PLL_CONTROL_DIV_SET(x)
#define WLAN_PLL_CONTROL_DIV_RESET 		 WIFI_PLL_CONTROL_DIV_RESET
#define WLAN_PLL_CONTROL_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_PLL_CONTROL_ADDRESS)
#define WLAN_PLL_CONTROL_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_PLL_CONTROL_OFFSET)
// SW modifiable bits
#define WLAN_PLL_CONTROL_SW_MASK 		 WIFI_PLL_CONTROL_SW_MASK
// bits defined at reset
#define WLAN_PLL_CONTROL_RSTMASK 		 WIFI_PLL_CONTROL_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_PLL_CONTROL_RESET 		 WIFI_PLL_CONTROL_RESET

// 32'h0018 (WLAN_PLL_SETTLE)
#define WLAN_PLL_SETTLE_TIME_MSB 		 WIFI_PLL_SETTLE_TIME_MSB
#define WLAN_PLL_SETTLE_TIME_LSB 		 WIFI_PLL_SETTLE_TIME_LSB
#define WLAN_PLL_SETTLE_TIME_MASK 		 WIFI_PLL_SETTLE_TIME_MASK
#define WLAN_PLL_SETTLE_TIME_GET(x) 		 WIFI_PLL_SETTLE_TIME_GET(x)
#define WLAN_PLL_SETTLE_TIME_SET(x) 		 WIFI_PLL_SETTLE_TIME_SET(x)
#define WLAN_PLL_SETTLE_TIME_RESET 		 WIFI_PLL_SETTLE_TIME_RESET
#define WLAN_PLL_SETTLE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_PLL_SETTLE_ADDRESS)
#define WLAN_PLL_SETTLE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_PLL_SETTLE_OFFSET)
// SW modifiable bits
#define WLAN_PLL_SETTLE_SW_MASK 		 WIFI_PLL_SETTLE_SW_MASK
// bits defined at reset
#define WLAN_PLL_SETTLE_RSTMASK 		 WIFI_PLL_SETTLE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_PLL_SETTLE_RESET 		 WIFI_PLL_SETTLE_RESET

// 32'h001c (WLAN_XTAL_SETTLE)
#define WLAN_XTAL_SETTLE_TIME_MSB 		 WIFI_XTAL_SETTLE_TIME_MSB
#define WLAN_XTAL_SETTLE_TIME_LSB 		 WIFI_XTAL_SETTLE_TIME_LSB
#define WLAN_XTAL_SETTLE_TIME_MASK 		 WIFI_XTAL_SETTLE_TIME_MASK
#define WLAN_XTAL_SETTLE_TIME_GET(x) 		 WIFI_XTAL_SETTLE_TIME_GET(x)
#define WLAN_XTAL_SETTLE_TIME_SET(x) 		 WIFI_XTAL_SETTLE_TIME_SET(x)
#define WLAN_XTAL_SETTLE_TIME_RESET 		 WIFI_XTAL_SETTLE_TIME_RESET
#define WLAN_XTAL_SETTLE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_XTAL_SETTLE_ADDRESS)
#define WLAN_XTAL_SETTLE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_XTAL_SETTLE_OFFSET)
// SW modifiable bits
#define WLAN_XTAL_SETTLE_SW_MASK 		 WIFI_XTAL_SETTLE_SW_MASK
// bits defined at reset
#define WLAN_XTAL_SETTLE_RSTMASK 		 WIFI_XTAL_SETTLE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_XTAL_SETTLE_RESET 		 WIFI_XTAL_SETTLE_RESET

// 32'h0020 (WLAN_CLOCK_OUT)
#define WLAN_CLOCK_OUT_DELAY_MSB 		 WIFI_CLOCK_OUT_DELAY_MSB
#define WLAN_CLOCK_OUT_DELAY_LSB 		 WIFI_CLOCK_OUT_DELAY_LSB
#define WLAN_CLOCK_OUT_DELAY_MASK 		 WIFI_CLOCK_OUT_DELAY_MASK
#define WLAN_CLOCK_OUT_DELAY_GET(x) 		 WIFI_CLOCK_OUT_DELAY_GET(x)
#define WLAN_CLOCK_OUT_DELAY_SET(x) 		 WIFI_CLOCK_OUT_DELAY_SET(x)
#define WLAN_CLOCK_OUT_DELAY_RESET 		 WIFI_CLOCK_OUT_DELAY_RESET
#define WLAN_CLOCK_OUT_SELECT_MSB 		 WIFI_CLOCK_OUT_SELECT_MSB
#define WLAN_CLOCK_OUT_SELECT_LSB 		 WIFI_CLOCK_OUT_SELECT_LSB
#define WLAN_CLOCK_OUT_SELECT_MASK 		 WIFI_CLOCK_OUT_SELECT_MASK
#define WLAN_CLOCK_OUT_SELECT_GET(x) 		 WIFI_CLOCK_OUT_SELECT_GET(x)
#define WLAN_CLOCK_OUT_SELECT_SET(x) 		 WIFI_CLOCK_OUT_SELECT_SET(x)
#define WLAN_CLOCK_OUT_SELECT_RESET 		 WIFI_CLOCK_OUT_SELECT_RESET
#define WLAN_CLOCK_OUT_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_CLOCK_OUT_ADDRESS)
#define WLAN_CLOCK_OUT_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_CLOCK_OUT_OFFSET)
// SW modifiable bits
#define WLAN_CLOCK_OUT_SW_MASK 		 WIFI_CLOCK_OUT_SW_MASK
// bits defined at reset
#define WLAN_CLOCK_OUT_RSTMASK 		 WIFI_CLOCK_OUT_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_CLOCK_OUT_RESET 		 WIFI_CLOCK_OUT_RESET

// 32'h0024 (WLAN_BIAS_OVERRIDE)
#define WLAN_BIAS_OVERRIDE_ON_MSB 		 WIFI_BIAS_OVERRIDE_ON_MSB
#define WLAN_BIAS_OVERRIDE_ON_LSB 		 WIFI_BIAS_OVERRIDE_ON_LSB
#define WLAN_BIAS_OVERRIDE_ON_MASK 		 WIFI_BIAS_OVERRIDE_ON_MASK
#define WLAN_BIAS_OVERRIDE_ON_GET(x) 		 WIFI_BIAS_OVERRIDE_ON_GET(x)
#define WLAN_BIAS_OVERRIDE_ON_SET(x) 		 WIFI_BIAS_OVERRIDE_ON_SET(x)
#define WLAN_BIAS_OVERRIDE_ON_RESET 		 WIFI_BIAS_OVERRIDE_ON_RESET
#define WLAN_BIAS_OVERRIDE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_BIAS_OVERRIDE_ADDRESS)
#define WLAN_BIAS_OVERRIDE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_BIAS_OVERRIDE_OFFSET)
// SW modifiable bits
#define WLAN_BIAS_OVERRIDE_SW_MASK 		 WIFI_BIAS_OVERRIDE_SW_MASK
// bits defined at reset
#define WLAN_BIAS_OVERRIDE_RSTMASK 		 WIFI_BIAS_OVERRIDE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_BIAS_OVERRIDE_RESET 		 WIFI_BIAS_OVERRIDE_RESET

// 32'h0028 (WLAN_RESET_CAUSE)
#define WLAN_RESET_CAUSE_LAST_MSB 		 WIFI_RESET_CAUSE_LAST_MSB
#define WLAN_RESET_CAUSE_LAST_LSB 		 WIFI_RESET_CAUSE_LAST_LSB
#define WLAN_RESET_CAUSE_LAST_MASK 		 WIFI_RESET_CAUSE_LAST_MASK
#define WLAN_RESET_CAUSE_LAST_GET(x) 		 WIFI_RESET_CAUSE_LAST_GET(x)
#define WLAN_RESET_CAUSE_LAST_SET(x) 		 WIFI_RESET_CAUSE_LAST_SET(x)
#define WLAN_RESET_CAUSE_LAST_RESET 		 WIFI_RESET_CAUSE_LAST_RESET
#define WLAN_RESET_CAUSE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_RESET_CAUSE_ADDRESS)
#define WLAN_RESET_CAUSE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_RESET_CAUSE_OFFSET)
// SW modifiable bits
#define WLAN_RESET_CAUSE_SW_MASK 		 WIFI_RESET_CAUSE_SW_MASK
// bits defined at reset
#define WLAN_RESET_CAUSE_RSTMASK 		 WIFI_RESET_CAUSE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_RESET_CAUSE_RESET 		 WIFI_RESET_CAUSE_RESET

// 32'h002c (WLAN_SYSTEM_SLEEP)
#define WLAN_SYSTEM_SLEEP_MAC_IF_MSB 		 WIFI_SYSTEM_SLEEP_MAC_IF_MSB
#define WLAN_SYSTEM_SLEEP_MAC_IF_LSB 		 WIFI_SYSTEM_SLEEP_MAC_IF_LSB
#define WLAN_SYSTEM_SLEEP_MAC_IF_MASK 		 WIFI_SYSTEM_SLEEP_MAC_IF_MASK
#define WLAN_SYSTEM_SLEEP_MAC_IF_GET(x) 		 WIFI_SYSTEM_SLEEP_MAC_IF_GET(x)
#define WLAN_SYSTEM_SLEEP_MAC_IF_SET(x) 		 WIFI_SYSTEM_SLEEP_MAC_IF_SET(x)
#define WLAN_SYSTEM_SLEEP_MAC_IF_RESET 		 WIFI_SYSTEM_SLEEP_MAC_IF_RESET
#define WLAN_SYSTEM_SLEEP_LIGHT_MSB 		 WIFI_SYSTEM_SLEEP_LIGHT_MSB
#define WLAN_SYSTEM_SLEEP_LIGHT_LSB 		 WIFI_SYSTEM_SLEEP_LIGHT_LSB
#define WLAN_SYSTEM_SLEEP_LIGHT_MASK 		 WIFI_SYSTEM_SLEEP_LIGHT_MASK
#define WLAN_SYSTEM_SLEEP_LIGHT_GET(x) 		 WIFI_SYSTEM_SLEEP_LIGHT_GET(x)
#define WLAN_SYSTEM_SLEEP_LIGHT_SET(x) 		 WIFI_SYSTEM_SLEEP_LIGHT_SET(x)
#define WLAN_SYSTEM_SLEEP_LIGHT_RESET 		 WIFI_SYSTEM_SLEEP_LIGHT_RESET
#define WLAN_SYSTEM_SLEEP_DISABLE_MSB 		 WIFI_SYSTEM_SLEEP_DISABLE_MSB
#define WLAN_SYSTEM_SLEEP_DISABLE_LSB 		 WIFI_SYSTEM_SLEEP_DISABLE_LSB
#define WLAN_SYSTEM_SLEEP_DISABLE_MASK 		 WIFI_SYSTEM_SLEEP_DISABLE_MASK
#define WLAN_SYSTEM_SLEEP_DISABLE_GET(x) 		 WIFI_SYSTEM_SLEEP_DISABLE_GET(x)
#define WLAN_SYSTEM_SLEEP_DISABLE_SET(x) 		 WIFI_SYSTEM_SLEEP_DISABLE_SET(x)
#define WLAN_SYSTEM_SLEEP_DISABLE_RESET 		 WIFI_SYSTEM_SLEEP_DISABLE_RESET
#define WLAN_SYSTEM_SLEEP_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_SYSTEM_SLEEP_ADDRESS)
#define WLAN_SYSTEM_SLEEP_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_SYSTEM_SLEEP_OFFSET)
// SW modifiable bits
#define WLAN_SYSTEM_SLEEP_SW_MASK 		 WIFI_SYSTEM_SLEEP_SW_MASK
// bits defined at reset
#define WLAN_SYSTEM_SLEEP_RSTMASK 		 WIFI_SYSTEM_SLEEP_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_SYSTEM_SLEEP_RESET 		 WIFI_SYSTEM_SLEEP_RESET

// 32'h0030 (WLAN_MAC_SLEEP_CONTROL)
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_MSB 	 WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_MSB
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_LSB 	 WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_LSB
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_MASK 	 WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_MASK
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_GET(x) WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_GET(x)
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_SET(x) WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_SET(x)
#define WLAN_MAC_SLEEP_CONTROL_FORCE_WAKE_RESET  WIFI_MAC_SLEEP_CONTROL_FORCE_WAKE_RESET
#define WLAN_MAC_SLEEP_CONTROL_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_MAC_SLEEP_CONTROL_ADDRESS)
#define WLAN_MAC_SLEEP_CONTROL_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_MAC_SLEEP_CONTROL_OFFSET)
#define WLAN_MAC_SLEEP_CONTROL_RSTMASK 		 WIFI_MAC_SLEEP_CONTROL_RSTMASK
#define WLAN_MAC_SLEEP_CONTROL_RESET 		 WIFI_MAC_SLEEP_CONTROL_RESET

// 32'h0034 (WLAN_KEEP_AWAKE)
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_MSB 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_MSB
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_LSB 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_LSB
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_MASK 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_MASK
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_GET(x) 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_GET(x)
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_SET(x) 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_SET(x)
#define WLAN_KEEP_AWAKE_MAC_CLK_REQ_COUNT_RESET 		 WIFI_KEEP_AWAKE_MAC_CLK_REQ_COUNT_RESET
#define WLAN_KEEP_AWAKE_COUNT_MSB 		 WIFI_KEEP_AWAKE_COUNT_MSB
#define WLAN_KEEP_AWAKE_COUNT_LSB 		 WIFI_KEEP_AWAKE_COUNT_LSB
#define WLAN_KEEP_AWAKE_COUNT_MASK 		 WIFI_KEEP_AWAKE_COUNT_MASK
#define WLAN_KEEP_AWAKE_COUNT_GET(x) 		 WIFI_KEEP_AWAKE_COUNT_GET(x)
#define WLAN_KEEP_AWAKE_COUNT_SET(x) 		 WIFI_KEEP_AWAKE_COUNT_SET(x)
#define WLAN_KEEP_AWAKE_COUNT_RESET 		 WIFI_KEEP_AWAKE_COUNT_RESET
#define WLAN_KEEP_AWAKE_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_KEEP_AWAKE_ADDRESS)
#define WLAN_KEEP_AWAKE_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_KEEP_AWAKE_OFFSET)
// SW modifiable bits
#define WLAN_KEEP_AWAKE_SW_MASK 		 WIFI_KEEP_AWAKE_SW_MASK
// bits defined at reset
#define WLAN_KEEP_AWAKE_RSTMASK 		 WIFI_KEEP_AWAKE_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_KEEP_AWAKE_RESET 		 WIFI_KEEP_AWAKE_RESET

// 32'h0038 (WLAN_DERIVED_RTC_CLK)
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_MSB 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_MSB
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_LSB 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_LSB
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_MASK 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_MASK
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_GET(x) 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_GET(x)
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_SET(x) 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_SET(x)
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_RESET 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_EN_RESET
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_MSB 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_MSB
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_LSB 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_LSB
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_MASK 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_MASK
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_GET(x) 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_GET(x)
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_SET(x) 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_SET(x)
#define WLAN_DERIVED_RTC_CLK_EXTERNAL_DETECT_RESET 		 WIFI_DERIVED_RTC_CLK_EXTERNAL_DETECT_RESET
#define WLAN_DERIVED_RTC_CLK_PERIOD_MSB 		 WIFI_DERIVED_RTC_CLK_PERIOD_MSB
#define WLAN_DERIVED_RTC_CLK_PERIOD_LSB 		 WIFI_DERIVED_RTC_CLK_PERIOD_LSB
#define WLAN_DERIVED_RTC_CLK_PERIOD_MASK 		 WIFI_DERIVED_RTC_CLK_PERIOD_MASK
#define WLAN_DERIVED_RTC_CLK_PERIOD_GET(x) 		 WIFI_DERIVED_RTC_CLK_PERIOD_GET(x)
#define WLAN_DERIVED_RTC_CLK_PERIOD_SET(x) 		 WIFI_DERIVED_RTC_CLK_PERIOD_SET(x)
#define WLAN_DERIVED_RTC_CLK_PERIOD_RESET 		 WIFI_DERIVED_RTC_CLK_PERIOD_RESET
#define WLAN_DERIVED_RTC_CLK_ADDRESS 		 (WIFI_RTC_BASE_ADDRESS+WIFI_DERIVED_RTC_CLK_ADDRESS)
#define WLAN_DERIVED_RTC_CLK_OFFSET 		 (WIFI_RTC_BASE_ADDRESS+WIFI_DERIVED_RTC_CLK_OFFSET)
// SW modifiable bits
#define WLAN_DERIVED_RTC_CLK_SW_MASK 		 WIFI_DERIVED_RTC_CLK_SW_MASK
// bits defined at reset
#define WLAN_DERIVED_RTC_CLK_RSTMASK 		 WIFI_DERIVED_RTC_CLK_RSTMASK
// reset value (ignore bits undefined at reset)
#define WLAN_DERIVED_RTC_CLK_RESET 		 WIFI_DERIVED_RTC_CLK_RESET

// 32'h005c (MAC_PCU_WBTIMER_0)
#define MAC_PCU_WBTIMER_0_ENABLE_MSB 		 WIFI_TIMERS_WBTIMER_0_ENABLE_MSB
#define MAC_PCU_WBTIMER_0_ENABLE_LSB 		 WIFI_TIMERS_WBTIMER_0_ENABLE_LSB
#define MAC_PCU_WBTIMER_0_ENABLE_MASK 		 WIFI_TIMERS_WBTIMER_0_ENABLE_MASK
#define MAC_PCU_WBTIMER_0_ENABLE_GET(x) 		 WIFI_TIMERS_WBTIMER_0_ENABLE_GET(x)
#define MAC_PCU_WBTIMER_0_ENABLE_SET(x) 		 WIFI_TIMERS_WBTIMER_0_ENABLE_SET(x)
#define MAC_PCU_WBTIMER_0_ENABLE_RESET 		 WIFI_TIMERS_WBTIMER_0_ENABLE_RESET
#define MAC_PCU_WBTIMER_0_ADDRESS 		 (WIFI_TIMERS_BASE_ADDRESS+WIFI_TIMERS_WBTIMER_0_ADDRESS)
#define MAC_PCU_WBTIMER_0_OFFSET 		 (WIFI_TIMERS_BASE_ADDRESS+WIFI_TIMERS_WBTIMER_0_OFFSET)
// SW modifiable bits
#define MAC_PCU_WBTIMER_0_SW_MASK 		 WIFI_TIMERS_WBTIMER_0_SW_MASK
// bits defined at reset
#define MAC_PCU_WBTIMER_0_RSTMASK 		 WIFI_TIMERS_WBTIMER_0_RSTMASK
// reset value (ignore bits undefined at reset)
#define MAC_PCU_WBTIMER_0_RESET 		 WIFI_TIMERS_WBTIMER_0_RESET

// 32'h0060 (MAC_PCU_WBTIMER_1)
#define MAC_PCU_WBTIMER_1_VALUE_MSB 		 WIFI_TIMERS_WBTIMER_1_VALUE_MSB
#define MAC_PCU_WBTIMER_1_VALUE_LSB 		 WIFI_TIMERS_WBTIMER_1_VALUE_LSB
#define MAC_PCU_WBTIMER_1_VALUE_MASK 		 WIFI_TIMERS_WBTIMER_1_VALUE_MASK
#define MAC_PCU_WBTIMER_1_VALUE_GET(x) 		 WIFI_TIMERS_WBTIMER_1_VALUE_GET(x)
#define MAC_PCU_WBTIMER_1_VALUE_SET(x) 		 WIFI_TIMERS_WBTIMER_1_VALUE_SET(x)
#define MAC_PCU_WBTIMER_1_VALUE_RESET 		 WIFI_TIMERS_WBTIMER_1_VALUE_RESET
#define MAC_PCU_WBTIMER_1_ADDRESS 		 (WIFI_TIMERS_BASE_ADDRESS+WIFI_TIMERS_WBTIMER_1_ADDRESS)
#define MAC_PCU_WBTIMER_1_OFFSET 		 (WIFI_TIMERS_BASE_ADDRESS+WIFI_TIMERS_WBTIMER_1_OFFSET)
// SW modifiable bits
#define MAC_PCU_WBTIMER_1_SW_MASK 		 WIFI_TIMERS_WBTIMER_1_SW_MASK
// bits defined at reset
#define MAC_PCU_WBTIMER_1_RSTMASK 		 WIFI_TIMERS_WBTIMER_1_RSTMASK
// reset value (ignore bits undefined at reset)
#define MAC_PCU_WBTIMER_1_RESET 		 WIFI_TIMERS_WBTIMER_1_RESET


#endif /* _RTC_WLAN_REG_H_ */
