#include<iostream>
using namespace std;
int main()
{
    int n=0,num1=0,num2=0,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num1>>num2;
        sum=num1+num2;
        cout<<sum<<endl;
    }
    return 0;
}
