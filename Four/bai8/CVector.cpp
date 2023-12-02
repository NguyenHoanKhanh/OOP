#include "CVector.h"
using namespace std;

CVector::CVector(int size , int vt)
{
    this->nchieu = size;
    for (int  i = 0; i < nchieu; i++)
    {
        this->vector[i] = vt;
    }
}

int CVector::getChieu()
{
    return nchieu;
}

int CVector::getVector(int index)
{
    return vector[index];
}

void CVector::setVector(int index, int value)
{
    vector[index] = value;
}

istream &operator>>(istream &in, CVector &cv)
{
    cout<<"Nhap vao so chieu cua vector : "<<"\t";
    in>>cv.nchieu;
    for (int i = 0; i < cv.nchieu; i++)
    {
        in>>cv.vector[i];
    }
    return in;
}

ostream &operator<<(ostream &out, CVector cv)
{
    out<<"(";
    for (int i = 0; i < cv.nchieu; i++)
    {
        out<<cv.vector[i];
        if (i < cv.nchieu - 1)
        {
            out<<",";
        }
    }
    out<<")";
    return out;
}

CVector CVector::operator+(const CVector &other)
{
    CVector result(nchieu);
    if (nchieu != other.nchieu)
    {
        cout<<"Khong the thuc hien phep tinh ";
        return CVector();
    }
    
    for (int i = 0; i < nchieu; i++)
    {
        result.vector[i] = vector[i] + other.vector[i];
    } 
    return result;
}

CVector CVector::operator-(const CVector &other)
{
    CVector result(nchieu);
    while (nchieu != other.nchieu)
    {
        cout<<"Khong thuc hien duoc phep tinh";
        cin>>nchieu;
    }
    for (int i = 0; i < nchieu; i++)
    {
        result.vector[i] = vector[i] - other.vector[i];
    }
    return result;
}

CVector CVector::operator*(const CVector &other)
{
    CVector result(nchieu);
    while (nchieu != other.nchieu)
    {
        cout<<"Khong thuc hien duoc phep tinh";
        cin>>nchieu;
    }
    for (int i = 0; i < nchieu; i++)
    {
        result.vector[i] = vector[i] * other.vector[i];
    }
    return result;
}