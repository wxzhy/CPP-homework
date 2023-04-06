#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("file1.txt");
    ofstream out("out.txt");
    if (in.fail()) {
        cout << "打开失败" << endl;
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
    in.open("file2.txt");
    if (in.fail()) {
        cout << "打开失败" << endl;
        exit(0);
    }
    while (!in.eof())
    {
        char c;
        in.get(c);
        c = toupper(c);
        out << c;
    }
    out.close();
    in.close();
    in.open("out.txt");
    if (in.fail()) {
        cout << "打开失败" << endl;
        exit(0);
    }
    while (!in.eof())
    {
        char c;
        in.get(c);
        cout << c;
    }
    in.close();
    return 0;
}
