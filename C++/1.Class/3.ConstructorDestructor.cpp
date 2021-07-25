#include <bits/stdc++.h>
using namespace std;

//author -Mehedi Hasan
//--------------------------creating class----------------------------------
class Sample{
    public:
        Sample(){cout<<"Message from Construcotr \n";}
        ~Sample(){cout<<"Message from Destrucotor \n";}
};


//---------------------------------defing a function--------------------------
void FuncA(){
    cout<<"Creating Sample Object in FuncA()\n"<<endl;
    Sample smp;//--------------Constructor is calling&Destructor is calling at the point 

}

//---------------------main function---------------------------------------------

int main()
{
    cout<<"Creating  Sample Object in Main()\n"<<endl;
    Sample smp;
    cout<<"Calling FuncA() \n";
    FuncA();
    cout<<"FuncA() Called\n ";
}