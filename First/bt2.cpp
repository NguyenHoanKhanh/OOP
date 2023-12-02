#include <iostream>
using namespace std;
struct year
{
	int ngay, thang, nam;
};
int Kiem_tra_year(year a)
{
	switch (a.thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		return ((a.nam % 400 == 0) || (a.nam % 4 == 0 && a.nam % 100 != 0)) ? 29 : 28;
		break;
	default:
		break;
	}
}
istream &operator >> (istream &in , year &a)
{
	do
	{
		cout<<"Nhap vao ngay thang nam : "<<endl;
		in>>a.ngay>>a.thang>>a.nam;
	} while (a.ngay<1 || a.ngay>31 || a.thang <1 || a.thang>12 || a.nam <1 || a.ngay >Kiem_tra_year(a));
	return in;
}
ostream &operator << (ostream &out, year a)
{
	out<<a.ngay<<"/"<<a.thang<<"/"<<a.nam;
	return out;
}
year Ngay_tiep_theo(year a)
{
	year nd;
	nd=a;
	if(a.ngay==Kiem_tra_year(a))
	{
		if(a.thang==12)
		{
			nd.ngay=1;
			nd.thang=1;
			nd.nam++;
		}
		else
		{
			nd.ngay=1;
			nd.thang++;
		}
	}
	else
	nd.ngay++;
	return nd;
}
int main()
{
	year a1,nd1;
	cin>>a1;
	cout<<"Ngay ke tiep : "<<endl;
	cout<<Ngay_tiep_theo(a1);
	return 0;
}