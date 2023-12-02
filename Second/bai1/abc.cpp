#include "abc.h"
#include <cmath>
using namespace std;
istream &operator>>(istream &in, SoPhuc &sp)
{
    in>>sp.thuc>>sp.ao;
}
ostream &operator<<(ostream &out, SoPhuc sp)
{
    out<<sp.thuc<<"+"<<sp.ao<<"i";
}
SoPhuc SoPhuc::Tong(SoPhuc a)
{
    SoPhuc tong;
    tong.thuc=thuc+a.thuc;
    tong.ao=ao+a.ao;
    return tong;
}
SoPhuc SoPhuc::Hieu(SoPhuc a)
{
    SoPhuc hieu;
    hieu.thuc=thuc-a.thuc;
    hieu.ao=ao-a.ao;
    return hieu;
}
SoPhuc SoPhuc::Tich (SoPhuc a)
{
    SoPhuc tich;
    tich.thuc=thuc*a.thuc-ao*a.ao;
    tich.ao=thuc*a.ao+ao*a.thuc;
    return tich;
}
SoPhuc SoPhuc::Thuong(SoPhuc a)
{
    SoPhuc thuong;
    thuong.thuc=(thuc*a.thuc+ao*a.ao)/(pow(a.ao,2)+pow(a.thuc,2));
    thuong.ao=(ao*a.thuc-thuc*a.ao)/(pow(a.ao,2)+pow(a.thuc,2));
    return thuong;
}
float SoPhuc::Value()
{
    return sqrt(pow(thuc,2)+pow(ao,2));
}