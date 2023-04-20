#include "Student.h"

int Student::tuition = 5000;

Student::Student() :Person()
{
	count++;
	stuDuration = 0;
}

Student::Student(const char* name, char gender, Date birthday, int id) :Person(name, gender, birthday)
{
	stuId = id;
	count++;
	stuDuration = 0;
}

void Student::Print()
{
	Person::Print();
	cout << "学号:" << stuId << "; 就读时间:" << stuDuration << "年" << endl;
}
