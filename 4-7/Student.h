#pragma once
class Student
{
	float score;
	static float total_score;
	static int count;
public:
	void account(float score) { 
		this->score = score;
		total_score += score;
		count++;
	}
	static float sum() { return total_score; }
	static float average() { return total_score / count; }
};
float Student::total_score = 0;
int Student::count = 0;
