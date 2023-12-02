#include "cstring.h"

cstring::cstring()
{
    arr[0] = '\0';
}

cstring::cstring(const char *ARR)
{
    int length = 0;
    while (ARR[length] != '\0' && length < MAX - 1)
    {
        arr[length] = ARR[length];
        length++;
    }
    arr[length] = '\0';
}

cstring::cstring(const cstring &other)
{
    int length = 0;
    while (other.arr[length] != '\0' && length < MAX - 1)
    {
        arr[length] = other.arr[length];
        length++;
    }
    arr[length] = '\0';
}

cstring::~cstring() {}

istream &operator>>(istream& in, cstring &cs)
{
    char temp[MAX];
    in.getline(temp, MAX);

    int i = 0;
    while (temp[i] != '\0' && i < MAX - 1)
    {
        cs.arr[i] = temp[i];
        i++;
    }
    cs.arr[i] = '\0';

    return in;
}

ostream& operator<<(ostream &out, cstring &cs)
{
    int i = 0;
    while (cs.arr[i] != '\0' && i < MAX - 1)
    {
        out << cs.arr[i];
        i++;
    }
    return out;
}
cstring& cstring::operator=(const cstring &other)
{
    if (this != &other)
    {
        int length = 0;
        while (other.arr[length] != '\0' && length < MAX - 1)
        {
            arr[length] = other.arr[length];
            length++;
        }
        arr[length] = '\0';
    }
    return *this;
}

cstring cstring::operator+(const cstring &other) 
{
    cstring result;

    int length1 = 0;
    while (arr[length1] != '\0' && length1 < MAX - 1)
    {
        result.arr[length1] = arr[length1];
        length1++;
    }

    int length2 = 0;
    while (other.arr[length2] != '\0' && length1 + length2 < MAX - 1)
    {
        result.arr[length1 + length2] = other.arr[length2];
        length2++;
    }

    result.arr[length1 + length2] = '\0';

    return result;
}

bool cstring::operator==(const cstring &other) 
{
    int i = 0;
    while (arr[i] != '\0' && other.arr[i] != '\0' && i < MAX - 1)
    {
        if (arr[i] != other.arr[i])
            return false;
        i++;
    }

    return arr[i] == other.arr[i];
}

bool cstring::operator!=(const cstring &other) 
{
    return !(*this == other);
}

bool cstring::operator>(const cstring &other) 
{
    int i = 0;
    while (arr[i] != '\0' && other.arr[i] != '\0' && i < MAX - 1)
    {
        if (arr[i] > other.arr[i])
        {
            return true;
        }
        i++;
    }
    return arr[i] > other.arr[i];
}

bool cstring::operator<(const cstring &other) 
{
    int i = 0;
    while (arr[i] != 0 && other.arr[i] != '\0' && i < MAX - 1)
    {
        if (arr[i] < other.arr[i])
        {
            return true;
        }
        i++;
    }
    return arr[i] < other.arr[i];
}
