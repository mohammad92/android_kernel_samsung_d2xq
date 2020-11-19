/*
 * sec_battery_sysfs.h
 * Samsung Mobile Battery Header
 *
 *
 * Copyright (C) 2018 Samsung Electronics, Inc.
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SEC_BATTERY_SYSFS_H
#define __SEC_BATTERY_SYSFS_H __FILE__

#if defined(CONFIG_SEC_FACTORY)
extern int factory_mode;
#endif

ssize_t sec_bat_show_attrs(struct device *dev,
				struct device_attribute *attr, char *buf);

ssize_t sec_bat_store_attrs(struct device *dev,
				struct device_attribute *attr,
				const char *buf, size_t count);

int sec_bat_create_attrs(struct device *dev);

#define SEC_BATTERY_ATTR(_name)						\
{									\
	.attr = {.name = #_name, .mode = 0664},	\
	.show = sec_bat_show_attrs,					\
	.store = sec_bat_store_attrs,					\
}

enum {
	BATT_RESET_SOC = 0,
	BATT_READ_RAW_SOC,
	BATT_READ_ADJ_SOC,
	BATT_TYPE,
	BATT_VFOCV,
	BATT_VOL_ADC,
	BATT_VOL_ADC_CAL,
	BATT_VOL_AVER,
	BATT_VOL_ADC_AVER,
	BATT_VOLTAGE_NOW,
	BATT_CURRENT_UA_NOW,
	BATT_CURRENT_UA_AVG,
	BATT_FILTER_CFG,
	BATT_TEMP,
	BATT_TEMP_ADC,
	BATT_TEMP_AVER,
	BATT_TEMP_ADC_AVER,
	USB_TEMP,
	USB_TEMP_ADC,
	BATT_CHG_TEMP,
	BATT_CHG_TEMP_ADC,
	SUB_BAT_TEMP,
	SUB_BAT_TEMP_ADC,	
	SLAVE_CHG_TEMP,
	SLAVE_CHG_TEMP_ADC,
#if defined(CONFIG_DIRECT_CHARGING)
	DCHG_ADC_MODE_CTRL,
	DCHG_TEMP,
	DCHG_TEMP_ADC,
#endif
	BLKT_TEMP,
	BLKT_TEMP_ADC,
	BATT_VF_ADC,
	BATT_SLATE_MODE,
	BATT_LP_CHARGING,
	SIOP_ACTIVATED,
	SIOP_LEVEL,
	SIOP_EVENT,
	BATT_CHARGING_SOURCE,
	FG_REG_DUMP,
	FG_RESET_CAP,
	FG_CAPACITY,
	FG_ASOC,
	AUTH,
	CHG_CURRENT_ADC,
	WC_ADC,
	WC_STATUS,
	WC_ENABLE,
	WC_CONTROL,
	WC_CONTROL_CNT,
	LED_COVER,
	HV_CHARGER_STATUS,
	HV_WC_CHARGER_STATUS,
	HV_CHARGER_SET,
	FACTORY_MODE,
	STORE_MODE,
	UPDATE,
	TEST_MODE,
	BATT_EVENT_CALL,
	BATT_EVENT_2G_CALL,
	BATT_EVENT_TALK_GSM,
	BATT_EVENT_3G_CALL,
	BATT_EVENT_TALK_WCDMA,
	BATT_EVENT_MUSIC,
	BATT_EVENT_VIDEO,
	BATT_EVENT_BROWSER,
	BATT_EVENT_HOTSPOT,
	BATT_EVENT_CAMERA,
	BATT_EVENT_CAMCORDER,
	BATT_EVENT_DATA_CALL,
	BATT_EVENT_WIFI,
	BATT_EVENT_WIBRO,
	BATT_EVENT_LTE,
	BATT_EVENT_LCD,
#if defined(CONFIG_ISDB_CHARGING_CONTROL)
	BATT_EVENT_ISDB,
#endif	
	BATT_EVENT_GPS,
	BATT_EVENT,
	BATT_TEMP_TABLE,
	BATT_HIGH_CURRENT_USB,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	TEST_CHARGE_CURRENT,
#if defined(CONFIG_STEP_CHARGING)	
	TEST_STEP_CONDITION,
#endif
#endif
	SET_STABILITY_TEST,
	BATT_CAPACITY_MAX,
	BATT_INBAT_VOLTAGE,
	BATT_INBAT_VOLTAGE_OCV,
	BATT_VBYP_VOLTAGE,
	CHECK_SLAVE_CHG,
	BATT_INBAT_WIRELESS_CS100,
	HMT_TA_CONNECTED,
	HMT_TA_CHARGE,
#if defined(CONFIG_BATTERY_AGE_FORECAST)
	FG_CYCLE,
	FG_FULL_VOLTAGE,
	FG_FULLCAPNOM,
	BATTERY_CYCLE,
	BATTERY_CYCLE_TEST,
#endif
	BATT_WPC_TEMP,
	BATT_WPC_TEMP_ADC,
	BATT_WIRELESS_MST_SWITCH_TEST,
#if defined(CONFIG_WIRELESS_FIRMWARE_UPDATE)
	BATT_WIRELESS_FIRMWARE_UPDATE,
	OTP_FIRMWARE_RESULT,
	WC_IC_GRADE,
	WC_IC_CHIP_ID,
	OTP_FIRMWARE_VER_BIN,
	OTP_FIRMWARE_VER,
	TX_FIRMWARE_RESULT,
	TX_FIRMWARE_VER,
	BATT_TX_STATUS,
#endif
	WC_VOUT,
	WC_VRECT,
	WC_TX_EN,
	WC_TX_VOUT,
	BATT_HV_WIRELESS_STATUS,
	BATT_HV_WIRELESS_PAD_CTRL,
	WC_TX_ID,	
	WC_OP_FREQ,
	WC_CMD_INFO,
	WC_RX_CONNECTED,
	WC_RX_CONNECTED_DEV,	
	WC_TX_MFC_VIN_FROM_UNO,
	WC_TX_MFC_IIN_FROM_UNO,
#if defined(CONFIG_WIRELESS_TX_MODE)	
	WC_TX_AVG_CURR,
	WC_TX_TOTAL_PWR,
#endif	
	WC_TX_STOP_CAPACITY,
	WC_TX_TIMER_EN,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	BATT_TUNE_FLOAT_VOLTAGE,
	BATT_TUNE_INPUT_CHARGE_CURRENT,
	BATT_TUNE_FAST_CHARGE_CURRENT,
	BATT_TUNE_WIRELESS_VOUT_CURRENT,
	BATT_TUNE_UI_TERM_CURRENT_1ST,
	BATT_TUNE_UI_TERM_CURRENT_2ND,
	BATT_TUNE_TEMP_HIGH_NORMAL,
	BATT_TUNE_TEMP_HIGH_REC_NORMAL,
	BATT_TUNE_TEMP_LOW_NORMAL,
	BATT_TUNE_TEMP_LOW_REC_NORMAL,
	BATT_TUNE_CHG_TEMP_HIGH,
	BATT_TUNE_CHG_TEMP_REC,
	BATT_TUNE_CHG_LIMMIT_CUR,
	BATT_TUNE_COIL_TEMP_HIGH,
	BATT_TUNE_COIL_TEMP_REC,
	BATT_TUNE_COIL_LIMMIT_CUR,
	BATT_TUNE_WPC_TEMP_HIGH,
	BATT_TUNE_WPC_TEMP_HIGH_REC,
	BATT_TUNE_DCHG_TEMP_HIGH,
	BATT_TUNE_DCHG_TEMP_HIGH_REC,
	BATT_TUNE_DCHG_BATT_TEMP_HIGH,
	BATT_TUNE_DCHG_BATT_TEMP_HIGH_REC,
	BATT_TUNE_DCHG_LIMMIT_INPUT_CUR,
	BATT_TUNE_DCHG_LIMMIT_CHG_CUR,	
#endif
#if defined(CONFIG_UPDATE_BATTERY_DATA)
	BATT_UPDATE_DATA,
#endif
	BATT_MISC_EVENT,
	BATT_TX_EVENT,
	BATT_EXT_DEV_CHG,
	BATT_WDT_CONTROL,
	MODE,
	CHECK_PS_READY,
	BATT_CHIP_ID,
	ERROR_CAUSE,
	CISD_FULLCAPREP_MAX,
#if defined(CONFIG_BATTERY_CISD)
	CISD_DATA,
	CISD_DATA_JSON,
	CISD_DATA_D_JSON,
	CISD_WIRE_COUNT,
	CISD_WC_DATA,
	CISD_WC_DATA_JSON,
	CISD_POWER_DATA,
	CISD_POWER_DATA_JSON,
	CISD_CABLE_DATA,
	CISD_CABLE_DATA_JSON,
	CISD_TX_DATA,
	CISD_TX_DATA_JSON,
	CISD_EVENT_DATA,
	CISD_EVENT_DATA_JSON,
	PREV_BATTERY_DATA,
	PREV_BATTERY_INFO,
#endif
	SAFETY_TIMER_SET,
	BATT_SWELLING_CONTROL,
	BATT_TEMP_CONTROL_TEST,
	SAFETY_TIMER_INFO,
	BATT_SHIPMODE_TEST,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	BATT_TEMP_TEST,
#endif
	BATT_CURRENT_EVENT,
	BATT_JIG_GPIO,
	CC_INFO,
#if defined(CONFIG_WIRELESS_AUTH)
	WC_AUTH_ADT_SENT,
#endif
	WC_DUO_RX_POWER,
#if defined(CONFIG_DUAL_BATTERY)
	BATT_MAIN_VOLTAGE,
	BATT_SUB_VOLTAGE,
	BATT_MAIN_CURRENT_MA,
	BATT_SUB_CURRENT_MA,
	BATT_MAIN_CON_DET,
	BATT_SUB_CON_DET,
	BATT_MAIN_ENB,
	BATT_SUB_ENB,
#endif
#if defined(CONFIG_BATTERY_SAMSUNG_MHS)
	BATT_CHARGING_PORT,
#endif
	EXT_EVENT,
	DIRECT_CHARGING_STATUS,
#if defined(CONFIG_DIRECT_CHARGING)
	DIRECT_CHARGING_STEP,
	DIRECT_CHARGING_TOTAL_STEP,
	DIRECT_CHARGING_IIN,
	SWITCH_CHARGING_SOURCE,
#endif
	CHARGING_TYPE,
#if defined(CONFIG_SEC_FACTORY)
	BATT_FACTORY_MODE,
#endif
	BOOT_COMPLETED,
	FACTORY_MODE_RELIEVE,
	FACTORY_MODE_BYPASS,
	NORMAL_MODE_BYPASS,
	FACTORY_VOLTAGE_REGULATION,
	FACTORY_MODE_DISABLE,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	GET_DT_DATA,
	GET_DT_STR,
	UPDATE_DT_UINT,
	UPDATE_DT_STR,
	CABLE_CURRENT,
#endif
};

#endif /* __SEC_BATTERY_SYSFS_H */
