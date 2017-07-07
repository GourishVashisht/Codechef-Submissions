#include<iostream>
using namespace std;
int main()
{
    int t=0,s=0,a=0,b=0,c=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        s=a+b+c;
             if(s==180)
           {
              cout<<"YES\n";
           }
             else
           {
              cout<<"NO\n";
           }
            }
    return 0;
}

