#include <bits/stdc++.h>
using namespace std;
//function prototype
int Add(int a,int b);
double Add(double a, double b);

int main()
{
    int intType=Add(20,30);
    double doubleType=Add(22.7,23.5);
     cout<<"inttype: "<<intType<<" doubleType: "<<doubleType<<endl;  
}

//--------------Overloaded Add() With Int Type Parameter---------------- ---------
int Add(int a, int b){
    return a+b;
}

//------------------Overloading Add() With Double Type Parameter--------------------
double Add(double a,double b)
 {
     return a+b;
 }