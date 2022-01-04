# mini-project1

## TINKER IT HERE
 [project](https://www.tinkercad.com/things/a3ZscvoEgEz-mini-project)

## INTRO
This project is to water plants from garden that might left untouched. plants need water when the soil moisture is low and when heat from the sun is high. combining microcontrollers and gardening is a popular idea. but this project lets users to control the water flow wherever in the world they are. we can host our system to a website and can control watering to the garden.

## COMPONENTS USED
* [Tinker cad software](https://www.tinkercad.com/)
* Arduino Uno
* Dc Motor
* Temperature sensor
* L293D H-bridge motor driver
* LED
* Resistors
* Lcd 16 x 2
* Connecting wires
* Bread board

## CIRCUIT
![circuit](https://user-images.githubusercontent.com/58623178/148010144-71d7166a-149e-4126-87d9-076e336a006b.png)


## CONNECTIONS

- connect ground of Arduino to the negative of the bread board.
- connect 5v supply to the positive of breadboard
- connect ground and positive to other end of bread board
- temperature sensor power pin to positive (i.e. supply) and ground pin to negative(i.e ground), vout pin and connect to any analog pin(a0 to a5), we connect it to a1
- h-bridge motor driver (power pin and enable pin of both sides) --> positive , ground pins --> negative, input and output pair to Arduino digital pin(d10, d11) and dc motor       terminals respectively
- we can connect upto two dc motors, but for this project we will stick to one.
- lcd(16 x 2) has 16 pins 
- Lcd Ground is connected to negative of breadboard
- Lcd power is connected to positive of breadboard
- Lcd contrast is connected to negative of bread
- Lcd register select is connected to digital pin (d2)
- Lcd read/write is connected to negative
- Lcd enable is connected to digital pin (d3)
- Data pins: db0 - db7
- db4 digital pin is connected to digital pin (d4)
- db5 digital pin is connected to digital pin (d5)
- db6 digital pin is connected to digital pin (d6)
- db7 digital pin is connected to digital pin (d7)
- led+ through a resistor connect to negative
- led- is connected to positive


## FUTURE SCOPE

Tinker cad retired its WIFI module support ESP8266, ESP8266 is a WIFI module with which we can communicate over internet. we are planning to add a WIFI module to this existing model or rebuild the same idea with built-in WIFI micro-controllers. we are planning host a website and a mobile application through which end user can operate this device.

## REFERENCE

https://youtu.be/BLWeKrTs_iM
