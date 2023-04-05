#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int year = 1990, int month = 1, int day = 1);
	Date(const Date& r);
	void Print();
};

