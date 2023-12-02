#include "company.h"

#include <iostream>

company::company(int sonvvp, int sonvsx) 
{
    this->vp = sonvvp;
    this->sx = sonvsx;
}

void company::Input() 
{
    cout << "Nhap vao n nhan vien van phong : ";
    cin>>vp;
        for (int i = 0; i < vp; i++)
        {
            of[i].Input();
            of[i].Tinh_luong();
        }
    cout<<"Nhap vao n nhan vien san xuat : ";
    cin>>sx;
        for (int i = 0; i < sx; i++)
        {
            pr[i].Input();
            pr[i].Tinh_luong();
        }
}

void company::Tong_luong()
{   
    long long Tong_luong = 0;
    for (int i = 0; i < vp; i++)
    {
        Tong_luong += of[i].getLuong();
    }
    for (int i = 0; i < sx; i++)
    {
        Tong_luong += pr[i].getLuong();
    }
    cout<<"(4)----Tong tien luong cua tat ca nhan vien la : "<<Tong_luong<<endl;
}

void company::Cao_Nhat()
{
    employee nhan_vien_luong_cao = of[0];

    for (int i = 0; i < vp; i++)
    {
        if (of[i].getLuong() > nhan_vien_luong_cao.getLuong())
        {
            nhan_vien_luong_cao = of[i];
        }
    }
    
    for (int i = 0; i < sx; i++)
    {
        if(pr[i].getLuong() > nhan_vien_luong_cao.getLuong())
            nhan_vien_luong_cao = pr[i];
    }
    
    cout<<"(5)----Nhan vien co tien luong cao nhat trong danh sach la : ";
    nhan_vien_luong_cao.Output();
}

void company::Thap_Nhat()
{
    employee nhan_vien_thap_nhat = of[0];
    
    for (int i = 0; i < vp; i++)
    {
        if(of[i].getLuong() < nhan_vien_thap_nhat.getLuong())
            nhan_vien_thap_nhat = of[i];
    }
    
    for (int i = 0; i < sx; i++)
    {
        if (pr[i].getLuong() < nhan_vien_thap_nhat.getLuong())
            nhan_vien_thap_nhat = pr[i];
    }
    cout<<"(6)----Nhan vien co muc luong thap nhat trong danh sach la : ";
    nhan_vien_thap_nhat.Output();
}

void company::Sap_xep()
{
    for (int i = 0; i < vp - 1 ; i++)
    {
        for (int j = 0; j < vp - i - 1 ; i++)
        {
            if (of[i].getLuong() < of[i + 1].getLuong())
            {
                swap(of[i], of[i+1]);
            }
        }   
    }
    
    for (int i = 0; i < sx - 1 ; i++)
    {
        for (int j = 0; j < sx - i -1 ; i++)
        {
            if (pr[i].getLuong() < pr[i+1].getLuong())
            {
                swap(pr[i], pr[i+1]);
            }
        }
    }
    
    cout<<"(7)----Ket qua sap xep la : "<<endl;
    Output();
}

void company::Output() 
{
    for (int i = 0; i < vp; i++)  
    {
        of[i].Output();
    }
    for (int i = 0; i < sx; i++)
    {
        pr[i].Output();
    } 
}


