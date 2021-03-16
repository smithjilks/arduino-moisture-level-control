# Controlling Soil moisture level with a Submersible pump and moisture level sensor

# Description
The function of the system is to maintain 50% soil moisture level. This is achieved by monitoring the moisture content and activating a water pump whenever the moisture content falls below the required amount.

# Components
Arduino Mega 2560
Amphibious Micro Submersible DC Motor Water Pump
FC-28 soil moisture sensor
SRD-05VDC-SL-C Relay
LM2596 DC-DC Buck Converter Step-down Power Module
S-250-12 Power Supply

# Specifications
## FC-28 soil moisture sensor

Input Voltage: 3.3–5V
Output Voltage: 0–4.2V
Input Current: 35mA
Output Signal: both analog and digital

**Pin-out**

VCC: Power
A0: Analog Output
D0: Digital Output
GND: Ground


## Amphibious Micro Submersible DC Motor Water Pump

Input Voltage: 9V DC
Power Rating: 0.1 kW
Motor Power: 0.1 hp

**Pin-out**

VCC: Power
GND: Ground


## SRD-05VDC-SL-C Relay

Input Voltage: 250V AC
Output Voltage: 28V DC
Input Current: 10A
Output Curent: 10A


**Pin-out**

NC: Normally closed 120-240V terminal
NO: Normally open 120-240V terminal
C: Common terminal
Ground: Connects to the ground pin on the Arduino
5V Vcc: Connects the Arduino’s 5V pin
Signal: Carries the trigger signal from the Arduino that activates the relay


## LM2596 DC-DC Buck Converter Step-down Power Module

Input Voltage: 4.5 - 40V
Output Voltage: 1.5 - 35V (adjustable)
Output Current: Rated current 2A, maximum 3A (Additional heat sink is required)
Conversion Efficiency: Up to 92%
Potentiometer Adjustment Direction: Clockwise (increase), Anti-clockwise (decrease)


**Pin-out**

+Vcc In
-Vcc In
-Vcc Out
+Vcc Out


## S-250-12 Power Supply

AC Input: 110/220V +/- 15%  50/60 Hz
DC Output: 12V 20A

**Pin-out**

Input : Live 
        Neutral
        Earth   
Output : Com
         + V


