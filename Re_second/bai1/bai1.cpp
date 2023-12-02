#include <iostream>
#include <cmath>
#include "bai1.h"
using namespace std;

void SoPhuc::nhap_1_so_phuc()
{
    cout<<"Nhap vao phan thuc : "<<"\t";
    cin>>real;
    cout<<"Nhap vao phan ao : "<<"\t";
    cin>>complex;
}
void SoPhuc::xuat_1_so_phuc()
{
    if(complex<0) cout<<real<<"-"<<complex*(-1)<<"i"<<endl;
    else cout<<real<<"+"<<complex<<"i"<<endl;
}
float SoPhuc::getReal()
{
    return real;
}
float SoPhuc::getComplex()
{
    return complex;
}
SoPhuc SoPhuc::Tinh_Tich(SoPhuc b)
{
    SoPhuc tich;
    tich.real=real*b.real-complex*b.complex;
    tich.complex=real*b.complex+complex*b.real;
    return tich;
}
SoPhuc SoPhuc::Tinh_Thuong(SoPhuc b)
{
    SoPhuc thuong;
    thuong.real=(real*b.real+complex*b.complex)/(pow(b.real,2)+pow(b.complex,2));
    thuong.complex=(complex*b.real-real*b.complex)/(pow(b.real,2)+pow(b.complex,2));
    return thuong;
}