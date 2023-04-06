#include<iostream>
#include<fstream>
#include "Student.h"
#define MAX 100
using namespace std;
void save() {
	int count;
	cout << "输入学生人数：";
	cin >> count;
	Student s;
	ofstream out("student.dat", ios::binary);
	if (out.fail()) {
		cout << "写入失败！" << endl;
		exit(0);
	}
	for (int i = 0; i < count; i++) {
		s.set();
		out.write((char *)&s, sizeof(Student));
	}
	out.close();
}
void load() {
	int count=0;
	ifstream in("student.dat", ios::binary);
	Student s;
	if (in.fail()) {
		cout << "读取失败！" << endl;
		exit(0);
	}
	in.read((char*)&s, sizeof(Student));
	while (!in.eof()) {
		s.display();
		in.read((char*)&s, sizeof(Student));
	}
}
int main() {
	save();
	load();
	return 0;
}