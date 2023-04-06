#pragma once
#include <ostream>
using namespace std;
class Point {
	float x, y;
public:
	// 其它成员函数，根据需要填写, 如构造函数、拷贝构造函数
	Point(float x=0.0, float y=0.0) {
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