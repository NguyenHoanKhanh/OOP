#include <iostream>
#include <algorithm>
using namespace std;
struct PhanSo
{
    int ts, ms;
};
void nhap(PhanSo *a)
{
    cout << "Nhap vao tu so : ";
    cin >> a->ts;
    cout << "Nhap vao mau so : ";
    cin >> a->ms;
}
void xuat(PhanSo a)
{
    cout << "Phan so tra ve : " << a.ts << "/" << a.ms;
}
void rut_gon(PhanSo a)
{
    PhanSo x;
    x.ts = a.ts / __gcd(a.ts, a.ms);
    x.ms = a.ms / __gcd(a.ts, a.ms);
    cout << "Phan so rut gon : " << x.ts << "/" << x.ms;
}
PhanSo Tinh_Tong(PhanSo a1, PhanSo a2)
{
    PhanSo tong;
    tong.ts = a1.ts * a2.ms + a1.ms * a2.ts;
    tong.ms = a1.ms * a2.ms;
    return tong;
}
PhanSo Tinh_Hieu(PhanSo a1, PhanSo a2)
{
    PhanSo hieu;
    hieu.ts = a1.ts * a2.ms - a1.ms * a2.ts;
    hieu.ms = a1.ms * a2.ms;
    return hieu;
}
PhanSo Tinh_Tich(PhanSo a1, PhanSo a2)
{
    PhanSo tich;
    tich.ts = a1.ts * a2.ts;
    tich.ms = a1.ms * a2.ms;
    return tich;
}
PhanSo Tinh_Thuong(PhanSo a1, PhanSo a2)
{
    PhanSo thuong;
    thuong.ts = a1.ts * a2.ms;
    thuong.ms = a1.ms * a2.ts;
    return thuong;
}
void so_sanh(PhanSo a1, PhanSo a2)
{
    float ps1 = float(float(a1.ts) / float(a1.ms));
    float ps2 = float(float(a2.ts) / float(a2.ms));
    if (ps1 > ps2)
        cout << "Phan so 1 lon nhat";
    else
        cout << "Phan so 2 lon nhat";
}
int main()
{
    PhanSo a1, a2;
    cout << "Nhap phan so 1 : ";
    nhap(&a1);
    cout << "Xuat phan so 1 : ";
    xuat(a1);
    cout << endl;
    cout << "Nhap phan so 2 : ";
    nhap(&a2);
    cout << "Xuat phan so 2 : ";
    xuat(a2);
    cout << endl;
    cout << "Rut gon phan so 1 : ";
    rut_gon(a1);
    cout << endl;
    cout << "Rut gon phan so 2 : ";
    rut_gon(a2);
    cout << endl;
    cout << "So sanh hai phan so : ";
    so_sanh(a1, a2);
    cout << endl;
    cout << "Tong hai phan so : ";
    rut_gon(Tinh_Tong(a1, a2));
    cout << endl;
    cout << "Hieu hai phan so : ";
    rut_gon(Tinh_Hieu(a1, a2));
    cout << endl;
    cout << "Tich hai phan so : ";
    rut_gon(Tinh_Tich(a1, a2));
    cout << endl;
    cout << "Thuong hai phan so : ";
    rut_gon(Tinh_Thuong(a1, a2));
}
