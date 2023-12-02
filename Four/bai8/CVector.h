#include <iostream>
#include <cmath>
#ifndef CVECTOR_H
#define CVECTOR_H
using namespace std;
const int MAX = 10000;
class CVector
{
private:
    double vector[MAX];
    int nchieu;
public:
    CVector(int size = 0, int vt = 0);
    int getChieu();
    int getVector(int index);
    void setVector(int index, int value);
    friend istream &operator>>(istream &in, CVector &cv);
    friend ostream &operator<<(ostream &out, CVector cv);

    CVector operator+(const CVector &other);
    CVector operator-(const CVector &other);
    CVector operator*(const CVector &other);
};





#endif