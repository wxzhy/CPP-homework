#include<iostream>
#include"Date.h"
using namespace std;
int main() {
	Date d1(2100, 2, 28), d2(2008, 2, 28), d3(2010, 12, 21);
	d1++.print();
	(++d2).print();
	(++d3).print();
	return 0;
}