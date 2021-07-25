#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
        int age;
    
    public:
///----------------------Constructor With No Argument----------------------------
    Person(){
            age=20;
        }

//--------------------Constructor With Argument-----------------------------------
    Person(int a){
        age=a;
    }

    int getAge(){
        return age;
    }
};


int main()
{
    Person Person1,Person2(45);
    cout<<"Persona1 Age ="<<Person1.getAge()<<endl;
    cout<<"Persona1 Age ="<<Person2.getAge()<<endl;

}