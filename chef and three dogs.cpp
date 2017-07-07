#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long int t,s;
    double v,time;
    cin>>t;
    while(t--)
    {
        s=0;
        v=time=0;
        cin>>s>>v;
        v=(v/2)+v;
        time=s/v;
        if(time<pow(10,-6))
            cout<<"0.0000001"<<endl;
        else
            printf("%0.6f",time);
        cout<<endl;
    }
    return 0;
}

