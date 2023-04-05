#pragma once
class Rect
{
protected:
    float width, length, area;
public:
    Rect() { width = length = area = 0.0f; }
    Rect(float w, float l) {
        width = w;      length = l;
        area = width * length;
    }
    virtual float getArea() { return  area; }
    float getLen() { return  length; }
    float getWidth() { return  width; }

};

