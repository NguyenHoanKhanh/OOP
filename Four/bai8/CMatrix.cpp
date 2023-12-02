#include "CMatrix.h"
#include "CVector.h"
using namespace std;

CMatrix::CMatrix(int hang, int cot)
{
    this->ncot = cot;
    this->nhang = hang;
    for (int i = 0; i < nhang; i++)
    {
        matrix[i] = CVector(ncot);
    }
}

int CMatrix::getCot()
{
    return cot;
}

int CMatrix::getHang()
{
    return hang;
}

CVector CMatrix::getvalue(int hang, int cot)
{
    return matrix[hang].getVector(cot);
}

void CMatrix::setvalue(int hang, int cot, double value)
{
    matrix[hang].setVector(cot, value);
}