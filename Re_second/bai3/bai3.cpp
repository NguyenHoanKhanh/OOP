#include <iostream> 
#include "bai3.h"
using namespace std;

void ticket::nhap_1_ve()
{
    cout<<"Nhap vao ten ve : "<<endl;
    cin.ignore();
    getline(cin, name_ve);
    cout<<"Nhap vao id ve : "<<endl;
    cin.ignore();
    getline(cin, id_ve); 
}
void ticket::xuat_1_ve()
{
    cout<<name_ve<<"--"<<id_ve;
}
