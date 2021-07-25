#include <bits/stdc++.h>
using namespace std;

class Rect{
    int length,width;
    
    public:
        Rect(){length=width=0;}
        Rect(int length, int width);

        Rect operator++();
        Rect operator-(Rect r);

        void Show(){cout<<"Length  :"<<length<<"    Width: "<<width<<endl<<endl;}
        void SetLen(int i){length=i;}
        void SetWidth(int w){width=w;}
        int getLen(){return length;}
        int GetWidth(){return width;}

        friend Rect operator+(Rect ob1, int p);
        friend Rect operator+(int p, Rect ob1);
};

Rect::Rect (int len, int w){
    length=len;
    width=w;
}

Rect Rect::operator-(Rect r){
    length-=r.getLen();
    width-=r.GetWidth();
    return *this;
}

Rect Rect::operator++()
{
    length++;
    width++;

    return *this;
}

Rect operator+(Rect ob, int p)
{
    Rect temp;
    temp.SetLen(ob.getLen()+p);
    temp.SetWidth(ob.GetWidth()+p);
    return temp;
}

Rect operator+(int p, Rect ob)
{
    Rect temp;
    temp.SetLen(ob.getLen()+p);
    temp.SetWidth(ob.GetWidth()+p);
    return temp;
}

int main()
{
    Rect a(20,10),b,c;
    cout<<"At the begining , in Object a"<<endl;
    a.Show();

    b=a+25;
    cout<<"After b=a+25, In Object b"<<endl;
    b.Show();

    b=b-a;
    cout<<"After b=b-a, In Object C"<<endl;
    b.Show();

     
     c=15+a;
     cout<<"After c=15+a, In Object c"<<endl;
     c.Show();
}