#include <iostream>
#include "point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle
{
private:
    point a,b,c,g;
public:
    triangle(point da, point db, point dc);
    triangle Move_Tg();
    triangle Turn_Tg();
    triangle Zoom_In_Tg();
    triangle Zoom_Out_Tg();
    void Input_Tg();
    void Output_Tg();
};



#endif