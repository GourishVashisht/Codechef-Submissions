#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9999],b[99999];
    int i,t=0,sum,n=0,maxi;
    int k=0;
    scanf("%d",&t);
    if(t>=1 && t<=10)
    {
    for(int x=1;x<=t;x++)
    {
        maxi=INT_MIN;
        scanf("%u %u",&n,&k);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&b[i]);
        }
     for(i=1;i<=n;i++)
     {
             sum=0;
             a[i]=a[i]+k;
         for(int j=1;j<=n;j++)
         {
           sum=(a[j]*b[j])+sum;
         }
         if(sum>maxi)
         {
             maxi=sum;
         }
         a[i]=a[i]-k;
     }
     for(i=1;i<=n;i++)
     {
             sum=0;
             a[i]=a[i]-k;
         for(int j=1;j<=n;j++)
         {
           sum=(a[j]*b[j])+sum;
         }
         if(sum>maxi)
         {
             maxi=sum;
         }
         a[i]=a[i]+k;
     }
     printf("%d",maxi);
     printf("\n");
    }
    }
    return 0;
}
