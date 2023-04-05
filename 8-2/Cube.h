#pragma once
#include"Rect.h"
class Cube :public Rect {
	float height;
public:
	Cube() :Rect() { height = 0.0f; }
	Cube(float w, float l, float h) :Rect(w, l) { height = h; }
	float getArea() { return  2*(area+height*(width+length)); }
};