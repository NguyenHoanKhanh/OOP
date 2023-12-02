#include <iostream>
#ifndef DAY_H
#define DAY_H

using namespace std;

class day
{
private:
    int ngay, thang, nam;
public:
    day(int kngay = 0, int kthang = 0, int knam = 0);
    friend istream &operator >>(istream &in, day &d);
    friend ostream &operator <<(ostream &out, day d);

    bool isLeapYear();
    int getMaxDayOfMonth(int thang);
    day operator+(int days);
    day operator-(int days);
    day operator++();
    day operator--();
    void previous(const day &other);
    day distance(const day &other);
};




#endif 