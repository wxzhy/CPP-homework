#pragma once
#include <iostream>
using namespace std;
class Complex
{
	double real, imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double r, double i) {
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

