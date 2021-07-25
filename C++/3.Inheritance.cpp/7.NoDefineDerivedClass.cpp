#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        Base(){cout<<"Base Constructor called."<<endl;}
        ~Base(){cout<<"Base Destructor called."<<endl;}
};

class Derived:Base{
    //Empty
};

int main()
{
    
    cout<<"Calling Constructors..........."<<endl;
    Derived d1;
    cout<<"Calling Destructors..................."<<endl;
}