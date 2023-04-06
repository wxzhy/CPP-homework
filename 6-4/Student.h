#pragma once
#include<cstring>
#include<iostream>
using namespace std;
class  Student {
	int id;
	char name[16];
public:
	// ������Ա������������Ҫ��д, �繹�캯�����������캯��
	Student() {
		id = 0;
	}
	Student(int id, const char* name) {
		this->id = id;
		strcpy(this->name, name);
	}
	Student(const Student& s) {
		id = s.id;
		strcpy(name, s.name);
	}
	Student& operator=(Student& s) {
		id = s.id;
		strcpy(name, s.name);
		return *this;
	}
	void print() {
		cout << id << '\t' << name << endl;
	}
};


