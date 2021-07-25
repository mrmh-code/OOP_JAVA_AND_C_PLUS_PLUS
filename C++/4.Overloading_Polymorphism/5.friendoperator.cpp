#include <bits/stdc++.h>
using namespace std;

class X{
    int height,width;
    public:
        X(){height=width=0;}
        X(int H,int W){height=H; width=W;}
        friend X operator+(X x, int i);
        void Show(){cout<<"Height :"<<height<<"Width: "<<width<<endl;}
};

X operator+(X x, int i)
{
    X temp;
    temp.height=x.height+i;
    temp.width=x.width+i;
    return temp;
}

int main()
{
    X x1(50,75),x2;
    x2=x1+25;
    x1.Show();
    x2.Show();
}