#include <iostream>
#include "time.h"

using namespace std;


void time::Input_Time()
{   
        cout<<"Nhap vao cac thanh phan gio-phut-giay : ";
        cin>>h>>m>>s;
}

void time::Output_Time()
{
    cout<<"Tra ve cac thanh phan gio-phut-giay da nhap vao : ";
    cout<<"("<<h<<" (gio) --- "<<m<<" (phut) --- "<<s<<" (giay) )"<<endl;
}

void time::Change_Time()
{
    long long Tong_thoi_gian_giay=h*3600 + m*60 + s;
    double Quy_doi_gio;
    double Quy_doi_phut;
    double Quy_doi_giay;
    double Quy_doi_ngay;

    if(Tong_thoi_gian_giay<=86400)
    {
        Quy_doi_gio = Tong_thoi_gian_giay / 3600;
        Quy_doi_phut= (Tong_thoi_gian_giay % 3600 ) / 60;
        Quy_doi_giay= (Tong_thoi_gian_giay % 3600 ) % 60;
        cout<<"Ket qua nhan duoc la : "<<"\t";
        cout<<"0 (ngay) --- "<<Quy_doi_gio<<" (gio) --- "<<Quy_doi_phut<<" (phut) --- "<<Quy_doi_giay<<"(giay)";
    }
    else if (Tong_thoi_gian_giay>86400)
    {
        Quy_doi_ngay=Tong_thoi_gian_giay / 86400;
        Quy_doi_gio=(Tong_thoi_gian_giay % 86400) / 3600;
        Quy_doi_phut=(Tong_thoi_gian_giay % 3600) / 60 ;
        Quy_doi_giay=(Tong_thoi_gian_giay % 3600) % 60 ;
        cout<<"Ket qua nhan duoc la : "<<"\t";
        cout<<Quy_doi_ngay<<" (ngay) --- "<<Quy_doi_gio<<" (gio) --- "<<Quy_doi_phut<<" (phut) --- "<<Quy_doi_giay<<"(giay)";
    }
}