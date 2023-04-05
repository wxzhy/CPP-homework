#pragma once
#include "Date.h"
#include<string>
#include<cstring>
class Person
{
protected:
	char name[20],gender;
	Date birthday;
	static int count;
public:
	Person();
	Person(const char* name, char gender, Date birthday);
	void Print();
	int GetCashFlow();
};

