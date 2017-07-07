#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag=0;
        cin>>n>>m;
        int u[m],v[m];
        for(int i=0;i<m;i++)
            cin>>u[i]>>v[i];
        if(n-(2*m)>=0)
        {
            int h=n-2*m;
            if(h%2==0)
                flag=1;
            else flag=0;
        }
        else flag=0;
        if(flag==1)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
