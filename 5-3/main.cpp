#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream in("file.txt");
	string s;
	if (in.fail()) {
		cout << "��ʧ�ܣ�" << endl;
		exit(0);
	}
	int count = 0;
	while (!in.eof())
	{
		in >> s;
		if (s == "is" || s == "is." || s == "is," || s == "Is")
			count++;
	}
	cout << "����" << count << "��" << endl;
	return 0;
}