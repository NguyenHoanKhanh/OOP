#include "giasuc.h"

giasuc::giasuc(float con, float sua)
{
    this->chosua = sua;
    this->sinhsan = con;
}

void giasuc::SinhCon()
{
    int random = rand() % 5 + 1;
    sinhsan += random;
    cout<<"(1)----So luong con : "<<sinhsan<<" (con) "<<endl;
}

void giasuc::ChoSua()
{
    chosua = rand() % 21;
    cout<<"(2)----San luong sua : "<<chosua<<" (lit) "<<endl;
}

void giasuc::ThongKe()
{
    cout<<"(3)----So luong con va sua ma moi loai tao ra duoc la : "<<sinhsan<<" (con) va " <<chosua<<" (lit)"<<endl;
}


