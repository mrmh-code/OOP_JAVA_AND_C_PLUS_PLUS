#include <bits/stdc++.h>
using namespace std;

//--------------------Creating Base Class------------------------------------
class Base{
    public:
        //------------calling Constructor From Base---------------------
        Base(){cout<<" Base Constructor Called."<<endl;}
        //--------Calling Destructor From Base.-----------
        ~Base(){cout<<"Base Destructor Called. "<<endl;}
};

//-----------------------------Creating Derived Class---------------------------
class Derived:public Base{
    public:
    //-----------calling Constructor From Derived-------------
        Derived(){cout<<"Derived Constructor called."<<endl;}
        //--------Calling Destructor From Derived-----------
        ~Derived(){cout<<"Derived Destructor called."<<endl;}
};
//-------------------------------Main Function------------------------------
int main()
{
    cout<<"Calling Constructors......."<<endl;
    Derived d1;
    cout<<"Calling Destructors..........."<<endl;
}