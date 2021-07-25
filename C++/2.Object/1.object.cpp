#include <bits/stdc++.h>
using namespace std;

//@author -Mehedi Hasn

//---------------------creating class----------------------------
class classA{
    public:
        int a;
        int b;
        void add_AB(){cout<<"A+B = "<<a+b<<endl;}
};

//global declared class
classA a1;

void fi(){
    cout<<"F1 :{ a=15, b=15}: "<<endl;
    a1.a=15;
    a1.b=15;
    a1.add_AB();
}

int main()
{
    cout<<"Print Main(): "<<endl;
    a1.a=5;
    a1.b=5;

    a1.add_AB();
    fi();
}