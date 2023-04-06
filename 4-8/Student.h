#pragma once
#include<iostream>
using namespace std;
class Student
{
	int id;
	float score;
public:
	Student(int id=0, float score=0.0) {
		this->id = id;
		this->score = score;
	}
	void print() {
		cout << id << '\t' << score << endl;
	}
};

