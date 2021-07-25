#include <bits/stdc++.h>
using namespace std;

//author -Mehedi Hasan

//-----------------------Creating Class-----------------------------
class AddTwoValue{
    //private member variable
    int x,y;

    public:
     ///function definaton within class
        AddTwoValue(int a, int b){
        x=a;y=a;
        } 

    void Add(){
        cout<<"X+Y ="<<x+y<<endl;
    }
    void Multi();

};

//------------------function definition outside in the class----------------

void AddTwoValue::Multi(){
        cout<<"X*Y="<<x*y<<endl;
}

//--------------------------------main function-----------------------------

int main()
{
        AddTwoValue S(10,20);
        S.Multi();
}