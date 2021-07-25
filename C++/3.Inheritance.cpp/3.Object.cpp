#include <bits/stdc++.h>
using namespace std;

//--------------------------------Creating  Base Class----------------------------------------
class Base{
    public:
        int b;
        Base(){b=10;}
        void ShowMemValueInBase(){cout<<b<<endl;}
};

//-------------------------------Creating Derived Class------------------------------------------
class Derived:public Base{
    int d;
    public:
        Derived(){b=50;d=100;}
        void ShowMemValueDerived(){
            cout<<b<<","<<d<<endl;
        }
};

int main()
{   //-------Declare Base Object----------
    Base b1;    
    //-------Declare Derived Object-------
    Derived d1;
    //------Accesing Base Member by Derived Object----
    d1.ShowMemValueInBase();
    //------Accesing Base Member by Base Object-----
    b1.ShowMemValueInBase();
    //------Accesing Derived Member By Derived Object-----
    d1.ShowMemValueDerived();
}
