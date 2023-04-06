#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
#define MAX 100
using namespace std;
int main() {
	char s1[2*MAX], s2[MAX];
	cout << "输入两个字符串：";
	cin >> s1 >> s2;
	strcat(s1, s2);
	int len = strlen(s1);
	for(int i=0;i<len-1;++i)
		for (int j = 0; j < len-1; ++j) {
			if (*(s1+j) > *(s1+j+1)) {
				swap(*(s1 + j), *(s1 + j + 1));
			}
		}
	cout << "合并后的字符串为：" << s1 << endl;
	return 0;
}