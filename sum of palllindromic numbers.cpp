#include<iostream>
using namespace std;
int main()
{
 int t,l,r,rem,rev,sum=0,c,d;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
     cin>>l>>r;
     for(int j=l;j<=r;j++)
     {
         rem=rev=c=d=0;
         c=j;
         d=j;
         while(c>0)
         {
             rem=c%10;
             rev=(rev*10)+rem;
             c=c/10;
         }
         if(d==rev)
         {
             sum=sum+d;
         }
     }
    cout<<sum<<endl;
    sum=0;
 }
 return 0;
}
