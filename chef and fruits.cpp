#include<iostream>
using namespace std;
int main()
{
    int t,n,m,k,diff;
    cin>>t;
    while(t--)
    {
        n=m=k=diff=0;
        cin>>n>>m>>k;
        if(n==m)
            diff=0;
        else if(m>n)
        {
        for(int i=1;i<=k;i++)
        {
        n=n+1;
        if(n==m)
           {diff=0;
           break;}
        else
           diff=m-n;
        }
        }
        else if(n>m)
        {
        for(int j=1;j<=k;j++)
        {
        m=m+1;
        if(m==n)
            {diff=0;
            break;}
        else
            diff=n-m;
        }
        }
        cout<<diff<<endl;
    }
    return 0;
}
