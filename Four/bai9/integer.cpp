#include "integer.h"
using namespace std;

integer::integer(int giatri)
{
    this->value = giatri;
}

istream &operator >>(istream &in, integer &it)
{
    cout<<"Nhap vao gia tri value : "<<"\t";
    in>>it.value;
    return in;
}

ostream &operator <<(ostream &out, integer it)
{
    out<<it.value<<endl;
    return out;
}

integer integer::operator+(const integer &other)
{
    return value + other.value;
}

integer integer::operator-(const integer &other)
{
    return value - other.value;
}

integer integer::operator*(const integer &other)
{
    return value * other.value;
}

integer integer::operator/(const integer &other)
{
    do
    {
        return value / other.value;
    } while (other.value == 0); 
}

integer integer::operator%(const integer &other)
{
    do
    {
        return value % other.value;
    } while (other.value == 0);
}

bool integer::operator==(const integer &other)
{
    return value == other.value;
}

bool integer::operator!=(const integer &other)
{
    return value != other.value;
}

bool integer::operator>(const integer &other)
{
    return value > other.value;
}

bool integer::operator<(const integer &other)
{
    return value < other.value;
}

bool integer::operator>=(const integer &other)
{
    return value >= other.value;
}

bool integer::operator<=(const integer &other)
{
    return value <= other.value;
}