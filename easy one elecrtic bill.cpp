#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float p=0;
    if(n<=50)
    {
        p=p+n*0.5;
    }
    else if(n<=150)
    {
        n=n-50;
        p=(50*0.5)+(n*0.75);
    }
    else if(n<=250)
    {
        n=n-150;
        p=(50*0.5)+(100*0.75)+(n*1.2);
    }
    else if(n>250)
    {
        n=n-250;
        p=(50*0.5)+(100*0.75)+(100*1.2)+(n*1.5);
    }
    p=p+(p*0.2);
    printf("%0.2f",p);
}
