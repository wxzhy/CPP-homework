#include <iostream>
#include"Student.h"
using namespace std;
int main()
{
    Student a, b, c;
    a.account(99);
    b.account(77);
    c.account(43);
    cout << "Sum:" << a.sum() << endl;
    cout << "Average:" << c.average() << endl;
    return 0;
}
