#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        void Msg(){cout<<"Msg() from Base Class "<<endl;}
};

class Derived1:public Base{
    public:
        void Msg(){
            cout<<"Msg From Derived1 class "<<endl;
        }
};

class Derived2:public Base{
    public:
        void Msg(){cout<<"Msg() from Derived2 class"<<endl;}
};

int main()
{
    Base *baseptr;
    Derived1 d1;
    Derived2 d2;

    baseptr=&d1;
    baseptr->Msg();

    baseptr=&d2;
    baseptr->Msg();
}