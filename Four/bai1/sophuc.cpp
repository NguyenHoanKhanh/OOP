#include <iostream> 
#include <cmath>
#include "sophuc.h"
using namespace std;

sophuc::sophuc(double Dreal, double Dfake)
{
    this->real = Dreal;
    this->fake = Dfake;
}
istream &operator >> (istream &in , sophuc &sp)
{
    cout<<"Nhap vao phan thuc : ";
    in>>sp.real;
    cout<<"Nhap vao phan ao : ";
    in>>sp.fake;
    return in;
}

ostream &operator << (ostream &out , sophuc sp)
{
    cout<<"So phuc da nhap la : "<<"\t";
    if(sp.fake>0) out<<sp.real<<" + "<<sp.fake<<"i"<<endl;
    else out<<sp.real<<" - "<<(-1)*sp.fake<<"i"<<endl;
    return out;
}

sophuc sophuc::operator+(const sophuc &other)
{
    return sophuc(real + other.real, fake + other.fake);
}

sophuc sophuc::operator-(const sophuc &other)
{
   return sophuc(real - other.real, fake - other.fake);
}

sophuc sophuc::operator*(const sophuc &other )
{
    return sophuc(real*other.real - fake*other.fake, real*other.fake + fake*other.real);
}

sophuc sophuc::operator/(const sophuc &other)
{
    double ChiaReal = (real*other.real + fake*other.fake)/(pow(other.real,2)+pow(other.fake,2));
    double ChiaFake = (real*other.fake - fake*other.real)/(pow(other.real,2)+pow(other.fake,2));

    return sophuc((real*other.real + fake*other.fake)/(pow(other.real,2)+pow(other.fake,2)),  (real*other.fake - fake*other.real)/(pow(other.real,2)+pow(other.fake,2)));
}

bool sophuc::operator==(const sophuc &other)
{
    if (this->real == other.real && this->fake == other.fake)
        return true;
    else 
        return false;
}

bool sophuc::operator!=(const sophuc &other)
{
    if (this->real != other.real && this->fake != other.fake)
        return true;
    else 
        return false;
}   