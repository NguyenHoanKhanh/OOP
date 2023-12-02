#include "CVector.cpp"

int main()
{
    CVector c, v;
    cin>>c;
    cout<<"Input vector 1 : ";
    cout<<c<<endl;
    cin>>v;
    cout<<"Input vector 2 : ";
    cout<<v<<endl;

    // Tong 2 vector 
    CVector tong = c + v;
    cout<<"Ket qua phep cong : "<<tong<<endl;
    // Tru 2 vector 
    CVector tru = c - v;
    cout<<"Ket qua phep tru : "<<tru<<endl;
    // Nhan 2 vector
    CVector nhan = c * v;
    cout<<"Ket qua phep nhan : "<<nhan<<endl;
}   