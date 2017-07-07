#include<iostream>
using namespace std;
int main()
{
int t=0,l,r,count=0,sum=0;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>l>>r;
    for(int n=l;n<=r;n++)
    {
    for(int j=2;j<n;j++)
    {
        if(n%j==0)
        {
        count++;
        break;
        }
    }
    if(count=0)
        {
            sum=sum+n;
        }
        count=0;
    }
    cout<<sum<<endl;
}
return 0;
}
