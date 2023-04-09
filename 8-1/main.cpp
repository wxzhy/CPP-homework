#include<iostream>
#include"Number.h"
using namespace std;
int main() {
	Number n1(10);
	Number n2(20);
	n1 += n2;
	cout << n1.get() << endl;
	++n1;
	cout << n1.get() << endl;
	Number n3 = n1++;
	cout << n1.get() << endl;
	cout << n3.get() << endl;
	--n1;
	cout << n1.get() << endl;
	Number n4 = n1--;
	cout << n1.get() << endl;
	cout << n4.get() << endl;
	return 0;
}