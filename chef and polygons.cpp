#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,k=0,q=0,arrx[1000],arry[1000],arrk[1000];
    cin>>n>>m;
    for(int i=1,j=1;i<=n+m,j<=n+m;i++,j++)
    {
        cin>>arrx[i]>>arry[j];
    }
    cin>>q;
    for(int j=1;j<=q;j++)
    {
        cin>>k;
        for(int m=1;m<=k;m++)
        {
            cin>>arrk[m];
        }


    }
}
