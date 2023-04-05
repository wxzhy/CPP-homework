#include<iostream>
using namespace std;
int main()
{
	int x = 6, y;
	cout << "x=" << x << endl;
	y = ++x;
	cout << "x=" << x << " y = " << y << endl;
	x = 6; y = x++;
	cout << "x=" << x << " y = " << y << endl;
	x = 6; y = x--;
	cout << "x=" << x << " y = " << y << endl;
	x = 6; y = --x;
	cout << "x=" << x << " y = " << y << endl;
	return 0;
}
