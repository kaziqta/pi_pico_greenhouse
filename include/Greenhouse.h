#ifndef GREENHOUSE_H
#define GREENHOUSE_H

#include <wiringPi.h>
#include <wiringPiSPI.h>
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"
#include "Light.h"
#include "SoilMoisture.h"
#include "WifiClient.h"
#include "MqttClient.h"

class Greenhouse {
    public:
        Greenhouse();
        ~Greenhouse();
        void connectWifi();
        void connectMqtt();
        void readSensors();
        void logData();
        void publishData();

    private:
        Temperature temperature;
        Humidity humidity;
        Pressure pressure;
        Light light;
        SoilMoisture soilMoisture;
        WifiClient wifiClient;
        MqttClient mqttClient;
};

#endif

