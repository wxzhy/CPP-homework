#include "Date.h"
Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(const Date& r)
{
	year = r.year;
	month = r.month;
	day = r.day;
}
void Date::Print()
{
	cout << year << '-' << month << '-' << day << endl;
}
