#include<iostream>
using namespace std;
int main()
{   int t=0,n=0,count=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n>0)
        {
        count=count+n/100;
        n=n%100;
        }
        if(n>0)
        {
        count=count+n/50;
        n=n%50;
        }
        if(n>0)
        {
        count=count+n/10;
        n=n%10;
        }
        if(n>0)
        {
        count=count+n/5;
        n=n%5;
        }
        if(n>0)
        {
        count=count+n/2;
        n=n%2;
        }
        if(n>0)
        {
        count=count+n/1;
        n=n%1;
        }
        cout<<count<<endl;
        count=0;
    }
return 0;
}
