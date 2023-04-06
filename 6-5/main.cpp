#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student s1(100, "ед"), s2(101, "Эѕ");
	s1.print();
	s2.print();
}