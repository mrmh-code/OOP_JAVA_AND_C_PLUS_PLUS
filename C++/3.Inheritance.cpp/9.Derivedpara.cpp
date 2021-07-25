#include <bits/stdc++.h>
using namespace std;
//------------------------------Creating Base Class---------------------------
class Base{
    int x,y;
    public:
        Base(int i,int j){
            x=i;y=j;
            cout<<"Value of x,y,is: "<<x<<","<<y<<endl;
        }
};

//-----------------------Creating Derived Class---------------------------------------

class Derived:public Base{
    int x,y;
    public:
        Derived(int i, int j):Base(10,100){
            x=i;y=j;
            cout<<"Value of x,y in Derived Class: "<<x<<","<<y<<endl;
        }
};

int main()
{
    
    Derived d1(20,200);
}