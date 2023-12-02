#include <iostream>
#include "bo.cpp"
#include "cuu.cpp"
#include "de.cpp"
#include "giasuc.cpp"
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int soluongbo, soluongcuu, soluongde;
    cout<<"Nhap vao so luong bo : "<<endl;
    cin>>soluongbo;
    cout<<"Nhap vao so luong cuu : "<<endl;
    cin>>soluongcuu;
    cout<<"Nhap vao so luong de : "<<endl;
    cin>>soluongde;

    giasuc** GIASUC = new giasuc*[soluongbo + soluongcuu + soluongde];

    for (int i = 0; i < soluongbo; i++)
    {
        GIASUC[i] = new bo();
    }

    for (int i = soluongbo; i < soluongbo + soluongcuu ; i++)
    {
        GIASUC[i] = new cuu();
    }
    
    for (int i = soluongbo + soluongcuu ; i < soluongbo + soluongcuu + soluongde ; i++)
    {
        GIASUC[i] = new de();
    }
    
    cout<<"Xuat ra tieng keu cua gia suc : "<<endl;
    for (int i = 0; i < soluongbo + soluongcuu + soluongde; i++)
    {
        GIASUC[i]->Keu();
        cout<<endl;
    }
    

    cout<<"Muc sinh san va cho sua cua gia suc : "<<endl;
    for (int i = 0; i < soluongbo + soluongcuu + soluongde ; i++)
    {
        GIASUC[i]->ChoSua();
        GIASUC[i]->SinhCon();
    }



    cout<<"Thong ke san luong : "<<endl;
    for (int i = 0; i < soluongbo + soluongcuu + soluongde ; i++)
    {
        GIASUC[i]->ThongKe();
    }
    
    for (int i = 0; i < soluongbo + soluongcuu + soluongde ; i++)
    {
        delete GIASUC[i];
    }
    delete[] GIASUC;
}