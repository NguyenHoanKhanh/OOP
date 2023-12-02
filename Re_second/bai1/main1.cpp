#include <iostream>
#include <iomanip>
#include "bai1.cpp"
#include "ListSp.cpp"
using namespace std;
int main()
{
    List l;
    l.Nhap_List();
    cout << "Tong cua day so phuc : ";
    l.Tinh_Tong();
    cout << endl;
    cout << "Hieu cua day so phuc : ";
    l.Tinh_Hieu();
    cout << endl;
    cout << "Tich cua day so phuc : ";
    l.Tich().xuat_1_so_phuc();
    cout<<setprecision(2)<<fixed<<"Thuong cua day so phuc : ";
    l.Thuong().xuat_1_so_phuc();
}