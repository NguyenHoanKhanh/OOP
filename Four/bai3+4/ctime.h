
#ifndef CTIME_H
#define CTIME_H
#include "ctimespan.h"

using namespace std;

class ctime : public time
{
public:
    ctime();
    ctime(double gio, double phut , double giay);
    ctime operator+(int s);
    ctime operator-(int s);
    ctime operator+(const time &other);
    time operator-(const ctime &other);
    ctime operator++();
    ctime operator++(int);
    ctime operator--();
    ctime operator--(int);
    friend istream &operator >> (istream &in, ctime &ct);
    friend ostream &operator << (ostream &out, ctime ct);

    
};




#endif