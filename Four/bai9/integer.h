#include <iostream>
#ifndef INTEGER_H
#define INTEGER_H
using namespace std;

class integer
{
private:
    int value;
public:
    integer(int giatri = 0);
    friend istream &operator >> (istream &in, integer &it);
    friend ostream &operator << (ostream &out, integer it);

    integer operator+(const integer &other);
    integer operator-(const integer &other); 
    integer operator*(const integer &other);
    integer operator/(const integer &other);
    integer operator%(const integer &other);
    bool operator==(const integer &other);
    bool operator!=(const integer &other);
    bool operator>(const integer &other);
    bool operator<(const integer &other);
    bool operator>=(const integer &other);
    bool operator<=(const integer &other);
};





#endif 