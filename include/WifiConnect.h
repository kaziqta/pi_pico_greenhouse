#ifndef WIFICLIENT_H
#define WIFICLIENT_H

class WifiClient {
    public:
        WifiClient();
        void connect(const char* ssid, const char* password);
};

#endif

