#ifndef CSTRING_H
#define CSTRING_H

#include <iostream>
using namespace std;
const int MAX = 100;

class cstring
{
private:
    char arr[MAX] ;

public:
    cstring();
    cstring(const char* ARR);
    cstring(const cstring &other);
    ~cstring();

    cstring& operator=(const cstring &other);
    cstring operator+(const cstring &other) ;
    bool operator==(const cstring &other) ;
    bool operator!=(const cstring &other) ;
    bool operator<(const cstring &other) ;
    bool operator>(const cstring &other) ;

    friend istream& operator>>(istream &in, cstring &cstring);
    friend ostream& operator<<(ostream &out, cstring &cstring);
};

#endif 