#include "office.h"
#include <iostream>

office::office(string ten, string ngaysinh, int songaylam) : employee(ten, ngaysinh) 
{
    this->w_n = songaylam;
}

void office::Input()
{
    cout << "Nhap vao thong tin ca nhan cua 1 nhan vien: "<<endl;
    employee::Input();
    cout << "Nhap vao so ngay lam viec cua nhan vien van phong: ";
    cin >> w_n;
}

void office::Tinh_luong() 
{
    luong = w_n * 100000;
    cout << "Muc luong cua nhan vien van phong: " << luong << endl;
}

void office::Output() 
{
    cout << "Xuat ra thong tin ca nhan cua 1 nhan vien: ";
    employee::Output();
    cout << "So ngay lam viec: " << w_n << endl;
    Tinh_luong();
}

