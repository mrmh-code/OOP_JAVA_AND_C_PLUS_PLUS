#include <bits/stdc++.h>
using namespace std;

//----------------Creating Base Class-----------------------------------------
class Base{
    public:
        void ShowMsg(){
            cout<<"This is Function From Base Class "<<endl;
        }

};

//---------------------------Creating Derived Class---------------------------------
class Derived:public Base{
    public:
        void ShowMsg()
        {
            cout<<"This is Function From Derived Class"<<endl;
        }
};

//----------------------------Main Function----------------------------------------------
int main()
{
    Derived d1;
    //----Accessing showMsg of Class Base by Derived Class-------------
    d1.Base::ShowMsg();
}