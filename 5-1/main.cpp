#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream in("file1.txt", ios::in), out("file2.txt", ios::out);
	if (in.fail() || out.fail()) {
		cout << "��ʧ�ܣ�" << endl;
		exit(0);
	}
	while (!in.eof())
	{
		char c;
		in.get(c);
		c = toupper(c);
		out << c;
	}
	in.close();
	out.close();
	cout << "�ɹ���" << endl;
	return 0;
}