#include <bits/stdc++.h>
using namespace std;
//author- Mehedi Hasan
//------------------------------Creating Class-------------------------------------
class Student{
    public:
            string S_name;
            string S_ID;
            float S_Cgpa;

        void ShowInfo(){
            cout<<"Name: "<<S_name<<endl;
            cout<<" ID: "<<S_ID<<endl;
            cout<<"CGPA: "<<S_Cgpa<<endl;
        }
};

//------------------------------Stand-alone Function  use Object

void UseObject(string name,string id, float cgpa){
        Student A;
        A.S_name=name;
        A.S_ID=id;
        A.S_Cgpa=cgpa;

        A.ShowInfo();
}


int main()
{
    UseObject("Mehedi Hasan","39893823",3.45);
}