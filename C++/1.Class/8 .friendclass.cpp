#include <bits/stdc++.h>
using namespace std;
//author-Mehedi Hasan
//----------------------Declare Class A-------------------------
class A{
    int Prv1;
    
    public: 
        A(){Prv1=0;}
        void GetPrvA1(int x){Prv1=x;}
        //--------Declare B as a firend of A
        friend class B;
};

//--------------------Declare Class B---------------------------------------
class B{
    int PrvB1;
    public:
            B(){PrvB1=0;}
            void GetPrvB1(A &a){
                PrvB1=a.Prv1+25;
                a.Prv1=50;
            }

            void ShowPrvB1(A a){
                cout<<"Value of PrvA1="<<a.Prv1<<endl;
                cout<<"Value of PrvB1="<<PrvB1<<endl;
            }
};

//-------------------------------Main Function----------------------------------

int main()
{
    A a1; B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(a1);
    b1.ShowPrvB1(a1);
}