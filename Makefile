CC = g++
CFLAGS = -Wall -std=c++11
UF2_CONV = pico-sdk/uf2/utils/uf2conv.py

all: greenhouse.uf2

greenhouse: src/Greenhouse.cpp src/Humidity.cpp src/Light.cpp src/Pressure.cpp src/SoilMoisture.cpp src/Temperature.cpp src/WifiClient.cpp src/MqttClient.cpp main.cpp
	$(CC) $(CFLAGS) -o bin/greenhouse src/Greenhouse.cpp src/Humidity.cpp src/Light.cpp src/Pressure.cpp src/SoilMoisture.cpp src/Temperature.cpp src/WifiClient.cpp src/MqttClient.cpp main.cpp -lwiringPi -lpaho-mqttpp3

greenhouse.uf2: bin/greenhouse
	$(UF2_CONV) -b 0x2000 -c -o $@ $<

clean:
	rm -f bin/greenhouse greenhouse.uf2

