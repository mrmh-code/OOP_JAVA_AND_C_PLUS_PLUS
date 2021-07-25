#include <bits/stdc++.h>
using namespace std;

//------------------------creating Class---------------------------------------------
class Sample{
    static int x,y;

    public:
        void SetXY(int a,int b){x=a;y=b;}
        void PrintXY(){cout<<" X = "<<x<<" Y = "<<y<<endl;}
};

//-------------------defining static member variable---------------------------------
int Sample::x;
int Sample::y;

int main()
{
    Sample smp1,smp2;
    smp1.SetXY(100,200);
    smp1.PrintXY();
    smp2.PrintXY();
}