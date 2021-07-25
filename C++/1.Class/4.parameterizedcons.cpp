#include <bits/stdc++.h>
using namespace std;

//@author- Mehedi Hasan

//--------------------------creating class-----------------------------------
class Sample{
    int x,y;
    public:
        //parameterized Constructor
        Sample(int a, int b){x=a;y=b;}
        void Add(){cout<<"X+Y ="<<x+y<<endl;}
};

//-------------------------Main() Function-------------------------------------
int main()
{ 
    Sample smp=Sample(25,30);
    smp.Add();
}