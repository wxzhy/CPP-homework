#include<iostream>
#include"course.h"
#include"student.h"
using namespace std;
int main() {
	student s1("����", 13, 100), s2("����", 15, 101);
	course c1("����", 1), c2("��ѧ", 2), c3(c1);
	s1.display();
	s2.display();
	c1.display();
	c2.display();
	c3.display();
	return 0;
}