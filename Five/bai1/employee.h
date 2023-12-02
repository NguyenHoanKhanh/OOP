#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class employee 
{
protected:
    long long luong;
    string birthday;
    string name;

public:
    employee(string ten = "Nguyen Tuan Khoa", string ngaysinh = "01/01/2004", long long tien = 0);
    int getLuong();
    void Input();
    void Output();
};

#endif