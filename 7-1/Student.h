#pragma once
#include"Person.h"
const int tuition = 5000;
class Student:public Person
{
	int stuId, stuDuration;
public:

	Student();
	Student(const char* name, char gender, Date birthday, int id);
	void Print();
	void SetDuration(int d) { stuDuration = d; }
	int GetCashFlow() { return stuDuration * tuition; }
};

