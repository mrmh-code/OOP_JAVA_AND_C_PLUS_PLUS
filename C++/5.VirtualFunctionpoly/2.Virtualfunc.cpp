#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void Msg(){cout<<"Msg() from Base Class "<<endl;}
        void NonVirtual(){cout<<"Non Virtual() from Base Class "<<endl;}
};

class Derived1:public Base{
    public:
        void Msg(){cout<<"Msg() from Derived1"<<endl;}
        void NonVirtual(){cout<<"NonVirtual from Derived class"<<endl;}
};

class Derived2:public Base{

};

int main()
{
    Base *baseptr;
    Derived1 d1;
    Derived2 d2;

    //--------Baseptr points to Deriveed1 Object-------------
    baseptr=&d1;
    baseptr->Msg();
    baseptr->NonVirtual();

    //-----------Baseptr points to derived2 Object--------------------
    baseptr =&d2;
    baseptr->Msg();
    baseptr->NonVirtual();
}