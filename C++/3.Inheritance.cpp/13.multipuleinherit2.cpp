#include <bits/stdc++.h>
using namespace std;

class Base1{
    public:
        void ShowBase1Msg(){cout<<"This is Base1 class"<<endl;}
};

class Base2{
    public:
        void ShowBase2Msg(){cout<<"This is Base2 Class"<<endl;}
};

class Base3{
    public:
        void ShowBase3Msg(){
            cout<<"This is Base3 Class"<<endl;
        }
};

class Derived:public Base1,private Base2,public Base3{
    public:
        void ShowDerivedMsg(){
            cout<<"This is Derived Class"<<endl;
        }
};


int main()
{
    Derived d1;
    d1.ShowBase3Msg();
    d1.ShowBase3Msg();
    d1.ShowDerivedMsg();

}