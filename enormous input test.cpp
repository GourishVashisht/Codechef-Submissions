
#include<iostream>
using namespace std;
int main()
{
 long no=0;;
 int n=0,k=0,count=0;
 cin>>n;
 cin>>k;
 for(int i=1;i<=n;i++)
 {
     cin>>no;
     if(no%k==0)
     {
         count++;
     }
 }
 cout<<count;
 return 0;
}
