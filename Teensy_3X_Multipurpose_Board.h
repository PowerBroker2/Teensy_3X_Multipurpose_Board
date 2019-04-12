#include "Arduino.h"
#include <Servo.h>
#include "DFPlayerMini_Fast.h"




#ifndef Teensy_3X_Multipurpose_Board_cpp
#define Teensy_3X_Multipurpose_Board_cpp




/***********************************************************************/
// Built-in serial port connections
/***********************************************************************/
#define GPS_SERIAL_PORT			Serial1
#define BLUE_SERIAL_PORT		Serial2
#define XBEE_SERIAL_PORT		Serial3
#define MP3_SERIAL_PORT			Serial4




/***********************************************************************/
// I/O Pin Numbers
/***********************************************************************/
const uint8_t S0_PIN			= 12;
const uint8_t S1_PIN			= 39;
const uint8_t S2_PIN			= 16;
const uint8_t S3_PIN			= 24;

const uint8_t S4_PIN			= 25;
const uint8_t S5_PIN			= 26;
const uint8_t S6_PIN			= 27;
const uint8_t S7_PIN			= 28;

const uint8_t S8_PIN			= 29;
const uint8_t S9_PIN			= 30;
const uint8_t S10_PIN			= 23;
const uint8_t S11_PIN			= 22;

const uint8_t S12_PIN			= 17;
const uint8_t S13_PIN			= 16;
const uint8_t S14_PIN			= 14;
const uint8_t S15_PIN			= 36;

/***********************************************************************/
// UART Pin Numbers
/***********************************************************************/
const uint8_t SERIAL1_RX_PIN	= 0;
const uint8_t SERIAL1_TX_PIN	= 1;

const uint8_t SERIAL2_RX_PIN	= 9;
const uint8_t SERIAL2_TX_PIN	= 10;

const uint8_t SERIAL3_RX_PIN	= 7;
const uint8_t SERIAL3_TX_PIN	= 8;

const uint8_t SERIAL4_RX_PIN	= 31;
const uint8_t SERIAL4_TX_PIN	= 32;

const uint8_t SERIAL5_RX_PIN	= 34;
const uint8_t SERIAL5_TX_PIN	= 33;

/***********************************************************************/
// I2C Pin Numbers
/***********************************************************************/
const uint8_t I2C0_SCL_PIN		= 19;
const uint8_t I2C0_SDA_PIN		= 18;

const uint8_t I2C1_SCL_PIN		= 37;
const uint8_t I2C1_SDA_PIN		= 38;

const uint8_t I2C2_SCL_PIN		= 3;
const uint8_t I2C2_SDA_PIN		= 4;

/***********************************************************************/
// SPI Pin Numbers
/***********************************************************************/
const uint8_t SPI0_CS_PIN		= 15;
const uint8_t SPI0_MOSI_PIN		= 11;
const uint8_t SPI0_MISO_PIN		= 12;
const uint8_t SPI0_SCK_PIN		= 13;

const uint8_t SPI1_CS_PIN		= 31;
const uint8_t SPI1_MOSI_PIN		= 21;
const uint8_t SPI1_MISO_PIN		= 5;
const uint8_t SPI1_SCK_PIN		= 20;

/***********************************************************************/
// BNO055 Pin Numbers
/***********************************************************************/
const uint8_t BNO055_INT_PIN	= 35;

/***********************************************************************/
// GPS Pin Numbers
/***********************************************************************/
const uint8_t GPS_PPS_PIN		= 21;

/***********************************************************************/
// Pin State Definitions
/***********************************************************************/
const uint8_t ANALOG			= -1;
const uint8_t DIGITAL			= 0;
const uint8_t SERVO				= 1;
const uint8_t COMMS				= 2;




/***********************************************************************/
// Allow servo classes to be accessed from outside of the library
// (i.e. in sketch)
/***********************************************************************/
extern Servo servo0;
extern Servo servo1;
extern Servo servo2;
extern Servo servo3;

extern Servo servo4;
extern Servo servo5;
extern Servo servo6;
extern Servo servo7;

extern Servo servo8;
extern Servo servo9;
extern Servo servo10;
extern Servo servo11;

extern Servo servo12;
extern Servo servo13;
extern Servo servo14;
extern Servo servo15;

