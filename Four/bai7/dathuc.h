#include <iostream>
#ifndef DATHUC_H
#define DATHUC_H

using namespace std;
const int MAX = 10000;
class dathuc
{
private:
    double Dathuc[MAX];
    int n;
public:
    dathuc (int deg = 0)
    {
        n = deg;
        for (int i = 0; i <= n; i++)
        {
            Dathuc[i] = 0;
        }   
    }
    friend istream &operator >>(istream &in, dathuc &dt);
    friend ostream &operator <<(ostream &out, dathuc dt);
    int getDegree();
    int getCoeff(int index);
    void setCoeff(int index, int value);

    
    dathuc operator+(const dathuc &other);
    dathuc operator-(const dathuc &other);
    dathuc operator*(const dathuc &other);
    dathuc operator/(const dathuc &other);
    dathuc Deri_Dt();
    dathuc Primi_Dt();
};



#endif