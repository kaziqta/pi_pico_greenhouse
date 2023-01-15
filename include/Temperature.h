#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
    public:
        Temperature();
        float getValue();
        void setValue(float value);

    private:
        float value;
};

#endif

