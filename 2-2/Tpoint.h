#pragma once
#include <iostream>

using namespace std;
class Tpoint {

private:
    float x, y, z;
public:
    void setData(float a, float b, float c) {
        x = a;
        y = b;
        z = c;
    }

    void position() {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};


