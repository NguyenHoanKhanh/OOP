#ifndef PRODUCT_H
#define PRODUCT_H

#include "employee.h"
using namespace std;
class product : public employee
{
private:
    long long luong_can_ban;
    int so_san_pham;

public:
    product(string ten = "\0", string ngaysinh = "\0", long long can_ban = 0, int so = 0);
    void Input();
    void Output();
    void Tinh_luong();
};

#endif