#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int t,l,b,x,y,o,p,q=INT_MIN,w=INT_MIN;
    cin>>t;
    while(t--)
    {
        x=y=0;
        cin>>l;
        cin>>b;
        for(int i=2;i<=l;i++)
        {
            if(l%i==0)
            {
                x=i;
            }
            if(x>q)
                o=x;
        }
        for(int i=2;i<=l;i++)
        {
            if(b%i==0)
            {
                y=i;
            }
            if(y>w)
                p=y;

        }
        cout<<o*p<<endl;
    }
    return 0;
}
