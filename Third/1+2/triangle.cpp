#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

triangle::triangle(point da, point db, point dc)
{
    this->a=da;
    this->b=db;
    this->c=dc;
}

triangle triangle::Move_Tg()
{
    triangle move(a, b, c);
    double x,y;
    cout<<"Nhap vao toa do tinh tien x : "<<endl;
    cin>>x;
    cout<<"Nhap vao toa do tinh tien y : "<<endl;
    cin>>y;
    move.a.Move(x,y);
    move.b.Move(x,y);
    move.c.Move(x,y);
    cout<<"Toa do cac dinh tam giac sau khi tinh tien : "<<endl;
    return move;
}

triangle triangle::Turn_Tg()
{
    triangle turn(a,b,c);
    double corner;
    cout<<"Nhap vao goc muon quay : ";
    cin>>corner;

    double sinCorner = sin(corner * M_PI / 180);
    double cosCorner = cos(corner * M_PI / 180);

    turn.a.SetX(a.GetX() * cosCorner - a.GetY() * sinCorner);
    turn.a.SetY(a.GetY() * sinCorner - a.GetY() * cosCorner);

    turn.b.SetX(b.GetX() * cosCorner - b.GetY() * sinCorner);
    turn.b.SetY(b.GetY() * sinCorner - b.GetY() * cosCorner);

    turn.c.SetX(c.GetX() * cosCorner - c.GetY() * sinCorner);
    turn.c.SetY(c.GetY() * sinCorner - c.GetY() * cosCorner);

    cout<<"Ket qua sau khi quay : ";
    return turn;
}

triangle triangle::Zoom_In_Tg()
{
    triangle phong(a,b,c);
    double Z_I;
    cout<<"Nhap he so phong to : "<<endl;
    cin>>Z_I;

    phong.g.SetX((a.GetX() + b.GetX() + c.GetX() )/3.0);
    phong.g.SetY((a.GetY() + b.GetY() + c.GetY())/ 3.0);

    phong.a.SetX(g.GetX() + Z_I*( a.GetX() - g.GetX()));
    phong.a.SetY(g.GetY() + Z_I*( a.GetY() - g.GetY()));
    phong.b.SetX(g.GetX() + Z_I*( b.GetX() - g.GetX()));
    phong.b.SetY(g.GetY() + Z_I*( b.GetY() - g.GetY()));
    phong.c.SetX(g.GetX() + Z_I*( c.GetX() - g.GetX()));
    phong.c.SetY(g.GetY() + Z_I*( c.GetY() - g.GetY()));

    cout<<"Ket qua phong to : "<<endl;
    return phong;
}

triangle triangle::Zoom_Out_Tg()
{
    triangle thu(a,b,c);
    double Z_O;
    cout<<"Nhap he so phong to : "<<endl;
    cin>>Z_O;
    Z_O=1.0/Z_O;

    thu.g.SetX((a.GetX() + b.GetX() + c.GetX() )/3.0);
    thu.g.SetY((a.GetY() + b.GetY() + c.GetY())/ 3.0);

    thu.a.SetX(g.GetX() + Z_O*( a.GetX() - g.GetX()));
    thu.a.SetY(g.GetY() + Z_O*( a.GetY() - g.GetY()));
    thu.b.SetX(g.GetX() + Z_O*( b.GetX() - g.GetX()));
    thu.b.SetY(g.GetY() + Z_O*( b.GetY() - g.GetY()));
    thu.c.SetX(g.GetX() + Z_O*( c.GetX() - g.GetX()));
    thu.c.SetY(g.GetY() + Z_O*( c.GetY() - g.GetY()));

    cout<<"Ket qua phong to : "<<endl;
    return thu;
}

void triangle::Input_Tg()
{
    int flag;
    do
    {
        flag = 1;
        cout << "Nhap toa do 3 diem cua tam giac: " << endl;
        a.Input();
        b.Input();
        c.Input();
        double ab = sqrt((a.GetX() - b.GetX()) * (a.GetX() - b.GetX())
                       - (a.GetY() - b.GetY()) * (a.GetY() - b.GetY()));
        double ac = sqrt((a.GetX() - c.GetX()) * (a.GetX() - c.GetX())
                       - (a.GetY() - c.GetY()) * (a.GetY() - c.GetY()));
        double bc = sqrt((b.GetX() - c.GetX()) * (b.GetX() - c.GetX())
                       - (b.GetY() - c.GetY()) * (b.GetY() - c.GetY()));
        if ((ab + ac == bc) || (ab + bc == ac) || (ac + bc == ab))
        {
             cout << "Ba diem nay thang hang, hay nhap lai 3 diem khac" << endl;
             flag = 0;
        }
        if (a.GetX() == b.GetX() == c.GetX() && a.GetY() == b.GetY() == c.GetY())
        {
            cout << "Ba diem trung nhau, hay nhap lai 3 diem khac" << endl;
            flag = 0;
        }
        if ((ab + ac < bc) || (ab + bc < ac) || (ac + bc < ab))
        {
            cout << "Ba diem nay khong the tao thanh tam giac, hay nhap lai 3 diem khac" << endl;
            flag = 0;
        }
    } while (flag == 0);
}

void triangle::Output_Tg()
{
    cout << "Toa do 3 diem cua tam giac: " << endl;
    a.Output();
    b.Output();
    c.Output();
    cout << endl;
}