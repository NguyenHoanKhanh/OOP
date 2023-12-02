
#ifndef B_H_INCLUDED
#define B_H_INCLUDED
#include <string>
using namespace std;

class candidate
{
private:
    string id, name, birth;
    float math, literature,english;
public:
    void nhap();
    void xuat();
    float Tinh_tong();
};

#endif