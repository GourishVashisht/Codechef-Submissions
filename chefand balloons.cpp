#include<iostream>
using namespace std;
int main()
{
    int t,r,g,b,k,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        r=g=b=k=0;
        cin>>r>>g>>b;
        cin>>k;
        ans=((k-1)*3)+1;
        cout<<ans<<endl;
    }
    return 0;
}
