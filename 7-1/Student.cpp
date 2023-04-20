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
	cout << "ѧ��:" << stuId << "; �Ͷ�ʱ��:" << stuDuration << "��" << endl;
}
