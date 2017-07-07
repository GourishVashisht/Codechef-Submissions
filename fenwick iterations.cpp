#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
int main()
{
    long long t,n,dec,rem,k,d,ct,f,x,b;
    string s,l1,l2,l3;
    cin>>t;
    while(t--)
    {
        n=dec=rem=k=d=f=x=b=0;
        ct=0;
        s="";l1="";l2="";l3="";
        cin>>l1>>l2>>l3>>n;
        s=s+l1;
           for(int i=1;i<=n;i++)
                s=s+l2;
        //       cout<<s<<endl;
        s=s+l3;
       // cout<<l<<endl;
        long long v=stoull(s,0,2);
       // cout<<d<<endl;
        b=1;
       /* while (v!=0)
        {
           remain = v%10;
           v/= 10;
           dec+=rem*b;
           base=base*2;
        }*/
        //cout<<decimal<<endl;
        k=v;
        ct=1;
            f=(k & (k+1));
            x=f-1;
          //  cout<<f<<endl<<x<<endl;
        while(x>=0)
        {
            ct++;
            f=(x & (x+1));
            x=f-1;
            //cout<<x<<endl;
        }
       cout<<ct<<endl;
    }
    return 0;
}
