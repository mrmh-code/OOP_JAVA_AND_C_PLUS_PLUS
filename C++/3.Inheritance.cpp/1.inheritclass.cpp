#include <bits/stdc++.h>
using namespace std;

//@author-Mehedi Hasan

//-------------------------------Creating Base Class----------------------------------------
class Student{
    string Name;
    string ID;
    public:
        Student(string name, string id){
            Name=name;
            ID=id;
        }
        void ShowStudentInfo(){
            cout<<"Name: "<<Name<<endl;
            cout<<"ID: "<<ID<<endl;
        }
};

///------------Declare Registration Class as a Derived Class of Student class---------------
class Registration:public Student{
    float RegFees;
    string RegDate;
    public:
        Registration(string name, string id, float fees, string date):Student(name,id){
            RegFees=fees;
            RegDate=date;
        }

        void ShowRegsInfo(){
            ShowStudentInfo();
            cout<<"Fees :"<<RegFees<<endl;
            cout<<"Date :"<<RegDate<<endl;
        }
};

//----------------------------Main Function--------------------------------------------
int main()
{
    Registration Mehedi("MehediHasan", "397429234",3430.33,"01/01/2000");
    Mehedi.ShowStudentInfo();
    Mehedi.ShowRegsInfo();
}