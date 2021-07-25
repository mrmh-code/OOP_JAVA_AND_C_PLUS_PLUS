#include <bits/stdc++.h>
using namespace std;

class Person{
    string name;
    public:
        Person(){
            cout<<"Creating .........";
            }
        void PrintName(){cout<<"Name : "<<name<<endl;}
        void GetName(string n){name=n;}
        ~Person(){cout<<"Destructing ..........";}
};

int main()
{
    Person ob[5];
    ob[0].GetName("Mehedi");
    ob[1].GetName("Azim");
    ob[2].GetName("Rana");
    ob[3].GetName("Jahid");
    ob[4].GetName("Hasan");
    
    for(int i=0; i<5; i++){
        ob[i].PrintName();
    }
} 