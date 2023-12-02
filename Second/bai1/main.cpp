#include <iostream>
#include "abc.cpp"
using namespace std;
int main()
{
    SoPhuc a1,a2;
    cin>>a1;
    cin>>a2;
    cout<<"Tong : "<<a1.Tong(a2)<<endl;;
    cout<<"Hieu : "<<a1.Hieu(a2)<<endl;
    cout<<"Tich : "<<a1.Tich(a2)<<endl;
    cout<<"Thuong : "<<a1.Thuong(a2)<<endl;
    cout<<"Gia tri cua so phuc 1 : "<<a1.Value();
    cout<<endl;
    cout<<"Gia tri cua so phuc 2 : "<<a2.Value();
}