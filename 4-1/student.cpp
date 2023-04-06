#include "student.h"
#include<iostream>
using namespace std;
student::student()
{
	id = 0;
	age = 0;
	cout << "constructor" << endl;
}

student::student(string name, int age, int id)
{
	this->name = name;
	this->age = age;
	this->id = id;
	cout << "constructor" << endl;
}

student::~student()
{
	cout << "deconstructor" << endl;
}

void student::display()
{
	cout << name << '\t' << age << '\t' << id << endl;
}
