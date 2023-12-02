void menu()
{
    int luachon = 99;
    while (luachon != 0)
    {
        cout << "MENU" << endl;
        cout << "Nhap vao da thuc (CLICK 1) : " << endl;
        cout << "Xuat ra da thuc (CLICK 2) : " << endl;
        cout << "So sanh da thuc (CLICK 3) : " << endl;
        cout << "Cong da thuc (CLICK 4) : " << endl;
        cout << "Tru da thuc (CLICK 5) : " << endl;
        cout << "Nhan da thuc (CLICK 6) : " << endl;
        cout << "Chia da thuc (CLICK 7) : " << endl;
        cout << "Tinh dao ham (CLICK 8) : " << endl;
        cout << "Tinh nguyen ham (CLICK 9) : " << endl;
        cout << "ket thuc chuong trinh (CLCIK 0) : " << endl;
        cout << "Hay nhap vao luc chon cua ban : "<<"\t";
        cin >> luachon;
        system("cls");
            if (luachon == 1)
                Nhap_da_thuc();
            else if (luachon == 2)
                Xuat_da_thuc();
            else if (luachon == 3)
                So_sanh_da_thuc();
            else if (luachon == 4)
                Cong_da_thuc();
            else if (luachon == 5)
                Tru_da_thuc();
            else if (luachon == 6)
                Nhan_da_thuc();
            else if (luachon == 7)
                Chia_da_thuc();
            else if (luachon == 8)
                Dao_ham_da_thuc();
            else if (luachon == 9)
                Nguyen_ham_da_thuc();
    }
    cout<<"Chuong trinh ket thuc";
}
