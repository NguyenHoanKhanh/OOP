#include "BanHang.h"

BanHang::BanHang(int sanpham)
{
    this->nsanpham = sanpham;
}

void BanHang::Input()
{
    cout<<"Nhap thong tin nhan vien ban hang : "<<endl;
    NhanVien().Input();
    cout<<"Nhap vao so san pham ma nhan vien lam duoc : ";
    cin>>nsanpham;
}

int BanHang::getSoSanPham()
{
    return nsanpham;
}

void BanHang::Output()
{
    cout<<"Thong tin cua nhan vien ban hang la : "<<endl;
    NhanVien().Output();
    cout<<"So san pham lam duoc la : "<<nsanpham<<endl;
}