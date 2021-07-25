#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int s1=x*7;
        int s2=(y*d)+(7-d)*z;

        cout<<max(s1,s2)<<endl;
    }
    
}