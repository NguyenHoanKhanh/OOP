#include <iostream>
#include "polygon.cpp"
#include "point.cpp"
const int MAX = 10000;

using namespace std;
int main()
{
    point arrPoint[MAX];
    int n;
    polygon p(arrPoint,n);
    p.Input_polygon();
    p.Output_polygon();
    p.Turn_polygon().Output_polygon();
    p.Zoom_in_polygon().Output_polygon();
    p.Zoom_out_polygon().Output_polygon();
    p.Move_polygon().Output_polygon();
    
}