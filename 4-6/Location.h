#pragma once
class Location
{
public:
	Location(double, double);              		 //���캯��
	double Getx();                             //��Ա������ȡx�����ֵ
	double Gety();                             //��Ա������ȡy�����ֵ
	double distance(Location&);                  //��Ա���������������֮��ľ���
	friend double _distance(Location&, Location&);  //��Ԫ���������������֮��ľ���
private:
	double x, y;

};

