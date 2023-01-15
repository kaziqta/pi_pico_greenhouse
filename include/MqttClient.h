#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H

class MqttClient {
    public:
        MqttClient();
        void connect(const char* host, int port);
        void publish(const char* topic, const char* message);
};

#endif
