#include <bits/stdc++.h>
using namespace std;

//---------------------------forwoard Reference---------------------------------
class B;
///--------------------------Declare Class A-----------------------------------
class A{
    int prvA1;
    public:
        A(){prvA1=0;}
        void GetPrvA1(int x){prvA1=x;}
        friend void ShowPrvValue(A a, B b);
};

//-------------------Declear Class B--------------------------------------------
class B{
    int prvB1;
    public:
        B(){prvB1=0;}
        void GetPrvB1(int x){prvB1=x;}
        friend void ShowPrvValue(A a, B b);
};
//-------------------Defining Stand Alone Function--------------------------------
void ShowPrvValue(A a, B b){
    cout<<"Value of PrvA1= "<<a.prvA1<<endl;
    cout<<"Value of PrvB1="<<b.prvB1<<endl;
};

int main()
{
    A a1;B b1;
    a1.GetPrvA1(50);
    b1.GetPrvB1(70);
    ShowPrvValue(a1,b1);
    
}