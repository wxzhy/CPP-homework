#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream in("file.txt");
	string s;
	if (in.fail()) {
		cout << "打开失败！" << endl;
		exit(0);
	}
	int count = 0;
	while (!in.eof())
	{
		in >> s;
		if (s == "is" || s == "is." || s == "is," || s == "Is")
			count++;
	}
	cout << "共有" << count << "个" << endl;
	return 0;
}