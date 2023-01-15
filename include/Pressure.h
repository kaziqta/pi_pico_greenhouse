#ifndef PRESSURE_H
#define PRESSURE_H

class Pressure {
    public:
        Pressure();
        float getValue();
        void setValue(float value);

    private:
        float value;
};

#endif

