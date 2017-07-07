#include<iostream>
using namespace std;
int main()
{
    long int t,n,m,w=0;
    cin>>t;
    while(t--)
    {
        n=m=w=0;
        cin>>n>>m;
        if(n==1 && m==1)
          cout<<"No"<<endl;
        else
        {
            if(n%2!=0 && m%2!=0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
