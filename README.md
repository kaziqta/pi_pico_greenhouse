# Greenhouse Monitoring

This project provides a solution for monitoring temperature, humidity, atmospheric pressure, light, and soil moisture in a greenhouse. The data is collected by sensors and sent to a remote MQTT broker for telemetry and further analysis.

## Hardware
- Raspberry Pi Pico
- BMP280 sensor for temperature, humidity and atmospheric pressure
- Light sensor
- Soil moisture sensor
- Wifi module

## Software
- C++
- wiringPi library
- Paho MQTT C++ library
- pico-sdk for generating UF2 file for flashing to the Raspberry Pi Pico

## Building and Flashing

1. Clone the repository to your local machine.
2. Install the wiringPi library and Paho MQTT C++ library
3. Install the pico-sdk
4. Create a `bin` folder in the root of the project
5. Run `make` command
6. Run `make clean` to remove the files generated by the make command
7. Run `make greenhouse.uf2` to generate the UF2 file
8. Connect the Raspberry Pi Pico to your computer and put it in bootloader mode
9. Drag and drop the `greenhouse.uf2` file to the Raspberry Pi Pico drive that appears in your file explorer
10. The Raspberry Pi Pico will automatically reboot and run the program

## Usage

The program will automatically connect to wifi using the ssid and password specified in the source code, and connect to the mqtt broker using the host and port specified in the source code. It will then start reading the sensor values and publishing the data to the specified topic in the mqtt broker every 5 minutes

Please make sure to replace the dummy values for ssid, password, host, port and topic with the actual values before building the project.

