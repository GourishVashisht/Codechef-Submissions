#include<iostream>
using namespace std;
int main()
{
    int t,r1,r2,c1,c2,i,j,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>r1>>r2>>c1>>c2;
        int a[r2-r1][c2-c1];
        for(i=c1;i<=c2;i++)
            a[r1][i]=1;
        for(i=r1+1;i<=r2;i++)
            a[i][c1]=i;
        for(i=r1+1;i<=r2;i++)
        {
            for(j=c1+1;j<=c2;j++)
            {
                a[i][j]=a[i-1][j] xor a[i][j-1];
            }
        }
            for(int k=r1;k<=r2;k++)
            {
                for(int h=c1;h<=c2;h++)
                    sum=sum xor a[k][h];
            }
        cout<<sum<<endl;
    }
}
