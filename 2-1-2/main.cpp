#include<iostream> 
using namespace std;
int main()
{
	int a = 20, b = 6;
	a += a; 
	cout << a << endl;
	a = 20;
	a -= a;
	cout << a << endl;
	a = 20;
	a *= a;
	cout << a << endl;
	a = 20;
	a /= b;
	cout << a << endl;
	a = 20;
	a %= b;
	cout << a << endl;
	a = 20;
	a = a - b;
	cout << a << endl;
	a = 10;
	b = 4;
	a += a *= a -= a / b; 
	cout << a << endl;
	return 0;
}
