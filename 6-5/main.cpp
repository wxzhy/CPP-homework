#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student s1(100, "��"), s2(101, "��");
	s1.print();
	s2.print();
}