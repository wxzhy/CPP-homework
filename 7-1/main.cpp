#include "Date.h"
#include "Person.h"
#include<iostream>
#include "Student.h"
using namespace std;
void Test1()
{
    Person p1, p2("zhang", 'f', Date(1991, 1, 1)), p3(p2);
    p3.Print();//输出: “姓名:zhang;性别: 女;生日:1991-1-1;
    cout << "收支为：" << p3.GetCashFlow() << "元" << endl; //输出：0元
    Person* p = new Person("li", 'm', Date(1990, 2, 2));//创建堆对象（调用有参构造）
    p -> Print();//输出堆对象基本信息
    delete p;//释放堆对象
}
void Test2()
{

    Student s1, s2("zhang", 'm', Date(1992, 1, 1), 1001);

    s2.Print(); //输出如下:
    //姓名:zhang; 性别: 男; 生日:1992-1-1;
    //学号:1001; 就读时间:0年

    cout << endl;
    s2.SetDuration(2);
    s2.Print();
    //姓名:zhang; 性别: 男; 生日:1992-1-1;
    //学号:1001; 就读时间:2年

    cout << endl << "学费支出" << s2.GetCashFlow() << "元" << endl;
    //学费支出：10000元

    Student* p = new Student; //堆对象创建（调用无参构造）
    delete p;//释放堆对象
}

int main() {
    Test1();
    Test2();
    return 0;
}

