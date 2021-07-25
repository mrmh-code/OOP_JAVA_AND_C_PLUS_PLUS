#include <bits/stdc++.h>
using namespace std;

class X{
    int x;
    public:
        X(){cout<<"Constructing ............"<<endl;}
        void SetX(int a){x=a;}
        int GetX(){return x;}
        ~X(){cout<<"Destructing........"<<endl;}

};

void Func(X &x){
    cout<<"Value of x formation main() :"<<x.GetX()<<endl;
    x.SetX(15);
    cout<<"Value of x in func()     :"<<x.GetX()<<endl;
};


int main()
{
    X x1;
    x1.SetX(10);
    Func(x1);
    cout<<"Aftering calling Func(), x is    :"<<x1.GetX()<<endl;
}