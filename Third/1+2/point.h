#include <iostream>
#ifndef POINT_H
#define POINT_H

using namespace std;
class point
{
private:
    double x,y;
public:
    point (double dx=0, double dy=0);
    void SetX(double dx);
    void SetY(double dy);
    double GetX();
    double GetY();
    void Move(double dx, double dy);
    void Input();
    void Output();
};




#endif