#include <iostream>
#include<iomanip>
#include"Sale.h"
using namespace std;
int main()
{
	Sale s;
	s.getData();
	while (true) {
		cout << "1.向购物车中增加书籍\t2.查看购物车\t3.结算" << endl;
		cout << "请输入：";
		int c;
		cin >> c;
		switch (c) {
		case 1:s.addBook(); break;
		case 2:s.getBuy(); break;
		case 3:s.getCash(); goto end;
		default:cout << "输入错误！" << endl;
		}
	}

end:
	s.putData();
	return 0;
}

