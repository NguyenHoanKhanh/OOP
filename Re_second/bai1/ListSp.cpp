#include <iostream>
#include "ListSp.h"
using namespace std;

void List::Nhap_List()
{
    cout<<"Nhap vao so luong so phuc : "<<endl;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        cout<<"So phuc : "<<i+1<<endl;
        sp[i].nhap_1_so_phuc();
    }
}
void List::Xuat_List()
{
    for(int i=0; i<n ; i++)
    {
        sp[i].xuat_1_so_phuc();
    }
}
void List::Tinh_Tong()
{
    float St=0, Sa=0;
    for (int i = 0; i < n; i++)
    {
        St+=sp[i].getReal();
        Sa+=sp[i].getComplex();
    }
    cout<<St<<"+"<<Sa<<"i";
}
void List::Tinh_Hieu()
{
    float Ht=0, Ha=0;
    for (int i = 0; i < n; i++)
    {
        Ht-=sp[i].getReal();
        Ha-=sp[i].getComplex();
    }
    if(Ha<0) cout<<Ht<<"-"<<Ha*(-1)<<"i";
    else cout<<Ht<<"-"<<Ha<<"i";
}
SoPhuc List::Tich()
{
    SoPhuc tinh_tich=sp[0].Tinh_Tich(sp[1]);
    for ( int i=2; i< n; i++)
    {
        tinh_tich=tinh_tich.Tinh_Tich(sp[i]);
    }
    return tinh_tich;
}
SoPhuc List::Thuong()
{
    SoPhuc tinh_thuong=sp[0].Tinh_Thuong(sp[1]);
    for (int i = 2; i < n; i++)
    {
        tinh_thuong=tinh_thuong.Tinh_Thuong(sp[i]);
    }
    return tinh_thuong;
}
    