#include "Date.h"
#include "Person.h"
#include<iostream>
#include "Student.h"
using namespace std;
void Test1()
{
    Person p1, p2("zhang", 'f', Date(1991, 1, 1)), p3(p2);
    p3.Print();//���: ������:zhang;�Ա�: Ů;����:1991-1-1;
    cout << "��֧Ϊ��" << p3.GetCashFlow() << "Ԫ" << endl; //�����0Ԫ
    Person* p = new Person("li", 'm', Date(1990, 2, 2));//�����Ѷ��󣨵����вι��죩
    p -> Print();//����Ѷ��������Ϣ
    delete p;//�ͷŶѶ���
}
void Test2()
{

    Student s1, s2("zhang", 'm', Date(1992, 1, 1), 1001);

    s2.Print(); //�������:
    //����:zhang; �Ա�: ��; ����:1992-1-1;
    //ѧ��:1001; �Ͷ�ʱ��:0��

    cout << endl;
    s2.SetDuration(2);
    s2.Print();
    //����:zhang; �Ա�: ��; ����:1992-1-1;
    //ѧ��:1001; �Ͷ�ʱ��:2��

    cout << endl << "ѧ��֧��" << s2.GetCashFlow() << "Ԫ" << endl;
    //ѧ��֧����10000Ԫ

    Student* p = new Student; //�Ѷ��󴴽��������޲ι��죩
    delete p;//�ͷŶѶ���
}

int main() {
    Test1();
    Test2();
    return 0;
}

