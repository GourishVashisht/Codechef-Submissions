#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t=0,price=0,quan=0;
    double expense=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>quan>>price;
        if(quan>1000)
        {
            expense=0.9*quan*price;
            printf("%f",expense);
            cout<<endl;
        }
        else
        {
         expense=quan*price;
         printf("%f",expense);
         cout<<endl;
        }
        expense=quan=price=0;
    }
    return 0;
}
