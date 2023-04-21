#include<iostream>
#include"Location.h"
using namespace std;
int main() {
	Location a(-3, -5), b(-1, 6);
	double d1 = a.distance(b), d2 = _distance(a, b);
	cout << "A(" << a.Getx() << ',' << a.Gety() << ')' << endl;
	cout << "B(" << b.Getx() << ',' << b.Gety() << ')' << endl;
	cout << "Distance1=" << d1 << endl;
	cout << "Distance2=" << d2 << endl;
	return 0;
}