#include <iostream>
#ifndef PHANSO_H
#define PHANSO_H
using namespace std;

    class phanso
    {
    private:
        double tuso, mauso;
    public:
        phanso (double tu=0, double mau=1);

        friend istream &operator >>(istream &in, phanso &sp);
        friend ostream &operator <<(ostream &out, phanso sp);

        phanso rut_gon();
        phanso operator+(const phanso &other);
        phanso operator-(const phanso &other);
        phanso operator*(const phanso &other);
        phanso operator/(const phanso &other);
    };



#endif