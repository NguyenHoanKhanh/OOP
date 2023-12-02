#include <iostream>
#include "myint.cpp"

using namespace std;

int main()
{
    myint i, t;
    // Nhap xuat gia tri
    cin>>i;
    cout<<"Value 1 : "<<"\t";
    cout<<i;
    cout<<endl;
    cin>>t;
    cout<<"Value 2 : "<<"\t";
    cout<<t;
    // Tinh toan
    myint tong = i + t;
    cout<<"Ket qua phep tong : "<<tong;
    cout<<endl;
    myint hieu = i - t;
    cout<<"Ket qua phep hieu : "<<hieu;
    cout<<endl;
    myint tich = i * t;
    cout<<"Ket qua phep nhan : "<<tich;
    cout<<endl;
    myint thuong = i / t;
    cout<<"Ket qua phep chia : "<<thuong;
    cout<<endl;
    myint du = i % t;
    cout<<"Ket qua phep chia lay du : "<<du;
    cout<<endl;
    // So sanh 
    if (i > t) cout<<"value 1 lon hon 2 ";
    else if (i < t) cout<<"value 1 be hon value 2";
    else if (i >= t) cout<<"value 1 lon hon bang value 2";
    else if (i <= t) cout<<"value 1 be hon bang value 2";
    else if (i == t) cout<<"value 1 giong value 2";
    else if (i != t) cout<<"value 1 khac value 2";

    return 0; 
}