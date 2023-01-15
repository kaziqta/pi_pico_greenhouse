#include <wiringPi.h>
#include <wiringPiSPI.h>
#include "Greenhouse.h"

int main() {
    // setup code for wiringPi
    wiringPiSetup();
    wiringPiSPISetup(0, 500000);

    Greenhouse greenhouse;
    const char* ssid = "dummy_ssid";
    const char* password = "dummy_password";
    const char* host = "mqtt.dummy.com";
    int port = 1883;

    greenhouse.connectWifi(ssid, password);
    greenhouse.connectMqtt(host, port);

    while(1) {
        greenhouse.readSensors();
        greenhouse.logData();
        greenhouse.publishData();
        delay(300000); // delay 5 minutes
    }

    return 0;
}

