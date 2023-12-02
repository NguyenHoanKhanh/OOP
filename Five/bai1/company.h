#ifndef COMPANY_H
#define COMPANY_H

#include "employee.h"
#include "office.h"
#include "product.h"

const int MAX = 10000;
using namespace std;
class company 
{
private:
    office of[MAX];
    product pr[MAX];
    int vp;
    int sx;
public:
    company(int sonvvp = 0, int sonvsx = 0);
    void Input();
    void Output();
    void Tong_luong();
    void Cao_Nhat();
    void Thap_Nhat();
    void Sap_xep();
};

#endif