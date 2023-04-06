#pragma once
#include<string>
using namespace std;
class course
{
	string name;
	float credit;
public:
	course() { credit = 0; }
	course(string name, float credit) {
		this->name = name;
		this->credit = credit;
	}
	course(const course& c);
	void display();
};

