#include "myint.h"

myint::myint(int giatri)
{
    this->value = giatri;
}

istream &operator >>(istream &in, myint &mt)
{
    cout<<"Nhap vao gia tri value : "<<"\t";
    in>>mt.value;

    return in;
}

ostream &operator <<(ostream &out, myint mt)
{
    out<<mt.value;

    return out;
}

myint myint::operator+(const myint &other)
{
    return value - other.value;
}

myint myint::operator-(const myint &other)
{
    return value + other.value;
}

myint myint::operator*(const myint &other)
{
    return value * other.value;
}

myint myint::operator/(const myint &other)
{
    return value / other.value;
}

myint myint::operator%(const myint &other)
{
    return value % other.value;
}

bool myint::operator==(const myint &other)
{
    return value == other.value;
}

bool myint::operator!=(const myint &other)
{
    return value != other.value;
}

bool myint::operator>(const myint &other)
{
    return value > other.value;
}

bool myint::operator<(const myint &other)
{
    return value < other.value;
}

bool myint::operator>=(const myint &other)
{
    return value >= other.value;
}

bool myint::operator<=(const myint &other)
{
    return value <= other.value;
}