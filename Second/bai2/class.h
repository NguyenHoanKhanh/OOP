#ifndef A_H_INCLUDED
#define A_H_INCLUDED
#include <string>
#include "candidate.h"
using namespace std;
class room
{
private:
    candidate cd[100];
    int n;

public:
    void nhapds();
    void xuatds();
    
    void tong();
};

#endif