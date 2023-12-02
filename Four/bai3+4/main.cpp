    #include <iostream>
    #include "ctime.cpp"
    using namespace std;

    int main()
    {
        ctime k1,k2;
        cin>>k1;
        cout<<"Nhap vao thoi gian 1 : ";
        cout<<k1;
        cout<<endl;
        cin>>k2;
        cout<<"Nhap vao thoi gian 2 : ";
        cout<<k2;
        cout<<endl;

        ctime tong = k1 + k2;
        cout<<"Tong thoi gian k1 va k2 : "<<tong<<endl;

        time khoangcach = k1 - k2;
        cout<<"Khoang cach giua k1 va k2 : "<<khoangcach<<endl;

        ctime them = k1 + 2342;
        cout<<"Thoi gian k1 khi them vao 2342 giay : "<<them<<endl;

        ctime bot = k2 - 1234;
        cout<<"Thoi gian k2 khi bot ra 1234 giay : "<<bot<<endl;

        ++k1;
        cout<<"k1 them 1 giay : "<<k1<<endl;

        --k2;
        cout<<"k1 bot 1 giay : "<<k2<<endl;

        ++tong;
        cout<<"tong them 1 giay : "<<tong<<endl;

        --bot;
        cout<<"bot di 1 giay : "<<bot<<endl;

        return 0;
    }