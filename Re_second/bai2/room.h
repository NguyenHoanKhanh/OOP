#include <iostream>
#include "bai2.h"
#ifndef ROOM_INCLUDED
#define ROOM_INCLUDED
class room
{
private:
    Candidate ds[100];
    int n;

public:
    void nhap_ds();
    void xuat_ds();
    void check();
};
#endif