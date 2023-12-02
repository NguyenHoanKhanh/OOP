#include <iostream>
#include "dathuc.h"
using namespace std;

istream &operator >>(istream &in, dathuc &dt)
{
    cout<<"Nhap vao so mu cao nhat : "<<"\t";
    in>>dt.n;
    for (int i = dt.n; i >= 0 ; i--)
    {
        cout<<"Nhap vao he so cua x^ : "<<i<<" : ";
        in>>dt.Dathuc[i];

        while (dt.Dathuc[i] < 0 )
        {
            cout<<"Khong duoc am ";
            in>>dt.Dathuc[i];
        }  
    }
    return in;
}

ostream &operator <<(ostream &out, dathuc dt)
{
    for (int i = dt.n; i >= 0; i--)
    {
        cout<<dt.Dathuc[i]<<"x^"<<i;
        if(i > 0) cout<<" + ";
    }   
    return out;
}

int dathuc::getDegree()
{
    return n;
}

int dathuc::getCoeff(int index)
{
    return Dathuc[index];
}

void dathuc::setCoeff(int index, int value)
{
    Dathuc[index] = value;
}
dathuc dathuc::operator+(const dathuc &other)
{
    int maxN = max(n, other.n);
    dathuc tong(maxN);

    for (int i = 0; i <= n; i++)
    {
        tong.Dathuc[i] += Dathuc[i];
    }
    for (int i = 0; i <= other.n; i++)
    {
        tong.Dathuc[i] += other.Dathuc[i];
    }
    
    while (tong.Dathuc > 0 && tong.Dathuc[tong.n] == 0)
    {
        tong.n--;
    }
    return tong;
    
}

dathuc dathuc::operator-(const dathuc &other)
{
    int maxN = max(n, other.n);
    dathuc hieu(maxN);

    for (int i = 0; i <= n; i++)
    {
        hieu.Dathuc[i] -= Dathuc[i];
    }
    
    for (int i = 0; i <= other.n; i++)
    {
        hieu.Dathuc[i] -= other.Dathuc[i]; 
    }
    
    return hieu;
}

dathuc dathuc::operator*(const dathuc &other)
{
    dathuc result;
        result.n = n+other.n;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= other.n; j++)
            {
                result.Dathuc[i+j] += Dathuc[i] * other.Dathuc[j];
            } 
        }
        return result;
}

dathuc dathuc::operator/(const dathuc &other)
    {
        dathuc quotient(n - other.n);

        for (int i = n; i >= other.n; i--)
        {
            if(Dathuc[i] != 0)
            {
                int quotientCoeff = Dathuc[i] / other.Dathuc[other.n];
                quotient.setCoeff(i - other.n, quotientCoeff);

                for (int j = 0; i < other.n; j++)
                {
                    Dathuc[i - other.n + j] -= quotientCoeff * other.Dathuc[j];
                }
            }
        }
        return quotient;   
    }   

dathuc dathuc::Deri_Dt()
{
    dathuc result;
    if(n == 0)
    {
        result.n = 0;
        result.Dathuc[MAX] = {0};
    }
    else 
    {
        result.n = n;
        for (int i = 0; i <= n; i++)
        {
            result.Dathuc[i] += (i+1)*Dathuc[i+1];
        }
    }
    return result;
}

dathuc dathuc::Primi_Dt()
{
    dathuc result;
    result.n = n+1;

    for (int i = 0; i <= n + 1; i++)
    {
       result.Dathuc[i + 1] = Dathuc[i] / (i + 1);
    }
    return result;
}
