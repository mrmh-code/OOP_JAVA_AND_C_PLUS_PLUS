#include <bits/stdc++.h>
using namespace std;

// @author-Mehedi Hasan

 //-------------------------------creating class ----------------------------

class MyClass{   //The class Logical Reperesentiaion of physical-Reperesentiaion Data
    public:     //access specifier   
    ///class Attribute or member variable
        string  MyName;
        int Age;
};

//---------------------------main function-----------------------------------

int main()
{
    MyClass mydata; //"mydata" object of My class;
    //Acces Object attributes value.
    mydata.MyName="Mehedi Hasan";
    mydata.Age=20;

    //print Object data;
    cout<<mydata.MyName<<endl;
    cout<<mydata.Age<<endl;

}