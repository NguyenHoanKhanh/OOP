#include <iostream>
#include <cmath>
#include "polygon.h"

using namespace std;

polygon::polygon(point arrPoint[MAX], int n)
{
    this->arrPoint[n] = arrPoint[n];
    for(int i=0 ; i<n; i++)
    {
        this->arrPoint[i] = arrPoint[i];
    }
    this->n = n;
}

polygon polygon::Move_polygon()
{
    polygon move(arrPoint, n);
    double x,y;
    cout<<"Nhap vao do dich chuyen x, y : ";
    cin>>x>>y;

    for(int i = 0; i<n ; i++)
    {
        move.arrPoint[i].Move_point(x,y);
    }
    return move;
}

polygon polygon::Turn_polygon()
{
    polygon turn(arrPoint, n);
    double corner;
    cout <<"Nhap vao goc muon quay : ";
    cin>>corner;

    double sinCorner = sin(corner * M_PI /180);
    double cosCorner = cos(corner * M_PI /180);

    for (int i=0; i<n ; i++ )
    {
        turn.arrPoint[i].SetX(arrPoint[i].GetX() * cosCorner - arrPoint[i].GetY() * sinCorner);
        turn.arrPoint[i].SetY(arrPoint[i].GetX() * sinCorner + arrPoint[i].GetY() * cosCorner);
    }
    cout<<"Ket qua quay la : ";
    return turn;     
}

polygon polygon::Zoom_in_polygon()
{
    polygon Z_I(arrPoint, n);
    double phong;
    cout<<"Nhap vao he so phong to : ";
    cin>>phong;
    double tongX=0, tongY=0;

    for (int i = 0; i < n; i++)
    {
        tongX += arrPoint[i].GetX();
        tongY += arrPoint[i].GetY();
    }
    
    Z_I.k.SetX(tongX / (1.0 * n));
    Z_I.k.SetY(tongY / (1.0 * n));

    for (int i = 0; i < n; i++)
    {
        Z_I.arrPoint[i].SetX(k.GetX() + phong*(arrPoint[i].GetX() - k.GetX()));
        Z_I.arrPoint[i].SetY(k.GetY() + phong*(arrPoint[i].GetY() - k.GetY()));
    }
    cout<<"Ket qua phong to la : ";
    return Z_I;
}   

polygon polygon::Zoom_out_polygon()
{
    polygon Z_O(arrPoint, n);
    double thu;
    cout<<"Nhap vao he so thu nho  : ";
    cin>>thu;
    thu=1.0/thu;
    double tongX=0, tongY=0;

    for (int i = 0; i < n; i++)
    {
        tongX += arrPoint[i].GetX();
        tongY += arrPoint[i].GetY();
    }
    
    Z_O.k.SetX(tongX / (1.0 * n));
    Z_O.k.SetY(tongY / (1.0 * n));

    for (int i = 0; i < n; i++)
    {
        Z_O.arrPoint[i].SetX(k.GetX() + thu*(arrPoint[i].GetX() - k.GetX()));
        Z_O.arrPoint[i].SetY(k.GetY() + thu*(arrPoint[i].GetY() - k.GetY()));
    }
    cout<<"Ket qua phong to la : ";
    return Z_O;
}   

void polygon::Input_polygon()
{
    int flag; 
    do
    {
        flag = 1;
        cout<<"Nhap vao so luong dinh cua da giac : ";
        cin>>n;

        cout<<"Nhap vao toa do cac dinh da giac : ";
        for (int i = 0; i < n; i++)
        {
            cout<<"Diem thu : "<<i+1<<" la : "<<endl;
            arrPoint[i].Input();
        }
        
    } while (flag == 0 );
    
}

void polygon::Output_polygon()
{
    cout<<"Toa do cac diem cua da giac "<<endl;
    for (int i = 0; i < n; i++)
    {
        arrPoint[i].Output();
    }
    cout<<endl;  
}