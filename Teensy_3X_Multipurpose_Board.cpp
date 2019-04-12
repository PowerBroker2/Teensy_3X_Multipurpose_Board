#include <Servo.h>
#include <Wire.h>
#include <SPI.h>
#include "DFPlayerMini_Fast.h"
#include "Teensy_3X_Multipurpose_Board.h"




/***********************************************************************/
// Initialize servo class for each digital pin
/***********************************************************************/
Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;

Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;

Servo servo8;
Servo servo9;
Servo servo10;
Servo servo11;

Servo servo12;
Servo servo13;
Servo servo14;
Servo servo15;

/***********************************************************************/
// Initialize MP3 player
/***********************************************************************/
DFPlayerMini_Fast myMP3;




void MPBoard::begin()
{
	Serial.begin(serial_baud);
	Serial1.begin(serial1_baud);
	Serial2.begin(serial2_baud);
	Serial3.begin(serial3_baud);
	Serial4.begin(serial4_baud);
	Serial5.begin(serial5_baud);

	Wire.begin();
	Wire1.begin();
	Wire2.begin();

	SPI.begin();

	configureSerial(1);
	configureSerial(2);
	configureSerial(3);
	configureSerial(4);
	configureSerial(5);

	configureI2C(0);
	configureI2C(1);
	configureI2C(2);

	configureSPI(0);

	myMP3.begin(MP3_SERIAL_PORT);

	analogReadResolution(16);

	pinMode(GPS_PPS_PIN, INPUT);

	return;
}




void MPBoard::begin(uint32_t _serial_baud,
					uint32_t _serial1_baud,
					uint32_t _serial2_baud,
					uint32_t _serial3_baud,
					uint32_t _serial4_baud,
					uint32_t _serial5_baud)
{
	serial_baud = _serial_baud;
	serial1_baud = _serial1_baud;
	serial2_baud = _serial2_baud;
	serial3_baud = _serial3_baud;
	serial4_baud = _serial4_baud;
	serial5_baud = _serial5_baud;

	Serial.begin(serial_baud);
	Serial1.begin(serial1_baud);
	Serial2.begin(serial2_baud);
	Serial3.begin(serial3_baud);
	Serial4.begin(serial4_baud);
	Serial5.begin(serial5_baud);

	Wire.begin();
	Wire1.begin();
	Wire2.begin();

	SPI.begin();

	configureSerial(1);
	configureSerial(2);
	configureSerial(3);
	configureSerial(4);
	configureSerial(5);

	configureI2C(0);
	configureI2C(1);
	configureI2C(2);

	configureSPI(0);

	myMP3.begin(MP3_SERIAL_PORT);

	pinMode(GPS_PPS_PIN, INPUT);

	return;
}




bool MPBoard::configureAsServo(uint8_t pin)
{
	if (pin == S0_PIN)
	{
		servo0.attach(S0_PIN);
		S0_pinState = SERVO;
		return true;
	}
	else if (pin == S1_PIN)
	{
		servo1.attach(S1_PIN);
		S1_pinState = SERVO;
		return true;
	}
	else if (pin == S2_PIN)
	{
		servo2.attach(S2_PIN);
		S2_pinState = SERVO;
		return true;
	}
	else if (pin == S3_PIN)
	{
		servo3.attach(S3_PIN);
		S3_pinState = SERVO;
		return true;
	}
	else if (pin == S4_PIN)
	{
		servo4.attach(S4_PIN);
		S4_pinState = SERVO;
		return true;
	}
	else if (pin == S5_PIN)
	{
		servo5.attach(S5_PIN);
		S5_pinState = SERVO;
		return true;
	}
	else if (pin == S6_PIN)
	{
		servo6.attach(S6_PIN);
		S6_pinState = SERVO;
		return true;
	}
	else if (pin == S7_PIN)
	{
		servo7.attach(S7_PIN);
		S7_pinState = SERVO;
		return true;
	}
	else if (pin == S8_PIN)
	{
		servo8.attach(S8_PIN);
		S8_pinState = SERVO;
		return true;
	}
	else if (pin == S9_PIN)
	{
		servo9.attach(S9_PIN);
		S9_pinState = SERVO;
		return true;
	}
	else if (pin == S10_PIN)
	{
		servo10.attach(S10_PIN);
		S10_pinState = SERVO;
		return true;
	}
	else if (pin == S11_PIN)
	{
		servo11.attach(S11_PIN);
		S11_pinState = SERVO;
		return true;
	}
	else if (pin == S12_PIN)
	{
		servo12.attach(S12_PIN);
		S12_pinState = SERVO;
		return true;
	}
	else if (pin == S13_PIN)
	{
		servo13.attach(S13_PIN);
		S13_pinState = SERVO;
		return true;
	}
	else if (pin == S14_PIN)
	{
		servo14.attach(S14_PIN);
		S14_pinState = SERVO;
		return true;
	}
	else if (pin == S15_PIN)
	{
		servo15.attach(S15_PIN);
		S15_pinState = SERVO;
		return true;
	}

	return false;
}




