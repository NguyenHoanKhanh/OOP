#include <iostream>
#include "nhieuve.h"
using namespace std;

void nhieuve::nhap_ds()
{
    cout<<"So luong tro choi : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Ve thu : "<<i+1<<endl;
        tk[i].nhap_1_ve();
    }
}
void nhieuve::xuat_ds()
{
    for (int i = 0; i < n; i++)
    {
        tk[i].xuat_1_ve();
    }
}

void nhieuve::Tong()
{
    float tong=0;
    for (int i = 0; i <= n; i++)
    {
        tong=70000+i*20000;
    }
    cout<<"Tien cua ve : "<<tong;
}