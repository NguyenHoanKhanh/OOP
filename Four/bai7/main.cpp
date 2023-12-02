#include <iostream>
#include "dathuc.cpp"

using namespace std;

int main()
{
    dathuc d1, d2;
    // Da thuc 1
    cin>>d1;
    cout<<"Da thuc nhan duoc la : "<<"\t";
    cout<<d1;
    cout<<endl;
    // Da thuc 2
    cin>>d2;
    cout<<"Da thuc nhan duoc la : "<<"\t";
    cout<<d2;
    cout<<endl;
    // Tong hai da thuc
    dathuc Tong = d1 + d2;
    cout<<"Ket qua phep cong : "<<Tong<<endl;
    cout<<endl;
    // Hieu hai da thuc
    dathuc Hieu = d1 - d2;
    cout<<"Ket qua phep tru : "<<Hieu<<endl;
    cout<<endl;
    // Tich hai da thuc
    dathuc Nhan = d1 * d2;
    cout<<"Ket qua phep nhan : "<<Nhan<<endl;
    cout<<endl;
    // Ket qua phep chia 
    dathuc Chia = d1 / d2;
    cout<<"Ket qua phep chia : "<<Chia<<endl;
    // Dao ham da thuc 
    cout<<"Dao ham da thuc 1 : "<<d1.Deri_Dt();;
    cout<<endl;
    cout<<"Dao ham da thuc 2 : "<<d2.Deri_Dt();
;
    cout<<endl;
    //  Nguyen ham da thuc 
    cout<<"Nguyen ham da thuc 1 : "<<d1.Primi_Dt();
    cout<<endl;
    cout<<"Nguyen ham da thuc 2 : "<<d2.Primi_Dt();
    return 0;
}