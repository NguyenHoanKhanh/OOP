    #include <iostream>
    #ifndef DATHUC_H
    #define DATHUC_H

    const int MAX = 10000;

    class polynomial
    {
    private:
        double Dathuc[MAX];
        int n;

    public:
        void Input_Dt();
        void Output_Dt();
        polynomial Sum_Dt(const polynomial &other);
        polynomial Minus_Dt(const polynomial &other);
        polynomial Multi_Dt(const polynomial &other);
        polynomial Deri_Dt();
        polynomial Primi_Dt();
    };

    #endif