bool MPBoard::configureAsDigital(uint8_t pin, uint8_t mode)
{
	if (pin == S0_PIN)
	{
		if (servo0.attached())
			servo0.detach();
		pinMode(S0_PIN, mode);
		S0_pinState = DIGITAL;
		return true;
	}
	else if (pin == S1_PIN)
	{
		if (servo1.attached())
			servo1.detach();
		pinMode(S1_PIN, mode);
		S1_pinState = DIGITAL;
		return true;
	}
	else if (pin == S2_PIN)
	{
		if (servo2.attached())
			servo2.detach();
		pinMode(S2_PIN, mode);
		S2_pinState = DIGITAL;
		return true;
	}
	else if (pin == S3_PIN)
	{
		if (servo3.attached())
			servo3.detach();
		pinMode(S3_PIN, mode);
		S3_pinState = DIGITAL;
		return true;
	}
	else if (pin == S4_PIN)
	{
		if (servo4.attached())
			servo4.detach();
		pinMode(S4_PIN, mode);
		S4_pinState = DIGITAL;
		return true;
	}
	else if (pin == S5_PIN)
	{
		if (servo5.attached())
			servo5.detach();
		pinMode(S5_PIN, mode);
		S5_pinState = DIGITAL;
		return true;
	}
	else if (pin == S6_PIN)
	{
		if (servo6.attached())
			servo6.detach();
		pinMode(S6_PIN, mode);
		S6_pinState = DIGITAL;
		return true;
	}
	else if (pin == S7_PIN)
	{
		if (servo7.attached())
			servo7.detach();
		pinMode(S7_PIN, mode);
		S7_pinState = DIGITAL;
		return true;
	}
	else if (pin == S8_PIN)
	{
		if (servo8.attached())
			servo8.detach();
		pinMode(S8_PIN, mode);
		S8_pinState = DIGITAL;
		return true;
	}
	else if (pin == S9_PIN)
	{
		if (servo9.attached())
			servo9.detach();
		pinMode(S9_PIN, mode);
		S9_pinState = DIGITAL;
		return true;
	}
	else if (pin == S10_PIN)
	{
		if (servo10.attached())
			servo10.detach();
		pinMode(S10_PIN, mode);
		S10_pinState = DIGITAL;
		return true;
	}
	else if (pin == S11_PIN)
	{
		if (servo11.attached())
			servo11.detach();
		pinMode(S11_PIN, mode);
		S11_pinState = DIGITAL;
		return true;
	}
	else if (pin == S12_PIN)
	{
		if (servo12.attached())
			servo12.detach();
		pinMode(S12_PIN, mode);
		S12_pinState = DIGITAL;
		return true;
	}
	else if (pin == S13_PIN)
	{
		if (servo13.attached())
			servo13.detach();
		pinMode(S13_PIN, mode);
		S13_pinState = DIGITAL;
		return true;
	}
	else if (pin == S14_PIN)
	{
		if (servo14.attached())
			servo14.detach();
		pinMode(S14_PIN, mode);
		S14_pinState = DIGITAL;
		return true;
	}
	else if (pin == S15_PIN)
	{
		if (servo15.attached())
			servo15.detach();
		pinMode(S15_PIN, mode);
		S15_pinState = DIGITAL;
		return true;
	}

	return false;
}




