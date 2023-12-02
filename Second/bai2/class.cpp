#include <iostream>
#include "class.h"
using namespace std;
void room::nhapds()
{
    cout<<"Nhap so luong hoc sinh : ";
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        cout<<"Thi sinh thu : "<<endl;
        cd[i].nhap();
    }
}
void room::xuatds()
{
    for(int i=0; i<n; i++)
        cd[i].xuat();    
}
void room::tong()
{
    for(int i=0; i<n ; i++)
    {
        if(cd[i].Tinh_tong()>15) 
        cd[i].xuat();
    }
}
