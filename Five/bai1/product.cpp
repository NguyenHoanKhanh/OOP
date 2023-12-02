#include "product.h"
#include <iostream>

product::product(string ten, string ngaysinh, long long can_ban, int so) : employee(ten, ngaysinh) 
{
    this->luong_can_ban = can_ban;
    this->so_san_pham = so;
}

void product::Input() 
{
    cout << "Nhap vao thong tin ca nhan cua 1 nhan vien: "<<endl;
    employee::Input();
    cout << "Nhap vao muc luong can ban cua 1 nhan vien: ";
    cin >> luong_can_ban;
    cout << "Nhap vao so san pham nhan vien do lam duoc: ";
    cin >> so_san_pham;
}

void product::Tinh_luong() 
{
    luong = luong_can_ban + so_san_pham * 5000;
    cout << "Muc luong cua nhan vien san xuat: " << luong << endl;
}

void product::Output()
{
    cout << "Xuat ra thong tin ca nhan cua 1 nhan vien: ";
    employee::Output();
    cout << "Xuat ra muc luong can ban va so san pham ma nhan vien do lam duoc: " << luong_can_ban << "-----" << so_san_pham << endl;
    Tinh_luong();
}