#include "NhanVien.h"

NhanVien::NhanVien(string maso, string ten, string dienthoai, string thu, int tuoi)
{
    this->Id = maso;
    this->Name = ten;
    this->Phone = dienthoai;
    this->Email = thu;
    this->Age = tuoi;
}

void NhanVien::Input()
{
    cin.ignore();
    cout<<"Nhap vao thong tin ca nhan cua nhan vien : "<<endl;
    cout<<"Id : ";
    getline(cin, Id);
    cout<<"\nTen : ";
    getline(cin, Name);
    cout<<"\nDien thoai : ";
    getline(cin, Phone);
    cout<<"\nEmail : ";
    getline(cin, Email);
    cout<<"\nTuoi : ";
    cin>>Age;
    cin.ignore();
}

void NhanVien::Output()
{
    cout<<Id<<"----"<<Name<<"----"<<Phone<<"----"<<Email<<"----"<<Age<<endl;
}