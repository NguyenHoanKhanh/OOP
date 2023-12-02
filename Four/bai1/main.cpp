#include <iostream>
#include <cmath>
#include "sophuc.cpp"
using namespace std;

int main()
{
    sophuc a1,a2;
    cout<<"Nhap vao so phuc 1 : ";
    cin>>a1;
    cout<<a1;
    cout<<endl;
    cout<<"Nhap vao so phuc 2 : ";
    cin>>a2;
    cout<<a2;

    sophuc Sum = a1 + a2;
    cout<<"Tong hai so phuc la : "<<Sum<<endl;

    sophuc Hieu = a1 - a2;
    cout<<"Hieu hai so phuc la : "<<Hieu<<endl;

    sophuc Nhan = a1 * a2;
    cout<<"Nhan hai so phuc la : "<<Nhan<<endl;

    sophuc Chia = a1 / a2;
    cout<<"Chia hai so phuc la : "<<Chia<<endl;

    if(a1 == a2) cout<<"a1 bang a2"<<endl;
    else if (a1 != a2) cout<<"a1 khac a2"<<endl;

    return 0;
}