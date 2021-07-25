#include <bits/stdc++.h>
using namespace std;

class AddAB{
    int a,b;
    public:
        AddAB(int x,int y){
            a=x;b=y;
        }
        void Add_AB(int p){
            cout<<"OBJ["<<p<<"]: a+b="<<a+b<<endl;
        }
};

void Print(AddAB *ob);

int main()
{
    AddAB obj[3]={AddAB(13,23),AddAB(19,26),AddAB(12,25)};
    Print(obj);
}

void Print(AddAB *ptr)
{
    for(int i=0; i<3; i++){
        ptr->Add_AB(i);
        ptr++;
    }
}