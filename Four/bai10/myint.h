#include <iostream>
#ifndef MYINT_H
#define MYINT_H
using namespace std;

class myint
{
private:
    int value;
public:
    myint(int giatri = 0);
    friend istream &operator >> (istream &in, myint &mt);
    friend ostream &operator << (ostream &out, myint mt);

    myint operator+(const myint &other);
    myint operator-(const myint &other);
    myint operator*(const myint &other);
    myint operator/(const myint &other);
    myint operator%(const myint &other);
    bool operator==(const myint &other);
    bool operator!=(const myint &other);
    bool operator>(const myint &other);
    bool operator<(const myint &other);
    bool operator>=(const myint &other);
    bool operator<=(const myint &other);
};





#endif