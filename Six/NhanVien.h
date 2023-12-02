#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string Id, Name, Phone, Email;
    int Age;    
public:
    NhanVien(string maso = "\0", string ten = "\0", string dienthoai = "\0", string thu = "\0", int tuoi = 0);
    virtual ~NhanVien() {}
    void Input();
    void Output();
};

#endif