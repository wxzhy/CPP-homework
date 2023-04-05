#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
int Person::count = 0;
Person::Person()
{
	count++;
}

Person::Person(const char* name, char gender, Date birthday) {
	strcpy(this->name, name);
	this->gender = gender;
	this->birthday = birthday;
	count++;
}

void Person::Print()
{
	string s = (gender == 'm' ? "��" : "Ů");
	cout << "����:" << name << ";�Ա�: " << s << "; ����:";
	birthday.Print();
}

int Person::GetCashFlow()
{
	return 0;
}
