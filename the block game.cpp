#include<iostream>
using namespace std;
int main()
{
    int x=0,t=0,n=0,rev=0,remain=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        x=n;
        while(n>0)
        {
            remain=n%10;
            rev=(10*rev)+remain;
            n=n/10;
        }
        if(rev==x)
        {
            cout<<"wins"<<endl;
        }
        else{ cout<<"losses"<<endl;}
        rev=0;
    }
 return 0;
}
