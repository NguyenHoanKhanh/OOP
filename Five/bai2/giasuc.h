#include <iostream> 
#ifndef GIASUC_H
#define GIASUC_H

using namespace std;

class giasuc
{
protected:
    int sinhsan, chosua;
public:
    giasuc(float con = 0, float sua = 0);
    void SinhCon();
    void ChoSua();
    void ThongKe();
    virtual void Keu() = 0;
};




#endif