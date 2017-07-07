#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int t,i,cs1=0,cs2=0;
 cin>>t;
 string s1,s2;
 for(i=1;i<=t;i++)
 {
     cin>>s1;
     cin>>s2;
     for(i=0;s1[i]!='\0';i++)
     {
         cs1=cs1+s1[i];
     }
     for(i=0;s2[i]!='\0';i++)
     {
         cs2=cs2+s2[i];
     }
     if(cs1==cs2)
     {
         cout<<"yes";
     }
     else
     {
         cout<<"no";
     }
 }
 return 0;
}
