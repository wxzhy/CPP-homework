#pragma once
#include<iostream>
using namespace std;
class  Date {
	int d, m, y; //分别表示天、月、年
public:
	// 其它成员函数，根据需要填写,如构造函数、拷贝构造函数
	Date(int year=1900 ,int month = 1, int day = 1 ) {
		d = day;
		m = month;
		y = year;
	}
	Date(const Date& date) {
		d = date.d;
		m = date.m;
		y = date.y;
	}
	Date& operator++() {
		d++;
		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			days[1]++;
		if (d > days[m-1]) {
			d -= days[m-1];
			m++;
		}
		if (m > 12) {
			m -= 12;
			y++;
		}
		return *this;
	}
	Date operator++(int) {
		int year = y, month = m, day = d;
		d++;
		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			days[1]++;
		if (d > days[m - 1]) {
			d -= days[m - 1];
			m++;
		}
		if (m > 12) {
			m -= 12;
			y++;
		}
		return Date(year,month,day);
	}
	void print() {
		cout << y << '/' << m << '/' << d << endl;
	}
};

