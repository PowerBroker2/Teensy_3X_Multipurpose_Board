# Teensy_3X_Multipurpose_Board
[![GitHub version](https://badge.fury.io/gh/PowerBroker2%2FTeensy_3X_Multipurpose_Board.svg)](https://badge.fury.io/gh/PowerBroker2%2FTeensy_3X_Multipurpose_Board) [![arduino-library-badge](https://www.ardu-badge.com/badge/Teensy_3X_Multipurpose_Board.svg?)](https://www.ardu-badge.com/Teensy_3X_Multipurpose_Board)<br /><br />
Library for Teensy 3.X breakout board. This library allows user to quickly and effortlessly configure and use features implemented by the Teensy 3.X Multipurpose Board PCB

***CAUTION*** - All servo slots have 5V supplies so if you try to use any of the servo slot signal pins as analog inputs, make sure your analog device (i.e. potentiometer) do not output more than 3V3 or you will destroy your Teensy's ADC!!! If you need the power supply line for a given servo or I2C port, you can configure it using the jumper that corresponds with the port.

![board](https://user-images.githubusercontent.com/20977405/79944386-632b3600-8439-11ea-9080-a75aec144508.PNG)
![schematic](https://user-images.githubusercontent.com/20977405/79944401-6aeada80-8439-11ea-98ef-cc882fa2d919.PNG)
![teensy_pinout](https://media.digikey.com/Photos/RDL/Teensy%203.5%20-%20Pinout.png)
