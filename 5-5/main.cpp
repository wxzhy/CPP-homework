#include<iostream>
#include<fstream>
#include "Student.h"
#define MAX 100
using namespace std;
void save() {
	int count;
	cout << "����ѧ��������";
	cin >> count;
	Student s;
	ofstream out("student.dat", ios::binary);
	if (out.fail()) {
		cout << "д��ʧ�ܣ�" << endl;
		exit(0);
	}
	for (int i = 0; i < count; i++) {
		s.set();
		out.write((char*)&s, sizeof(Student));
	}
	out.close();
}
int load(Student s[]) {
	int count = 0;
	ifstream in("student.dat", ios::binary);

	if (in.fail()) {
		cout << "��ȡʧ�ܣ�" << endl;
		exit(0);
	}
	in.read((char*)s, sizeof(Student));
	while (!in.eof()) {
		s[count].display();
		in.read((char*)&s[++count], sizeof(Student));
	}
	in.close();
	return count;
}
void find(char* str) {
	ifstream in("student.dat", ios::binary);
	Student s;
	if (in.fail()) {
		cout << "��ȡʧ�ܣ�" << endl;
		exit(0);
	}
	in.read((char*)&s, sizeof(Student));
	while (!in.eof())
	{
		if (s.find(str))
			s.display();
		in.read((char*)&s, sizeof(Student));
	}
	in.close();
}
int main() {
	save();
	Student s[MAX];
	int count=load(s);
	char str[10];
	cout << "����Ҫ��ѯ��������";
	cin >> str;
	find(str);
	int id;
	for (int i = 0; i < count; ++i)
		s[i].display();
	cout << "�����޸���ţ�";
	cin >> id;
	s[id - 1].set();
	for (int i = 0; i < count; ++i)
		s[i].display();
	cout << "����ɾ����ţ�";
	cin >> id;
	for (int i = id; i < count; ++i)
		s[i - 1] = s[i];
	count--;
	for (int i = 0; i < count; ++i)
		s[i].display();
	return 0;
}