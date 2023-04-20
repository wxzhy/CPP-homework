#pragma once
const auto PI = 3.1415926;

class TBall {
private:
    float r;
public:
    void setRadius(float a) {
        r = a;
    }

    float calcVolume() {
        return 4.0 * PI * r * r * r / 3.0;
    }

    float calcArea() {
        return 4.0 * PI * r * r;
    }
};

