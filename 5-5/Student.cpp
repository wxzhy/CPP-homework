#include "Student.h"
#include<iostream>
void Student::set()
{
	cout << "����ѧ�ţ�";
	cin >> id;
	cout << "����������";
	cin >> name;
	cout << "����ɼ���";
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
