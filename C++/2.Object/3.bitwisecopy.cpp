#include <bits/stdc++.h>
using namespace std;

class Student{
    char S_name[14];
    char S_Id[10];
    float S_Cgpa;

    public:
        void GetInfo(const char *name, const char *id, float cgpa){
            strcpy(S_name,name);
            strcpy(S_Id,id);
            S_Cgpa=cgpa;
        }

        void ShowInfo(){
            cout<<"Name: "<<S_name<<endl;
            cout<<"ID: "<<S_Id<<endl;
            cout<<"CGPA: "<<S_Cgpa<<endl;
        }
};


int main()
{
    Student A,B;
    A.GetInfo("Mehedi Hasan","347394",3.78);
    B=A;
    cout<<"Printing Object A Information : \n";
    A.ShowInfo();
    cout<<"Printing Object B Information \n"<<endl;
    B.ShowInfo();
}