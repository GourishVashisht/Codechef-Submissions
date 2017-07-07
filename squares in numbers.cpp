#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    long long n;
    long long ans,x=1;
    cin>>t;
    while(t--)
    {
        ans=0;
        x=1;
        scanf("%lld",&n);
        long long arr[n];
        for(long long  i=0;i<n;i++)
         {
             scanf("%lld",&arr[i]);
             x=x*arr[i];
         }
         for(long long j=2;j<100000000000;j++)
         {
             if(x%(j*j)==0)
             {
                 ans=j;
                 break;
             }
         }
         printf("%lld \n",ans);
    }
    return 0;
}

