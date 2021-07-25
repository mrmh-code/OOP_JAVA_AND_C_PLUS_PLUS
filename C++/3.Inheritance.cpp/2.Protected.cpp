#include <bits/stdc++.h>
using namespace std;
//---------------------------Creating Base Class using Protected Specifier------------------
class Base{
    int b1;  
   protected:
        int b2;
    public:
        int b3;
        Base(){b1=10;b2=10;b3=10;}
        void ShowMemValue(){
            cout<<b1<<" ,"<<b2<<","<<b3<<endl;
        }
};

//-------------------------Inherit Base Class-----------------------------------------

class Derived:public Base{
    //-----------Member Function-----------
    public:
    void ChangeBaseMemValue(){
        b2=20;
        b3=20;
    }
};

//----------------------------Main Function-------------------------------------------------

int main()
{
    Base b1;
    Derived d1;
    b1.ShowMemValue();
    d1.ChangeBaseMemValue();
    d1.ShowMemValue();
}