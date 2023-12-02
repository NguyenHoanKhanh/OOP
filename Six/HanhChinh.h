#ifndef HANHCHINH_H
#define HANHCHINH_H

#include "NhanVien.h"

class HanhChinh : public NhanVien
{
private:
    int hour, second, minute;
public:
    HanhChinh(int gio = 0, int phut = 0, int giay = 0);
    void Input();
    int GetThoiGian();
    void Output();
};

#endif