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
	cout << "����������";
	cin >> str;
	int i = 0, num = 0, j = 0;
	for (; book[i].getId(); i++) {
		if (book[i].getName().find(str) != -1) {
			book[i].print();
			cout << "����������";
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
	cout << "����" << buycount << "����\t" << total << "Ԫ" << endl;
}

void Sale::getCash()
{
	cout << "����Ҫ֧��" << total << "Ԫ" << endl;
}

void Sale::getData()
{
	ifstream in("books.txt");
	if (in.fail()) {
		cout << "��ȡʧ�ܣ�" << endl;
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
		cout << "д��ʧ�ܣ�" << endl;
		exit(0);
	}
	for (int i = 0; book[i].getId(); ++i) {
		out << book[i];
	}
}
