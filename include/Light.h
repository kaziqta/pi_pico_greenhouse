#ifndef LIGHT_H
#define LIGHT_H

class Light {
    public:
        Light();
        int getValue();
        void setValue(int value);

    private:
        int value;
};

#endif

