#include<fstream>
#include<iostream>
using namespace std;
int main() {
	fstream in("file1.txt", ios::in), out("file2.txt", ios::app);
	if (in.fail() || out.fail()) {
		cout << "打开失败！" << endl;
		exit(0);
	}
	while (!in.eof()) {
		char c;
		in.get(c);
		out << c;
	}
	in.close();
	out.close();
	cout << "成功！" << endl;
	return 0;
}