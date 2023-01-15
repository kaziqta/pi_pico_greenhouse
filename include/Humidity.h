#ifndef HUMIDITY_H
#define HUMIDITY_H

class Humidity {
    public:
        Humidity();
        float getValue();
        void setValue(float value);

    private:
        float value;
};

#endif

