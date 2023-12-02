#include <iostream> 
#include "giasuc.h"
#ifndef DE_H
#define DE_H

using namespace std;

class de : public giasuc
{
private:
    string Tieng_De;
public:
    de(string keu = "\0");
    void Keu();
};




#endif 