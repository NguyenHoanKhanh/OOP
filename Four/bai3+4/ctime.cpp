#include <iostream> 
#include "ctime.h"
using namespace std;

istream &operator >> (istream &in, ctime &ct)
{
    in>>static_cast<time &>(ct); 
    return in;
}

ostream &operator<<(ostream &out, ctime ct)
{
    out<<static_cast<const time &>(ct);
    return out;
}

ctime::ctime() : time() {}

ctime::ctime(double gio, double phut, double giay) : time (gio, phut, giay) {}

ctime ctime::operator+(int s)
{
    ctime result(*this);

    result.setHour(getHour() + s / 3600);
    result.setMinute(getMinute() + (s % 3600) / 60);
    result.setSecond(getSecond() + (s % 60));

    result.setMinute(result.getMinute() + static_cast<int>(result.getSecond()) / 60);
    result.setSecond(static_cast<int>(result.getSecond()) % 60);
    result.setHour(result.getHour() + static_cast<int>(result.getMinute()) / 60);
    result.setMinute(static_cast<int>(result.getMinute()) % 60);
    result.setHour(static_cast<int>(result.getHour()) % 24);

    return result;
}

ctime ctime::operator-(int s)
{
    ctime result(*this);
    int Tong_s = static_cast<int>(getHour()) * 3600 + static_cast<int>(getMinute()) * 60 + static_cast<int>(getSecond());
    int Tru = Tong_s - s;

    result.setHour(Tru / 3600);
    result.setMinute((Tru % 3600) / 60);
    result.setSecond((Tru % 60));

    return result;
}

ctime ctime::operator+(const time &other)
{
    time result(*this);

    result.setHour(getHour() + other.getHour());
    result.setMinute(getMinute() + other.getMinute());
    result.setSecond(getSecond() + other.getSecond());

    result.setMinute(result.getMinute() + static_cast<int>(result.getSecond()) / 60);
    result.setSecond(static_cast<int>(result.getSecond()) % 60);
    result.setHour(result.getHour() + static_cast<int>(result.getMinute()) / 60);
    result.setMinute(static_cast<int>(result.getMinute()) % 60);
    result.setHour(static_cast<int>(result.getHour()) % 24);

    return result;
}

time ctime::operator-(const ctime &other)
{
    time result(*this);

    int s1 = static_cast<int>(getHour()) * 3600 + static_cast<int>(getMinute()) * 60 + static_cast<int>(getSecond());
    int s2 = static_cast<int>(other.getHour()) * 3600 + static_cast<int>(other.getMinute()) * 60 + static_cast<int>(other.getSecond());
    int diff = s1 - s2;

    result.setHour(diff / 3600);
    result.setMinute((diff % 3600) / 60);
    result.setSecond((diff % 60));

    return result;
}

ctime ctime::operator++()
{
    return *this + 1;
}

ctime ctime::operator++(int)
{
    ctime result(*this);
    *this = *this + 1;
    return result;
}

ctime ctime::operator--()
{
    return *this - 1;
}

ctime ctime::operator--(int)
{
    ctime result(*this);
    *this = *this - 1;
    return result;
}