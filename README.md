# Arduino-Based Temperature Indicator

Welcome to the Arduino-Based Temperature Indicator project! This repository contains the code, schematics, and detailed documentation for a hands-on project developed as part of the Digital Logic Design course at FAST NUCES. The system measures ambient temperature using a DHT22 sensor, displays the readings on an OLED display, and provides visual feedback using colored LEDs.

## Project Overview

This project bridges theory with practical application by using an Arduino to process temperature data and visually indicate temperature thresholds. It combines sensor interfacing, digital logic, and embedded C++ programming to create a responsive and user-friendly system.

## Features

- **Real-Time Temperature Monitoring:**  
  Utilizes a DHT22 sensor for accurate temperature (and humidity) measurement.
  
- **Visual Temperature Display:**  
  Displays the current temperature on a 0.96-inch I2C OLED display.
  
- **LED Status Indicators:**  
  Three colored 5mm LEDs (green, yellow, and red) show temperature ranges:
  - **Green:** Normal temperature
  - **Yellow:** Warm conditions
  - **Red:** Hot conditions
  
- **Embedded C++ Programming:**  
  The project is programmed using C++ on the Arduino platform, integrating sensor data reading and LED control.

## Components

- **Arduino Board:**  
  - Arduino Uno R3

- **Temperature Sensor:**  
  - DHT22 sensor (high precision)  
  - *Alternatives:* DHT11 (cost-effective) or DS18B20 (waterproof, 1-Wire interface)

- **Display:**  
  - 0.96-inch I2C OLED Display (SSD1306 driver)  
  - *Alternative:* 16x2 LCD with I2C Adapter

- **LED Indicators:**  
  - 5mm LEDs in red, yellow, and green  
  - Current-limiting resistors (220–330Ω)

- **Prototyping Hardware:**  
  - Breadboard (e.g., 400-point)  
  - Jumper wires (male-to-male and male-to-female)

- **Power Supply:**  
  - 9V battery with barrel jack adapter or USB cable

- **Miscellaneous:**  
  - 10kΩ resistor (if using a raw DHT22 sensor)

## Wiring Overview

- **DHT22 Sensor:**  
  - **VCC:** Connect to Arduino 5V  
  - **GND:** Connect to Ground  
  - **Data:** Connect to a digital pin (e.g., Pin 2), with a 10kΩ pull-up resistor between VCC and Data if needed.

- **OLED Display (I2C):**  
  - **SDA:** Connect to A4 (on Uno)  
  - **SCL:** Connect to A5 (on Uno)  
  - **VCC & GND:** Connect to 3.3V/5V and Ground respectively.

- **LEDs:**  
  - Connect each LED with a resistor to digital pins (e.g., Green → Pin 3, Yellow → Pin 4, Red → Pin 5).
 

Installation & Setup

1. Clone the Repository:

git clone https://github.com/Roay_Abdullah/arduino-temperature-indicator.git


2. Install Required Libraries:

DHT Sensor Library
Adafruit SSD1306
Adafruit GFX
Use the Arduino IDE’s Library Manager to install these libraries.



3. Connect Your Hardware:
Use the wiring overview to connect your DHT22 sensor, OLED display, and LED indicators.


4. Upload the Code:
Open the sketch in the Arduino IDE and upload it to your Arduino board.



*Contributing*

Contributions, suggestions, and improvements are welcome! Feel free to fork this repository and submit pull requests. For major changes, please open an issue to discuss what you would like to alter.

