#include<iostream>
using namespace std;
int calcFail(int score[], int n) {
	int count = 0;
	cout << "������ѧ��Ϊ��" << endl;
	for (int i = 0; i < n; i++)
		if (score[i] < 60) {
			cout << i + 1 << '\t' << score[i] << endl;
			count++;
		}
	return count;
}
int calcGood(int score[], int n, int avg) {
	int count = 0;
	cout << "����ƽ����ѧ��Ϊ��" << endl;
	for (int i = 0; i < n; i++)
		if (score[i] > avg) {
			cout << i + 1 << '\t' << score[i] << endl;
			count++;
		}
	return count;
}
void stat(int score[], int n) {
	int a[6] = { 0 };
	cout << "��������ѧ������Ϊ��"<<endl;
	for (int i = 0; i < n; i++) {
		if (score[i] < 60)
			a[0]++;
		else if (score[i] < 70)
			a[1]++;
		else if (score[i] < 80)
			a[2]++;
		else if (score[i] < 90)
			a[3]++;
		else if (score[i] < 100)
			a[4]++;
		else if (score[i] == 100)
			a[5]++;
	}
	for(int i = 0; i < 6; i++){
		cout << "��" << i + 1 << "����" << a[i] << "�ˣ�ռ��" << (float)a[i]*100 / n <<'%' << endl;
	}

}
int main() {
	int score[30] = { 0 },n=0;
	do {
		cout << "�����" << n+1 << "λѧ���ɼ���";
		cin >> score[n];
	} while (score[n++] >= 0);
	score[--n] = 0;
	float sum=0, avg=0;
	for (int i = 0; i < n; i++)
		sum += score[i];
	avg = sum / n;
	int a = calcFail(score, n);
	cout << "����" << a << "��" << endl;
	a = calcGood(score, n, avg);
	cout << "����" << a << "��" << endl;
	stat(score, n);
	return 0;


}