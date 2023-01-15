#ifndef SOILMOISTURE_H
#define SOILMOISTURE_H

class SoilMoisture {
    public:
        SoilMoisture();
        int getValue();
        void setValue(int value);

    private:
        int value;
};

#endif