/***********************************************************************/
// Allow DFPlayer class to be accessed from outside of the library
// (i.e. in sketch)
/***********************************************************************/
extern DFPlayerMini_Fast myMP3;




class MPBoard
{
	public:
		/*
		Pin States:

		-1:	analog input
		 0:	digital input/output
		 1:	servo
		 2: communication (Serial/I2C/SPI)
		*/

		/***************************************************************/
		// Initialize I/O Pin States (servo by default)
		/***************************************************************/
		int8_t S0_pinState			= SERVO;
		int8_t S1_pinState			= SERVO;
		int8_t S2_pinState			= SERVO;
		int8_t S3_pinState			= SERVO;

		int8_t S4_pinState			= SERVO;
		int8_t S5_pinState			= SERVO;
		int8_t S6_pinState			= SERVO;
		int8_t S7_pinState			= SERVO;

		int8_t S8_pinState			= SERVO;
		int8_t S9_pinState			= SERVO;
		int8_t S10_pinState			= SERVO;
		int8_t S11_pinState			= SERVO;

		int8_t S12_pinState			= SERVO;
		int8_t S13_pinState			= SERVO;
		int8_t S14_pinState			= SERVO;
		int8_t S15_pinState			= SERVO;

		/***************************************************************/
		// Initialize Serial Pin States (comms by default)
		/***************************************************************/
		int8_t SERIAL1_RX_pinState	= COMMS;
		int8_t SERIAL1_TX_pinState	= COMMS;

		int8_t SERIAL2_RX_pinState	= COMMS;
		int8_t SERIAL2_TX_pinState	= COMMS;

		int8_t SERIAL3_RX_pinState	= COMMS;
		int8_t SERIAL3_TX_pinState	= COMMS;

		int8_t SERIAL4_RX_pinState	= COMMS;
		int8_t SERIAL4_TX_pinState	= COMMS;

		int8_t SERIAL5_RX_pinState	= COMMS;
		int8_t SERIAL5_TX_pinState	= COMMS;

		/***************************************************************/
		// Initialize I2C Pin States (comms by default)
		/***************************************************************/
		int8_t I2C0_SCL_pinState	= COMMS;
		int8_t I2C0_SDA_pinState	= COMMS;

		int8_t I2C1_SCL_pinState	= COMMS;
		int8_t I2C1_SDA_pinState	= COMMS;

		int8_t I2C2_SCL_pinState	= COMMS;
		int8_t I2C2_SDA_pinState	= COMMS;

		/***************************************************************/
		// Initialize SPI Pin States (comms by default)
		/***************************************************************/
		int8_t SPI0_CS_pinState		= COMMS;
		int8_t SPI0_MOSI_pinState	= COMMS;
		int8_t SPI0_MISO_pinState	= COMMS;
		int8_t SPI0_SCK_pinState	= COMMS;

		int8_t SPI1_CS_pinState		= COMMS;
		int8_t SPI1_MOSI_pinState	= COMMS;
		int8_t SPI1_MISO_pinState	= COMMS;
		int8_t SPI1_SCK_pinState	= COMMS;

		/***************************************************************/
		// Initialize BNO055 Pin States (comms by default)
		/***************************************************************/
		int8_t BNO055_INT_pinState	= COMMS;

		/***************************************************************/
		// Serial baud rates
		/***************************************************************/
		uint32_t serial_baud		= 115200;
		uint32_t serial1_baud		= 115200;
		uint32_t serial2_baud		= 115200;
		uint32_t serial3_baud		= 115200;
		uint32_t serial4_baud		= 115200;
		uint32_t serial5_baud		= 115200;




		void begin();
		void begin(uint32_t _serial_baud,
					uint32_t _serial1_baud,
					uint32_t _serial2_baud,
					uint32_t _serial3_baud,
					uint32_t _serial4_baud,
					uint32_t _serial5_baud);
		bool configureAsServo(uint8_t pin);
		bool configureAsDigital(uint8_t pin, uint8_t mode);
		bool configureAsAnalog(uint8_t pin);
		bool configureAsAnalog(uint8_t pin);
		bool configureSerial(uint8_t port);
		bool configureI2C(uint8_t port);
		bool configureSPI(uint8_t port);
		bool configureAsComms(uint8_t pin);




	private:

};




/***********************************************************************/
// Auto instantiate board class
/***********************************************************************/
extern MPBoard myMPBoard;




#endif
