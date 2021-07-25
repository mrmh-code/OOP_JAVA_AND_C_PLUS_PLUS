#include <bits/stdc++.h>
using namespace std;
//Author-Mehedi Hasan
//-----------------------Creating Base Class---------------------------------------
class Base{
    public:
        void ShowMsg(){cout<<"This is Function From Base Class."<<endl;}
};

//-------------------------Derived Class----------------------------
class Derived:public Base{
    public:
        //Same Name Member Function .Dervide & Base Class.
        void ShowMsg(){cout<<"This is Function From Derived Class"<<endl;}
};

//---------------------Main Function------------------------------------
int main()
{
    Derived d1;
    //Calling Derived Function Not Working Base Function.Base Function Creating Object then Call function 
    d1.ShowMsg();
    //Creating Base Object & calling Function
    Base b1;
    b1.ShowMsg();
}