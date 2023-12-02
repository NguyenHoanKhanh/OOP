#include <iostream>
using namespace std;

class CNgay
{
private:
    int ngay, thang, nam;
public:
    CNgay(int a = 0, int b = 0, int c = 0)
    {
        ngay = a;
        thang = b;
        nam = c;
    }

    bool Check_Leap_Year()
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
        {
            return true;
        }
        return false;
    }

    int getMax(int thang)
    {
        static const int maxDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int maxDay = maxDays[thang - 1];
        if (thang == 2 && Check_Leap_Year())
        {
            maxDay = 29;
        }
        return maxDay;
    }

    friend istream &operator>>(istream &in, CNgay &cn)
    {
        cout << "Nhap vao ngay: ";
        in >> cn.ngay;
        cout << "Nhap vao thang: ";
        in >> cn.thang;
        cout << "Nhap vao nam: ";
        in >> cn.nam;

        while (cn.ngay < 1 || cn.ngay > 31 || cn.thang < 1 || cn.thang > 12 || cn.nam < 1 || cn.ngay > cn.getMax(cn.thang))
        {
            cout << "Khong hop le! Nhap lai: ";
            in >> cn.ngay >> cn.thang >> cn.nam;
        }

        return in;
    }

    friend ostream &operator<<(ostream &out, CNgay cn)
    {
        out << cn.ngay << " / " << cn.thang << " / " << cn.nam << endl;
        return out;
    }

    bool operator!=(const CNgay &other)
    {
        if (ngay != other.ngay || thang != other.thang || nam != other.nam)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator==(const CNgay &other)
    {
        if (ngay == other.ngay && thang == other.thang && nam == other.nam)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator>(const CNgay &other)
    {
        if (nam > other.nam)
        {
            return true;
        }
        else if (nam == other.nam && thang > other.thang)
        {
            return true;
        }
        else if (nam == other.nam && thang == other.thang && ngay > other.ngay)
        {
            return true;
        }
        return false;
    }

    bool operator<(const CNgay &other)
    {
        if (nam < other.nam)
        {
            return true;
        }
        else if (nam == other.nam && thang < other.thang)
        {
            return true;
        }
        else if (nam == other.nam && thang == other.thang && ngay < other.ngay)
        {
            return true;
        }
        return false;
    }

    bool operator>=(const CNgay &other)
    {
        return (*this > other) || (*this == other);
    }

    bool operator<=(const CNgay &other)
    {
        return (*this < other) || (*this == other);
    }
};

int main()
{
    CNgay ng1;
    CNgay ng2(2017, 1, 9);
    CNgay ng3(2017, 1, 7);
    cin >> ng1;
    cout << ng1 << endl;
    cout << ng2 << endl;
    cout << ng3 << endl;

    if (ng1 < ng3)
    {
        cout << "Ngay 1 truoc ngay 2" << endl;
    }
    else
    {
        cout << "Ngay 1 khong truoc ngay 2" << endl;
    }
    return 0;
}