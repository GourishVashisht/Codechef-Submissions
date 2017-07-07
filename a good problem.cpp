#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n,x=0;
 cin>>n;
 unsigned int a[n],b[n];
 int ans=0,maxi=0;
 for(int k=1;k<=n;k++)
     cin>>a[k];
 for(int i=1;i<=n;i++)
 {
     for(int  j=i+1;j<=n;j++)
     {
         for(int q=1;q<=n;q++)
         {
            b[q]=a[q];
         }
         x=a[i]&a[j];
         if(x==a[i] || x==a[j])
           {
            sort(b+i,b+j+1);
            maxi=b[j];
            ans=ans+maxi;
           }
     }
 }
 cout<<ans<<endl;
 return 0;
}
