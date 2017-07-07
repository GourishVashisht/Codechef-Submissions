#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while (n%2 == 0)
        {
           c++;
           n = n/2;
        }
        for (int i = 3;i<=sqrt(n);i=i+2)
        {
        while (n%i == 0)
        {
            c++;
            n = n/i;
        }
        }
        if (n > 2)
            c++;
    }
    for(int p=1;p<c;p++)
    {
        sum=
    }
    return 0;
}
