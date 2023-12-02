#include <iostream> 
#include "giasuc.h"
#include <string>
#ifndef BO_H
#define BO_H

using namespace std;

class bo : public giasuc
{
private:
    string Tieng_Bo;
public:
    bo(string keu = "\0");
    void Keu();
};



#endif