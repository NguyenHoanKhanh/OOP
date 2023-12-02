#include <iostream>
#include "ticket.cpp"
using namespace std;
void nhapDSve(ticket ds[], int &n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"Ve so : "<<i+1<<endl;
        ds[i].nhap();
    }
}
void xuatDSve(ticket ds[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<"Ve so : "<<i+1;
        ds[i].xuat();
    }
}
void tongtienthuduoc(ticket ds[], int n)
{
    long long thu=0;
    for(int i=0; i<n; i++)
        thu+=ds[i].thanh_tien();
    cout<<thu;
}
int main()
{
   int n;
   cout<<"Nhap so luong ve : "<<"\t";
   cin>>n;
   ticket ds[100];
   nhapDSve(ds,n);
   tongtienthuduoc(ds,n);
   return 0;
}