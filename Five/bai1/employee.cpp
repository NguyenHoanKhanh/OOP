#include "employee.h"
#include <iostream>

employee::employee(string ten, string ngaysinh, long long tien) 
{
    this->name = ten;
    this->birthday = ngaysinh;
    this->luong = tien;
}

int employee::getLuong() 
{
    return luong;
}

void employee::Input() {
    cin.ignore();
    cout << "Nhap vao thong tin can thiet: ";
    getline(cin, name);
    getline(cin, birthday);
}

void employee::Output() 
{
    cout << name << "----" << birthday << endl;
}