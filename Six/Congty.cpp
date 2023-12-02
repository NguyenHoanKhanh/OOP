#include "Congty.h"

Congty::Congty(int k)
{
    this->n = k;
    for (int i = 0; i < n; i++)
    {
        ds[i] = 0;
    }
}

Congty::~Congty()
{
    for (int i = 0; i < n; i++)
    {
        delete ds[i];
    }
    delete[] ds;
}

void Congty::Input()
{
    cout<<"Nhap vao so luong nhan vien cua cong ty : ";
    cin>>n;
    cout<<"1. Nhan vien ban hang "<<endl;
    cout<<"2. Nhan vien hanh chinh "<<endl;
    cout<<"Nhap vao lua chon cua ban : "<<endl;
    cin>>type;
    ds = new NhanVien*[n];
    for (int i = 0; i < n; i++)
    {
        if (type == 1)
        {
            ds[i] = new BanHang();
            ds[i]->Input();
        }
        else if (type == 2)
        {
            ds[i] = new HanhChinh();
            ds[i]->Input();
        }
    }
}

void Congty::Output()
{
    for (int i = 0; i < n; i++)
    {
        ds[i]->Output();
    }
}

void Congty::CheckThoiGian()
{
    int maxThoiGian = -1;
    HanhChinh* maxHanhChinh = nullptr;

    for (int i = 0; i < n; i++)
    {
        HanhChinh* hanhchinh = dynamic_cast<HanhChinh*>(ds[i]);
        if (hanhchinh)
        {
            int thoigian = hanhchinh->GetThoiGian();
            if (thoigian > maxThoiGian)
            {
                maxThoiGian = thoigian;
                maxHanhChinh = hanhchinh;
            }
        }
    }
    if (maxHanhChinh)
    {
        cout<<"Nhan vien hanh chinh co thoi gian lam thua nhieu nhat : "<<endl;
        maxHanhChinh->Output();
    }

    else
    {
        cout<<"Khong co";
    }
}

void Congty::DemNhanVienBanHang()
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (type == 1)
        {
            temp ++;
        }
    }
    cout<<temp;
}

void Congty::LietKeNhanVien()
{
    if (type == 1)
    {
        int SumSanPham = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            BanHang* banhang = dynamic_cast<BanHang*>(ds[i]);
            if (banhang)
            {
                SumSanPham += banhang->getSoSanPham();
                count++;
            }
        }
        double TrungBinhSanPham = static_cast<double>(SumSanPham) / count;

        cout<<"Nhan vien co so san pham thoa yeu cau la : "<<endl;
        for (int i = 0; i < n; i++)
        {
            BanHang* banhang = dynamic_cast<BanHang*>(ds[i]);

            if (banhang && banhang->getSoSanPham() > TrungBinhSanPham)
            {
                banhang->Output();
            }
            
        }
        
    }

    else cout<<"Khong co nhan vien nao thoa "<<endl;
    
}