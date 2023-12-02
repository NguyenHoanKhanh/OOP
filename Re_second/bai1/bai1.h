#include <iostream>
#ifndef SP_H_INCLUDED
#define SP_H_INCLUDED
using namespace std;
class SoPhuc
{
private:
public:
    float real, complex;
    void nhap_1_so_phuc();
    void xuat_1_so_phuc();
    SoPhuc Tinh_Tich(SoPhuc b);
    SoPhuc Tinh_Thuong(SoPhuc b);
    float getReal();
    float getComplex();
};

#endif