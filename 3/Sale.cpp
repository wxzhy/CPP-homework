#include "Sale.h"
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
Sale::Sale()
{
	buycount = 0;
	total = 0;
}

void Sale::addBook()
{
	string str;
	cout << "输入书名：";
	cin >> str;
	int i = 0, num = 0, j = 0;
	for (; book[i].getId(); i++) {
		if (book[i].getName().find(str) != -1) {
			book[i].print();
			cout << "输入数量：";
			cin >> num;
			book[i].sell(num);
			for (; buy[j].getId(); j++)
				buy[j] = book[i];
			buy[j].setCount(num);
			buycount += num;
			total += num * book[i].getPrice();
			break;
		}
	}
}

void Sale::getBuy()
{
	for (int i = 0; buy[i].getId(); ++i) {
		buy[i].print();
	}
	cout << "共计" << buycount << "本，\t" << total << "元" << endl;
}

void Sale::getCash()
{
	cout << "您需要支付" << total << "元" << endl;
}

void Sale::getData()
{
	ifstream in("books.txt");
	if (in.fail()) {
		cout << "读取失败！" << endl;
		exit(0);
	}
	int i = 0;
	while (!in.eof())
	{
		in >> book[i++];
	}
}

void Sale::putData()
{
	ofstream out("books.txt");
	if (out.fail()) {
		cout << "写入失败！" << endl;
		exit(0);
	}
	for (int i = 0; book[i].getId(); ++i) {
		out << book[i];
	}
}
