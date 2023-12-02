#include <bits/stdc++.h>
#include "point.cpp"
#include "triangle.cpp"

using namespace std;

int main()
{
    point A;
    point B;
    point C;

    triangle ABC(A, B, C);

    ABC.Input_Tg();
    ABC.Output_Tg();
    ABC.Move_Tg().Output_Tg();
    ABC.Turn_Tg().Output_Tg();
    ABC.Zoom_In_Tg().Output_Tg();
    ABC.Zoom_Out_Tg().Output_Tg();
}