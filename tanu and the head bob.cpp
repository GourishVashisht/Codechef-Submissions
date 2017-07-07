#include<iostream>
using namespace std;
int main()
{
    int t,n,counti=0,countn=0,county=0;
    char r;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(t>=1 && t<=1000)
        {
         if(n>=1 && n<=1000)
         {
        for(int j=1;j<=n;j++)
        {
            cin>>r;
        if(r=='I')
            {
                counti++;
            }
        else if(r=='Y' )
        {
            county++;
        }
        else if(r=='N')
        {
            countn++;
        }
        }
        if(counti>0)
        {
            cout<<"INDIAN\n";
        }
        else if(county>0)
        {
            cout<<"NOT INDIAN\n";
        }
        else if(countn>0)
        {
            cout<<"NOT SURE\n";
        }
        counti=countn=county=0;
    }
        }
    }
    return 0;
}
