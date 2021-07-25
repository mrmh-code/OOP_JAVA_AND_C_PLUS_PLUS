#include <bits/stdc++.h>
using namespace std;

//author-Mehedi Hasan
//------------------creating class-------------------------------
class Sample{
    //-static variable
    static int Totobj;
    public:
        Sample(){Totobj++;}
        ~Sample(){Totobj--;}
        static void PrintInfo(){cout<<"Total Object :"<<Totobj<<endl;}
};


int Sample::Totobj=0;

///---------------------------Main Function------------------------------
int main()
{
    Sample s1,s2,s3,s4,s5;
    Sample::PrintInfo();
}