#include <iostream>

using namespace std;
int main() {
    float faHeight, moHeight, height=0.0;
    char sex, sports, diet;
    cout << "输入性别(M/F)：";
    cin >> sex;
    cout << "依次输入父母身高：";
    cin >> faHeight >> moHeight;
    cout << "是否喜爱体育锻炼(Y/N)：";
    cin >> sports;
    cout << "是否有良好的卫生饮食习惯(Y/N)：";
    cin >> diet;
    if (sex == 'M')
        height = (faHeight + moHeight) * 0.54;
    else if (sex == 'F')
        height = (faHeight * 0.923 + moHeight) / 2;
    if (sports == 'Y')
        height *= 1.02;
    if (diet == 'Y')
        height *= 1.015;
    cout << "你的身高预计为：" << height<<"cm"<<endl;
    return 0;
}
