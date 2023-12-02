#include <iostream>
using namespace std;

class CPhanSo
{
private:
    int tuso, mauso;
public:
    CPhanSo(int a = 0, int b = 1)
    {
        tuso = a;
        mauso = b;
    }

    CPhanSo operator+(const CPhanSo &other)
    {
        CPhanSo tong;
        tong.tuso = tuso*other.mauso + mauso*other.tuso;
        tong.mauso = mauso*other.mauso;

        return tong;
    }

    bool operator==(const CPhanSo &other)
    {
        if (tuso == other.tuso && mauso == other.mauso)
        {
            return true;
        }
        return false;
    }

    friend istream &operator>>(istream &in, CPhanSo &ps)
    {
        cout<<"Nhap vao tu so va mau so : ";
        in>>ps.tuso;
        in>>ps.mauso;

        while (ps.mauso == 0)
        {
            cout<<"Khong hop le !!! ";
            in>>ps.mauso;
        }
        
        return in;
    }

    friend ostream &operator<<(ostream &out , CPhanSo ps)
    {
        out<<ps.tuso<<" / "<<ps.mauso<<endl;

        return out;
    }
};

int main()
{
    CPhanSo a(5, 3);
    CPhanSo b, c, kq;
    cin>>b>>c;

    kq = a + b + 5 + c;
    cout<<"Ket qua la : "<<kq<<endl;


    if (a == b)
    {
        cout<<"Phan so a bang phan so b "<<endl;
    }

    return 0;
}