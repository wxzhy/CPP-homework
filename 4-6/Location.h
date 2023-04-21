#pragma once
class Location
{
public:
	Location(double, double);              		 //构造函数
	double Getx();                             //成员函数，取x坐标的值
	double Gety();                             //成员函数，取y坐标的值
	double distance(Location&);                  //成员函数，求给定两点之间的距离
	friend double _distance(Location&, Location&);  //友元函数，求给定两点之间的距离
private:
	double x, y;

};

