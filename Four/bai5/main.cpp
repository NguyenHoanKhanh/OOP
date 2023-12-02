#include <iostream>
#include "day.cpp"
using namespace std;

int main()
{
    day d, t;
    // Nhap xuat ngay
    cin>>d;
    cout<<"Input : ";
    cout<<d;
    day other = d;
    cout<<endl;
    // Cong them ngay 
    int days;
    cout<<"Nhap vao so ngay can cong them vao : ";
    cin>>days;
    day Them = d + days;
    cout<<"Ket qua : "<<Them<<endl;
    // Bot ngay
    day Bot = d - days;
    cout<<"Ket qua : "<<Bot<<endl;
    // Them 1 ngay
    ++d;
    cout<<"Ket qua : "<<d<<endl;
    // Tra lai gia tri cu 
    d.previous(other);
    cout<<"Gia tri truoc khi thay doi : "<<d<<endl;
    // Bot 1 ngay 
    --d;
    cout<<"Ket qua : "<<d<<endl;
    // Khoang cach giua 2 ngay 
    cin>>t;
    cout<<"Nhap vao ngay thu hai : ";
    cout<<t;
    cout<<endl;
    day Khoang_cach = d.distance(t);
    cout<<"Ket qua khoang cach giua hai ngay la : "<<Khoang_cach;
}