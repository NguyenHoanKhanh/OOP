
#include <iostream>
#include "polynomial.cpp"

using namespace std;

int main()
{
    polynomial p,k;
    // Da thuc 1
    p.Input_Dt();
    cout<<"Da thuc nhap vao la : "<<"\t";
    p.Output_Dt();
    // Da thuc 2 
    k.Input_Dt();
    cout<<"Da thuc nhap vao la : "<<"\t";
    k.Output_Dt();
    // Tong hai da thuc 
    cout<<"Ket qua cua phep cong da thuc : "<<"\t";
    p.Sum_Dt(k).Output_Dt();
    // Hieu hai da thuc
    cout<<"Ket qua cua phep hieu da thuc : "<<"\t";
    p.Minus_Dt(k).Output_Dt();
    // Tich hai da thuc
    cout<<"Ket qua tich hai da thuc : "<<"\t";
    p.Multi_Dt(k).Output_Dt();
    // Dao ham
    cout<<"Ket qua dao ham da thuc 1 : "<<"\t";
    p.Deri_Dt().Output_Dt();
    cout<<"Ket qua dao ham da thuc 2 : "<<"\t";
    k.Deri_Dt().Output_Dt();
    // Nguyen ham
    cout<<"Ket qua nguyen ham da thuc 1 : "<<"\t";
    p.Primi_Dt().Output_Dt();
    cout<<"Ket qua nguyen ham da thuc 2 : "<<"\t";
    k.Primi_Dt().Output_Dt();
}