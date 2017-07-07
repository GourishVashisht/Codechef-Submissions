#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t=0,p=0,q=0,r=0,s=0;
    float x,y,z=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>p>>q>>r>>s;
        x=p*s;
        y=(q*r)+(p*s)-(p*r);
        z=x/y;
        printf("%0.5f\n",z);
    }
    return 0;
}
