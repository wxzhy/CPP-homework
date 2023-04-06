#include "Student.h"
#include<iostream>
void Student::set()
{
	cout << "输入学号：";
	cin >> id;
	cout << "输入姓名：";
	cin >> name;
	cout << "输入成绩：";
	cin >> score;
}

void Student::display()
{
	cout << id << '\t' << name << '\t' << score << endl;
}

bool Student::find(char *s)
{
	if (strstr(name,s))
		return true;
	else
		return false;
}
