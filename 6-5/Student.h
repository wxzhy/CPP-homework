#pragma once
#include<cstring>
using namespace std;
class Student
{
	int id;
	char name[20];
	float score;
public:
	void set();
	void display();
	bool find(char *s);

};

