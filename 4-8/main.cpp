#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student s[5]={Student(1,96.0),Student(2,76.0),Student(3,87.0),Student(4,56.0),Student(5,100.0)}, * p = s;
	p->print();
	(p + 2)->print();
	(p + 4)->print();
	return 0;
}