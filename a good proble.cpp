#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n;
 cin>>n;
 unsigned int a[n];
 int f=0,ans=0,maxi=0;
 for(int k=0;k<n;k++)
 {
     cin>>a[k];
 }
 for(int i=0;i<n;i++)
 {
     for(int  j=0;j<n;j++)
     {
         if(a[i]&a[j]==a[i] || a[i]&a[j]==a[j])
            f=1;
         else
            f=0;
         sort(a+i,a+j);
         for(int l=i;l<=j;l++)
            cout<<a[l]<<endl;
         maxi=a[j-1];
         cout<<"stopped \n";
         ans=ans+(maxi*f);
         cout<<ans<<endl;
     }
 }
 return 0;
}
