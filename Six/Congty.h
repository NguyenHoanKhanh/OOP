#ifndef CONGTY_H
#define CONGTY_H

#include "NhanVien.h"
#include "BanHang.h"
#include "HanhChinh.h"

using namespace std;

class Congty
{
private:
    NhanVien** ds;
    int n;
    int type;
public:
    Congty(int k = 0);
    ~Congty();
    void Input();
    void Output();
    void CheckThoiGian();
    void DemNhanVienBanHang();
    void LietKeNhanVien();
};

#endif