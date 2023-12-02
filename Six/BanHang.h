#ifndef BANHANG_H
#define BANHANG_H

#include "NhanVien.h"

class BanHang : public NhanVien
{
private:
    int nsanpham;
public:
    BanHang(int sanpham = 0);
    void Input();
    void Output();
    int getSoSanPham();
};

#endif