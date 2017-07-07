#include<iostream>
using namespace std;
int main()
{
    int t=0,a=0,b=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else if(a==b)
        {
            cout<<"="<<endl;
        }
        a=b=0;
    }
   return 0;
}
