#include<iostream>
using namespace std;
int main()
{
 int n=0,no=0,sum=0,last=0,first=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>no;
     last=no%10;
     while(no>=10)
     {
         first=no%10;
         no=no/10;
     }
     sum=last+no;
     cout<<sum<<endl;
     sum=0;
 }
}
