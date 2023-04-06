#include "Location.h"
#include<cmath>

Location::Location(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Location::Getx()
{
	return x;
}

double Location::Gety()
{
	return y;
}

double Location::distance(Location& p)
{
	return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
}

double distance(Location& p1, Location& p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
