#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int i=1;
   while(t--)
   {
       int n;
       cin>>n;
       if(n>10)
       {
       int d=0;
       int f=1,c=0;
       while(1)
       {
           d=d+f;
           c++;
           f=f+9;
           if(d>=n)
           {
               cout<<"Case #"<<i<<": "<<c;
               break;
           }
       }
       }
       i++;
       cout<<endl;
   }
}
