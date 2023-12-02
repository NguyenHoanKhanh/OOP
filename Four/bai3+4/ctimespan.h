#include <iostream> 
#ifndef TIME_H
#define TIME_H
using namespace std;

class time
{
private:
    double hour, second, minute;
public:
    time ( double gio = 0, double phut = 0, double giay = 0);
    friend istream &operator >>(istream &in, time &t);
    friend ostream &operator <<(ostream &out, time t);

    double getHour() const ;
    double getMinute() const ;
    double getSecond() const ;

    void setHour(double g);
    void setMinute(double p);
    void setSecond(double s);

    time operator+(const time &other);
    time operator-(const time &other);
    bool operator==(const time &other);
    bool operator!=(const time &other);
    bool operator>(const time &other);
    bool operator<(const time &other);
    bool operator<=(const time &other);
    bool operator>=(const time &other);
};



#endif 