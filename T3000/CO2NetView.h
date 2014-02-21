#pragma once


#define	PRODUCT_ID					32

#define	FLASH_OFFSET				0x70000
//#define	FLASH_END					0xffff

#define TOTAL_EE_PARAMETERS			208

#define	ORIGINALADDRESSVALUE		200

#define	MAX_EXT_CO2					254
#define	SCAN_DB_SIZE				5
// CCO2NetView form view
typedef enum
{
    EEP_SERIALNUMBER_LOWORD = 0,             
    EEP_SERIALNUMBER_HIWORD = 2,
    EEP_SOFTWARE_VERSION_LO = 4,
    EEP_SOFTWARE_VERSION_HI = 5,
    EEP_ADDRESS = 6,
    EEP_PRODUCT_MODEL,
    EEP_HARDWARE_REV,
    EEP_INIT_WR_TIME, 			//Erase weekly routine time block if value of this register is not 0x55
    EEP_ADDRESS_PLUG_N_PLAY = 10,
    EEP_TIME_ZONE,
    EEP_BAUDRATE,	 
    EEP_DAYLIGHT_ENABLE,
    EEP_DAYLIGHT_STATUS,
    EEP_RESET_FLASH = 15,

    // registers needed for updating status
    EEP_UPDATE_STATUS = 16,

    EEP_TIME_SERVER_SELECT = 22,

    EEP_REFRESH_FLASH_FREQ,
    EEP_SERINALNUMBER_WRITE_FLAG = EEP_REFRESH_FLASH_FREQ + 2,

    EEP_MAC_ADDRESS_START = 100,//6
    EEP_IP_MODE = 106,
    EEP_IP_ADDRESS_START = 107,//4
    EEP_SUBNET_MASK_ADDRESS_START = 111,//4
    EEP_GATEWAY_ADDRESS = 115,//4
    EEP_TCP_SERVER_ENABLE = 119,
    EEP_LISTEN_PORT_AT_TCP_SERVER_MODE_START = 120,//2

    EEP_SCAN_COMMAND = 172,
    EEP_SUBNET_TYPE = 173,
    EEP_NTP_COMMAND = 174,
    EEP_TIME_SERVER0_IP_START = 175,//4bytes
    EEP_TIME_SERVER1_IP_START = 179,//4bytes
    EEP_TIME_SERVER2_IP_START = 183,//4bytes
    EEP_TIME_SERVER3_IP_START = 187,//4bytes
    EEP_TIME_SERVER4_IP_START = 191,//4bytes
    EEP_TIME_SERVER5_IP_START = 195,//4bytes
    EEP_TIME_SYNC_RESULT = 199,

} EEP_LOCATION;
typedef enum
{
    CO2_NET_MODBUS_SERIALNUMBER_LOWORD = EEP_SERIALNUMBER_LOWORD,             
    CO2_NET_MODBUS_SERIALNUMBER_HIWORD = EEP_SERIALNUMBER_HIWORD,
    CO2_NET_MODBUS_SOFTWARE_VERSION_LO = EEP_SOFTWARE_VERSION_LO,
    CO2_NET_MODBUS_SOFTWARE_VERSION_HI = EEP_SOFTWARE_VERSION_HI,

    CO2_NET_MODBUS_ADDRESS = EEP_ADDRESS,
    CO2_NET_MODBUS_PRODUCT_MODEL = EEP_PRODUCT_MODEL,
    CO2_NET_MODBUS_HARDWARE_REV = EEP_HARDWARE_REV,
    CO2_NET_MODBUS_PIC_REV,
    CO2_NET_MODBUS_ADDRESS_PLUG_N_PLAY = EEP_ADDRESS_PLUG_N_PLAY,
    CO2_NET_MODBUS_TIME_ZONE = EEP_TIME_ZONE,
    CO2_NET_MODBUS_BAUDRATE = EEP_BAUDRATE,	 
    CO2_NET_MODBUS_DAYLIGHT_ENABLE = EEP_DAYLIGHT_ENABLE,

    CO2_NET_MODBUS_BOOTLOADER_VERSION = 14,
    CO2_NET_MODBUS_RESET_FLASH = EEP_RESET_FLASH,

    // registers needed for updating status
    CO2_NET_MODBUS_UPDATE_STATUS = EEP_UPDATE_STATUS,

    CO2_NET_MODBUS_INIT_WR_TIME, //Erase weekly routine time block if value of this register is not 0x55

    CO2_NET_MODBUS_TIME_SERVER_SELECT = EEP_TIME_SERVER_SELECT,

    CO2_NET_MODBUS_REFRESH_STATUS = 90,

    CO2_NET_MODBUS_REFRESH_FLASH = 91,
    CO2_NET_MODBUS_REFRESH_FLASH_FREQ = 92,
    CO2_NET_MODBUS_MAC_ADDRESS_CHANGE_ENABLE = 93,

    CO2_NET_MODBUS_REFRESH_FLASH_TIMER = 94,

    CO2_NET_MODBUS_SERINALNUMBER_WRITE_FLAG = EEP_SERINALNUMBER_WRITE_FLAG,

    CO2_NET_MODBUS_MAC_ADDRESS_START = EEP_MAC_ADDRESS_START,//6

    CO2_NET_MODBUS_IP_MODE = EEP_IP_MODE,
    CO2_NET_MODBUS_IP_ADDRESS_START = EEP_IP_ADDRESS_START,//4
    CO2_NET_MODBUS_SUBNET_MASK_ADDRESS_START = EEP_SUBNET_MASK_ADDRESS_START,//4
    CO2_NET_MODBUS_GATEWAY_ADDRESS_START = EEP_GATEWAY_ADDRESS,//4
    CO2_NET_MODBUS_TCP_SERVER_ENABLE = EEP_TCP_SERVER_ENABLE,
    CO2_NET_MODBUS_LISTEN_PORT_AT_TCP_SERVER_MODE_START = EEP_LISTEN_PORT_AT_TCP_SERVER_MODE_START,//1

    CO2_NET_MODBUS_IP_MODE_GHOST = CO2_NET_MODBUS_LISTEN_PORT_AT_TCP_SERVER_MODE_START + 1,
    CO2_NET_MODBUS_IP_ADDRESS_GHOST_START = CO2_NET_MODBUS_IP_MODE_GHOST + 1,//4
    CO2_NET_MODBUS_SUBNET_MASK_ADDRESS_GHOST_START = CO2_NET_MODBUS_IP_ADDRESS_GHOST_START + 4,//4
    CO2_NET_MODBUS_GATEWAY_ADDRESS_GHOST_START = CO2_NET_MODBUS_SUBNET_MASK_ADDRESS_GHOST_START + 4,//4
    CO2_NET_MODBUS_TCP_SERVER_ENABLE_GHOST = CO2_NET_MODBUS_GATEWAY_ADDRESS_GHOST_START + 4,
    CO2_NET_MODBUS_LISTEN_PORT_AT_TCP_SERVER_MODE_GHOST_START = CO2_NET_MODBUS_TCP_SERVER_ENABLE_GHOST + 1,//1
    CO2_NET_MODBUS_ENABLE_GHOST = CO2_NET_MODBUS_LISTEN_PORT_AT_TCP_SERVER_MODE_GHOST_START + 1,

    CO2_NET_MODBUS_SCAN_COMMAND = EEP_SCAN_COMMAND,
    CO2_NET_MODBUS_SUBNET_TYPE = EEP_SUBNET_TYPE,
    CO2_NET_MODBUS_NTP_COMMAND = EEP_NTP_COMMAND,
    CO2_NET_MODBUS_TIME_SERVER0_IP_START = EEP_TIME_SERVER0_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SERVER1_IP_START = EEP_TIME_SERVER1_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SERVER2_IP_START = EEP_TIME_SERVER2_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SERVER3_IP_START = EEP_TIME_SERVER3_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SERVER4_IP_START = EEP_TIME_SERVER4_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SERVER5_IP_START = EEP_TIME_SERVER5_IP_START,//4bytes
    CO2_NET_MODBUS_TIME_SYNC_RESULT = EEP_TIME_SYNC_RESULT,


    // registers for runtime routine
    CO2_NET_MODBUS_TEMPERATURE_SENSOR_SELECT = ORIGINALADDRESSVALUE,
    CO2_NET_MODBUS_TEMPERATURE_DEGREE_C_OR_F,
    CO2_NET_MODBUS_INTERNAL_TEMPERATURE_CELSIUS,
    CO2_NET_MODBUS_INTERNAL_TEMPERATURE_FAHRENHEIT,
    CO2_NET_MODBUS_EXTERNAL_TEMPERATURE_CELSIUS,
    CO2_NET_MODBUS_EXTERNAL_TEMPERATURE_FAHRENHEIT,

    CO2_NET_MODBUS_TEMPERATURE_OFFSET_INTERNAL,

    CO2_NET_MODBUS_HUMIDITY, // 207
    CO2_NET_MODBUS_HUMIDITY_FREQUENCY,
    CO2_NET_MODBUS_HUMIDITY_CALIBRATION_TABLE_COUNTER,

    CO2_NET_MODBUS_CO2_INTERNAL_EXIST, // 210
    CO2_NET_MODBUS_CO2_INTERNAL,
    CO2_NET_MODBUS_CO2_INTERNAL_OFFSET,
    CO2_NET_MODBUS_CO2_INTERNAL_PREALARM_SETPOINT,
    CO2_NET_MODBUS_CO2_INTERNAL_ALARM_SETPOINT,

    CO2_NET_MODBUS_CO2_EXTERNAL_START, // 215
    CO2_NET_MODBUS_CO2_EXTERANL_END = CO2_NET_MODBUS_CO2_EXTERNAL_START + MAX_EXT_CO2, // 215 + 254
    CO2_NET_MODBUS_CO2_EXTERNAL_OFFSET_START = CO2_NET_MODBUS_CO2_EXTERANL_END, // 469
    CO2_NET_MODBUS_CO2_EXTERNAL_OFFSET_END = CO2_NET_MODBUS_CO2_EXTERNAL_OFFSET_START + MAX_EXT_CO2, // 469 + 254
    CO2_NET_MODBUS_CO2_EXTERNAL_PREALARM_SETPOINT_START = CO2_NET_MODBUS_CO2_EXTERNAL_OFFSET_END, // 723
    CO2_NET_MODBUS_CO2_EXTERNAL_PREALARM_SETPOINT_END = CO2_NET_MODBUS_CO2_EXTERNAL_PREALARM_SETPOINT_START + MAX_EXT_CO2, // 723 + 254
    CO2_NET_MODBUS_CO2_EXTERNAL_ALARM_SETPOINT_START = CO2_NET_MODBUS_CO2_EXTERNAL_PREALARM_SETPOINT_END, // 977
    CO2_NET_MODBUS_CO2_EXTERNAL_ALARM_SETPOINT_END = CO2_NET_MODBUS_CO2_EXTERNAL_ALARM_SETPOINT_START + MAX_EXT_CO2, // 977 + 254

    CO2_NET_MODBUS_CO2_SLOPE_DETECT_VALUE = CO2_NET_MODBUS_CO2_EXTERNAL_ALARM_SETPOINT_END,	// 1231
    CO2_NET_MODBUS_CO2_FILTER,		// 1232

    CO2_NET_MODBUS_PASSWORD_ENABLE,	// 1233
    CO2_NET_MODBUS_USER_PASSWORD0, 					
    CO2_NET_MODBUS_USER_PASSWORD1,
    CO2_NET_MODBUS_USER_PASSWORD2,
    CO2_NET_MODBUS_USER_PASSWORD3,

    CO2_NET_MODBUS_RTC_CENTURY, // 1238
    CO2_NET_MODBUS_RTC_YEAR,
    CO2_NET_MODBUS_RTC_MONTH,
    CO2_NET_MODBUS_RTC_DAY,
    CO2_NET_MODBUS_RTC_WEEK,
    CO2_NET_MODBUS_RTC_HOUR,
    CO2_NET_MODBUS_RTC_MINUTE,
    CO2_NET_MODBUS_RTC_SECOND,

    CO2_NET_MODBUS_ALARM_AUTO_MANUAL,	// 1246, bit7: 0 = auto, 1 = manual; bit0:1 = pre_alarm; bit1: 1 = continuous_alarm; bit(1:0): 00 = stop_ alarm		
    CO2_NET_MODBUS_PRE_ALARM_SETTING_ON_TIME,
    CO2_NET_MODBUS_PRE_ALARM_SETTING_OFF_TIME,
    CO2_NET_MODBUS_ALARM_DELAY_TIME,

    CO2_NET_MODBUS_OUTPUT_AUTO_MANUAL,		// 1250
    CO2_NET_MODBUS_OUTPUT_MANUAL_VALUE_TEM,
    CO2_NET_MODBUS_OUTPUT_MANUAL_VALUE_HUM,
    CO2_NET_MODBUS_OUTPUT_MANUAL_VALUE_CO2,

    CO2_NET_MODBUS_OUTPUT_MODE,				// 1254
    CO2_NET_MODBUS_OUTPUT_RANGE_MIN_TEM,	// 1255				
    CO2_NET_MODBUS_OUTPUT_RANGE_MAX_TEM,
    CO2_NET_MODBUS_OUTPUT_RANGE_MIN_HUM,				
    CO2_NET_MODBUS_OUTPUT_RANGE_MAX_HUM,
    CO2_NET_MODBUS_OUTPUT_RANGE_MIN_CO2,				
    CO2_NET_MODBUS_OUTPUT_RANGE_MAX_CO2,

    CO2_NET_MODBUS_MENU_BLOCK_SECONDS,		// 1261
    CO2_NET_MODBUS_BACKLIGHT_KEEP_SECONDS,

    CO2_NET_MODBUS_EXTERNAL_NODES_PLUG_AND_PLAY, // 1263

    CO2_NET_MODBUS_SCAN_DB_CTR,		// 1264
    CO2_NET_MODBUS_RESET_SCAN_DB,					
    CO2_NET_MODBUS_SCAN_START,		// 1266						
    CO2_NET_MODBUS_SCAN_END = 2536,	// 1266 + 5*254

    CO2_NET_MODBUS_GET_NODES_PARA_START = CO2_NET_MODBUS_SCAN_END,						// 2536
    CO2_NET_MODBUS_GET_NODES_PARA_END = CO2_NET_MODBUS_GET_NODES_PARA_START + 32,		// 2536 + 32

    CO2_NET_MODBUS_SCAN_OCCUPY_START = CO2_NET_MODBUS_GET_NODES_PARA_END,				// 2568
    CO2_NET_MODBUS_SCAN_OCCUPY_END = CO2_NET_MODBUS_SCAN_OCCUPY_START + 32,				// 2568 + 32

    CO2_NET_MODBUS_SCAN_ONLINE_START = CO2_NET_MODBUS_SCAN_OCCUPY_END,					// 2600
    CO2_NET_MODBUS_SCAN_ONLINE_END = CO2_NET_MODBUS_SCAN_ONLINE_START + 32,				// 2600 + 32

    CO2_NET_MODBUS_IDLE_ID = CO2_NET_MODBUS_SCAN_ONLINE_END,


    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_READ = 10000,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM0,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ0,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM1,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ1,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM2,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ2,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM3,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ3,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM4,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ4,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM5,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ5,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM6,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ6,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM7,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ7,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM8,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ8,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_HUM9,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_FREQ9,

    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_ADD_HUM, // 10021
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_ADD_FREQ,
    CO2_NET_MODBUS_HUMIDITY_SENSOR_TABLE_ADD_ENABLE,

} MODBUS_CO2_NET_REGISTER_LIST;

class CCO2NetView : public CFormView
{
	DECLARE_DYNCREATE(CCO2NetView)

protected:
	CCO2NetView();           // protected constructor used by dynamic creation
	virtual ~CCO2NetView();

public:
	enum { IDD = IDD_DIALOG_NET_CO2 };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};


