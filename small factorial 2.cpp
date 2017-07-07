#include<iostream>
void fact(int);
using namespace std;
int main()
{
    int t=0,n=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(0<=n<=20)
        {
           fact(n);
           n=0;
        }
    }
    return 0;
}
void fact(int a)
{
    int fact=1;
    for(int j=a;j>=1;j--)
    {
        fact=fact*j;
    }
    cout<<fact<<endl;
}

