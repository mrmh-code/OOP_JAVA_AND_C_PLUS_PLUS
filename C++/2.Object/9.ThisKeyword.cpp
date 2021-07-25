#include <bits/stdc++.h>
using namespace std;

class X{
    public:
        int x;
        void ShowAddress();
};

void X::ShowAddress(){
    cout<<"Address of This->x: "<<&this->x<<endl;
};

int main()
{
    X x1,x2,x3;
    x1.x=10;
    x2.x=20;
    x3.x=30;

    cout<<"Addres of x1.x: "<<&x1.x<<endl;
    x1.ShowAddress();
    cout<<"Addres of x2.x: "<<&x2.x<<endl;
    x2.ShowAddress();
    cout<<"Addres of x3.x: "<<&x3.x<<endl;
    x2.ShowAddress();

 

}