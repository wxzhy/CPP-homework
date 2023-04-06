#pragma once
#include <iostream>
using namespace std;
class Complex
{
	double real, imag;
public:
	// ������Ա������������Ҫ��д, �繹�캯�����������캯��
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

