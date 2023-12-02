#include <iostream>
#include "CVector.h"
#ifndef CMATRIX_H
#define CMATRIX_H
using namespace std;
const int MAX_hang = 100;
const int MAX_cot = 100;
class CMatrix
{
private:
    double matrix[MAX_hang];
    int nhang, ncot;
public:
    CMatrix (int hang = 0, int cot = 0);
    CVector getvalue(int hang, int cot);
    void setvalue(int hang, int cot, double value);
    friend istream &operator>>(istream &in , CMatrix &cm);
    friend ostream &operator<<(ostream &out , CMatrix cm);
};







#endif