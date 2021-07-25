#include <bits/stdc++.h>
using namespace std;

class X{
    int height,width;
    public:
        X(){height=width=0;}
        X(int H, int W){height=H, width=W;}
        X operator+(int x);
        void Show(){cout<<"Height: "<<height<<" Width: "<<width<<endl;}
};

 X X::operator+(int x){
     X temp;
     temp.height=height+x;
     temp.width=width+x;
     return temp;
 }

 int main()
 {
     X x1(50,75),X2;
     X2=x1+25;
     x1.Show();
     X2.Show();
 }