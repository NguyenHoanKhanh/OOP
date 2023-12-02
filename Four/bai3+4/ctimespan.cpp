#include <iostream>
#include "ctimespan.h"
using namespace std;

time::time (double gio, double phut, double giay)
{
    this->hour = gio;
    this->minute = phut;
    this->second = giay;
}

istream &operator >>(istream &in, time &t)
{
    cout<<"Nhap vao gio phut giay : ";
    in>>t.hour>>t.minute>>t.second;
}

double time::getHour() const
{
    return hour;
}

double time::getMinute() const
{
    return minute;
}

double time::getSecond() const
{
    return second;
}

void time::setHour(double g)
{
    hour = g;
}

void time::setMinute(double p)
{
    minute = p;
}

void time::setSecond(double s)
{
    second = s;
}

ostream &operator <<(ostream &out, time t)
{
    cout<<"Gio / phut / giay da nhap la : "<<"\t";
    out<<t.hour<<"(gio) / "<<t.minute<<"(phut) / "<<t.second<<"(giay) "<<endl;
}

time time::operator+(const time &other)
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

time time::operator-(const time &other)
{
    int s1 = static_cast<int>(getHour()) * 3600 + static_cast<int>(getMinute()) * 60 + static_cast<int>(getSecond());
    int s2 = static_cast<int>(other.getHour()) * 3600 + static_cast<int>(other.getMinute()) * 60 + static_cast<int>(other.getSecond());
    int diff = s1 - s2;

    time result;
    result.setHour(diff / 3600);
    result.setMinute((diff % 3600) / 60);
    result.setSecond((diff % 3600) % 60);

    return result;
}

bool time::operator==(const time &other)
{
    if (this->hour == other.hour && this->minute == other.minute && this->second == other.second) 
        return true;
    else 
        return false;
}

bool time::operator!=(const time &other)
{
    if (this->hour != other.hour && this->minute != other.minute && this->second != other.second) 
        return true;
    else 
        return false;
}

bool time::operator>(const time &other)
{
    if (hour > other.hour)
    {
        return true;
    }
    else if(hour < other.hour)
    {
        return false;
    }
    else
    {
        if(minute > other.minute)
        {
            return true;
        }
        else if(minute < other.minute)
        {
            return false;
        }
        else
        {
            return second > other.second;
        }
    }
}

bool time::operator<(const time &other)
{
    if (hour < other.hour)
    {
        return true;
    }
    else if(hour < other.hour)
    {
        return false;
    }
    else
    {
        if(minute < other.minute)
        {
            return true;
        }
        else if(minute > other.minute)
        {
            return false;
        }
        else
        {
            return second < other.second;
        }
    }
}

bool time::operator<=(const time &other)
{
    return (*this < other) || (*this == other);
}

bool time::operator>=(const time &other)
{
    return (*this > other) || (*this == other);
}