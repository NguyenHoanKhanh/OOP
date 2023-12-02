#include <iostream>
#include "bai3.h"
#ifndef NHIEU_VE_INCLUDED
#define NHIEU_VE_INCLUDED

class nhieuve
{
private:
    ticket tk[100];
    int n;

public:
    void nhap_ds();
    void xuat_ds();
    void Tong();
};



#endif