#include <bits/stdc++.h>
using namespace std;

class X{
    int x;
    public:
        X(){cout<<"Constructing......."<<endl;}
        void Setx(int a){x=a;}
        int GetX(void){return x;}
        ~X(){cout<<"Destructing........"<<endl;}
};

void Func(X *x){
    cout<<"Value of x from main()   :"<<x->GetX()<<endl;
    x->Setx(15);
    cout<<"Value of x in func() :"<<x->GetX()<<endl;
}

int main()
{
    X x1;
    x1.Setx(10);
    Func(&x1);
    cout<<"After Calling Func(), X is   :"<<x1.GetX()<<endl;
}