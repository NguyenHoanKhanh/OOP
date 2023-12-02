#ifndef VE_H_INCLUDED
#define VE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class ticket
{
private:
   int so_luong_game;
   string id_ve;
public:
    void nhap();
    void xuat();
    void nhapDSve();
    void xuatDSve();
    int thanh_tien();
};

#endif