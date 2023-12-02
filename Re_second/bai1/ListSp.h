#include <iostream>
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "bai1.h"
using namespace std;
class List
{
private:
    SoPhuc sp[100];
    int n;
public:
    void Nhap_List();
    void Xuat_List();
    void Tinh_Tong();
    void Tinh_Hieu();
    SoPhuc Tich();
    SoPhuc Thuong();
};
#endif