#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class BookData
{
private:
	int id, count;
	string name, author;
	double price;
public:
	BookData() {
		count = 0;
		id = 0;
		price = 0;
	}
	friend ifstream& operator>>(ifstream& in, BookData& b) {
		in >> b.id >> b.name >> b.author >> b.price >> b.count;
		return in;
	}
	friend ofstream& operator<<(ofstream& out, BookData& b) {
		out << '\t' << b.id << '\t' << b.name << '\t' << b.author << '\t' << b.price <<'\t' << b.count << endl;
		return out;
	}
	int getId() { return id; }
	double getPrice() { return price; }
	string getName() { return name; }
	void setCount(int count) { this->count = count; }
	void sell(int n) { count-=n; }
	void print() { cout << id << '\t' << name << '\t' << author << '\t' << price <<'\t' << count << endl; }
};

