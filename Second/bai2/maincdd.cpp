#include <iostream>
#include "class.cpp"
#include "candidate.cpp"
using namespace std;
int main()
{
    room r;
    r.nhapds();
    cout<<endl;
    cout<<"Danh sach hoc sinh : "<<endl;
    r.tong(); 
    return 0;
}