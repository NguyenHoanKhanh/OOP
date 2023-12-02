    #include <iostream>
    #include "polynomial.h"

    using namespace std;

    void polynomial::Input_Dt()
    {
        cout<<"Nhap vao so mu cao nhat cua da thuc : "<<"\t";
        cin>>n;
        for (int i = n; i >= 0; i--)
        {
            cout<<"Nhap vao he so cua x^ "<<i<<" : ";
            cin>>Dathuc[i];

            while (Dathuc[i] < 0)
            {
                cout<<"Khong duoc am ";
                cin>>Dathuc[i];
            }
            
        }   
    }

    void polynomial::Output_Dt()
    {
        for (int i = n; i >= 0; i--)
        {
            cout<<Dathuc[i]<<"x^"<<i;
            if(i > 0) cout<<" + ";
        }
        cout<<endl;
    }

    polynomial polynomial::Sum_Dt(const polynomial &other)
    {
        polynomial result;
        result.n = max(n, other.n);

        for (int i = 0; i <= result.n; i++)
        {
            result.Dathuc[i] = Dathuc[i] + other.Dathuc[i];
        }
        return result;
    }

    polynomial polynomial::Minus_Dt(const polynomial &other)
    {
        polynomial result;
        result.n = max(n, other.n);

        for (int i = 0; i <= result.n; i++)
        {
            result.Dathuc[i] = Dathuc[i] - other.Dathuc[i];
        }
        return result;
    }

    polynomial polynomial::Multi_Dt(const polynomial &other)
    {
        
        polynomial result;
        result.n = n+other.n;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= other.n; j++)
            {
                result.Dathuc[i+j] += Dathuc[i] * other.Dathuc[j];
            } 
        }
        return result;
    }
    
    polynomial polynomial::Deri_Dt()
    {
        polynomial result;
        if (n == 0) 
        {
            result.n = 0;
            result.Dathuc[MAX] = {0};
        } 
        else 
        {
            result.n = n;
            for (int i = 0; i <= n; i++)
            {
                result.Dathuc[i] = (i+1) * Dathuc[i+1];
            }
        }
        return result;
    }

    polynomial polynomial::Primi_Dt()
    {
        polynomial result;
        result.n = n + 1;
        result.Dathuc[0] = 0;
        for (int i = 1; i <= n + 1 ; i++)
        {
            result.Dathuc[i] = Dathuc[i-1] / i ;
        }
        return result;
    }