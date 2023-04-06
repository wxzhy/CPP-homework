#pragma once
#include<string>
using namespace std;
class student
{
	string name;
	int age, id;
public:
	student();
	student(string name, int age, int id);
	~student();
	void display();
};

