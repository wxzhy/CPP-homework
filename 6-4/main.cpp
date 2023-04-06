#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student s1(100, "Àî"), s2(101, "Íõ"), s3(102, "ÕÂ");
	s3 = s1;
	s1.print();
	s2.print();
	s3.print();
	return 0;
}