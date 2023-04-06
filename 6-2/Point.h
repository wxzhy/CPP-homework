#pragma once
#include <ostream>
using namespace std;
class Point {
	float x, y;
public:
	// ������Ա������������Ҫ��д, �繹�캯�����������캯��
	Point() {
		x = 0;
		y = 0;
	}
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
	Point(const Point& p) {
		x = p.x;
		y = p.y;
	}
	bool operator==(Point& p) {
		if (x == p.x && y == p.y)
			return true;
		else
			return false;
	}
	bool operator!=(Point& p) {
		if (x != p.x || y != p.y)
			return true;
		else
			return false;
	}
	bool operator>(Point& p) {
		if (x > p.x)
			return true;
		else if (x == p.x && y > p.y)
			return true;
		else
			return false;
	}
	friend ostream& operator<<(ostream& os, const Point& p) {
		os << "(" << p.x << ", " << p.y << ")";
		return os;
	}
};