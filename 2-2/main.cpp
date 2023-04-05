#include<iostream>
#include "Tpoint.h"
#include "TBall.h"
using namespace std;
int main() {
    Tpoint point;
    TBall ball;
    float a, b, c, r;
    cout << "Enter x,y,z:";
    cin >> a >> b >> c;
    point.setData(a, b, c);
    point.position();
    cout << "Enter r:";
    cin >> r;
    ball.setRadius(r);
    cout << "S=" << ball.calcArea() << endl;
    cout << "V=" << ball.calcVolume() << endl;
    return 0;
}