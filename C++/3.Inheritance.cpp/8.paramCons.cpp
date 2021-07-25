#include <bits/stdc++.h>
using namespace std;
//----------------Creating Base Class------------------------------
class Base{
    int x,y;
    public:
    //------------Parameter Pass----------------
        Base(int i,int j){
            x=i;y=j;
            cout<<"Value of X, y is:"<<x<<","<<y<<endl;
        }
};

class Derived:public Base{
    public:
    //---------Calling Base Constructor-----------------
        Derived():Base(10,100){};
};

int main()
{
    Derived d1;
}