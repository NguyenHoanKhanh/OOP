#include <iostream>
#include <string>
#include "ticket.h"
using namespace std;
void ticket::nhap()
{
    cout<<"Nhap vao so luong tro choi :"<<endl;
    cin>>so_luong_game;
    cout<<"Nhap vao ma ve : "<<endl;
    cin.ignore();
    getline(cin,id_ve);
}
int ticket::thanh_tien()
{
    int gia_tien;
    return gia_tien=70000+so_luong_game*20000;
}
void ticket::xuat()
{
    cout<<so_luong_game<<"-"<<id_ve<<"-"<<thanh_tien();
}
