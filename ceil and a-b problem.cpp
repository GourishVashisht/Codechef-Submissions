#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a-b;
    if(c%10==0)
    {
        c=c+1;
    }
    else if(c==1)
    {
        c=c+1;
    }
    else
    {
        c=c-1;
    }
    cout<<c;
    return 0;
}
