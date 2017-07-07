#include<iostream>
using namespace std;
int main()
{
    int t=0,n=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(-20<=n<=20)
        {
            if(n<10)
            {
                cout<<"What an obedient servant you are!"<<endl;
            }
            else if(n>=10)
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
