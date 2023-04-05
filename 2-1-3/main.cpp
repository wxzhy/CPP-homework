#include<iostream>
using namespace std;
int main() {
	double a, b, c, avg;
	cout << "输入三个数：";
	cin >> a >> b >> c;
	avg = (a + b + c) / 3;
	cout << "平均值为：" << avg << endl;
	return 0;
}