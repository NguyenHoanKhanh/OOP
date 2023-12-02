#include <iostream>
#include "day.h"
using namespace std;

day::day (int kngay, int kthang, int knam)
{
    this->ngay = kngay;
    this->thang = kthang;
    this->nam = knam;
}


bool day::isLeapYear() 
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) 
        {
            return true;
        }
        return false;
    }

int day::getMaxDayOfMonth(int month) 
{
        static const int maxDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int maxDay = maxDays[month - 1];

        if (month == 2 && isLeapYear()) {
            maxDay = 29;
        }

        return maxDay;
}
istream &operator >>(istream &in, day &d)
{
    cout<<"Input : ";
    in>>d.ngay>>d.thang>>d.nam;
    while(d.ngay < 1 || d.ngay > 31 || d.thang < 1 || d.thang > 12 || d.nam < 1 || d.ngay > d.getMaxDayOfMonth(d.thang))
    {
        cout<<"Nhap lai : ";
        cin>>d.ngay>>d.thang>>d.nam;
    }
    return in;
}

ostream &operator <<(ostream &out, day d)
{
    cout<<"Output : "<<"\t";
    out<<d.ngay<<" / "<<d.thang<<" / "<<d.nam<<endl;
    return out;
}

day day::operator+(int days)
{
    day result(ngay, thang, nam);
    result.ngay += days;
    while (result.ngay > getMaxDayOfMonth(result.thang))
    {
        result.ngay -= getMaxDayOfMonth(result.thang);
        result.thang++;
        if (result.thang > 12)
        {
            result.thang = 1;
            result.nam ++ ;
        }
    }
    return result;
}

day day::operator-(int days)
{
    day result(ngay, thang, nam);
    result.ngay -= days;
    while (result.ngay < 1)
    {
        result.thang --;
        if (result.thang < 1)
        {
            result.thang = 12;
            result.nam -- ;
        }
        result.ngay += getMaxDayOfMonth(result.thang);
    }
    return result;
}

day day::operator++()
{
    ngay++;
    if (ngay > getMaxDayOfMonth(thang))
    {
        ngay = 1;
        thang ++;
        if (thang > 12)
        {
            thang = 1;
            nam ++;
        }
        ngay = getMaxDayOfMonth(thang);
    }
    return *this;
}

day day::operator--()
{
    ngay--;
    if (ngay < 1)
    {
        thang --;
        if (thang < 1)
        {
            thang = 12;
            nam--;
        }
        ngay = getMaxDayOfMonth(thang);
    }
    
    return *this;
}

void day::previous(const day &other)
{
    ngay = other.ngay;
    thang = other.thang;
    nam = other.nam;
}

day day::distance(const day &other)
{
    day result;
    if (ngay == other.ngay)
    {
        result.ngay = ngay;
    }
    else
    {
        result.ngay = ngay - other.ngay;
    }
    if (thang == other.thang)
    {
        result.thang = thang;
    }
    else
    {
        result.thang = thang - other.thang;
    }
    if (nam == other.nam)
    {
        result.nam = nam;
    }
    else
    {
        result.nam = nam - other.nam;
    }
    while (result.ngay < 0 || result.thang < 0 || result.nam < 0)
    {
        cout<<"Nhap lai va tinh lai : ";
        cin>>ngay>>thang>>nam;
    }
    return result;   
}