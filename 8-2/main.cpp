#include<iostream>
#include "Rect.h"
#include "Cube.h"
using namespace std;
int main() {
	Rect a(1, 2),*c;
	Cube b(2, 2, 3);
	c = &b;
	cout << "a:" << a.getArea() << '\t' << a.getLen() << '\t' << a.getWidth() << endl;
	cout<<"b:"<<c->getArea()<<'\t'<<b.getLen()<<'\t'<<b.getWidth()<<endl;
	return 0;
}