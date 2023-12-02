#include "HanhChinh.h"

HanhChinh::HanhChinh(int gio, int phut, int giay)
{
    this->hour = gio;
    this->minute = phut;
    this->second = giay;
}

void HanhChinh::Input()
{
    cout<<"Nhap vao thong tin cua nhan vien hanh chinh : "<<endl;
    NhanVien().Input();
    cout<<"Nhap vao thoi gian la thua : "<<endl;
    cin>>hour;
    cin>>minute;
    cin>>second;
}

int HanhChinh::GetThoiGian()
{
    int tong;
    tong = hour*60*60 + minute*60 +second;
    return tong;
}

void HanhChinh::Output()
{
    cout<<"Thong tin cua nhan vien hanh chinh : "<<endl;
    NhanVien().Output();
    cout<<"Thoi gian la thua gio : "<<hour<<" (gio) / "<<minute<<" (phut) / "<<second<<" (giay) "<<endl;
}
