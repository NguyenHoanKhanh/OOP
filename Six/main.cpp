#include "NhanVien.cpp"
#include "BanHang.cpp"
#include "HanhChinh.cpp"
#include "Congty.cpp"

using namespace std;

int main()
{
    Congty ct;
    ct.Input();
    ct.Output();
    ct.CheckThoiGian();
    ct.DemNhanVienBanHang();
    ct.LietKeNhanVien();
}