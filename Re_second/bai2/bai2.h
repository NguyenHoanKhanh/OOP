#include <iostream>
#ifndef CDD_INCLUDED
#define CDD_INCLUDED
#include <string>
using namespace std;
class Candidate
{
private:
    string id, name, birth;
    float math, literature, english;
public:
    void nhap_1_thi_sinh();
    void xuat_1_thi_sinh();
    float Tinh_Tong();
};

#endif