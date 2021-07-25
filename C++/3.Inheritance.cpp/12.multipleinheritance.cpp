#include <bits/stdc++.h>
using namespace std;

class A{
    int x;
    public:
    //Constructor With One Parameter.
        A(int i){
            x=i;
            cout<<"Value of x in A:"<<x<<endl;
        }
};

//Class 'B' inherits Class A
class B: public A{
    int x,y;
    public:
        B(int i, int j):A(10){
            x=i;y=j;
            cout<<"Value of X,Y in B: "<<x<<","<<y<<endl;
        };
};

//Class 'c' inherit Class B.
class C:public B{
    int x,y,z;
    public:
        C(int i,int j , int k):B(20,200){
            x=i;y=j;z=k;
            cout<<"Value of x,y,z in C:"<<x<<","<<y<<","<<z<<endl;
        }
};

int main()
{
    C c1(30,300,3000);
}