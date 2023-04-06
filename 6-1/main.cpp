#include<iostream>
#include"Complex.h"
using namespace std;
int main() {
	Complex a(1, 2), b(6, 3), c(a);
	a.print();
	a = b + c;
	a.print();
	a = b - c;
	a.print();
	b.print();
	c.print();
	return 0;
}