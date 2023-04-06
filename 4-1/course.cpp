#include "course.h"
#include<iostream>
using namespace std;
course::course(const course& c)
{
	name = c.name;
	credit = c.credit;
}

void course::display()
{
	cout << name << '\t' << credit << endl;
}
