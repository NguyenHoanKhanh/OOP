#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct HocSinh
{
    string Name;
    float diem_toan, diem_van;
};

void nhap(HocSinh &a)
{
    cin.ignore();
    cout<<"Nhap vao ho va ten hoc sinh : ";
    getline(cin,a.Name);
    cout<<"Nhap vao diem toan : ";
    cin>>a.diem_toan;
    cout<<"Nhap vao diem van : ";
    cin>>a.diem_van;
}
void xuat(HocSinh a)
{
    cout<<a.Name<<" "<<a.diem_toan<<" "<<a.diem_van<<endl;
}
float Diem_trung_binh(HocSinh a)
{
    return (a.diem_toan+a.diem_van)/2;
}
struct Lop_Hoc
{
    int n;
    HocSinh *ds;
};
void Nhap_Class(Lop_Hoc &lh )
{
    cout<<"Nhap vao so luong hoc sinh :";
    cin>>lh.n;
    lh.ds=new HocSinh[lh.n];
    for(int i=0; i<lh.n; i++)
    {
        cout<<"Hoc sinh so "<<i+1<<endl;
        nhap(lh.ds[i]); 
    }
}
void Xuat_class(Lop_Hoc lh)
{
    for(int i=0; i<lh.n; i++)
{
    cout<<"Hoc sinh so "<<i+1<<endl;
    xuat(lh.ds[i]);
}
}
void Hoc_sinh_co_DTB_lon_nhat(Lop_Hoc lh)
{
    float max=Diem_trung_binh(lh.ds[0]);
    for(int i=0; i<lh.n; i++)
        if(max<Diem_trung_binh(lh.ds[i]))
        max=Diem_trung_binh(lh.ds[i]);
    for(int i=0; i<lh.n ; i++)
        if(Diem_trung_binh(lh.ds[i])==max)
        xuat(lh.ds[i]);
}
void DTB_thap_hon_chung(Lop_Hoc lh)
{
    float DTB=0;
    for(int i=0; i<lh.n; i++)
    DTB+=Diem_trung_binh(lh.ds[i]);
    DTB/=lh.n;
    for(int i=0; i<lh.n; i++)
    if(Diem_trung_binh(lh.ds[i])<DTB)
    xuat(lh.ds[i]);
}
int main()
{
    Lop_Hoc lophoc;
    Nhap_Class(lophoc);
    cout<<endl;
    cout<<"Danh sach lop : "<<endl;
    Xuat_class(lophoc);
    cout<<endl;
    cout<<"Hoc sinh co diem trung binh lon nhat :"<<endl;
    Hoc_sinh_co_DTB_lon_nhat(lophoc);
    cout<<"Hoc sinh co diem trung binh thap hon chung : "<<endl;
    DTB_thap_hon_chung(lophoc);
}
