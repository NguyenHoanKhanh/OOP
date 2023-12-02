#include <iostream>
#include "room.h"
using namespace std;

void room::nhap_ds()
{
    cout<<"Nhap vao so luong hoc sinh : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Hoc sinh thu : "<<i+1<<endl;
        ds[i].nhap_1_thi_sinh();
    }
}
void room::xuat_ds()
{
    for (int i = 0; i < n; i++)
    {
        ds[i].xuat_1_thi_sinh();
    }   
}
void room::check()
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].Tinh_Tong()>15)
        {
           ds[i].xuat_1_thi_sinh();
        }
    }
}