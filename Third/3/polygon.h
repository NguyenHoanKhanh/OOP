#include <iostream>
#include "point.h"
#ifndef POLYGON_H
#define POLYGON_H

class polygon
{
private:
    const static int MAX = 10000;
    point k;
    point arrPoint[MAX];
    int n;
public:
    polygon(point arrPoint[MAX], int n);
    polygon Move_polygon();
    polygon Turn_polygon();
    polygon Zoom_in_polygon();
    polygon Zoom_out_polygon();

    void Input_polygon();
    void Output_polygon();
    

};



#endif