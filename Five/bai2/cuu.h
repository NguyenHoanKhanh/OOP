#include <iostream> 
#include "giasuc.h"
#ifndef CUU_H
#define CUU_H

using namespace std;

class cuu : public giasuc
{
private:
    string Tieng_Cuu;
public:
    cuu(string keu = "\0");
    void Keu();
};




#endif 