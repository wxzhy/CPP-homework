#include <iostream>

using namespace std;
int main() {
    float faHeight, moHeight, height=0.0;
    char sex, sports, diet;
    cout << "�����Ա�(M/F)��";
    cin >> sex;
    cout << "�������븸ĸ��ߣ�";
    cin >> faHeight >> moHeight;
    cout << "�Ƿ�ϲ����������(Y/N)��";
    cin >> sports;
    cout << "�Ƿ������õ�������ʳϰ��(Y/N)��";
    cin >> diet;
    if (sex == 'M')
        height = (faHeight + moHeight) * 0.54;
    else if (sex == 'F')
        height = (faHeight * 0.923 + moHeight) / 2;
    if (sports == 'Y')
        height *= 1.02;
    if (diet == 'Y')
        height *= 1.015;
    cout << "������Ԥ��Ϊ��" << height<<"cm"<<endl;
    return 0;
}
