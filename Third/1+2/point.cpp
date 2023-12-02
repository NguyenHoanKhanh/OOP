#include <iostream>
#include "point.h"

using namespace std;

point::point (double dx, double dy)
{
    this->x=dx;
    this->y=dy;
}

void point::SetX(double dx)
{
    this->x=dx;
}

void point::SetY(double dy)
{
    this->y=dy;
}

double point::GetX()
{
    return x;
}

double point::GetY()
{
    return y;
}

void point::Move(double dx, double dy)
{
    this->x += dx; 
    this->y += dy;
}

void point::Input()
{
    cout<<"Nhap vao toa do x : ";
    cin>>x;
    cout<<"Nhap vao toa do y : ";
    cin>>y;
}

void point::Output()
{
    cout<<"("<<x<<","<<y<<")";
}