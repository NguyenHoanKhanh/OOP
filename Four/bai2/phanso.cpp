#include <iostream>
#include <algorithm>
#include "phanso.h"
using namespace std;

phanso::phanso(double tu, double mau)
{
    this->tuso = tu;
    this->mauso = mau;
}

istream &operator >>(istream &in, phanso &sp)
{
    cout<<"Nhap vao tu so : "<<"\t";
    in>>sp.tuso;
    cout<<"Nhap vao mau so : "<<"\t";
    in>>sp.mauso;

    return in;
}

ostream &operator <<(ostream &out, phanso sp)
{
    cout<<"Phan so tra ve : "<<"\t";
    do
    {   
        if(sp.tuso>0)
        {
            if(sp.mauso>0)  out<<sp.tuso<<"/"<<sp.mauso<<endl;
            else    out<<(-1)*sp.tuso<<"/"<<(-1)*sp.mauso<<endl;           
        }
        else if(sp.tuso < 0)
        {
            if(sp.mauso>0)  out<<sp.tuso<<"/"<<sp.mauso<<endl;
            else    out<<(-1)*sp.tuso<<"/"<<(-1)*sp.mauso<<endl;
        }
    } while (sp.mauso == 0 );
    
    return out;
}

phanso phanso::rut_gon()
{
    double Rutgon_Tuso = tuso/__gcd(tuso,mauso);
    double Rutgon_Mauso = mauso/__gcd(tuso,mauso);

    return phanso(Rutgon_Tuso, Rutgon_Mauso);
}

phanso phanso::operator+(const phanso &other)
{
    return phanso(tuso*other.mauso + mauso*other.tuso, mauso*other.mauso);
}

phanso phanso::operator-(const phanso &other)
{
    return phanso(tuso*other.mauso - mauso*other.tuso, mauso*other.mauso);
}

phanso phanso::operator*(const phanso &other)
{
    return phanso(tuso*other.tuso, mauso*other.mauso);
}

phanso phanso::operator/(const phanso &other)
{
    return phanso(tuso*other.mauso, mauso*other.tuso);
}