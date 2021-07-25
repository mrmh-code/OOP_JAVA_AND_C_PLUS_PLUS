#include <bits/stdc++.h>
using namespace std;
//@author -Mehedi Hasan
//---------------------------creating Class-------------------------------------
class Sample{
    private:
        int x,y;
        void Add(){cout<<"X+Y="<<x+y<<endl;}
    public:
            Sample(int a, int b){
                x=a;y=b;
                //use member function
                Add();
            }
};

//-------------------------Main Function-------------------------------------
int main()
{
    Sample smp(100,200);
}