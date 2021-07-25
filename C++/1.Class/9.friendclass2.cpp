#include <bits/stdc++.h>
using namespace std;

///-------------------forward Reference----------------
class A;
//--------------------Declaer class B-----------------
class B{
    int prvB1;
    public:
        B(){prvB1=0;}
        void GetPrvB1(int x){prvB1=x;}
        void ShowPrvB1(A a);
};

//------------------------Declare Class A--------------------------
class A{
    int PrvA1;
    public:
    A(){PrvA1=0;}
    void GetPrvA1(int x){PrvA1=x;}
    friend void B::ShowPrvB1(A a);

};

void B::ShowPrvB1(A a){
    cout<<"Value of PrvA1="<<a.PrvA1<<endl;
    cout<<"Value of Prvb1="<<prvB1<<endl;
}

int main()
{
    A a1; B b1;
    a1.GetPrvA1(30);
    b1.ShowPrvB1(a1);
}