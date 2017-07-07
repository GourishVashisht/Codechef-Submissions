#include<iostream>
using namespace std;
int main()
{
 int t=0,n=0,k=0;
 char arr[20][20];
 cin>>t;
 for(int i=1;i<=t;i++)
 {
     cin>>n>>k;
     for(int j=1;j<=n;j++)
     {
         for(int m=1;m<=n;m++)
         {
            cin>>arr[j][m];
         }

     }
 }
 return 0;
}
