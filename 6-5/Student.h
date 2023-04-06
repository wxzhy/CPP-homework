#pragma once
#include<cstring>
#include<iostream>
using namespace std;
class Student
{
    int id;
    char* name;
public:
    // ������Ա������������Ҫ��д���繹�캯�����������캯��
    Student() {
        id = 0;
		name = nullptr;
}
    Student(int id, const char* name) {
        this->id = id;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name,name);
    }
    Student(const Student& s) {
        id = s.id;
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }
    void print() {
		cout << id << '\t' << name << endl;
    }
};

