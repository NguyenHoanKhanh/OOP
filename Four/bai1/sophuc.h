#include <iostream>
#ifndef SOPHUC_H
#define SOPHUC_H
using namespace std;

class sophuc
{
private:
    double real,fake;
public:
    sophuc (double Dreal = 0, double Dfake = 0);
    friend istream & operator >>(istream &in, sophuc &sp);
    friend ostream & operator <<(ostream &out, sophuc sp);

    sophuc operator+(const sophuc &other);
    sophuc operator-(const sophuc &other);
    sophuc operator*(const sophuc &other);
    sophuc operator/(const sophuc &other);
    bool operator==(const sophuc &other);
    bool operator!=(const sophuc &other);
};





#endif