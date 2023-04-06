#pragma once
#include <iostream>
using namespace std;
class Complex
{
	double real, imag;
public:
	// 其它成员函数，根据需要填写, 如构造函数、拷贝构造函数
	Complex(double r=0.0, double i=0.0) {
		real = r;
		imag = i;
	}
	Complex(const Complex& c) {
		real = c.real;
		imag = c.imag;
	}
	Complex& operator+(Complex &c) {
		real += c.real;
		imag += c.imag;
		return *this;
	}
	Complex& operator-(Complex& c) {
		real -= c.real;
		imag -= c.imag;
		return *this;
	}
	void print() {
		cout << real << '+' << imag << 'i'<<endl;
	}
};

