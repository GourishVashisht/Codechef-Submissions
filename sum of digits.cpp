#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,r,a=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
    cin>>a;
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    cout<<sum<<endl;
    sum=0;
 }
 return 0;
}
