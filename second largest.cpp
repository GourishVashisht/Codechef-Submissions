#include<iostream>
using namespace std;
int main()
{
    int t=0,a=0,b=0,c=0,max=0,min=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        max=(a>b?(a>c?a:c):(b>c?b:c));
        min=(a<b?(a<c?a:c):(b<c?b:c));
        if(a<max && a>min)
        {
            cout<<a<<endl;
        }
        else if(b<max && b>min)
        {
            cout<<b<<endl;
        }
        else if(c<max &&c>min)
        {
            cout<<c<<endl;
        }
        max=min=a=b=c=0;
    }
    return 0;
}
