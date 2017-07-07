#include<iostream>
using namespace std;
int main()
{
    int t,n,m,c,x,y,counti;
    cin>>t;
    while(t--)
    {
        n=m=c=x=y=counti=0;
        cin>>n>>m>>c;
        for(int i=1;i<=c;i++)
        {
            if(c%i==0)
            {
                x=i;
                y=c/i;
                if(x<=n && y<=m)
                    counti++;
            }
        }
        cout<<counti<<endl;
    }
    return 0;
}
