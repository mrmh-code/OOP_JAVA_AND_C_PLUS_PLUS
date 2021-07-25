#include <bits/stdc++.h>
using namespace std;

//--------------------------     Base Class-----------------------------------------
class Base{
    public:
        Base(){cout<<"Base Constructor"<<endl;}
        ~Base(){cout<<"Base Destructor"<<endl;}
};
//---------------------Derived Class 1 inherit Base----------------------------------
class Derived1:public Base{
    public:
        Derived1(){cout<<"Derived1 Constructor"<<endl;}
        ~Derived1(){cout<<"Derived1 Destructor"<<endl;}
};
//--------------------Derived Class2 Inherit Base-----------------------------------------------
class Derived2: public Base{
    public:
        Derived2(){cout<<"Derived2 Constructor"<<endl;}
        ~Derived2(){cout<<"Derived2 Destructor"<<endl;}
};

//----------------------------Derived Class3 inherit Base---------------------------------------
class Derived3:public Base{
    public:
        Derived3(){cout<<"Derived3 Constructor"<<endl;}
        ~Derived3(){cout<<"Derived3 Destructor"<<endl;}
};


int main()
{
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;

}