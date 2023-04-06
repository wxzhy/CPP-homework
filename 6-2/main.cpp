#include<iostream>
#include"Point.h"
using namespace std;
int main() {
    Point p1(1, 2), p2(3, 4);
    if (p1 == p2) {
        cout << "p1 == p2" << endl;
    }
    else {
        cout << "p1 != p2" << endl;
    }
    if (p1 != p2) {
        cout << "p1 != p2" << endl;
    }
    else {
        cout << "p1 == p2" << endl;
    }
    if (p1 > p2) {
        cout << "p1 > p2" << endl;
    }
    else {
        cout << "p1 <= p2" << endl;
    }
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    return 0;
}
