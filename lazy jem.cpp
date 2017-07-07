#include<iostream>
using namespace std;
int main()
{
    long long t,n,b,x,m;
    long long time=0;
    cin>>t;
    while(t--)
    {
        n=b=x=time=0;
        cin>>n>>b>>m;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                time=time+(n*m)+b;
            }
            else
            {
                x=(n+1)/2;
                time=time+(x*m)+b;
                n=n-x;
            }
            m=2*m;
        }
        time=time+m;
        cout<<time<<endl;
    }
    return 0;

}
