#ifndef OFFICE_H
#define OFFICE_H

#include "employee.h"
using namespace std;
class office : public employee 
{
private:
    int w_n;

public:
    office(string ten = "\0", string ngaysinh = "\0", int songaylam = 0);
    void Input();
    void Output();
    void Tinh_luong();
};

#endif