bool MPBoard::configureAsAnalog(uint8_t pin)
{
	if (pin == S0_PIN)
	{
		if(servo0.attached())
			servo0.detach();
		S0_pinState = ANALOG;
		return true;
	}
	else if (pin == S1_PIN)
	{
		if (servo1.attached())
			servo1.detach();
		S1_pinState = ANALOG;
		return true;
	}
	else if (pin == S2_PIN)
	{
		if (servo2.attached())
			servo2.detach();
		S2_pinState = ANALOG;
		return true;
	}
	else if (pin == S3_PIN)
	{
		if (servo3.attached())
			servo3.detach();
		S3_pinState = ANALOG;
		return true;
	}
	else if (pin == S4_PIN)
	{
		if (servo4.attached())
			servo4.detach();
		S4_pinState = ANALOG;
		return true;
	}
	else if (pin == S5_PIN)
	{
		if (servo5.attached())
			servo5.detach();
		S5_pinState = ANALOG;
		return true;
	}
	else if (pin == S6_PIN)
	{
		if (servo6.attached())
			servo6.detach();
		S6_pinState = ANALOG;
		return true;
	}
	else if (pin == S7_PIN)
	{
		if (servo7.attached())
			servo7.detach();
		S7_pinState = ANALOG;
		return true;
	}
	else if (pin == S8_PIN)
	{
		if (servo8.attached())
			servo8.detach();
		S8_pinState = ANALOG;
		return true;
	}
	else if (pin == S9_PIN)
	{
		if (servo9.attached())
			servo9.detach();
		S9_pinState = ANALOG;
		return true;
	}
	else if (pin == S10_PIN)
	{
		if (servo10.attached())
			servo10.detach();
		S10_pinState = ANALOG;
		return true;
	}
	else if (pin == S11_PIN)
	{
		if (servo11.attached())
			servo11.detach();
		S11_pinState = ANALOG;
		return true;
	}
	else if (pin == S12_PIN)
	{
		if (servo12.attached())
			servo12.detach();
		S12_pinState = ANALOG;
		return true;
	}
	else if (pin == S13_PIN)
	{
		if (servo13.attached())
			servo13.detach();
		S13_pinState = ANALOG;
		return true;
	}
	else if (pin == S14_PIN)
	{
		if (servo14.attached())
			servo14.detach();
		S14_pinState = ANALOG;
		return true;
	}
	else if (pin == S15_PIN)
	{
		if (servo15.attached())
			servo15.detach();
		S15_pinState = ANALOG;
		return true;
	}

	return false;
}




bool MPBoard::configureSerial(uint8_t port)
{
	if (port == 1)
	{
		configureAsComms(SERIAL1_RX_PIN);
		configureAsComms(SERIAL1_TX_PIN);
		return true;
	}
	else if (port == 2)
	{
		configureAsComms(SERIAL2_RX_PIN);
		configureAsComms(SERIAL2_TX_PIN);
		return true;
	}
	else if (port == 3)
	{
		configureAsComms(SERIAL3_RX_PIN);
		configureAsComms(SERIAL3_TX_PIN);
		return true;
	}
	else if (port == 4)
	{
		configureAsComms(SERIAL4_RX_PIN);
		configureAsComms(SERIAL4_TX_PIN);
		return true;
	}
	else if (port == 5)
	{
		configureAsComms(SERIAL5_RX_PIN);
		configureAsComms(SERIAL5_TX_PIN);
		return true;
	}

	return false;
}




bool MPBoard::configureI2C(uint8_t port)
{
	if (port == 0)
	{
		configureAsComms(I2C0_SCL_PIN);
		configureAsComms(I2C0_SDA_PIN);
		return true;
	}
	else if (port == 1)
	{
		configureAsComms(I2C1_SCL_PIN);
		configureAsComms(I2C1_SDA_PIN);
		return true;
	}
	else if (port == 2)
	{
		configureAsComms(I2C2_SCL_PIN);
		configureAsComms(I2C2_SDA_PIN);
		return true;
	}

	return false;
}




