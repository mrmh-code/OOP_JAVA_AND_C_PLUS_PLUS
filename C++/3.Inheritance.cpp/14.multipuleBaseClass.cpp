#include <bits/stdc++.h>
using namespace std;

class Base1{
    public:
        Base1(){cout<<"Class Base1 Constructor"<<endl;}
        ~Base1(){cout<<"Class Base1 Destructor"<<endl;}
};

class Base2{
    public:
        Base2(){cout<<"Class Base2 Constructor"<<endl;}
        ~Base2(){cout<<"Class Base2 Destructor"<<endl;}
};

class Base3{
    public:
        Base3(){cout<<"Class Base3 Constructor"<<endl;}
        ~Base3(){cout<<"Class Base3 Destructor"<<endl;}
};

class Derived:public Base2,private Base1,public Base3{
    public:
        Derived(){cout<<"Class Derived Constructor"<<endl;}
        ~Derived(){cout<<"Class Derived Destructor"<<endl;}
};

int main()
{
    Derived d1;
}