#include <iostream>
#include "phanso.cpp"
using namespace std;

int main()
{
    phanso s1,s2;
    cout<<"Nhap vao phan so thu nhat : ";
    cin>>s1;
    cout<<s1;
    cout<<endl;
    cout<<"Nhap vao phan so thu hai : ";
    cin>>s2;
    cout<<s2;

    phanso Rutgon1 = s1.rut_gon();
    cout<<"Ket qua rut gon phan so 1 : "<<Rutgon1<<endl;

    phanso Rutgon2 = s2.rut_gon();
    cout<<"Ket qua rut gon phan so 2 : "<<Rutgon2<<endl;

    phanso Sum = s1 + s2;
    cout<<"Ket qua phep tong la : "<<Sum<<endl;

    phanso hieu = s1 - s2;
    cout<<"Ket qua phep hieu la : "<<hieu<<endl;

    phanso tich = s1 * s2;
    cout<<"Ket qua phep tich la : "<<tich<<endl;

    phanso thuong = s1 / s2 ;
    cout<<"Ket qua phep thuong la : "<<thuong<<endl;
    return 0;
}