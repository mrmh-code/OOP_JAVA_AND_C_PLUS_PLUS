#include <bits/stdc++.h>
using namespace std;
//------------------------------Multipule Inheritance Class------------------------------
//---------------ClassA--------------------------
class A{
    public:
        void ShowAMsg(){cout<<"This is ClassA "<<endl;}
};


//---------------------class B inherit Class A------------------------------------
class B: public A{
    public:
        void ShowBMsg(){ShowAMsg(); cout<<"This is class B"<<endl;}
};

//------------------class C inherit Class B-----------------------------------
class C:public B{
    public:
        void ShowCmsg(){ShowBMsg(); cout<<"This is Class C"<<endl;}
};

//----------------------Main Class---------------------------------------
int main()
{
    C c1;
    //Accesing A 's Member.
    c1.ShowAMsg();
    //Accesing B's Member.
    c1.ShowBMsg();
    //Accesing C's Member.
    c1.ShowCmsg();
}