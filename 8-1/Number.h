#pragma once
class  Number {
	int  value;
public:
	Number(int i = 0) { value = i; }
	// ������Ա������������Ҫ��д
	Number& operator+=(Number& n) {
		value += n.value;
		return *this;
	}
	Number& operator++() {
		value++;
		return *this;
	}
	Number operator++(int) {
		int temp = value;
		value++;
		return Number(temp);
	}
	Number& operator--() {
		value--;
		return *this;
	}
	Number operator--(int) {
		int temp = value;
		value--;
		return Number(temp);
	}
	int get() { return value; }

};

