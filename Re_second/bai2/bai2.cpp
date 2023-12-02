#include <iostream>
#include <string>
#include "bai2.h"
using namespace std;
void Candidate::nhap_1_thi_sinh()
{
    cin.ignore();
    cout<<"Nhap vao ten thi sinh : ";
    getline(cin,name);
    cout<<"Nhap vao id thi sinh : ";
    getline(cin,id);
    cout<<"Nhap vao birth thi sinh : ";
    getline(cin,birth);
    cout<<"Nhap vao diem toan : ";
    cin>>math;
    cout<<"Nhap vao diem van : ";
    cin>>literature;
    cout<<"Nhap vao diem tieng anh : ";
    cin>>english;
}
void Candidate::xuat_1_thi_sinh()
{
    cout<<name<<"\t"<<id<<"\t"<<birth<<"\t"<<math<<"\t"<<literature<<"\t"<<english;
}
float Candidate::Tinh_Tong()
{
    return math+literature+english;
}