bool MPBoard::configureSPI(uint8_t port)
{
	if (port == 0)
	{
		configureAsComms(SPI0_CS_PIN);
		configureAsComms(SPI0_MOSI_PIN);
		configureAsComms(SPI0_MISO_PIN);
		configureAsComms(SPI0_SCK_PIN);
		return true;
	}

	return true;
}




bool MPBoard::configureAsComms(uint8_t pin)
{
	/********************************************************************/
	// SPI1 not currently supported due to conflicts with other pins
	// (can still be used if configured manually)
	/********************************************************************/
	
	if (pin == SERIAL1_RX_PIN)
	{
		Serial1.setRX(SERIAL1_RX_PIN);
		SERIAL1_RX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL1_TX_PIN)
	{
		Serial1.setTX(SERIAL1_TX_PIN);
		SERIAL1_TX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL2_RX_PIN)
	{
		Serial2.setRX(SERIAL2_RX_PIN);
		SERIAL2_RX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL2_TX_PIN)
	{
		Serial2.setTX(SERIAL2_TX_PIN);
		SERIAL2_TX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL3_RX_PIN)
	{
		Serial3.setRX(SERIAL3_RX_PIN);
		SERIAL3_RX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL3_TX_PIN)
	{
		Serial3.setTX(SERIAL3_TX_PIN);
		SERIAL3_TX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL4_RX_PIN)
	{
		Serial4.setRX(SERIAL4_RX_PIN);
		SERIAL4_RX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL4_TX_PIN)
	{
		Serial4.setTX(SERIAL4_TX_PIN);
		SERIAL4_TX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL5_RX_PIN)
	{
		Serial5.setRX(SERIAL5_RX_PIN);
		SERIAL5_RX_pinState = COMMS;
		return true;
	}
	else if (pin == SERIAL5_TX_PIN)
	{
		Serial5.setTX(SERIAL5_TX_PIN);
		SERIAL5_TX_pinState = COMMS;
		return true;
	}
	else if (pin == I2C0_SCL_PIN)
	{
		Wire.setSCL(I2C0_SCL_PIN);
		I2C0_SCL_pinState = COMMS;
		return true;
	}
	else if (pin == I2C0_SDA_PIN)
	{
		Wire.setSDA(I2C0_SDA_PIN);
		I2C0_SDA_pinState = COMMS;
		return true;
	}
	else if (pin == I2C1_SCL_PIN)
	{
		Wire1.setSCL(I2C1_SCL_PIN);
		I2C1_SCL_pinState = COMMS;
		return true;
	}
	else if (pin == I2C1_SDA_PIN)
	{
		Wire1.setSDA(I2C1_SDA_PIN);
		I2C1_SDA_pinState = COMMS;
		return true;
	}
	else if (pin == I2C2_SCL_PIN)
	{
		Wire2.setSCL(I2C2_SCL_PIN);
		I2C2_SCL_pinState = COMMS;
		return true;
	}
	else if (pin == I2C2_SDA_PIN)
	{
		Wire2.setSDA(I2C2_SDA_PIN);
		I2C2_SDA_pinState = COMMS;
		return true;
	}
	else if (pin == SPI0_CS_PIN)
	{
		pinMode(SPI0_CS_PIN, OUTPUT);
		SPI0_CS_pinState = COMMS;
		return true;
	}
	else if (pin == SPI0_MOSI_PIN)
	{
		SPI.setMOSI(SPI0_MOSI_PIN);
		SPI0_MOSI_pinState = COMMS;
		return true;
	}
	else if (pin == SPI0_MISO_PIN)
	{
		SPI.setMISO(SPI0_MISO_PIN);
		SPI0_MISO_pinState = COMMS;
		return true;
	}
	else if (pin == SPI0_SCK_PIN)
	{
		SPI.setSCK(SPI0_SCK_PIN);
		SPI0_SCK_pinState = COMMS;
		return true;
	}

	return false;
}
