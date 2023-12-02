#include <iostream>
#include <string>
#include "candidate.h"
#include <fstream>
using namespace std;
void candidate::nhap()
{
    cin.ignore();
    getline(cin, name);
    getline(cin, id);
    getline(cin, birth);
    cin >> math;
    cin >> english;
    cin >> literature;
}
void candidate::xuat()
{
    cout << name << "\t" << id << "\t" << birth << "\t" << math << "\t" << english << "\t" << literature<<endl;
}
float candidate::Tinh_tong()
{
    return math + literature + english;
}
