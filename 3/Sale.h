#pragma once
#include "BookData.h"
class Sale		//ǰ̨������
{
private:
    int buycount;		//�����������
    double total;		//�ܼ�
    BookData book[1000], buy[100]; //book�������ڴ洢ͼ����Ϣ��buy�������ڴ洢�ͻ������ͼ�����Ϣ
public:
    Sale();		//���캯��
    void addBook();		//���ﳵ�������鼮
    void getBuy();		//�鿴���ﳵ
    void getCash();		//����
    void getData();		//������ļ������ļ��е�ͼ����Ϣ��ȡ���ڴ���
    void putData();		//��ʵ�����ǰ����ͼ����Ϣд������ļ���
};


