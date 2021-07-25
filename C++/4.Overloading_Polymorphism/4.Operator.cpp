#include <bits./stdc++.h>
using namespace std;
#define endl '\n'
class Rect{
    int length,Width;

    public:
        Rect(){length=Width=0;};
        Rect(int length, int width);
//------------------------Overloading Operator----------------------------------------------------
        Rect operator+ (int p);
        Rect operator- (int p);
        Rect operator-(Rect r);
        Rect operator++();
        Rect operator+=(Rect op);

        void Show(){cout<<"Length : "<<length<<" Width: "<<Width<<endl<<endl;}
        void setLen (int i){length=i;}
        void SetWidth(int W){Width=W;}
        int GetLen(){return length;}
        int GetWidth(){return Width;} 

        virtual ~Rect(){};
};

//---------------------------Rect (int len, int w)-------------------------------------
Rect::Rect(int len,int w){
    length=len;
    Width=w;
};

//----------------------------add Operator+(int p)---------------------------------------
Rect Rect::operator+(int p)
{
    Rect temp;
    temp.setLen(p+length);
    return temp;
}

//----------------------Operator-(int p)-----------------------------------------------
Rect Rect::operator-(int p)
{
    Rect temp;
    temp.setLen(length -p);
    temp.SetWidth(Width-p);
    return temp;
};

//----------------------------Operator -(React r)-------------------------------------------
Rect Rect::operator-(Rect r){
    length-=r.GetLen();
    Width-=r.GetWidth();
    return (*this);
}
//-----------------------Operator++ Rect------------------------------------------
Rect Rect::operator++()
{
    length++;
    Width++;
    return *this;
}

//--------------------------Operator +=(Rect Op)---------------------------------
Rect Rect::operator+=(Rect op)
{
    length+=op.GetLen();
    Width+=op.GetWidth();
    return *this;
}
int main()
{
    Rect a(20,10),b,c;
    cout<<"At The Begining , in Object a"<<endl<<endl;
    a.Show();
    b=a+25;
    cout<<"After b=a+25, In Object b"<<endl;
    b.Show();

    b=b-a;
    cout<<"After b=b-a, In Object b"<<endl;
    b.Show();

    c=b-5;
    cout<<"After C=b-5, In Object C"<<endl;
    c.Show();


    a+=c;
    cout<<"After a+=c, in Object a"<<endl;
}