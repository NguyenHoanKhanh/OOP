#include <iostream>
using namespace std;
class SoPhuc
{
    private:
    float thuc,ao;
    public:
    friend istream &operator>>(istream &in , SoPhuc &sp);
    friend ostream &operator<<(ostream &out, SoPhuc sp);
    SoPhuc Tong(SoPhuc);
    SoPhuc Hieu(SoPhuc);
    SoPhuc Tich(SoPhuc);    
    SoPhuc Thuong(SoPhuc);
    float Value();
};